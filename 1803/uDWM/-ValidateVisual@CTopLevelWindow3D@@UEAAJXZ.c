/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x180017FB0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800220B0 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x1800227C8 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F550 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002F854 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037048 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  int started; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall *v8)(CRenderDataVisual *); // rax
  int updated; // eax
  CSecondaryWindowRepresentation *v10; // rcx
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]

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
          v15 = 532;
          goto LABEL_40;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      v4 = started;
      if ( started < 0 )
      {
        v15 = 534;
        goto LABEL_40;
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
        v15 = 553;
LABEL_40:
        v12 = started;
LABEL_42:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v15);
        return (unsigned int)v4;
      }
LABEL_13:
      *((_DWORD *)this + 20) &= ~0x1000u;
      goto LABEL_14;
    }
    started = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 392LL), 0);
    v4 = started;
    if ( started < 0 )
    {
      v15 = 543;
      goto LABEL_40;
    }
    v4 = 0;
    if ( !*((_QWORD *)this + 42) )
    {
      v13 = CSecondaryWindowRepresentation::Create(
              160LL,
              (char *)this + 280,
              *((_QWORD *)this + 41),
              0LL,
              100,
              (char *)this + 336);
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x24Du);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x258u);
    }
    else
    {
      if ( *((_QWORD *)this + 44)
        || (v11 = CResource::Create(0x20u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 44),
            v4 = v11,
            v11 >= 0) )
      {
        if ( *((_QWORD *)this + 43) )
          goto LABEL_10;
        v11 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 43);
        v4 = v11;
        if ( v11 >= 0 )
          goto LABEL_10;
        v14 = 609;
      }
      else
      {
        v14 = 604;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v14);
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
      v15 = 547;
      goto LABEL_40;
    }
    started = CTopLevelWindow3D::EnsureRenderData(this);
    v4 = started;
    if ( started < 0 )
    {
      v15 = 549;
      goto LABEL_40;
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
    v8 = *(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)this + 176LL);
    if ( v8 == CRenderDataVisual::UpdateRenderData )
      updated = CRenderDataVisual::UpdateRenderData(this);
    else
      updated = v8(this);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x98u);
    else
      *((_DWORD *)this + 20) &= ~4u;
  }
  if ( v4 < 0 )
  {
    v15 = 559;
    v12 = v4;
    goto LABEL_42;
  }
  v6 = *((_DWORD *)this + 20);
  if ( (v6 & 0x80u) != 0 )
  {
    v10 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 42);
    if ( v10 )
    {
      started = CSecondaryWindowRepresentation::Validate(v10);
      v4 = started;
      if ( started < 0 )
      {
        v15 = 566;
        goto LABEL_40;
      }
      v6 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v6 & 0xFFFFFF7F;
  }
  return (unsigned int)v4;
}
