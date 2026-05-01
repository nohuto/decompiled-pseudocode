/*
 * XREFs of ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x1800160C8
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x1800040D0 (-AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@Ex.c)
 *     ?AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180016920 (-AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAU.c)
 * Callees:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012BB0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x1800168B0 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtResourceSetThunk::AcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        struct ExecutionModel::IResourceSet *a11,
        bool *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  struct ExecutionModel::IResourceSetCallback *v13; // rdi
  unsigned __int64 v14; // rsi
  struct ExecutionModel::IResourceSetCallback *v19; // rax
  _QWORD *v20; // rbx
  struct ExecutionModel::ResourceSet *v21; // rax
  int v22; // esi
  unsigned int (__fastcall *v23)(RmpRpsResourceSetCallback *__hidden); // rax

  v13 = 0LL;
  v14 = -1LL;
  if ( !a3 )
    goto LABEL_5;
  v19 = (struct ExecutionModel::IResourceSetCallback *)operator new(0x18uLL);
  v13 = v19;
  if ( v19 )
  {
    *((_QWORD *)v19 + 1) = a3;
    *(_QWORD *)v19 = &RmpRpsResourceSetCallback::`vftable';
    *((_DWORD *)v19 + 4) = 1;
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    return (unsigned int)-2147024882;
  }
  else
  {
LABEL_5:
    v20 = operator new(0x20uLL);
    if ( v20 )
    {
      v20[1] = a1;
      *v20 = &RmpRpExtResourceSetThunk::`vftable';
      v20[2] = -1LL;
      *((_DWORD *)v20 + 6) = 1;
    }
    else
    {
      v20 = 0LL;
    }
    if ( v20 )
    {
      if ( a11 )
        v14 = *((_QWORD *)a11 + 2);
      v21 = (struct ExecutionModel::ResourceSet *)HamObjectIdGenerate(1LL);
      v20[2] = v21;
      v22 = RmSrvAcquireResourceSet(a1, a2, v13, a4, a5, a6, a7, a8, a9, a10, v14, v21, 0LL, a12);
      if ( v22 >= 0 )
      {
        *a13 = (struct ExecutionModel::IResourceSet *)v20;
        v20 = 0LL;
        v22 = 0;
      }
      if ( v20 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v20 + 120LL))(v20);
        (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      }
    }
    else
    {
      v22 = -2147024882;
    }
    if ( v13 )
    {
      v23 = *(unsigned int (__fastcall **)(RmpRpsResourceSetCallback *__hidden))(*(_QWORD *)v13 + 16LL);
      if ( v23 == RmpRpsResourceSetCallback::Release )
        RmpRpsResourceSetCallback::Release(v13);
      else
        v23(v13);
    }
  }
  return (unsigned int)v22;
}
