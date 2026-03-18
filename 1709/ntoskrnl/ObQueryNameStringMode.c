/*
 * XREFs of ObQueryNameStringMode @ 0x14048F170
 * Callers:
 *     PiControlGetDeviceStack @ 0x14044DE98 (PiControlGetDeviceStack.c)
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     NtQueryObject @ 0x14048EB10 (NtQueryObject.c)
 *     IopQueryNameInternal @ 0x14048F970 (IopQueryNameInternal.c)
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 *     CmpQueryNameString @ 0x14050A728 (CmpQueryNameString.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     PnpBuildCmResourceList @ 0x140558FE8 (PnpBuildCmResourceList.c)
 *     sub_14055FB34 @ 0x14055FB34 (sub_14055FB34.c)
 *     SepQueryNameString @ 0x140564610 (SepQueryNameString.c)
 *     PspInitializeFullProcessImageName @ 0x14057B454 (PspInitializeFullProcessImageName.c)
 *     IoRegisterDeviceInterface @ 0x140590360 (IoRegisterDeviceInterface.c)
 *     ObQueryNameString @ 0x1405907A0 (ObQueryNameString.c)
 *     IopErrorLogThread @ 0x140594B30 (IopErrorLogThread.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x1406B4E5C (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x1406B5720 (IopRaiseHardError.c)
 *     AlpcpGetPortNameInformation @ 0x1406DE1A8 (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x1406DE914 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406DEA24 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x1406F01B4 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x14073A424 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14073BB84 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x140747764 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x14074D630 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1400234E8 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  __int64 v5; // r14
  signed __int64 *v7; // rsi
  unsigned __int64 v8; // rdx
  char *v9; // rbx
  unsigned int (__fastcall *v10)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  unsigned __int64 CurrentSilo; // rax
  char *v12; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v14; // rbx
  unsigned int v15; // edx
  char *v16; // rcx
  struct _KTHREAD *v17; // rax
  char *v18; // rbx
  signed __int64 *v19; // r14
  char *v20; // rbx
  char *v21; // rbx
  char *v22; // r13
  char *v23; // rcx
  size_t v24; // r8
  char *v25; // rcx
  struct _KTHREAD *v26; // rax
  char *v27; // rbx
  __int64 v28; // r14
  struct _KTHREAD *v29; // rax
  signed __int64 *v30; // r13
  char *v31; // rbx
  size_t v32; // r8
  char *v33; // rcx
  char *v34; // rcx
  char v36; // [rsp+40h] [rbp-A8h]
  char v37; // [rsp+41h] [rbp-A7h]
  unsigned int v38; // [rsp+44h] [rbp-A4h]
  unsigned int v39; // [rsp+48h] [rbp-A0h]
  char *v40; // [rsp+50h] [rbp-98h]
  char *v41; // [rsp+50h] [rbp-98h]
  char *Object; // [rsp+58h] [rbp-90h]
  unsigned int v43; // [rsp+60h] [rbp-88h]
  char *v44; // [rsp+68h] [rbp-80h]
  char *v45; // [rsp+68h] [rbp-80h]
  char *v46; // [rsp+68h] [rbp-80h]
  unsigned __int64 v47; // [rsp+70h] [rbp-78h]
  char *v48; // [rsp+78h] [rbp-70h]
  char *v49; // [rsp+80h] [rbp-68h]
  unsigned __int16 v50; // [rsp+A4h] [rbp-44h]

  v5 = a2;
  v36 = 1;
  v37 = 0;
  v43 = 0;
  Object = 0LL;
  v38 = -1073741823;
  v7 = (signed __int64 *)(a1 - 48);
  v8 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v9 = (char *)v7 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v9 = 0LL;
  v48 = v9;
  v10 = *(unsigned int (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v8]
                                                                                                 + 160);
  if ( v10 )
  {
    if ( v9 && *((_WORD *)v9 + 4) )
      LOBYTE(v8) = 1;
    else
      v8 = 0LL;
    return v10(a1, v8, v5, a3, a4, a5);
  }
  else
  {
    CurrentSilo = PsGetCurrentSilo();
    v12 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
    while ( v9 )
    {
      if ( a1 == v12 || a1 == ObpRootDirectoryObject )
      {
        v15 = 2;
LABEL_26:
        v43 = v15 + 18;
        *a4 = v15 + 18;
        if ( a3 < v15 + 18 )
        {
          v38 = -1073741820;
          v36 = 0;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 2), 0LL);
        v14 = *(char **)v48;
        v44 = *(char **)v48;
        if ( *(_QWORD *)v48 )
        {
          ObfReferenceObject(v14);
          Object = v14;
        }
        v39 = *((unsigned __int16 *)v48 + 4) + 2;
        if ( _InterlockedCompareExchange64(v7 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v7 + 2);
        KeAbPostRelease((ULONG_PTR)(v7 + 2));
        KeLeaveCriticalRegion();
        v15 = v39;
        v16 = v44;
        while ( v16 != v12 && v16 != ObpRootDirectoryObject && v16 && (*((_DWORD *)v16 + 84) & 0x20) == 0 )
        {
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          v18 = v16 - 48;
          v19 = (signed __int64 *)(v16 - 32);
          ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
          if ( (v18[26] & 2) == 0 || (v20 = &v18[-ObpInfoMaskToOffset[v18[26] & 3]]) == 0LL || !*(_QWORD *)v20 )
          {
            if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v19);
            KeAbPostRelease((ULONG_PTR)v19);
            KeLeaveCriticalRegion();
            v15 = v39 + 8;
            break;
          }
          v39 += 2 + *((unsigned __int16 *)v20 + 4);
          v45 = *(char **)v20;
          ObfReferenceObject(*(PVOID *)v20);
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          v16 = v45;
          Object = v45;
          v15 = v39;
          if ( v39 > 0xFFFF )
            goto LABEL_31;
        }
        if ( v15 <= 0xFFFF )
        {
          v5 = a2;
          goto LABEL_26;
        }
LABEL_31:
        v38 = -1073741562;
        v36 = 0;
        v5 = a2;
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( !v36 )
        return v38;
      v21 = (*((_BYTE *)v7 + 26) & 2) != 0 ? (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3] : 0LL;
      if ( !v21 )
        break;
      v22 = (char *)(v5 + 16);
      v47 = v5 + 16;
      v23 = (char *)(v5 + v43 - 2);
      *(_WORD *)v23 = 0;
      if ( a1 == v12 || a1 == ObpRootDirectoryObject )
      {
LABEL_61:
        v34 = v23 - 2;
        *(_WORD *)v34 = 92;
        v50 = v5 + v43 - (_WORD)v34;
        *(_WORD *)(v5 + 2) = v50;
        *(_WORD *)v5 = v50 - 2;
        *(_QWORD *)(v5 + 8) = v22;
        if ( v22 != v34 )
        {
          memmove(v22, v34, v50);
          *a4 = v50 + 16;
        }
      }
      else
      {
        v24 = *((unsigned __int16 *)v21 + 4);
        v25 = &v23[-v24];
        v40 = v25;
        if ( v25 <= v22 )
        {
          v37 = 1;
        }
        else
        {
          memmove(v25, *((const void **)v21 + 2), v24);
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)(v7 + 2), 0LL);
          v27 = *(char **)v21;
          v46 = v27;
          if ( v27 )
          {
            ObfReferenceObject(v27);
            Object = v27;
          }
          if ( _InterlockedCompareExchange64(v7 + 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v7 + 2);
          KeAbPostRelease((ULONG_PTR)(v7 + 2));
          KeLeaveCriticalRegion();
          while ( 1 )
          {
            if ( v46 == v12 || v46 == ObpRootDirectoryObject || !v46 || (*((_DWORD *)v46 + 84) & 0x20) != 0 )
            {
              v23 = v40;
              v22 = (char *)v47;
LABEL_60:
              v5 = a2;
              goto LABEL_61;
            }
            v41 = v40 - 2;
            *(_WORD *)v41 = 92;
            v49 = v46 - 48;
            if ( (*(v46 - 22) & 2) != 0 )
              v28 = (__int64)&v46[-ObpInfoMaskToOffset[*(v46 - 22) & 3] - 48];
            else
              v28 = 0LL;
            v29 = KeGetCurrentThread();
            --v29->KernelApcDisable;
            v30 = (signed __int64 *)(v49 + 16);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v49 + 16), 0LL);
            if ( !v28 || !*(_QWORD *)v28 )
            {
              if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v30);
              KeAbPostRelease((ULONG_PTR)v30);
              KeLeaveCriticalRegion();
              v23 = v41 - 6;
              v22 = (char *)v47;
              if ( (unsigned __int64)(v41 - 6) < v47 )
                v23 = (char *)v47;
              *(_DWORD *)v23 = *(_DWORD *)L"...";
              *((_WORD *)v23 + 2) = asc_1405F8C10[2];
              if ( v23 == (char *)v47 )
                v23 += 2;
              goto LABEL_60;
            }
            ObfDereferenceObject(Object);
            v31 = *(char **)v28;
            v46 = *(char **)v28;
            ObfReferenceObject(*(PVOID *)v28);
            Object = v31;
            v32 = *(unsigned __int16 *)(v28 + 8);
            v33 = &v41[-v32];
            v40 = v33;
            if ( (unsigned __int64)v33 <= v47 )
              break;
            memmove(v33, *(const void **)(v28 + 16), v32);
            if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v30);
            KeAbPostRelease((ULONG_PTR)v30);
            KeLeaveCriticalRegion();
          }
          v37 = 1;
          if ( _InterlockedCompareExchange64(v30, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v30);
          KeAbPostRelease((ULONG_PTR)v30);
          KeLeaveCriticalRegion();
          v5 = a2;
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
      if ( !v37 )
        return 0;
      if ( (*((_BYTE *)v7 + 26) & 2) != 0 )
        v9 = (char *)v7 - ObpInfoMaskToOffset[*((_BYTE *)v7 + 26) & 3];
      else
        v9 = 0LL;
      v48 = v9;
      v37 = 0;
    }
    *a4 = 16;
    if ( a3 >= 0x10 )
    {
      *(_DWORD *)v5 = 0;
      *(_QWORD *)(v5 + 8) = 0LL;
      return 0;
    }
    return (unsigned int)-1073741820;
  }
}
