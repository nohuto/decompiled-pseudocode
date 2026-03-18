/*
 * XREFs of NtReplaceKey @ 0x14065F7EC
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404D58A4 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 */

NTSTATUS __stdcall NtReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  struct _KTHREAD *v9; // rax
  void *v10; // r8
  _QWORD *v11; // rdi
  struct _KTHREAD *v12; // rax
  PVOID v13; // rsi
  unsigned int v14; // eax
  _SLIST_ENTRY v16; // [rsp+48h] [rbp-29h] BYREF
  UNICODE_STRING v17; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING v18; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v19[6]; // [rsp+78h] [rbp+7h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    v7 = CmCheckNoTxContext();
    if ( v7 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        v7 = -1073741727;
        goto LABEL_24;
      }
      v9 = KeGetCurrentThread();
      --v9->KernelApcDisable;
      v7 = CmpNameFromAttributes(ObjectAttributes, PreviousMode, &v17);
      if ( v7 >= 0 )
      {
        v7 = CmpNameFromAttributes(ReplacedObjectAttributes, PreviousMode, &v18);
        if ( v7 >= 0 )
        {
          v7 = CmObReferenceObjectByHandle(Key, 0, v10, PreviousMode, &Object, 0LL);
          if ( v7 >= 0 )
          {
            v11 = Object;
            if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
            {
              memset(v19, 0, sizeof(v19));
              *((_QWORD *)&v16.Next + 1) = &v16;
              v16.Next = &v16;
              v12 = KeGetCurrentThread();
              --v12->KernelApcDisable;
              v13 = Object;
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
              {
                v19[0] = v13;
                v19[1] = &v18;
                v19[2] = &v17;
                v7 = CmpCallCallBacksEx(0x2Du, (__int64)v19, 0LL, 1, 0x2Eu, 0LL, &v16);
              }
              if ( v7 < 0 )
              {
                if ( v7 == -1073740541 )
                  v7 = 0;
              }
              else
              {
                v14 = CmReplaceKey(*(_QWORD *)(v11[1] + 24LL));
                v7 = CmPostCallbackNotificationEx(46, (__int64)v13, v14, (__int64)v19, 0LL, &v16);
              }
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v11 = Object;
            }
            else
            {
              v7 = -1073741790;
            }
            ObfDereferenceObject(v11);
          }
          ExFreePoolWithTag(v18.Buffer, 0);
        }
        ExFreePoolWithTag(v17.Buffer, 0);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    goto LABEL_24;
  }
  v7 = -1073741431;
LABEL_24:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
