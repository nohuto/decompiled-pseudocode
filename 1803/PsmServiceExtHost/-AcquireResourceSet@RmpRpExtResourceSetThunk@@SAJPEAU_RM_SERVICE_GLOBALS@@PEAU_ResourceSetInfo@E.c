/*
 * XREFs of ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x18004D478
 * Callers:
 *     ?AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18004D400 (-AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAU.c)
 *     ?AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18004D630 (-AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@Ex.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtResourceSetThunk::AcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        SID *a6,
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
  int v20; // esi
  _QWORD *v21; // rbx
  unsigned __int64 v22; // rax

  v13 = 0LL;
  v14 = -1LL;
  if ( !a3 )
    goto LABEL_7;
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
  if ( v13 )
  {
LABEL_7:
    v21 = operator new(0x20uLL);
    if ( v21 )
    {
      v21[1] = a1;
      *v21 = &RmpRpExtResourceSetThunk::`vftable';
      v21[2] = -1LL;
      *((_DWORD *)v21 + 6) = 1;
    }
    else
    {
      v21 = 0LL;
    }
    if ( v21 )
    {
      if ( a11 )
        v14 = *((_QWORD *)a11 + 2);
      v22 = HamObjectIdGenerate(1);
      v21[2] = v22;
      v20 = RmSrvAcquireResourceSet(a1, a2, v13, a4, a5, a6, a7, a8, a9, a10, v14, v22, 0LL, a12);
      if ( v20 >= 0 )
      {
        *a13 = (struct ExecutionModel::IResourceSet *)v21;
        v21 = 0LL;
        v20 = 0;
      }
      if ( v21 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v21 + 120LL))(v21);
        (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      }
    }
    else
    {
      v20 = -2147024882;
    }
    if ( v13 )
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v20;
}
