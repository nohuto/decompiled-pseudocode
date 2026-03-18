/*
 * XREFs of CmpDoQueryKeyName @ 0x1400AF1C0
 * Callers:
 *     CmpQueryKeyName @ 0x1404E3290 (CmpQueryKeyName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmPostCallbackNotification @ 0x1404E32B8 (CmPostCallbackNotification.c)
 *     CmpConstructName @ 0x1404E33CC (CmpConstructName.c)
 *     CmpLockKcbShared @ 0x1404E33F0 (CmpLockKcbShared.c)
 *     CmpCallCallBacks @ 0x1404E3414 (CmpCallCallBacks.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  UNICODE_STRING *p_UnicodeString; // r15
  char v9; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int v12; // ebx
  ULONG_PTR v13; // r14
  wchar_t *Buffer; // rdx
  unsigned int v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // r13d
  int v19; // ebx
  _QWORD v20[2]; // [rsp+40h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v22[7]; // [rsp+60h] [rbp-78h] BYREF
  int v23; // [rsp+E0h] [rbp+8h]

  v23 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v22, 0, sizeof(v22));
  p_UnicodeString = 0LL;
  v9 = 0;
  v20[1] = v20;
  v20[0] = v20;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
LABEL_5:
    CmpLockRegistry();
    v13 = *(_QWORD *)(v7 + 8);
    if ( (v13 & 1) != 0 )
    {
      v13 ^= 1uLL;
    }
    else if ( (*(_DWORD *)(v7 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v13);
      v9 = 1;
    }
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
    {
      v19 = *(_DWORD *)(v7 + 48);
      CmpUnlockRegistry();
      v16 = (v19 & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_19;
    }
    if ( CmpVEEnabled && (*(_DWORD *)(v13 + 176) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v13, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v13);
    }
    if ( v9 )
    {
      CmpUnlockKcb(v13);
      v9 = 0;
    }
    CmpUnlockRegistry();
    if ( !p_UnicodeString )
    {
      v16 = -1073741670;
      goto LABEL_19;
    }
    if ( (unsigned int)v5 <= 0x10 )
    {
      *a5 = p_UnicodeString->Length + 18;
      v16 = -1073741820;
      goto LABEL_19;
    }
    Buffer = p_UnicodeString->Buffer;
    v15 = p_UnicodeString->Length + 2;
    *a5 = p_UnicodeString->Length + 18;
    if ( v15 > (unsigned __int64)(v5 - 16) )
    {
      v15 = v5 - 16;
      v16 = -1073741820;
      if ( v15 < 2 )
      {
        LODWORD(v7) = v23;
        goto LABEL_19;
      }
    }
    else
    {
      v16 = 0;
    }
    v17 = v15 - 2;
    memmove((void *)(v6 + 16), Buffer, v17);
    *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
    *(_WORD *)a3 = v17;
    *(_WORD *)(a3 + 2) = v17;
    *(_QWORD *)(a3 + 8) = a3 + 16;
    LODWORD(v7) = v23;
LABEL_19:
    if ( v9 )
      CmpUnlockKcb(v13);
    CmPostCallbackNotification(48, v7, v16, (unsigned int)v22, (__int64)v20);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( UnicodeString.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
    }
    else if ( p_UnicodeString )
    {
      ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
    }
    return v16;
  }
  v22[0] = v7;
  v22[1] = v6;
  LODWORD(v22[2]) = v5;
  v22[3] = a5;
  v12 = CmpCallCallBacks(47, (unsigned int)v22, v11, 48, v7, (__int64)v20);
  if ( v12 >= 0 )
  {
    v6 = a3;
    goto LABEL_5;
  }
  if ( v12 == -1073740541 )
    v12 = 0;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
