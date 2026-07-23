/*
 * XREFs of NtSetInformationKey @ 0x14056AC30
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
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
  NTSTATUS v15; // ebx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  _WORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // [rsp+40h] [rbp-158h]
  unsigned int v27; // [rsp+44h] [rbp-154h]
  PVOID v28; // [rsp+48h] [rbp-150h] BYREF
  int v29; // [rsp+50h] [rbp-148h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-140h]
  __int64 v31; // [rsp+68h] [rbp-130h]
  _SLIST_ENTRY v32; // [rsp+70h] [rbp-128h] BYREF
  __int64 v33; // [rsp+80h] [rbp-118h] BYREF
  PVOID v34; // [rsp+88h] [rbp-110h] BYREF
  PVOID v35; // [rsp+90h] [rbp-108h] BYREF
  PVOID v36; // [rsp+98h] [rbp-100h] BYREF
  PVOID v37; // [rsp+A0h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-F0h] BYREF
  PVOID v39; // [rsp+B0h] [rbp-E8h] BYREF
  PVOID v40[3]; // [rsp+B8h] [rbp-E0h] BYREF
  _QWORD v41[7]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD v42[7]; // [rsp+108h] [rbp-90h] BYREF
  __int64 v43[3]; // [rsp+140h] [rbp-58h] BYREF

  Handle = KeyHandle;
  v27 = 0;
  v26 = 0;
  v29 = 0;
  memset(v42, 0, sizeof(v42));
  memset(v43, 0, sizeof(v43));
  v31 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v43, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v21) = 20;
      CmpTraceRoutine(v21, v43, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v9 = 1;
  v10 = KeGetCurrentThread()->gap0[10];
  switch ( KeySetInformationClass )
  {
    case KeySetHandleTagsInformation:
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
        v27 = v12;
LABEL_13:
        if ( KeySetInformationClass == KeySetHandleTagsInformation )
        {
          v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v10, &Object, 0LL);
          v14 = Object;
        }
        else
        {
          v13 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)CmKeyObjectType, v10, &v39, 0LL);
          v14 = v39;
        }
        v28 = v14;
        v15 = v13;
        if ( v13 == -1073741790
          && CmpVEEnabled
          && !CmpIsSystemEntity(&v29)
          && (((KeySetInformationClass - 2) & 0xFFFFFFFA) != 0 || KeySetInformationClass == KeySetLayerInformation) )
        {
          v15 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v10, v40, 0LL);
          v14 = v40[0];
          v28 = v40[0];
          if ( v15 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v40[0]) )
          {
            ObfDereferenceObject(v14);
            v15 = -1073741790;
          }
          v26 = 1;
        }
        if ( v15 < 0 )
        {
          v19 = 0LL;
        }
        else
        {
          if ( CmpTraceRoutine && v14 )
            v31 = v14[1];
          v16 = v14[1];
          if ( (*(_DWORD *)(v16 + 4) & 0x80u) == 0 && (*(_DWORD *)(*(_QWORD *)(v16 + 24) + 144LL) & 0x100000) == 0
            || KeySetInformationClass == KeySetHandleTagsInformation )
          {
            *((_QWORD *)&v32.Next + 1) = &v32;
            v32.Next = &v32;
            v17 = KeGetCurrentThread();
            --v17->KernelApcDisable;
            if ( CmpCallBackCount )
            {
              v18 = v28;
              if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
              {
                v42[0] = v28;
                LODWORD(v42[1]) = KeySetInformationClass;
                v42[2] = KeySetInformation;
                LODWORD(v42[3]) = KeySetInformationLength;
                v15 = CmpCallCallBacksEx(3u, (__int64)v42, 0LL, 1, 0x12u, (__int64)v28, &v32);
              }
            }
            else
            {
              v18 = v28;
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
                v18[25] = v27;
              }
              else if ( KeySetInformationClass )
              {
                if ( (unsigned int)(KeySetInformationClass - 1) <= 3 )
                {
                  if ( v26 )
                  {
                    v15 = CmKeyBodyReplicateToVirtual(&v28, v10, 2LL, &v29);
                    v18 = v28;
                  }
                  if ( v15 >= 0 )
                  {
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                    v9 = 0;
                    v18 = v28;
                    v15 = CmSetKeyFlags(v28, (unsigned int)KeySetInformationClass, v27);
                  }
                }
              }
              else
              {
                if ( v26 )
                {
                  v15 = CmKeyBodyReplicateToVirtual(&v28, v10, 2LL, &v29);
                  v18 = v28;
                }
                if ( v15 >= 0 )
                {
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  v9 = 0;
                  v18 = v28;
                  v15 = CmSetLastWriteTimeKey(v28, &v33);
                }
              }
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && v32.Next != &v32 )
              {
                memset(&v41[1], 0, 0x30uLL);
                v41[0] = v18;
                LODWORD(v41[1]) = v15;
                LODWORD(v41[3]) = v15;
                v41[2] = v42;
                v40[1] = v41;
                v40[2] = 0LL;
                CmpCallCallBacksEx(0x12u, (__int64)v41, 0LL, 0, 0x12u, (__int64)v18, &v32);
                v15 = v41[3];
              }
            }
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v14 = v28;
          }
          else
          {
            v15 = -1073741790;
          }
          ObfDereferenceObject(v14);
          v19 = v31;
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
                 &v37,
                 0LL) >= 0 )
          {
            v19 = *((_QWORD *)v37 + 1);
            ObfDereferenceObject(v37);
            goto LABEL_70;
          }
        }
      }
      goto LABEL_69;
    case KeyWriteTimeInformation:
      if ( KeySetInformationLength == 8 )
      {
        if ( v10 == 1 )
        {
          v24 = (__int64)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= 0x7FFFFFFF0000LL )
            v24 = 0x7FFFFFFF0000LL;
          v25 = *(_QWORD *)v24;
        }
        else
        {
          v25 = *(_QWORD *)KeySetInformation;
        }
        v33 = v25;
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
                 &v36,
                 0LL) >= 0 )
          {
            v19 = *((_QWORD *)v36 + 1);
            ObfDereferenceObject(v36);
            goto LABEL_70;
          }
        }
      }
LABEL_69:
      v19 = 0LL;
      goto LABEL_70;
    case KeyWow64FlagsInformation:
      goto LABEL_6;
  }
  if ( (unsigned int)(KeySetInformationClass - 2) > 2 )
  {
    if ( CmpTraceRoutine
      && (v8 = Handle) != 0LL
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v35,
           0LL) >= 0 )
    {
      v19 = *((_QWORD *)v35 + 1);
      ObfDereferenceObject(v35);
    }
    else
    {
      v19 = 0LL;
    }
    v15 = -1073741821;
    goto LABEL_32;
  }
  if ( KeySetInformationLength == 4 )
  {
    if ( v10 == 1 )
    {
      v22 = (__int64)KeySetInformation;
      if ( (unsigned __int64)KeySetInformation >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v23 = *(_DWORD *)v22;
    }
    else
    {
      v23 = *(_DWORD *)KeySetInformation;
    }
    v27 = v23;
    goto LABEL_13;
  }
  if ( !CmpTraceRoutine )
    goto LABEL_69;
  v8 = Handle;
  if ( !Handle
    || ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v34,
         0LL) < 0 )
  {
    goto LABEL_69;
  }
  v19 = *((_QWORD *)v34 + 1);
  ObfDereferenceObject(v34);
LABEL_70:
  v15 = -1073741820;
LABEL_32:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 20;
    CmpTraceRoutine(v8, v43, (unsigned int)v15, 0LL, v19, 0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v15;
}
