/*
 * XREFs of ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1802A9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x1802A8A94 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--PositionChangedInfo_CSimpleArrayStandardCompare.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardCompareHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@V?$CSimpleArrayStandardMergeHelper@UPositionChangedInfo@ItemAnimationCoordinatorBase@@@@@@QEAAJ_K0@Z @ 0x1802A9F64 (-_EnsureCapacity@-$CTSimpleArray@UPositionChangedInfo@ItemAnimationCoordinatorBase@@$0PPPPPPPO@V.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::PositionChanged(
        __int64 *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _OWORD *a4,
        _BYTE *a5)
{
  __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  bool v14; // bl
  _QWORD *v15; // rdi
  __int64 v16; // r15
  __int128 v17; // xmm6
  __int64 v18; // rdx
  __int128 v19; // xmm7
  int v20; // r12d
  __int64 v21; // rdx
  _BYTE v22[8]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v23; // [rsp+40h] [rbp-79h] BYREF
  int v24; // [rsp+48h] [rbp-71h] BYREF
  __int128 v25; // [rsp+58h] [rbp-61h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  int v27; // [rsp+70h] [rbp-49h]
  __int128 v28; // [rsp+74h] [rbp-45h]
  __int128 v29; // [rsp+84h] [rbp-35h]
  __int128 v30; // [rsp+98h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+57h]

  v24 = a2;
  *a5 = 1;
  if ( !*((_BYTE *)a1 + 232) )
    return 0LL;
  v9 = *a1;
  v22[0] = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _BYTE *))(v9 + 112))(a1, a2, v22) )
    return 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v10 = (**a3)(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 77LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v12);
    goto LABEL_9;
  }
  memset_0(&v26, 0, 0x2CuLL);
  *(_QWORD *)&v25 = &v24;
  *((_QWORD *)&v25 + 1) = &v23;
  v30 = v25;
  v14 = (int)CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
               a1 + 19,
               (__int64)&v30,
               (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)&v26,
               &v25) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v15 = a1 + 19;
  if ( v14 )
  {
    *(_OWORD *)(*v15 + 48 * v25 + 28) = *a4;
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 88LL))(v23, &v30);
    v16 = v23;
    v26 = v23;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v26);
    v17 = v30;
    v18 = v15[1];
    v11 = 0;
    v19 = *a4;
    v20 = v24;
    v28 = v30;
    v27 = v24;
    v29 = v19;
    if ( v18 != v15[3]
      || (v11 = CTSimpleArray<ItemAnimationCoordinatorBase::PositionChangedInfo,4294967294,CTPolicyCoTaskMem<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardCompareHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>,CSimpleArrayStandardMergeHelper<ItemAnimationCoordinatorBase::PositionChangedInfo>>::_EnsureCapacity(
                  v15,
                  v18 + 1),
          v11 >= 0) )
    {
      ++v15[1];
      v21 = 48LL * v15[1] + *v15 - 48LL;
      if ( v21 )
      {
        *(_QWORD *)v21 = 0LL;
        if ( (__int64 *)v21 != &v26 )
        {
          v26 = 0LL;
          *(_QWORD *)v21 = v16;
        }
        *(_DWORD *)(v21 + 8) = v20;
        *(_OWORD *)(v21 + 12) = v17;
        *(_OWORD *)(v21 + 28) = v19;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 91LL;
      goto LABEL_18;
    }
  }
  v11 = 0;
  *a5 = v22[0];
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return (unsigned int)v11;
}
