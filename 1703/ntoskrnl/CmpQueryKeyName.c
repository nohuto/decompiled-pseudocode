/*
 * XREFs of CmpQueryKeyName @ 0x1404FC190
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // r12
  __int64 v8; // rcx
  _QWORD *p_UnicodeString; // rbx
  char v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r9d
  int v13; // edi
  unsigned __int64 v14; // r14
  int v15; // edi
  const void *v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r12d
  unsigned int v19; // esi
  PVOID P; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-90h]
  _QWORD v23[2]; // [rsp+60h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v25[8]; // [rsp+80h] [rbp-68h] BYREF

  v5 = a4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v25, 0, 0x38uLL);
  p_UnicodeString = 0LL;
  v10 = 0;
  v23[1] = v23;
  v23[0] = v23;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount
    || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    || (v25[0] = a1,
        v25[1] = a3,
        LODWORD(v25[2]) = v5,
        v25[3] = a5,
        LOBYTE(v12) = 1,
        v13 = CmpCallCallBacksEx(47, (unsigned int)v25, 0, v12, 48, a1, (__int64)v23),
        v13 >= 0) )
  {
    CmpLockRegistry(v8);
    v14 = *(_QWORD *)(a1 + 8);
    v22 = v14;
    if ( (v14 & 1) != 0 )
    {
      v14 ^= 1uLL;
      v22 = v14;
    }
    else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v14);
      v10 = 1;
    }
    v15 = *(_DWORD *)(a1 + 48);
    if ( (v15 & 9) != 0 )
    {
      CmpUnlockRegistry();
      v18 = -1073740763;
      if ( (v15 & 1) == 0 )
        v18 = -1073741444;
      goto LABEL_18;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v14 + 176) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v14, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      P = 0LL;
      CmpConstructNameWithStatus(v14, &P);
      p_UnicodeString = P;
    }
    if ( v10 )
    {
      CmpUnlockKcb((PVOID)v14);
      v10 = 0;
    }
    CmpUnlockRegistry();
    if ( p_UnicodeString )
    {
      if ( (unsigned int)v5 <= 0x10 )
      {
        *a5 = *(unsigned __int16 *)p_UnicodeString + 18;
        v18 = -1073741820;
      }
      else
      {
        v16 = (const void *)p_UnicodeString[1];
        v17 = *(unsigned __int16 *)p_UnicodeString + 2;
        *a5 = *(unsigned __int16 *)p_UnicodeString + 18;
        if ( v17 > (unsigned __int64)(v5 - 16) )
        {
          v17 = v5 - 16;
          v18 = -1073741820;
          if ( v17 < 2 )
            goto LABEL_18;
        }
        else
        {
          v18 = 0;
        }
        v19 = v17 - 2;
        memmove((void *)(a3 + 16), v16, v19);
        *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v19 >> 1)) = 0;
        *(_WORD *)a3 = v19;
        *(_WORD *)(a3 + 2) = v19;
        *(_QWORD *)(a3 + 8) = a3 + 16;
      }
    }
    else
    {
      v18 = -1073741670;
    }
LABEL_18:
    if ( v10 )
      CmpUnlockKcb((PVOID)v14);
    CmPostCallbackNotificationEx(48, a1, v18, (__int64)v25, 0LL, v23);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( UnicodeString.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
    }
    else if ( p_UnicodeString )
    {
      CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
    }
    return v18;
  }
  if ( v13 == -1073740541 )
    v13 = 0;
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v13;
}
