/*
 * XREFs of ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x18005DC88
 * Callers:
 *     ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x1800499F0 (-GetZbid@CImmersiveApp@@UEAA-AW4ZBID@@XZ.c)
 * Callees:
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z @ 0x180016F00 (-GetFrameWindow@CApplicationFrameWrapper@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(__int64 a1)
{
  CFrameApplicationPresentation *v1; // rcx
  __int64 (__fastcall *v2)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  __int64 (__fastcall *v4)(CApplicationFrameWrapper *, HWND *); // rax
  int v5; // eax
  unsigned int v6; // ebx
  struct IApplicationFrameProxy *v7; // rcx
  unsigned int v9; // [rsp+40h] [rbp+10h] BYREF
  struct IApplicationFrameProxy *v10; // [rsp+48h] [rbp+18h] BYREF
  HWND v11; // [rsp+50h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0LL;
  v1 = *(CFrameApplicationPresentation **)(a1 + 136);
  v2 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v1 + 128LL);
  if ( v2 == CFrameApplicationPresentation::GetFrame )
    Frame = CFrameApplicationPresentation::GetFrame(v1, &v10);
  else
    Frame = v2(v1, &v10);
  if ( Frame >= 0 )
  {
    v4 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, HWND *))(*(_QWORD *)v10 + 24LL);
    v5 = v4 == CApplicationFrameWrapper::GetFrameWindow
       ? CApplicationFrameWrapper::GetFrameWindow(v10, &v11)
       : v4(v10, &v11);
    if ( v5 >= 0 )
      GetWindowBand(v11, &v9);
  }
  v6 = v9;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
