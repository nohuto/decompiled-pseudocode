/*
 * XREFs of ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440
 * Callers:
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800402F4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062768 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ @ 0x1800C0FA4 (-CheckOverlapAndEvent@ManipulationInjector@@AEAA_NXZ.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x1800C197C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C2178 (-Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C2390 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?AddZoomContacts@ManipulationInjector@@AEAAXK@Z @ 0x1800C23D4 (-AddZoomContacts@ManipulationInjector@@AEAAXK@Z.c)
 *     ?UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z @ 0x1800C24F8 (-UpdateZoomContacts@ManipulationInjector@@AEAAXIM@Z.c)
 *     ?UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z @ 0x1800C2580 (-UpdateZoomContactsForThreshold@ManipulationInjector@@AEAAXI@Z.c)
 */

void __fastcall ManipulationInjector::InjectZoom(ManipulationInjector *this, float a2, unsigned int a3)
{
  const char *v5; // r9
  int v6; // eax
  int v7; // edi
  const char *v8; // rdx
  ManipulationInjector *v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // r8
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( ManipulationInjector::IsInContactForDeviceId(this, a3) )
  {
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Zoom Delta: %d.%03d\n", (int)a2, (int)(float)(a2 * 1000.0) - 1000 * (int)a2);
    v6 = *((_DWORD *)this + 22);
    if ( v6 == 32 )
    {
      if ( a2 <= 1.0 )
        goto LABEL_16;
    }
    else
    {
      if ( v6 != 16 )
      {
        v11 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x2C2, v12, (const char *)v11);
        __debugbreak();
      }
      if ( a2 >= 1.0 )
      {
LABEL_16:
        if ( *((_DWORD *)this + 12) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x2CB,
            (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v5);
          __debugbreak();
        }
        ManipulationInjector::UpdateZoomContacts(this, 0, a2);
        v13 = (struct tagRECT)*((_OWORD *)this + 4);
        ManipulationInjector::Clip(this, (struct tagPOINT *)this + 18, &v13, 0);
        v13 = (struct tagRECT)*((_OWORD *)this + 4);
        ManipulationInjector::Clip(this, (struct tagPOINT *)this + 37, &v13, 0);
        if ( *(_DWORD *)this == 3 )
        {
          v13 = *(struct tagRECT *)((char *)this + 756);
          ManipulationInjector::Clip(this, (struct tagPOINT *)this + 19, &v13, 0);
          v13 = *(struct tagRECT *)((char *)this + 756);
          ManipulationInjector::Clip(this, (struct tagPOINT *)this + 38, &v13, 0);
        }
        if ( ManipulationInjector::CheckOverlapAndEvent(this) )
        {
          if ( *((_DWORD *)this + 2) != 1 || !*((_BYTE *)this + 12) )
          {
            ManipulationInjector::InjectAndScrub(this);
            *((_DWORD *)this + 31) = 0x40000;
            *((_DWORD *)this + 69) = 0x40000;
            ManipulationInjector::InjectAndScrub(this);
            ManipulationInjector::AddZoomContacts(this, a3);
            ManipulationInjector::InjectAndScrub(this);
            ManipulationInjector::UpdateZoomContactsForThreshold(this, v10);
            goto LABEL_24;
          }
          ManipulationInjector::AddZoomContacts(this, a3);
          ManipulationInjector::InjectAndScrub(this);
          *((_DWORD *)this + 31) = 0x40000;
          *((_DWORD *)this + 69) = 0x40000;
          ManipulationInjector::UpdateZoomContacts(this, 2u, 0.0);
        }
        v9 = this;
LABEL_24:
        ManipulationInjector::InjectAndScrub(v9);
        return;
      }
    }
    v7 = 16;
    if ( v6 == 16 )
      v7 = 32;
    if ( *((_BYTE *)this + 13) )
    {
      v8 = "Decreasing";
      if ( v6 != 16 )
        v8 = "Increasing";
      DbgPrint("Transitioning Zoom Type to %s\n", v8);
    }
    *((_DWORD *)this + 22) = v7;
    goto LABEL_16;
  }
}
