/*
 * XREFs of _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___::Run @ 0x18008B910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_378c660b1cef11ab9222d9a9f7813f6b___--Run.c)
 * Callees:
 *     ?GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180016A30 (-GetTitleBar@CApplicationFrameWrapper@@UEAAJPEAPEAUIApplicationFrameTitleBar@@@Z.c)
 *     ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x180026260 (-GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z.c)
 *     ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z @ 0x180026280 (-GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z.c)
 *     ?GetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_BUTTONS@@0@Z @ 0x1800262A0 (-GetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ?GetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z @ 0x1800262C0 (-GetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SYSTEM_MENU.c)
 *     ?GetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_DRAG_OPTIONS@@@Z @ 0x1800262E0 (-GetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_DRAG_OPTIONS@@@Z.c)
 *     ?GetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z @ 0x180026300 (-GetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SUPPRESSIBLE_BUT.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9d63f641584ad32e324d3d55f9a00553_::operator()(ApplicationViewTitlebarConfiguration **a1)
{
  CApplicationFrameWrapper *v2; // rcx
  __int64 (__fastcall *v3)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **); // rax
  __int64 result; // rax
  ApplicationViewTitlebarConfiguration *v5; // rcx
  __int64 (__fastcall *v6)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SHOW_OPTIONS *, enum TITLE_BAR_SHOW_OPTIONS *); // rax
  int ShowOptions; // eax
  ApplicationViewTitlebarConfiguration *v8; // rcx
  __int64 (__fastcall *v9)(ApplicationViewTitlebarConfiguration *, int *); // rax
  int Visibility; // eax
  ApplicationViewTitlebarConfiguration *v11; // rcx
  __int64 (__fastcall *v12)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_BUTTONS *, enum TITLE_BAR_BUTTONS *); // rax
  int VisibleButtons; // eax
  ApplicationViewTitlebarConfiguration *v14; // rcx
  __int64 (__fastcall *v15)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SYSTEM_MENU_ITEMS *); // rax
  int EnabledSystemMenuItems; // eax
  ApplicationViewTitlebarConfiguration *v17; // rcx
  __int64 (__fastcall *v18)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_DRAG_OPTIONS *); // rax
  int DragOptions; // eax
  ApplicationViewTitlebarConfiguration *v20; // rcx
  __int64 (__fastcall *v21)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *, enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *); // rax
  struct IApplicationFrameTitleBar *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned int v27; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-24h] BYREF
  struct IApplicationFrameTitleBar *v29[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v31; // [rsp+78h] [rbp+20h] BYREF
  int v32; // [rsp+80h] [rbp+28h] BYREF
  unsigned int v33; // [rsp+88h] [rbp+30h] BYREF

  v29[1] = (struct IApplicationFrameTitleBar *)-2LL;
  v29[0] = 0LL;
  v2 = (CApplicationFrameWrapper *)*((_QWORD *)a1[1] + 15);
  v3 = *(__int64 (__fastcall **)(CApplicationFrameWrapper *, struct IApplicationFrameTitleBar **))(*(_QWORD *)v2 + 144LL);
  if ( v3 == CApplicationFrameWrapper::GetTitleBar )
    result = CApplicationFrameWrapper::GetTitleBar(v2, v29);
  else
    result = v3(v2, v29);
  if ( (int)result >= 0 )
  {
    v5 = *a1;
    v6 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SHOW_OPTIONS *, enum TITLE_BAR_SHOW_OPTIONS *))(*(_QWORD *)*a1 + 48LL);
    if ( v6 == ApplicationViewTitlebarConfiguration::GetShowOptions )
      ShowOptions = ApplicationViewTitlebarConfiguration::GetShowOptions(
                      v5,
                      (enum TITLE_BAR_SHOW_OPTIONS *)&v31,
                      (enum TITLE_BAR_SHOW_OPTIONS *)&v30);
    else
      ShowOptions = v6(v5, (enum TITLE_BAR_SHOW_OPTIONS *)&v31, (enum TITLE_BAR_SHOW_OPTIONS *)&v30);
    if ( ShowOptions >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD, _QWORD))(*(_QWORD *)v29[0] + 64LL))(
        v29[0],
        v31,
        v30);
    if ( (*(int (__fastcall **)(ApplicationViewTitlebarConfiguration *, unsigned int *))(*(_QWORD *)*a1 + 112LL))(
           *a1,
           &v28) >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD))(*(_QWORD *)v29[0] + 136LL))(v29[0], v28);
    v8 = *a1;
    v9 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, int *))(*(_QWORD *)*a1 + 32LL);
    if ( v9 == ApplicationViewTitlebarConfiguration::GetVisibility )
      Visibility = ApplicationViewTitlebarConfiguration::GetVisibility(v8, &v32);
    else
      Visibility = v9(v8, &v32);
    if ( Visibility >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, bool))(*(_QWORD *)v29[0] + 32LL))(v29[0], v32 != 0);
    v11 = *a1;
    v12 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_BUTTONS *, enum TITLE_BAR_BUTTONS *))(*(_QWORD *)*a1 + 64LL);
    if ( v12 == ApplicationViewTitlebarConfiguration::GetVisibleButtons )
      VisibleButtons = ApplicationViewTitlebarConfiguration::GetVisibleButtons(
                         v11,
                         (enum TITLE_BAR_BUTTONS *)&v23,
                         (enum TITLE_BAR_BUTTONS *)&v33);
    else
      VisibleButtons = v12(v11, (enum TITLE_BAR_BUTTONS *)&v23, (enum TITLE_BAR_BUTTONS *)&v33);
    if ( VisibleButtons >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD, _QWORD))(*(_QWORD *)v29[0] + 104LL))(
        v29[0],
        v23,
        v33);
    v14 = *a1;
    v15 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SYSTEM_MENU_ITEMS *))(*(_QWORD *)*a1 + 80LL);
    if ( v15 == ApplicationViewTitlebarConfiguration::GetEnabledSystemMenuItems )
      EnabledSystemMenuItems = ApplicationViewTitlebarConfiguration::GetEnabledSystemMenuItems(
                                 v14,
                                 (enum TITLE_BAR_SYSTEM_MENU_ITEMS *)&v24);
    else
      EnabledSystemMenuItems = v15(v14, (enum TITLE_BAR_SYSTEM_MENU_ITEMS *)&v24);
    if ( EnabledSystemMenuItems >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD))(*(_QWORD *)v29[0] + 72LL))(v29[0], v24);
    v17 = *a1;
    v18 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_DRAG_OPTIONS *))(*(_QWORD *)*a1 + 96LL);
    if ( v18 == ApplicationViewTitlebarConfiguration::GetDragOptions )
      DragOptions = ApplicationViewTitlebarConfiguration::GetDragOptions(v17, (enum TITLE_BAR_DRAG_OPTIONS *)&v25);
    else
      DragOptions = v18(v17, (enum TITLE_BAR_DRAG_OPTIONS *)&v25);
    if ( DragOptions >= 0 )
      (*(void (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD))(*(_QWORD *)v29[0] + 120LL))(v29[0], v25);
    v20 = *a1;
    v21 = *(__int64 (__fastcall **)(ApplicationViewTitlebarConfiguration *, enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *, enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *))(*(_QWORD *)*a1 + 128LL);
    if ( v21 == ApplicationViewTitlebarConfiguration::GetSuppressedButtons )
      result = ApplicationViewTitlebarConfiguration::GetSuppressedButtons(
                 v20,
                 (enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *)&v27,
                 (enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *)&v26);
    else
      result = v21(v20, (enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *)&v27, (enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *)&v26);
    if ( (int)result >= 0 )
      result = (*(__int64 (__fastcall **)(struct IApplicationFrameTitleBar *, _QWORD, _QWORD))(*(_QWORD *)v29[0] + 152LL))(
                 v29[0],
                 v27,
                 v26);
  }
  v22 = v29[0];
  if ( v29[0] )
  {
    v29[0] = 0LL;
    return (*(__int64 (__fastcall **)(struct IApplicationFrameTitleBar *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return result;
}
