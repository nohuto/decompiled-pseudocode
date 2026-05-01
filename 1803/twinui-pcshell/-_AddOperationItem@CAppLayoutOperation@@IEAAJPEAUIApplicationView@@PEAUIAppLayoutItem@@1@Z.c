/*
 * XREFs of ?_AddOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@PEAUIAppLayoutItem@@1@Z @ 0x180310124
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x180311258 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$FindEx@VCAppLayoutAnimationDataFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutAnimationDataFinderByView@@AEBV?$ComPtr@UIAppLayoutAnimationData@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18030F6D8 (--$FindEx@VCAppLayoutAnimationDataFinderByView@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLayoutAnima.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803163A8 (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddOperationItem(
        CAppLayoutOperation *this,
        struct IUnknown *a2,
        struct IAppLayoutItem *a3,
        struct IAppLayoutItem *a4)
{
  int v4; // r14d
  int v9; // r13d
  int v10; // r12d
  struct IUnknown *v11; // r8
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // esi
  struct IUnknown *v15; // rbx
  void *v16; // r8
  __int64 v17; // rdx
  struct IUnknown **v18; // rdx
  struct IUnknown *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknown *v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+C0h] [rbp-40h]
  _QWORD v31[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v32[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v33[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v34; // [rsp+108h] [rbp+8h]
  RECT rcSrc; // [rsp+110h] [rbp+10h] BYREF

  v4 = 0;
  memset(v33, 0, sizeof(v33));
  v34 = 3;
  v9 = 0;
  v30 = 3;
  v10 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v31[0] = 0LL;
  v31[1] = 0LL;
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  *(_QWORD *)&v25.left = 0LL;
  *(_QWORD *)&v25.right = 0LL;
  if ( a3 )
  {
    v9 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD *))(*(_QWORD *)a3 + 64LL))(a3, v33);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 56LL))(a3, 0LL, v32);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, _QWORD *))(*(_QWORD *)a3 + 56LL))(a3, 1LL, v31);
  }
  if ( a4 )
  {
    v10 = 1;
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64 *))(*(_QWORD *)a4 + 64LL))(a4, &v26);
    (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 0LL, &rcDst);
    (*(void (__fastcall **)(struct IAppLayoutItem *, __int64, struct tagRECT *))(*(_QWORD *)a4 + 56LL))(a4, 1LL, &v25);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &rcSrc);
    CopyRect(&rcDst, &rcSrc);
    CopyRect(&v25, &rcDst);
    LODWORD(v27) = 3;
  }
  v22 = 0LL;
  v20 = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v20);
  v12 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutAnimationData>>>::FindEx<CAppLayoutAnimationDataFinderByView>(
          (__int64 *)this + 11,
          &v20,
          v11,
          &v23);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( v12 >= 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v23);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  }
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v14 = CAppLayoutOperationItem::s_CreateInstance(a2, v33, &v26, v32, v31, &rcDst, &v25, v9, v10, v4);
  if ( v14 >= 0 )
  {
    v15 = v21;
    v20 = v21;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v20);
    v17 = *((_QWORD *)this + 16);
    v14 = 0;
    if ( v17 != *((_QWORD *)this + 18)
      || (v14 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 120,
                  v17 + 1,
                  v16),
          v14 >= 0) )
    {
      v18 = (struct IUnknown **)(*((_QWORD *)this + 15) + 8 * (*((_QWORD *)this + 16))++);
      if ( v18 )
      {
        *v18 = 0LL;
        if ( v18 != &v20 )
        {
          v20 = 0LL;
          *v18 = v15;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v14;
}
