/*
 * XREFs of ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x1802D4780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801139C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMul_ea_1801139C0.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180113CD4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitas.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8_____lambda_a506e902e7170e918a173785fdf388b8___ @ 0x1802D463C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a506e902e7170.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802D492C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PositionAdjustmentHistory::AddPositionAdjustment(__int64 a1, CWinRTApplicationView *a2)
{
  __int64 *v4; // r14
  unsigned int v5; // edi
  volatile int *v6; // rdx
  void *v7; // r8
  CWinRTApplicationView *TickCount64; // r15
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  DWORD v14; // r15d
  void **v15; // rax
  void *v16; // rbx
  __int64 v17; // rcx
  DWORD CurrentThreadId; // eax
  ULONGLONG v19; // rax
  __int64 v20; // r15
  unsigned int v21; // ebx
  ULONGLONG v22; // r13
  __int64 v23; // r14
  CWinRTApplicationView *v25[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]
  __int64 v27; // [rsp+90h] [rbp+48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+50h] BYREF
  void *v29; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+60h] BYREF

  v25[0] = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v25);
  v4 = (__int64 *)(a1 + 24);
  v5 = 0;
  TickCount64 = (CWinRTApplicationView *)GetTickCount64();
  v25[1] = TickCount64;
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 == *(_QWORD *)(a1 + 48)
    && (v10 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                a1 + 24,
                v9 + 1,
                v7),
        v9 = *(_QWORD *)(a1 + 32),
        v10 < 0) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      43LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = *v4;
    v12 = v9 + 1;
    *(_QWORD *)(a1 + 32) = v12;
    v13 = (__int64 *)(16 * v12 + v11 - 16);
    if ( v13 )
    {
      *v13 = (__int64)a2;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef(v13);
      v13[1] = (__int64)TickCount64;
    }
  }
  v30 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture>::InternalAddRef(
      a1,
      v6);
  v28 = a1;
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewGestureHandler,ITouchpadGesture>::AddRef(a1);
  v14 = *(_DWORD *)(a1 + 56);
  v15 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a506e902e7170e918a173785fdf388b8_____lambda_a506e902e7170e918a173785fdf388b8___(
                   &v27,
                   &v28);
  v16 = *v15;
  *v15 = 0LL;
  v17 = v27;
  v29 = v16;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  CurrentThreadId = GetCurrentThreadId();
  Windows::Internal::ComTaskPool::RunTask(
    2u,
    0,
    CurrentThreadId,
    v14,
    (struct Windows::Internal::IComPoolTask *)v16,
    0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v28);
  v19 = GetTickCount64();
  v20 = *v4;
  v21 = 0;
  v22 = v19;
  v23 = *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32);
  if ( v20 != v23 )
  {
    do
    {
      if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, *(struct IUnknown **)v20) )
      {
        if ( v22 - *(_QWORD *)(v20 + 8) < *(unsigned int *)(a1 + 56) && ++v21 >= 4 )
          break;
      }
      v20 += 16LL;
    }
    while ( v20 != v23 );
    if ( v21 >= 3 )
      v5 = 2 - (v21 < 4);
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v25);
  return v5;
}
