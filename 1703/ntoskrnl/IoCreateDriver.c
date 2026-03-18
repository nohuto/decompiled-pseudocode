/*
 * XREFs of IoCreateDriver @ 0x14059F550
 * Callers:
 *     ViIrpLogExposeWmiCallback @ 0x14077F450 (ViIrpLogExposeWmiCallback.c)
 *     VfFilterAttach @ 0x140780888 (VfFilterAttach.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     WMIInitialize @ 0x1407FBEA0 (WMIInitialize.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 *     PiSwInit @ 0x140825FEC (PiSwInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwMakeTemporaryObject @ 0x140180020 (ZwMakeTemporaryObject.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(PVOID, _QWORD))
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rdx
  unsigned __int64 v7; // rcx
  SIZE_T v8; // rdx
  _WORD *PoolWithTagPriority; // rax
  _WORD *v10; // rbx
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  _QWORD *v13; // rcx
  int inserted; // ebx
  HANDLE v15; // rsi
  NTSTATUS v16; // eax
  PVOID v17; // rdi
  PVOID PoolWithTag; // rax
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v21; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcchLength[2]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PVOID v24; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  void **v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  __int128 v29; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
  }
  else
  {
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"\\Driver\\%08u", MEMORY[0xFFFFF78000000320]);
    RtlStringCchLengthW(pszDest, 0x3CuLL, pcchLength);
    if ( pcchLength[0] > 0xFFFF )
      return 2147483653LL;
    LOWORD(Src[0]) = 2 * LOWORD(pcchLength[0]);
    WORD1(Src[0]) = 2 * LOWORD(pcchLength[0]) + 2;
    Src[1] = pszDest;
  }
  v27 = Src;
  v25 = 48;
  v26 = 0LL;
  v28 = 592;
  v29 = 0LL;
  result = ObCreateObjectEx(0, IoDriverObjectType, (int)&v25, 0, (__int64)Object, 416, 0, 0, &v21, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = v21;
    memset(v21, 0, 0x1A0uLL);
    v4[6] = v4 + 42;
    v4[42] = v4;
    *(_DWORD *)v4 = 22020100;
    *((_DWORD *)v4 + 4) = 4;
    memset64(v4 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v4[11] = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v7 = (unsigned __int64)i[6];
      if ( (unsigned __int64)a2 >= v7 && (unsigned __int64)a2 < v7 + *((unsigned int *)i + 16) )
      {
        *((_QWORD *)v21 + 3) = v7;
        break;
      }
    }
    ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = LOWORD(Src[0]) + 2LL;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v8,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v8, 0x20206F49u);
    pcchLength[1] = (size_t)PoolWithTagPriority;
    v10 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      v11 = LOWORD(Src[0]);
      LOWORD(pcchLength[0]) = Src[0];
      WORD1(pcchLength[0]) = LOWORD(Src[0]) + 2;
      memmove(PoolWithTagPriority, Src[1], LOWORD(Src[0]));
      v12 = *(_OWORD *)pcchLength;
      v13 = v21;
      v10[v11 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v12;
      inserted = ObInsertObjectEx(v13, 0LL, 1LL, 0, 0, 0LL, &Handle);
      if ( inserted >= 0 )
      {
        v15 = Handle;
        v16 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v24, 0LL);
        v17 = v24;
        inserted = v16;
        if ( v16 >= 0 )
        {
          ZwClose(v15);
          if ( ViVerifierDriverAddedThunkListHead )
            PoolWithTag = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            WORD1(Src[0]),
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          else
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WORD1(Src[0]), 0x20206F49u);
          *((_QWORD *)v17 + 8) = PoolWithTag;
          if ( PoolWithTag )
          {
            *((_DWORD *)v17 + 14) = Src[0];
            memmove(*((void **)v17 + 8), Src[1], WORD1(Src[0]));
          }
          inserted = a2(v17, 0LL);
          if ( inserted >= 0 )
            return (unsigned int)inserted;
          goto LABEL_30;
        }
        ZwMakeTemporaryObject(v15);
        ZwClose(v15);
      }
      return (unsigned int)inserted;
    }
    v17 = v21;
    inserted = -1073741670;
LABEL_30:
    ObMakeTemporaryObject(v17);
    ObfDereferenceObject(v17);
    return (unsigned int)inserted;
  }
  return result;
}
