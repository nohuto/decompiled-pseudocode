/*
 * XREFs of ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180033FE4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005989C (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?fabs@@YAMM@Z @ 0x180031C80 (-fabs@@YAMM@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800ACCFC (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800ACD48 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ @ 0x1800AD484 (-UpdatePanOverlapState@ManipulationInjector@@AEAAXXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800AD6DC (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800ADEDC (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800ADF7C (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800AE0FC (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z @ 0x1800AE34C (-UpdatePanContact@ManipulationInjector@@AEAAXIUtagPOINT@@@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800AE3A8 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 */

void __fastcall ManipulationInjector::InjectPan(ManipulationInjector *this, float a2, float a3, unsigned int a4)
{
  float v4; // xmm6_4
  const char *v7; // r9
  float v8; // xmm3_4
  float v9; // xmm2_4
  int v10; // eax
  int v11; // ecx
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  LONG v15; // eax
  LONG v16; // eax
  bool v17; // zf
  struct tagRECT *v18; // rbx
  int v19; // eax
  bool v20; // cl
  struct tagPOINT *v21; // rsi
  int v22; // ecx
  int v23; // ecx
  struct tagRECT *v24; // r9
  struct tagPOINT v25; // rbx
  const char *v26; // r9
  const char *v27; // r9
  unsigned int v28; // eax
  struct tagRECT v29; // [rsp+48h] [rbp+7h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v4 = a2;
  if ( ManipulationInjector::IsInContactForDeviceId(this, a4) )
  {
    if ( *((_DWORD *)this + 22) != 1 )
    {
      v28 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v28);
      __debugbreak();
    }
    if ( !*((_BYTE *)this + 740) && *((int *)this + 184) > 0 )
    {
      *((_BYTE *)this + 740) = 1;
      v8 = 0.0;
      v9 = fabs(a2);
      if ( v9 <= fabs(a3) )
      {
        if ( a3 < 0.0 )
          v10 = v11;
        v12 = (float)v10;
      }
      else
      {
        if ( a2 < 0.0 )
          v10 = v11;
        v8 = (float)v10;
      }
      ManipulationInjector::InjectPan(this, v8, v12, 0);
    }
    if ( *(_DWORD *)this == 1 )
      LODWORD(v4) = LODWORD(a2) ^ _xmm;
    if ( *((_BYTE *)this + 13) )
      DbgPrint(
        "Pan Delta: (%d.%03d, %d.%03d)\n",
        (int)v4,
        (int)(float)(v4 * 1000.0) - 1000 * (int)v4,
        (int)a3,
        (int)(float)(a3 * 1000.0) - 1000 * (int)a3);
    v13 = FLOAT_N0_5;
    if ( v4 >= 0.0 )
      v14 = FLOAT_0_5;
    else
      v14 = FLOAT_N0_5;
    v15 = (int)(float)(v14 + v4);
    if ( v4 != 0.0 && !v15 )
    {
      v15 = 1;
      if ( v4 < 0.0 )
        v15 = -1;
    }
    v29.left = v15;
    if ( a3 >= 0.0 )
      v13 = FLOAT_0_5;
    v16 = (int)(float)(v13 + a3);
    if ( a3 != 0.0 && !v16 )
    {
      v16 = 1;
      if ( a3 < 0.0 )
        v16 = -1;
    }
    v17 = *((_DWORD *)this + 1) == 2;
    v29.top = v16;
    v18 = *(struct tagRECT **)&v29.left;
    if ( v17 && (v19 = 2, *((_DWORD *)this + 10)) )
    {
      v20 = 0;
      v21 = (struct tagPOINT *)((char *)this + 144);
    }
    else
    {
      if ( *((_DWORD *)this + 12) != 1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x256,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v7);
        __debugbreak();
      }
      ManipulationInjector::UpdatePanContact(this, 0, *(struct tagPOINT *)&v29.left);
      v21 = (struct tagPOINT *)((char *)this + 144);
      v29 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v29, 0);
      v20 = ManipulationInjector::CheckOverlapAndEvent(this);
      v19 = *((_DWORD *)this + 1);
    }
    if ( v19 != 2 || !*((_BYTE *)this + 12) )
    {
      if ( v20 )
      {
        if ( v19 == 1 && *((_BYTE *)this + 12) )
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
            (void *)0x269,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v7);
          __debugbreak();
        }
        v30 = (struct tagRECT)*((_OWORD *)this + 4);
        v24 = **(struct tagRECT ***)&ManipulationInjector::ComputeSafeDelta(this, (unsigned int)&v29, 0LL, v18);
        v30 = (struct tagRECT)*((_OWORD *)this + 4);
        v25 = **(struct tagPOINT **)&ManipulationInjector::ComputeSafeDelta(
                                       this,
                                       (unsigned int)&v29,
                                       (struct tagPOINT)1LL,
                                       v24);
        ManipulationInjector::UpdatePanContact(this, 0, v25);
        v30 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, v21, &v30, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x270,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v26);
          __debugbreak();
        }
        ManipulationInjector::UpdatePanContact(this, 1u, v25);
        v30 = (struct tagRECT)*((_OWORD *)this + 4);
        if ( ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v30, 0) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x274,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v27);
          JUMPOUT(0x1800AD1A4LL);
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
          (void *)0x27D,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          v7);
        __debugbreak();
      }
      *((_DWORD *)this + 31) = 0x40000;
      ManipulationInjector::UpdatePanContact(this, 1u, (struct tagPOINT)v18);
      v29 = (struct tagRECT)*((_OWORD *)this + 4);
      ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v29, 0);
    }
    ManipulationInjector::UpdatePanOverlapState(this);
LABEL_52:
    ManipulationInjector::InjectAndScrub(this);
  }
}
