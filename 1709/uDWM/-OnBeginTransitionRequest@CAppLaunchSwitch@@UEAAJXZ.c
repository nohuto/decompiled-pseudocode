/*
 * XREFs of ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ @ 0x180093C70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180003E9C (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800074E8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAppLaunchSwitch::OnBeginTransitionRequest(CAppLaunchSwitch *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  CBaseObject *v4; // rdi
  char v5; // cl
  bool v6; // zf
  CAnimationScheduler *v7; // rcx
  int v8; // eax
  int v9; // eax
  struct CImmersiveState *v11; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( (unsigned int)GetDesktopID(1LL, &v12) )
  {
    v3 = CImmersiveState::Create(&v11, v12);
    v4 = v11;
    v2 = v3;
    if ( v3 >= 0 )
    {
      v5 = *((_BYTE *)v11 + 56);
      *((_BYTE *)this + 120) = v5 == 0;
      v6 = v5 == 0;
      v7 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
      if ( v6 )
      {
        v8 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Bu, 0LL, this, 0LL);
        v2 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, v8, 0xA3Bu);
      }
      else
      {
        v9 = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(v7, 0x3Au, 0LL, this, 0LL);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, v9, 0xA3Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, v3, 0xA37u);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AF680, 1u, -2147467259, 0xA35u);
  }
  return v2;
}
