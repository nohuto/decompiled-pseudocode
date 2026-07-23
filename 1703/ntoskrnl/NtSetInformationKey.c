/*
 * XREFs of NtSetInformationKey @ 0x140521290
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v8; // rcx
  char v9; // r14
  unsigned __int8 v10; // r12
  __int64 v11; // rax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  _QWORD *v14; // rdi
  int v15; // ebx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  _WORD *v19; // rdi
  __int64 v20; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // [rsp+40h] [rbp-158h]
  unsigned int v28; // [rsp+44h] [rbp-154h]
  PVOID v29; // [rsp+48h] [rbp-150h] BYREF
  int v30; // [rsp+50h] [rbp-148h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-140h]
  __int64 v32; // [rsp+60h] [rbp-138h]
  _QWORD v33[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v34; // [rsp+80h] [rbp-118h] BYREF
  PVOID v35; // [rsp+88h] [rbp-110h] BYREF
  PVOID v36; // [rsp+90h] [rbp-108h] BYREF
  PVOID v37; // [rsp+98h] [rbp-100h] BYREF
  PVOID v38; // [rsp+A0h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-F0h] BYREF
  PVOID v40; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID v41[3]; // [rsp+B8h] [rbp-E0h] BYREF
  _QWORD v42[7]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD v43[7]; // [rsp+108h] [rbp-90h] BYREF
  LARGE_INTEGER v44[3]; // [rsp+140h] [rbp-58h] BYREF

  Handle = KeyHandle;
  v28 = 0;
  v27 = 0;
  v30 = 0;
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  v32 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v44, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v22) = 20;
      CmpTraceRoutine(v22, v44, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v9 = 1;
  v10 = KeGetCurrentThread()->gap0[10];
  switch ( KeySetInformationClass )
  {
    case KeySetHandleTagsInformation:
      goto LABEL_6;
    case KeyWriteTimeInformation:
      if ( KeySetInformationLength == 8 )
      {
        if ( v10 == 1 )
        {
          v25 = (__int64)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= 0x7FFFFFFF0000LL )
            v25 = 0x7FFFFFFF0000LL;
          v26 = *(_QWORD *)v25;
        }
        else
        {
          v26 = *(_QWORD *)KeySetInformation;
        }
        v34 = v26;
        goto LABEL_13;
      }
      if ( CmpTraceRoutine )
      {
        v8 = Handle;
        if ( Handle )
        {
          if ( ObReferenceObjectByHandle(
                 Handle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 &v37,
                 0LL) >= 0 )
          {
            v20 = *((_QWORD *)v37 + 1);
            ObfDereferenceObject(v37);
            goto LABEL_44;
          }
        }
      }
      break;
    case KeyWow64FlagsInformation:
LABEL_6:
      if ( KeySetInformationLength == 4 )
      {
        if ( v10 == 1 )
        {
          v11 = (__int64)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= 0x7FFFFFFF0000LL )
            v11 = 0x7FFFFFFF0000LL;
          v12 = *(_DWORD *)v11;
        }
        else
        {
          v12 = *(_DWORD *)KeySetInformation;
        }
        v28 = v12;
LABEL_13:
        if ( KeySetInformationClass == KeySetHandleTagsInformation )
        {
          v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v10, &Object, 0LL);
          v14 = Object;
        }
        else
        {
          v13 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)CmKeyObjectType, v10, &v40, 0LL);
          v14 = v40;
        }
        v29 = v14;
        v15 = v13;
        if ( v13 == -1073741790
          && CmpVEEnabled
          && !CmpIsSystemEntity(&v30)
          && (((KeySetInformationClass - 2) & 0xFFFFFFFA) != 0 || KeySetInformationClass == KeySetLayerInformation) )
        {
          v15 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v10, v41, 0LL);
          v14 = v41[0];
          v29 = v41[0];
          if ( v15 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v41[0]) )
          {
            ObfDereferenceObject(v14);
            v15 = -1073741790;
          }
          v27 = 1;
        }
        if ( v15 < 0 )
        {
          v20 = 0LL;
        }
        else
        {
          if ( CmpTraceRoutine && v14 )
            v32 = v14[1];
          v16 = v14[1];
          if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 && (*(_DWORD *)(*(_QWORD *)(v16 + 24) + 144LL) & 0x100000) == 0
            || KeySetInformationClass == KeySetHandleTagsInformation )
          {
            v33[1] = v33;
            v33[0] = v33;
            v17 = KeGetCurrentThread();
            --v17->KernelApcDisable;
            if ( CmpCallBackCount )
            {
              v19 = v29;
              if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
              {
                v43[0] = v29;
                LODWORD(v43[1]) = KeySetInformationClass;
                v43[2] = KeySetInformation;
                LODWORD(v43[3]) = KeySetInformationLength;
                LOBYTE(v18) = 1;
                v15 = CmpCallCallBacksEx(3, (unsigned int)v43, 0, v18, 18, (__int64)v29, (__int64)v33);
              }
            }
            else
            {
              v19 = v29;
            }
            if ( v15 < 0 )
            {
              if ( v15 == -1073740541 )
                v15 = 0;
            }
            else
            {
              if ( KeySetInformationClass == KeySetHandleTagsInformation )
              {
                v19[25] = v28;
              }
              else if ( KeySetInformationClass )
              {
                if ( (unsigned int)(KeySetInformationClass - 1) <= 3 )
                {
                  if ( v27 )
                  {
                    v15 = CmKeyBodyReplicateToVirtual(&v29, v10, 2LL, &v30);
                    v19 = v29;
                  }
                  if ( v15 >= 0 )
                  {
                    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v9 = 0;
                    v19 = v29;
                    v15 = CmSetKeyFlags(v29, (unsigned int)KeySetInformationClass, v28);
                  }
                }
              }
              else
              {
                if ( v27 )
                {
                  v15 = CmKeyBodyReplicateToVirtual(&v29, v10, 2LL, &v30);
                  v19 = v29;
                }
                if ( v15 >= 0 )
                {
                  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v9 = 0;
                  v19 = v29;
                  v15 = CmSetLastWriteTimeKey(v29, &v34);
                }
              }
              if ( CmpCallBackCount
                && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
                && (_QWORD *)v33[0] != v33 )
              {
                memset(&v42[1], 0, 0x30uLL);
                v42[0] = v19;
                LODWORD(v42[1]) = v15;
                LODWORD(v42[3]) = v15;
                v42[2] = v43;
                v41[1] = v42;
                v41[2] = 0LL;
                CmpCallCallBacksEx(18, (unsigned int)v42, 0, 0, 18, (__int64)v19, (__int64)v33);
                v15 = v42[3];
              }
            }
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v14 = v29;
          }
          else
          {
            v15 = -1073741790;
          }
          ObfDereferenceObject(v14);
          v20 = v32;
        }
        goto LABEL_32;
      }
      if ( CmpTraceRoutine )
      {
        v8 = Handle;
        if ( Handle )
        {
          if ( ObReferenceObjectByHandle(
                 Handle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 &v38,
                 0LL) >= 0 )
          {
            v20 = *((_QWORD *)v38 + 1);
            ObfDereferenceObject(v38);
            goto LABEL_44;
          }
        }
      }
      break;
    default:
      if ( (unsigned int)(KeySetInformationClass - 2) > 2 )
      {
        if ( CmpTraceRoutine
          && (v8 = Handle) != 0LL
          && ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v36,
               0LL) >= 0 )
        {
          v20 = *((_QWORD *)v36 + 1);
          ObfDereferenceObject(v36);
        }
        else
        {
          v20 = 0LL;
        }
        v15 = -1073741821;
        goto LABEL_32;
      }
      if ( KeySetInformationLength == 4 )
      {
        if ( v10 == 1 )
        {
          v23 = (__int64)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= 0x7FFFFFFF0000LL )
            v23 = 0x7FFFFFFF0000LL;
          v24 = *(_DWORD *)v23;
        }
        else
        {
          v24 = *(_DWORD *)KeySetInformation;
        }
        v28 = v24;
        goto LABEL_13;
      }
      if ( CmpTraceRoutine )
      {
        v8 = Handle;
        if ( Handle )
        {
          if ( ObReferenceObjectByHandle(
                 Handle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 &v35,
                 0LL) >= 0 )
          {
            v20 = *((_QWORD *)v35 + 1);
            ObfDereferenceObject(v35);
            goto LABEL_44;
          }
        }
      }
      break;
  }
  v20 = 0LL;
LABEL_44:
  v15 = -1073741820;
LABEL_32:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 20;
    CmpTraceRoutine(v8, v44, (unsigned int)v15, 0LL, v20, 0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v15;
}
