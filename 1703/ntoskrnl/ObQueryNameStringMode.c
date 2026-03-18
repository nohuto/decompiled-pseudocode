/*
 * XREFs of ObQueryNameStringMode @ 0x1404FB3B0
 * Callers:
 *     ObQueryNameString @ 0x14044D030 (ObQueryNameString.c)
 *     SepQueryNameString @ 0x1404626BC (SepQueryNameString.c)
 *     sub_140463398 @ 0x140463398 (sub_140463398.c)
 *     PspInitializeFullProcessImageName @ 0x14049C5B4 (PspInitializeFullProcessImageName.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     IopQueryNameInternal @ 0x1404FBBC0 (IopQueryNameInternal.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 *     IopGraftName @ 0x14057C2B8 (IopGraftName.c)
 *     IopErrorLogThread @ 0x1405812A0 (IopErrorLogThread.c)
 *     PiControlGetDeviceStack @ 0x140595F34 (PiControlGetDeviceStack.c)
 *     PnpBuildCmResourceList @ 0x1405B1360 (PnpBuildCmResourceList.c)
 *     IoRegisterDeviceInterface @ 0x1405C2650 (IoRegisterDeviceInterface.c)
 *     IopGetRelatedFileName @ 0x140688E74 (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x140689A20 (IopRaiseHardError.c)
 *     AlpcpGetPortNameInformation @ 0x1406B20AC (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x1406B2B60 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406B2C70 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x1406C1730 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x140702128 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x140703880 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x14070C11C (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x14008BEA8 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r12d
  signed __int64 *v8; // rsi
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  unsigned int (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  unsigned __int64 CurrentSilo; // rax
  char *v14; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v16; // rbx
  unsigned int v17; // edx
  char *v18; // rcx
  struct _KTHREAD *v19; // rcx
  signed __int64 *v20; // rax
  char *v21; // rdx
  char *v22; // r12
  char *v23; // rcx
  size_t v24; // r8
  char *v25; // rcx
  struct _KTHREAD *v26; // rcx
  char *v27; // rbx
  __int64 v28; // r14
  struct _KTHREAD *v29; // rcx
  signed __int64 *v30; // r12
  char *v31; // rbx
  size_t v32; // r8
  char *v33; // rcx
  char *v34; // rcx
  char v35; // [rsp+40h] [rbp-A8h]
  char v36; // [rsp+41h] [rbp-A7h]
  unsigned int v37; // [rsp+44h] [rbp-A4h]
  unsigned int v38; // [rsp+48h] [rbp-A0h]
  char *v39; // [rsp+50h] [rbp-98h]
  char *v40; // [rsp+50h] [rbp-98h]
  char *Object; // [rsp+58h] [rbp-90h]
  unsigned int v42; // [rsp+60h] [rbp-88h]
  char *v43; // [rsp+68h] [rbp-80h]
  char *v44; // [rsp+68h] [rbp-80h]
  char *v45; // [rsp+68h] [rbp-80h]
  char *v46; // [rsp+78h] [rbp-70h]
  signed __int64 *v47; // [rsp+80h] [rbp-68h]
  char *v48; // [rsp+80h] [rbp-68h]
  char *v49; // [rsp+88h] [rbp-60h]
  unsigned __int16 v50; // [rsp+9Ch] [rbp-4Ch]

  v5 = a3;
  v35 = 1;
  v36 = 0;
  v42 = 0;
  Object = 0LL;
  v37 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v49 = v10;
  v11 = *(unsigned int (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9]
                                                                                                 + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    return v11(a1, v9, a2, a3, a4, a5);
  }
  CurrentSilo = PsGetCurrentSilo();
  v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
  v46 = v14;
  while ( v10 )
  {
    if ( a1 == v14 || a1 == ObpRootDirectoryObject )
    {
      v17 = 2;
LABEL_32:
      v42 = v17 + 18;
      *a4 = v17 + 18;
      if ( v5 < v17 + 18 )
      {
        v37 = -1073741820;
        v35 = 0;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
      v16 = *(char **)v49;
      v43 = *(char **)v49;
      if ( *(_QWORD *)v49 )
      {
        ObfReferenceObject(v16);
        Object = v16;
      }
      v38 = *((unsigned __int16 *)v49 + 4) + 2;
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegion();
      v17 = v38;
      v18 = v43;
      while ( v18 != v46 && v18 != ObpRootDirectoryObject && v18 && (*((_DWORD *)v18 + 84) & 0x20) == 0 )
      {
        v47 = (signed __int64 *)(v18 - 48);
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v47 + 2), 0LL);
        if ( (*((_BYTE *)v47 + 26) & 2) == 0
          || (v20 = (signed __int64 *)ObpInfoMaskToOffset[*((_BYTE *)v47 + 26) & 3],
              v21 = (char *)((char *)v47 - (char *)v20),
              v47 == v20)
          || !*(_QWORD *)v21 )
        {
          if ( _InterlockedCompareExchange64(v47 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v47 + 2);
          KeAbPostRelease((ULONG_PTR)(v47 + 2));
          KeLeaveCriticalRegion();
          v17 = v38 + 8;
          break;
        }
        v38 += 2 + *((unsigned __int16 *)v21 + 4);
        v44 = *(char **)v21;
        ObfReferenceObject(*(PVOID *)v21);
        if ( _InterlockedCompareExchange64(v47 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v47 + 2);
        KeAbPostRelease((ULONG_PTR)(v47 + 2));
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v18 = v44;
        Object = v44;
        v17 = v38;
        if ( v38 > 0xFFFF )
          goto LABEL_37;
      }
      if ( v17 <= 0xFFFF )
      {
        v5 = a3;
        goto LABEL_32;
      }
LABEL_37:
      v37 = -1073741562;
      v35 = 0;
      v5 = a3;
    }
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v35 )
      return v37;
    if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
    else
      v10 = 0LL;
    v49 = v10;
    if ( !v10 )
      goto LABEL_90;
    v22 = (char *)(a2 + 16);
    v23 = (char *)(a2 + v42 - 2);
    *(_WORD *)v23 = 0;
    if ( a1 == v46 || a1 == ObpRootDirectoryObject )
      goto LABEL_66;
    v24 = *((unsigned __int16 *)v10 + 4);
    v25 = &v23[-v24];
    v39 = v25;
    if ( v25 > v22 )
    {
      memmove(v25, *((const void **)v10 + 2), v24);
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
      v27 = *(char **)v10;
      v45 = v27;
      if ( v27 )
      {
        ObfReferenceObject(v27);
        Object = v27;
      }
      if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KeLeaveCriticalRegion();
      while ( 1 )
      {
        if ( v45 == v46 || v45 == ObpRootDirectoryObject || !v45 || (*((_DWORD *)v45 + 84) & 0x20) != 0 )
        {
          v23 = v39;
          v22 = (char *)(a2 + 16);
          goto LABEL_66;
        }
        v40 = v39 - 2;
        *(_WORD *)v40 = 92;
        v48 = v45 - 48;
        v28 = (*(v45 - 22) & 2) != 0 ? (__int64)&v45[-ObpInfoMaskToOffset[*(v45 - 22) & 3] - 48] : 0LL;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = (signed __int64 *)(v48 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v48 + 16), 0LL);
        if ( !v28 || !*(_QWORD *)v28 )
          break;
        ObfDereferenceObject(Object);
        v31 = *(char **)v28;
        v45 = *(char **)v28;
        ObfReferenceObject(*(PVOID *)v28);
        Object = v31;
        v32 = *(unsigned __int16 *)(v28 + 8);
        v33 = &v40[-v32];
        v39 = v33;
        if ( (unsigned __int64)v33 <= a2 + 16 )
        {
          v36 = 1;
          if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v30);
          KeAbPostRelease((ULONG_PTR)v30);
          KeLeaveCriticalRegion();
          goto LABEL_80;
        }
        memmove(v33, *(const void **)(v28 + 16), v32);
        if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v30);
        KeAbPostRelease((ULONG_PTR)v30);
        KeLeaveCriticalRegion();
      }
      if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v30);
      KeAbPostRelease((ULONG_PTR)v30);
      KeLeaveCriticalRegion();
      v23 = v40 - 6;
      v22 = (char *)(a2 + 16);
      if ( (unsigned __int64)(v40 - 6) < a2 + 16 )
        v23 = (char *)(a2 + 16);
      *(_DWORD *)v23 = *(_DWORD *)L"...";
      *((_WORD *)v23 + 2) = asc_1402B5DC0[2];
      if ( v23 == v22 )
        v23 += 2;
LABEL_66:
      v34 = v23 - 2;
      *(_WORD *)v34 = 92;
      v50 = a2 + v42 - (_WORD)v34;
      *(_WORD *)(a2 + 2) = v50;
      *(_WORD *)a2 = v50 - 2;
      *(_QWORD *)(a2 + 8) = v22;
      if ( v22 != v34 )
      {
        memmove(v22, v34, v50);
        *a4 = v50 + 16;
      }
      goto LABEL_80;
    }
    v36 = 1;
LABEL_80:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v36 )
      return 0;
    if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
      v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
    else
      v10 = 0LL;
    v49 = v10;
    v36 = 0;
    v5 = a3;
LABEL_90:
    v14 = v46;
  }
  *a4 = 16;
  if ( v5 >= 0x10 )
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    return 0;
  }
  return (unsigned int)-1073741820;
}
