/*
 * XREFs of ?InitializeDComp@CStartSizingFrame@@AEAAJPEAUHWND__@@@Z @ 0x1800D0E6C
 * Callers:
 *     ?v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800D0220 (-v_WndProc@CStartSizingFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateBackgroundSurface@CStartSizingFrame@@AEAAJXZ @ 0x1800D11DC (-UpdateBackgroundSurface@CStartSizingFrame@@AEAAJXZ.c)
 *     ?UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z @ 0x1800D14B8 (-UpdateBackgroundTransform@CStartSizingFrame@@AEAAJAEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStartSizingFrame::InitializeDComp(CStartSizingFrame *this, HWND a2)
{
  ID3D11Device *v4; // rcx
  HRESULT Device3; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rbx
  _QWORD *v13; // r15
  __int64 v14; // rcx
  int updated; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  ID3D11Device *v24; // rcx
  _QWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+C0h] [rbp+50h] BYREF
  ID3D11Device *ppDevice; // [rsp+C8h] [rbp+58h] BYREF

  v26[1] = -2LL;
  ppDevice = 0LL;
  if ( D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_HARDWARE, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL) < 0 )
  {
    v4 = ppDevice;
    if ( ppDevice )
    {
      ppDevice = 0LL;
      ((void (__fastcall *)(ID3D11Device *))v4->lpVtbl->Release)(v4);
    }
    Device3 = D3D11CreateDevice(0LL, D3D_DRIVER_TYPE_WARP, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, 0LL);
    v6 = Device3;
    if ( Device3 < 0 )
    {
      v7 = 512LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
        (const char *)(unsigned int)Device3);
      goto LABEL_43;
    }
  }
  v8 = (_QWORD *)((char *)this + 120);
  v9 = *((_QWORD *)this + 15);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Device3 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, char *))ppDevice->lpVtbl->QueryInterface)(
              ppDevice,
              &GUID_77db970f_6276_48ba_ba28_070143b4392c,
              (char *)this + 120);
  v6 = Device3;
  if ( Device3 < 0 )
  {
    v7 = 515LL;
    goto LABEL_18;
  }
  v10 = (_QWORD *)((char *)this + 112);
  v11 = *((_QWORD *)this + 14);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  Device3 = DCompositionCreateDevice3(*v8, &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4, (char *)this + 112);
  v6 = Device3;
  if ( Device3 < 0 )
  {
    v7 = 516LL;
    goto LABEL_18;
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v10;
  v13 = (_QWORD *)((char *)this + 128);
  v14 = *((_QWORD *)this + 16);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  Device3 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), HWND, __int64, char *))(*v12)[24])(
              v12,
              a2,
              1LL,
              (char *)this + 128);
  v6 = Device3;
  if ( Device3 < 0 )
  {
    v7 = 519LL;
    goto LABEL_18;
  }
  v26[0] = 0LL;
  updated = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v10)(
              *v10,
              &GUID_0987cb06_f916_48bf_8d35_ce7641781bd9,
              v26);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 522LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_41;
  }
  v17 = v26[0];
  v18 = (_QWORD *)((char *)this + 136);
  v19 = *((_QWORD *)this + 17);
  if ( v19 )
  {
    *v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 48LL))(v17, (char *)this + 136);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 525LL;
    goto LABEL_39;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 24LL))(*v13, *v18);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 528LL;
    goto LABEL_39;
  }
  v20 = v26[0];
  v21 = (_QWORD *)((char *)this + 152);
  v22 = *((_QWORD *)this + 19);
  if ( v22 )
  {
    *v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  updated = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 48LL))(v20, (char *)this + 152);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 531LL;
    goto LABEL_39;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v18 + 128LL))(*v18, *v21, 1LL);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 534LL;
    goto LABEL_39;
  }
  updated = CStartSizingFrame::UpdateBackgroundSurface(this);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 536LL;
    goto LABEL_39;
  }
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  updated = CStartSizingFrame::UpdateBackgroundTransform(this, &v27);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 538LL;
    goto LABEL_39;
  }
  updated = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 24LL))(*v10);
  v6 = updated;
  if ( updated < 0 )
  {
    v16 = 541LL;
    goto LABEL_39;
  }
  v6 = 0;
LABEL_41:
  v23 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_43:
  v24 = ppDevice;
  if ( ppDevice )
  {
    ppDevice = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v24->lpVtbl->Release)(v24);
  }
  return v6;
}
