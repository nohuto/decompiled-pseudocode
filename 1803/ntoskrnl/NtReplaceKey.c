/*
 * XREFs of NtReplaceKey @ 0x1406EC954
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14049E868 (CmpNameFromAttributes.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
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
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  int v18; // eax
  unsigned int v19; // eax
  NTSTATUS v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  _SLIST_ENTRY v23; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v24; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v25; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[6]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  NTSTATUS *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v30; // [rsp+E0h] [rbp-20h] BYREF

  Object = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)&v25.Length = 0LL;
  v25.Buffer = 0LL;
  *(_QWORD *)&v24.Length = 0LL;
  v24.Buffer = 0LL;
  memset(v26, 0, sizeof(v26));
  *((_QWORD *)&v23.Next + 1) = &v23;
  v23.Next = &v23;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
        v10 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v25, v11);
        if ( v10 >= 0 )
        {
          v10 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v24, v13);
          if ( v10 >= 0 )
          {
            v15 = CmObReferenceObjectByHandle(Key, 0, v14, PreviousMode, &Object, 0LL);
            v17 = Object;
            v10 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                  || (v26[0] = v17,
                      v26[1] = &v24,
                      v26[2] = &v25,
                      v18 = CmpCallCallBacksEx(0x2Du, (__int64)v26, 0LL, 1, 0x2Eu, 0LL, &v23),
                      v10 = v18,
                      v18 >= 0) )
                {
                  v19 = CmReplaceKey(*(_QWORD *)(v17[1] + 24LL), v16, &v25, &v24);
                  v10 = CmPostCallbackNotificationEx(46, (__int64)v17, v19, (__int64)v26, 0LL, &v23);
                  if ( v10 == -1073740541 )
                    v10 = 0;
                }
                else if ( v18 == -1073740541 )
                {
                  v10 = 0;
                }
              }
              else
              {
                v10 = -1073741790;
              }
            }
            if ( v17 )
              ObfDereferenceObject(v17);
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
  if ( v24.Buffer )
    ExFreePoolWithTag(v24.Buffer, 0);
  if ( v25.Buffer )
    ExFreePoolWithTag(v25.Buffer, 0);
  if ( v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v10 >= 0 )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
      TlgWrite(&stru_140397090, &unk_140307FE7, 0LL, 0LL, 2u, &v30);
  }
  else if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
  {
    v21 = v10;
    v28 = &v21;
    v29 = 4LL;
    TlgWrite(&stru_140397090, &unk_14030800D, 0LL, 0LL, 3u, &pData);
  }
  return v10;
}
