/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18000DBE8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E6A4 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180021DF0 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002250C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180035C7C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  int started; // eax
  int v4; // edi
  int v5; // eax
  __int64 (__fastcall *v7)(CRenderDataVisual *); // rax
  int updated; // eax
  CVisual **v9; // rcx
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      if ( *((_QWORD *)this + 45) )
      {
        started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
        v4 = started;
        if ( started < 0 )
        {
          v14 = 532;
          goto LABEL_39;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 534;
        goto LABEL_39;
      }
      *((_BYTE *)this + 480) = 0;
    }
    v2 = *((_QWORD *)this + 45);
    if ( !v2 || *(_BYTE *)(v2 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 553;
LABEL_39:
        v11 = started;
LABEL_41:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v14);
        return (unsigned int)v4;
      }
LABEL_13:
      *((_DWORD *)this + 20) &= ~0x1000u;
      goto LABEL_14;
    }
    started = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 400LL), 0);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 543;
      goto LABEL_39;
    }
    v4 = 0;
    if ( !*((_QWORD *)this + 42) )
    {
      v12 = CSecondaryWindowRepresentation::Create(
              160LL,
              (__int64)this + 280,
              *((_QWORD *)this + 41),
              0,
              100,
              (CSecondaryWindowRepresentation **)this + 42);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x24Du);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x258u);
    }
    else
    {
      if ( *((_QWORD *)this + 44)
        || (v10 = CResource::Create(32LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 352),
            v4 = v10,
            v10 >= 0) )
      {
        if ( *((_QWORD *)this + 43) )
          goto LABEL_10;
        v10 = CResource::Create(21LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 344);
        v4 = v10;
        if ( v10 >= 0 )
          goto LABEL_10;
        v13 = 609;
      }
      else
      {
        v13 = 604;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
    }
LABEL_10:
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x221u);
      return (unsigned int)v4;
    }
    started = CTopLevelWindow3D::UpdateAnimatedResources(this);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 547;
      goto LABEL_39;
    }
    started = CTopLevelWindow3D::EnsureRenderData(this);
    v4 = started;
    if ( started < 0 )
    {
      v14 = 549;
      goto LABEL_39;
    }
    goto LABEL_13;
  }
LABEL_14:
  v5 = CVisual::ValidateVisual(this);
  v4 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x94u);
  }
  else if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    v7 = *(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL);
    if ( v7 == CRenderDataVisual::UpdateRenderData )
      updated = CRenderDataVisual::UpdateRenderData(this);
    else
      updated = v7(this);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v4 < 0 )
  {
    v14 = 559;
    v11 = v4;
    goto LABEL_41;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v9 = (CVisual **)*((_QWORD *)this + 42);
    if ( v9 )
    {
      started = CSecondaryWindowRepresentation::Validate(v9);
      v4 = started;
      if ( started < 0 )
      {
        v14 = 566;
        goto LABEL_39;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  return (unsigned int)v4;
}
