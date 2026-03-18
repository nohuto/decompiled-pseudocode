/*
 * XREFs of NtReplaceKey @ 0x14068866C
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpNameFromAttributes @ 0x1404E3564 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404E3874 (CmCheckNoTxContext.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  char v6; // si
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // r13
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  struct _KTHREAD *v12; // rax
  __int64 v13; // r9
  void *v14; // r8
  int v15; // eax
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // eax
  NTSTATUS v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _SLIST_ENTRY v22; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v23; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v24; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[6]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  NTSTATUS *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v29; // [rsp+E0h] [rbp-20h] BYREF

  Object = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  memset(v25, 0, sizeof(v25));
  *((_QWORD *)&v22.Next + 1) = &v22;
  v22.Next = &v22;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v9 )
  {
    v10 = CmCheckNoTxContext();
    if ( v10 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        v6 = 1;
        v10 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v24, v11);
        if ( v10 >= 0 )
        {
          v10 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v23, v13);
          if ( v10 >= 0 )
          {
            v15 = CmObReferenceObjectByHandle(Key, 0, v14, PreviousMode, &Object, 0LL);
            v16 = Object;
            v10 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                  || (v25[0] = v16,
                      v25[1] = &v23,
                      v25[2] = &v24,
                      v17 = CmpCallCallBacksEx(0x2Du, (__int64)v25, 0LL, 1, 0x2Eu, 0LL, &v22),
                      v10 = v17,
                      v17 >= 0) )
                {
                  v18 = CmReplaceKey(*(_QWORD *)(v16[1] + 24LL));
                  v10 = CmPostCallbackNotificationEx(0x2Eu, (__int64)v16, v18, (__int64)v25, 0LL, &v22);
                  if ( v10 == -1073740541 )
                    v10 = 0;
                }
                else if ( v17 == -1073740541 )
                {
                  v10 = 0;
                }
              }
              else
              {
                v10 = -1073741790;
              }
            }
            if ( v16 )
              ObfDereferenceObject(v16);
          }
        }
      }
      else
      {
        v10 = -1073741727;
      }
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = -1073741431;
  }
  if ( v23.Buffer )
    ExFreePoolWithTag(v23.Buffer, 0);
  if ( v24.Buffer )
    ExFreePoolWithTag(v24.Buffer, 0);
  if ( v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
      TlgWrite(&stru_1403549F0, &unk_1402CE6CF, 0LL, 0LL, 2u, &v29);
  }
  else if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
  {
    v20 = v10;
    v27 = &v20;
    v28 = 4LL;
    TlgWrite(&stru_1403549F0, &unk_1402CE6F5, 0LL, 0LL, 3u, &pData);
  }
  return v10;
}
