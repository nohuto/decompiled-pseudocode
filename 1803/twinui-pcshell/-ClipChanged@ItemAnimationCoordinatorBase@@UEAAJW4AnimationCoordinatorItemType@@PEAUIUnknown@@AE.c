/*
 * XREFs of ?ClipChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x1802A94A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x1801CFF2C (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ClipChanged(
        _BYTE *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int128 *a4,
        _BYTE *a5)
{
  _BYTE *v5; // r14
  int v10; // eax
  void *v11; // r8
  int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int128 v16; // xmm6
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a5;
  *a5 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 120LL))(a1) || !a1[232] )
    return 0LL;
  a5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  v10 = (**a3)(a3, &GUID_c9465035_5fb8_4b34_818f_fcfe7bd7b95c, (__int64 *)&a5);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v15 = (__int64)a5;
    *(_QWORD *)v20 = a5;
    if ( a5 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a5 + 8LL))(a5);
    v16 = *a4;
    v17 = a1 + 184;
    v12 = 0;
    v21 = *a4;
    v18 = v17[1];
    if ( v18 != v17[3]
      || (v12 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
                  (__int64)v17,
                  v18 + 1,
                  v11),
          v12 >= 0) )
    {
      ++v17[1];
      v19 = *v17 + 8 * (3LL * v17[1] - 3);
      if ( v19 )
      {
        *(_QWORD *)v19 = 0LL;
        if ( (int *)v19 != v20 )
        {
          *(_QWORD *)v20 = 0LL;
          *(_QWORD *)v19 = v15;
        }
        *(_OWORD *)(v19 + 8) = v16;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
    if ( v12 >= 0 )
    {
      *v5 = 0;
      v12 = 0;
      goto LABEL_18;
    }
    v13 = (unsigned int)v12;
    v14 = 106LL;
  }
  else
  {
    v13 = (unsigned int)v10;
    v14 = 105LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
    (const char *)v13);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)v12;
}
