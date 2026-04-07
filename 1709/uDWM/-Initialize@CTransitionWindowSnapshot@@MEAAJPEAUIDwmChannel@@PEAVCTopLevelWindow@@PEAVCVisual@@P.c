/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000B810
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000B6D8 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 * Callees:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000BA4C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000C3D0 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000C5B0 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18000D10C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180017094 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800184C0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007D534 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct IDwmChannel *a2,
        struct CTopLevelWindow *a3,
        struct CVisual *a4,
        const struct tagRECT *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  struct CWindowSnapshot *v13; // rcx
  struct tagRECT v14; // xmm1
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-28h]
  struct CWindowSnapshot *v18; // [rsp+30h] [rbp-18h] BYREF

  if ( dword_1800BEE24 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800BEE24);
    if ( dword_1800BEE24 == -1 )
    {
      dword_1800BEDC0 = -2147023434;
      Init_thread_footer(&dword_1800BEE24);
    }
  }
  v18 = 0LL;
  v9 = CVisual::Initialize(this, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BEDC0, 1u, v9, 0x57u);
    return v10;
  }
  v11 = CWindowSnapshot::Create(a3, &v18);
  v10 = v11;
  if ( v11 < 0 )
  {
    v17 = 90;
  }
  else
  {
    v12 = *((_QWORD *)a3 + 90);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v12)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v12 + 424),
                a5,
                (struct CResource **)this + 36,
                (float *)this + 88) >= 0 )
    {
      v11 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v10 = v11;
      if ( v11 < 0 )
      {
        v17 = 95;
        goto LABEL_21;
      }
LABEL_10:
      v13 = v18;
      *((struct tagRECT *)this + 21) = *a5;
      v14 = *a5;
      *((_QWORD *)this + 35) = v13;
      *((struct tagRECT *)this + 20) = v14;
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      CVisual::SetDirtyFlags(this, 0x1000u);
      goto LABEL_13;
    }
    if ( !a4 )
    {
      v10 = -2147023434;
      v17 = 100;
      v16 = -2147023434;
      goto LABEL_23;
    }
    *((_QWORD *)this + 39) = a4;
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    if ( (*(_DWORD *)(v12 + 600) & 0xFFF) == 0x17 )
      *((_DWORD *)this + 88) = 1065353216;
    else
      *((float *)this + 88) = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a5);
    v11 = CVisual::RenderRecursive(*((CVisual **)this + 39));
    v10 = v11;
    if ( v11 < 0 )
    {
      v17 = 116;
      goto LABEL_21;
    }
    v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a5);
    v10 = v11;
    if ( v11 >= 0 )
      goto LABEL_10;
    v17 = 119;
  }
LABEL_21:
  v16 = v11;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800BEDC0, 1u, v16, v17);
LABEL_13:
  if ( v18 )
    CBaseObject::Release(v18);
  return v10;
}
