/*
 * XREFs of CmpDoQueryKeyName @ 0x1400080A0
 * Callers:
 *     CmpQueryKeyName @ 0x1404A80B0 (CmpQueryKeyName.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpCallCallBacks @ 0x1404A70E4 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x1404A7118 (CmPostCallbackNotification.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpLockKcbShared @ 0x1404A7228 (CmpLockKcbShared.c)
 *     CmpConstructName @ 0x1404A724C (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1404A80D8 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  ULONG_PTR v8; // r14
  UNICODE_STRING *p_UnicodeString; // rsi
  char v10; // r15
  char v11; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v13; // r8d
  int v14; // eax
  int v15; // edi
  __int64 v16; // rdx
  void *v17; // r9
  wchar_t *Buffer; // r10
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  _WORD *v21; // rax
  char v23; // [rsp+31h] [rbp-107h]
  _WORD *v25; // [rsp+38h] [rbp-100h]
  _QWORD v26[2]; // [rsp+58h] [rbp-E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-D0h] BYREF
  _WORD *v28; // [rsp+78h] [rbp-C0h]
  __int64 v29; // [rsp+80h] [rbp-B8h]
  _QWORD v30[7]; // [rsp+88h] [rbp-B0h] BYREF
  _BYTE v31[48]; // [rsp+C0h] [rbp-78h] BYREF

  v28 = a3;
  v29 = a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v30, 0, sizeof(v30));
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v23 = 0;
  v11 = 0;
  memset(v31, 0, sizeof(v31));
  v26[1] = v26;
  v26[0] = v26;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v30[0] = a1;
    v30[1] = a3;
    LODWORD(v30[2]) = a4;
    v30[3] = a5;
    v14 = CmpCallCallBacks(47, (unsigned int)v30, v13, 48, a1, (__int64)v26);
    v15 = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073740541 )
        goto LABEL_18;
      goto LABEL_19;
    }
    v23 = 1;
  }
  CmpAttachToRegistryProcess(v31);
  v11 = 1;
  CmpLockRegistry();
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 1) != 0 )
  {
    v8 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(a1 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v8);
    v10 = 1;
  }
  v15 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v15 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v8 + 176) & 0x1000000) != 0 )
    {
      if ( (int)CmVirtualKCBToRealPath(v8, &UnicodeString) >= 0 )
        p_UnicodeString = &UnicodeString;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v8);
    }
    if ( p_UnicodeString )
    {
      if ( v10 )
      {
        CmpUnlockKcb(v8);
        v10 = 0;
      }
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(v31);
      v11 = 0;
      v16 = a4;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v15 = -1073741820;
      }
      else
      {
        v17 = a3 + 8;
        v25 = a3 + 8;
        Buffer = p_UnicodeString->Buffer;
        v19 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v19 <= (unsigned __int64)(v16 - 16) || (v19 = v16 - 16, v15 = -1073741820, (unsigned int)(v16 - 16) >= 2) )
        {
          v20 = v19 - 2;
          memmove(v17, Buffer, v20);
          v25[(unsigned __int64)v20 >> 1] = 0;
          v21 = v28;
          *v28 = v20;
          v21[1] = v20;
          *((_QWORD *)v21 + 1) = v25;
LABEL_18:
          v15 = 0;
        }
      }
    }
    else
    {
      v15 = -1073741670;
    }
  }
LABEL_19:
  if ( v10 )
    CmpUnlockKcb(v8);
  if ( v11 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v31);
  }
  if ( v23 )
    CmPostCallbackNotification(48, a1, v15, (unsigned int)v30, (__int64)v26);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  return (unsigned int)v15;
}
