/*
 * XREFs of ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800C6524
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800C3200 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C4124 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C46B0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1800C83A8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::SetZBand(__int64 a1, int a2)
{
  char v4; // r8
  _QWORD *ViewWrapper; // rax
  bool v6; // bl
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp+20h] BYREF
  int v24; // [rsp+58h] [rbp+28h]
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0;
  v24 = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 168) != a2 )
  {
    ViewWrapper = (_QWORD *)CortanaDesktopExperienceView::GetViewWrapper(a1, &v23);
    v4 = 1;
    if ( *ViewWrapper )
      v6 = 1;
  }
  if ( (v4 & 1) != 0 )
  {
    v7 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
    }
  }
  if ( !v6 )
    return 0LL;
  *(_DWORD *)(a1 + 168) = a2;
  v25 = 0LL;
  v23 = 0LL;
  v8 = *(_QWORD *)(a1 + 144);
  if ( !v8 )
  {
    v10 = -2147023728;
    goto LABEL_23;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v8 + 56LL))(
         v8,
         &v23);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 2615LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
    v12 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
    }
LABEL_23:
    if ( v10 < 0 )
      goto LABEL_24;
    goto LABEL_25;
  }
  v13 = v23;
  if ( v23 )
  {
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v23;
    }
    v9 = (**v13)(v13, &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f, &v25);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
LABEL_25:
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 40LL))(v25, *(unsigned int *)(a1 + 168));
      v10 = v18;
      if ( v18 < 0 )
      {
        v16 = (unsigned int)v18;
        v17 = 1776LL;
        goto LABEL_27;
      }
      v21 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      return 0LL;
    }
    v11 = 2617LL;
    goto LABEL_12;
  }
  v10 = -2147023728;
LABEL_24:
  v16 = (unsigned int)v10;
  v17 = 1775LL;
LABEL_27:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)v16);
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v10;
}
