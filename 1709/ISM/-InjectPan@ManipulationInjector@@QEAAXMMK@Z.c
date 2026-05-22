/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x18003F7A8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062768 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?fabs@@YAMM@Z @ 0x1800367F4 (-fabs@@YAMM@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C0FA4 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800C1714 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C197C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C2178 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C2210 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C2390 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800C25D8 (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800C2634 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  float v5; // xmm6_4
  const char *v8; // r9
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11; // ecx
  float v12; // xmm0_4
  float v13; // xmm4_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  LONG v17; // eax
  LONG v18; // eax
  bool v19; // zf
  struct tagRECT *v20; // rbx
  bool v21; // al
  int v22; // ecx
  int v23; // ecx
  struct tagRECT *v24; // r9
  struct tagPOINT v25; // rbx
  const char *v26; // r9
  const char *v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r8
  struct tagRECT v30; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT v31; // [rsp+58h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v5 = a2;
  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    if ( *((_DWORD *)this + 22) != 1 )
    {
      v28 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x22D, v29, (const char *)v28);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 740) && *((int *)this + 184) > 0 )
    {
      v9 = 0.0;
      *((_BYTE *)this + 740) = 1;
      v10 = fabs(a2);
      v12 = fabs(a3);
      v14 = 1;
      if ( v10 <= v12 )
      {
        if ( a3 < 0.0 )
          v14 = -1;
        v13 = (float)(v11 * v14);
      }
      else
      {
        if ( a2 < 0.0 )
          v14 = -1;
        v9 = (float)(v11 * v14);
      }
      ManipulationInjector::InjectPan(this, v9, v13, 0);
    }
    if ( *(_DWORD *)this == 1 )
      LODWORD(v5) = LODWORD(a2) ^ _xmm;
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)v5,
        (int)(float)(v5 * 1000.0) - 1000 * (int)v5,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v15 = FLOAT_N0_5;
    if ( v5 >= 0.0 )
      v16 = FLOAT_0_5;
    else
      v16 = FLOAT_N0_5;
    v17 = (int)(float)(v16 + v5);
    if ( v5 != 0.0 && !v17 )
    {
      v17 = 1;
      if ( v5 < 0.0 )
        v17 = -1;
    }
    v30.left = v17;
    if ( a3 >= 0.0 )
      v15 = FLOAT_0_5;
    v18 = (int)(float)(v15 + a3);
    if ( a3 != 0.0 && !v18 )
    {
      v18 = 1;
      if ( a3 < 0.0 )
        v18 = -1;
    }
    v19 = *((_DWORD *)this + 1) == 2;
    v30.top = v18;
    v20 = *(struct tagRECT **)&v30.left;
    if ( v19 && *((_DWORD *)this + 10) )
    {
      v21 = 0;
    }
    else
    {
      if ( *((_DWORD *)this + 12) != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x255,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v8);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v30.left);
      v30 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v30, 0);
      v21 = ManipulationInjector::CheckOverlapAndEvent(this);
    }
    if ( *((_DWORD *)this + 1) != 2 || !*((_BYTE *)this + 12) )
    {
      if ( v21 )
      {
        if ( *((_DWORD *)this + 1) == 1 && *((_BYTE *)this + 12) )
        {
          ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0, a4);
          ManipulationInjector::InjectAndScrub(this);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 131078;
        }
        else
        {
          ManipulationInjector::InjectAndScrub(this);
          *((_DWORD *)this + 31) = 0x40000;
          ManipulationInjector::InjectAndScrub(this);
          ManipulationInjector::AddContact(this, *(struct tagPOINT *)((char *)this + 80), 0, a4);
        }
      }
      goto LABEL_52;
    }
    v22 = *((_DWORD *)this + 10);
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
      {
        if ( *((_DWORD *)this + 12) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x268,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v8);
          __debugbreak();
        }
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        v24 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(this, (unsigned int)&v30, 0LL, v20);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        v25 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (unsigned int)&v30,
                                       (struct tagPOINT)1LL,
                                       v24);
        ManipulationInjector::UpdatePanContact(this, 0, v25);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v31, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x26F,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v26);
          __debugbreak();
        }
        ManipulationInjector::UpdatePanContact(this, 1u, v25);
        v31 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v31, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x273,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v27);
          JUMPOUT(0x1800C143DLL);
        }
        *((_DWORD *)this + 10) = 2;
        goto LABEL_52;
      }
      if ( v23 != 1 )
        return;
      if ( *((_DWORD *)this + 12) != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x27C,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v8);
        __debugbreak();
      }
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v20);
      v30 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v30, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_52:
    ManipulationInjector::InjectAndScrub(this);
  }
}
