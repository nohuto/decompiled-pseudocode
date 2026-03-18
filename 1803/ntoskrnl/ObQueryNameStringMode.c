/*
 * XREFs of ObQueryNameStringMode @ 0x1404A78E0
 * Callers:
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     IopGraftName @ 0x1404E10E4 (IopGraftName.c)
 *     PspInitializeFullProcessImageName @ 0x1404EA924 (PspInitializeFullProcessImageName.c)
 *     IoGetDeviceProperty @ 0x140525CB0 (IoGetDeviceProperty.c)
 *     SepQueryNameString @ 0x14053FE24 (SepQueryNameString.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     ObQueryNameString @ 0x1405747E0 (ObQueryNameString.c)
 *     MmQueryVirtualMemory @ 0x1405B5C20 (MmQueryVirtualMemory.c)
 *     sub_1405E366C @ 0x1405E366C (sub_1405E366C.c)
 *     IoRegisterDeviceInterface @ 0x1405F5A00 (IoRegisterDeviceInterface.c)
 *     IopErrorLogThread @ 0x1406000E0 (IopErrorLogThread.c)
 *     PnpBuildCmResourceList @ 0x140616220 (PnpBuildCmResourceList.c)
 *     IopGetRelatedFileName @ 0x140719B0C (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x14071A3D0 (IopRaiseHardError.c)
 *     PiControlGetDeviceStack @ 0x14073AA54 (PiControlGetDeviceStack.c)
 *     AlpcpGetPortNameInformation @ 0x140748CDC (AlpcpGetPortNameInformation.c)
 *     MmGetFileNameForAddress @ 0x140749798 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1407498A8 (MmGetFileNameForSection.c)
 *     ObGetObjectInformation @ 0x14075956C (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x14079D428 (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14079EB88 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1407A8E90 (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407AEEA0 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140007D3C (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // r15d
  __int64 v6; // r12
  signed __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  unsigned int (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  unsigned __int64 CurrentSilo; // rax
  char *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v16; // rbx
  unsigned int v17; // edx
  char *v18; // rcx
  struct _KTHREAD *v19; // rax
  char *v20; // rbx
  signed __int64 *v21; // r15
  char *v22; // rbx
  _WORD *v23; // r13
  _WORD *v24; // rcx
  size_t v25; // r8
  char *v26; // rcx
  struct _KTHREAD *v27; // rax
  char *v28; // rbx
  __int64 v29; // r15
  struct _KTHREAD *v30; // rax
  signed __int64 *v31; // r13
  char *v32; // rbx
  size_t v33; // r8
  _WORD *v34; // r12
  int v35; // ebx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  char v38; // [rsp+40h] [rbp-A8h]
  char v39; // [rsp+41h] [rbp-A7h]
  unsigned int v40; // [rsp+44h] [rbp-A4h]
  unsigned int v41; // [rsp+48h] [rbp-A0h]
  char *Object; // [rsp+50h] [rbp-98h]
  unsigned int v43; // [rsp+58h] [rbp-90h]
  _WORD *v44; // [rsp+60h] [rbp-88h]
  char *v45; // [rsp+68h] [rbp-80h]
  char *v46; // [rsp+68h] [rbp-80h]
  char *v47; // [rsp+68h] [rbp-80h]
  char *v48; // [rsp+70h] [rbp-78h]
  unsigned __int64 v49; // [rsp+78h] [rbp-70h]
  char *v50; // [rsp+80h] [rbp-68h]
  char *v51; // [rsp+88h] [rbp-60h]

  v5 = a3;
  v6 = a2;
  v38 = 1;
  v39 = 0;
  v43 = 0;
  Object = 0LL;
  v40 = -1073741823;
  v8 = (signed __int64 *)(a1 - 48);
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  if ( (*(a1 - 22) & 2) != 0 )
    v10 = (char *)v8 - ObpInfoMaskToOffset[*(a1 - 22) & 3];
  else
    v10 = 0LL;
  v50 = v10;
  v11 = *(unsigned int (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9]
                                                                                                 + 160);
  if ( v11 )
  {
    if ( v10 && *((_WORD *)v10 + 4) )
      LOBYTE(v9) = 1;
    else
      v9 = 0LL;
    return v11(a1, v9, v6, a3, a4, a5);
  }
  else
  {
    CurrentSilo = PsGetCurrentSilo();
    v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(CurrentSilo);
    v48 = v14;
    while ( v10 )
    {
      if ( a1 == v14 || a1 == ObpRootDirectoryObject )
      {
        v17 = 2;
LABEL_32:
        v43 = v17 + 18;
        *a4 = v17 + 18;
        if ( v5 < v17 + 18 )
        {
          v40 = -1073741820;
          v38 = 0;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
        v16 = *(char **)v50;
        v45 = *(char **)v50;
        if ( *(_QWORD *)v50 )
        {
          ObfReferenceObject(v16);
          Object = v16;
        }
        v41 = *((unsigned __int16 *)v50 + 4) + 2;
        if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v8 + 2);
        KeAbPostRelease((ULONG_PTR)(v8 + 2));
        KeLeaveCriticalRegion();
        v17 = v41;
        v18 = v45;
        while ( v18 != v48 && v18 != ObpRootDirectoryObject && v18 && (*((_DWORD *)v18 + 84) & 0x20) == 0 )
        {
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          v20 = v18 - 48;
          v21 = (signed __int64 *)(v18 - 32);
          ExAcquirePushLockSharedEx((ULONG_PTR)v21, 0LL);
          if ( (v20[26] & 2) == 0 || (v22 = &v20[-ObpInfoMaskToOffset[v20[26] & 3]]) == 0LL || !*(_QWORD *)v22 )
          {
            if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v21);
            KeAbPostRelease((ULONG_PTR)v21);
            KeLeaveCriticalRegion();
            v17 = v41 + 8;
            break;
          }
          v41 += 2 + *((unsigned __int16 *)v22 + 4);
          v46 = *(char **)v22;
          ObfReferenceObject(*(PVOID *)v22);
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(Object);
          v18 = v46;
          Object = v46;
          v17 = v41;
          if ( v41 > 0xFFFF )
            goto LABEL_37;
        }
        if ( v17 <= 0xFFFF )
        {
          v6 = a2;
          v5 = a3;
          goto LABEL_32;
        }
LABEL_37:
        v40 = -1073741562;
        v38 = 0;
        v6 = a2;
        v5 = a3;
      }
      if ( Object )
      {
        ObfDereferenceObject(Object);
        Object = 0LL;
      }
      if ( !v38 )
        return v40;
      if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
        v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
      else
        v10 = 0LL;
      v50 = v10;
      if ( v10 )
      {
        v23 = (_WORD *)(v6 + 16);
        v49 = v6 + 16;
        v24 = (_WORD *)(v6 + v43 - 2LL);
        *v24 = 0;
        if ( a1 == v48 || a1 == ObpRootDirectoryObject )
        {
LABEL_67:
          *(v24 - 1) = 92;
          v35 = (unsigned __int16)(v6 + v43 - ((_WORD)v24 - 2));
          *(_WORD *)(v6 + 2) = v35;
          *(_WORD *)v6 = v6 + v43 - (_WORD)v24;
          *(_QWORD *)(v6 + 8) = v23;
          if ( v23 != v24 - 1 )
          {
            memmove(v23, v24 - 1, (unsigned __int16)(v6 + v43 - ((_WORD)v24 - 2)));
            *a4 = v35 + 16;
          }
        }
        else
        {
          v25 = *((unsigned __int16 *)v10 + 4);
          v26 = (char *)v24 - v25;
          v44 = v26;
          if ( v26 <= (char *)v23 )
          {
            v39 = 1;
          }
          else
          {
            memmove(v26, *((const void **)v10 + 2), v25);
            v27 = KeGetCurrentThread();
            --v27->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 2), 0LL);
            v28 = *(char **)v10;
            v47 = v28;
            if ( v28 )
            {
              ObfReferenceObject(v28);
              Object = v28;
            }
            if ( _InterlockedCompareExchange64(v8 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v8 + 2);
            KeAbPostRelease((ULONG_PTR)(v8 + 2));
            KeLeaveCriticalRegion();
            while ( 1 )
            {
              if ( v47 == v48 || v47 == ObpRootDirectoryObject || !v47 || (*((_DWORD *)v47 + 84) & 0x20) != 0 )
              {
                v24 = v44;
                v23 = (_WORD *)v49;
LABEL_66:
                v6 = a2;
                v5 = a3;
                goto LABEL_67;
              }
              *(v44 - 1) = 92;
              v51 = v47 - 48;
              if ( (*(v47 - 22) & 2) != 0 )
                v29 = (__int64)&v47[-ObpInfoMaskToOffset[*(v47 - 22) & 3] - 48];
              else
                v29 = 0LL;
              v30 = KeGetCurrentThread();
              --v30->KernelApcDisable;
              v31 = (signed __int64 *)(v51 + 16);
              ExAcquirePushLockSharedEx((ULONG_PTR)(v51 + 16), 0LL);
              if ( !v29 || !*(_QWORD *)v29 )
              {
                if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v31);
                KeAbPostRelease((ULONG_PTR)v31);
                KeLeaveCriticalRegion();
                v24 = v44 - 4;
                v36 = (unsigned __int64)(v44 - 4);
                v37 = (unsigned __int64)(v44 - 4);
                v23 = (_WORD *)v49;
                if ( (unsigned __int64)(v44 - 4) < v49 )
                {
                  v24 = (_WORD *)v49;
                  v36 = v49;
                  v37 = v49;
                }
                *(_DWORD *)v24 = *(_DWORD *)L"...";
                v24[2] = asc_14065BD30[2];
                if ( v36 == v49 )
                  v24 = (_WORD *)(v37 + 2);
                goto LABEL_66;
              }
              ObfDereferenceObject(Object);
              v32 = *(char **)v29;
              v47 = *(char **)v29;
              ObfReferenceObject(*(PVOID *)v29);
              Object = v32;
              v33 = *(unsigned __int16 *)(v29 + 8);
              v34 = (_WORD *)((char *)v44 - v33 - 2);
              v44 = v34;
              if ( (unsigned __int64)v34 <= v49 )
                break;
              memmove(v34, *(const void **)(v29 + 16), v33);
              if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v31);
              KeAbPostRelease((ULONG_PTR)v31);
              KeLeaveCriticalRegion();
            }
            v39 = 1;
            if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v31);
            KeAbPostRelease((ULONG_PTR)v31);
            KeLeaveCriticalRegion();
            v6 = a2;
            v5 = a3;
          }
        }
        if ( Object )
          ObfDereferenceObject(Object);
        if ( !v39 )
          return 0;
        if ( (*((_BYTE *)v8 + 26) & 2) != 0 )
          v10 = (char *)v8 - ObpInfoMaskToOffset[*((_BYTE *)v8 + 26) & 3];
        else
          v10 = 0LL;
        v50 = v10;
        v39 = 0;
      }
      v14 = v48;
    }
    *a4 = 16;
    if ( v5 >= 0x10 )
    {
      *(_DWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = 0LL;
      return 0;
    }
    return (unsigned int)-1073741820;
  }
}
