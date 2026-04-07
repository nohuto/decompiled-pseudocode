/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800047E0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800046AC (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 * Callees:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180004A18 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180024C5C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180025F40 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002FE90 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180031840 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180031A20 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     _Init_thread_footer @ 0x180049178 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800491E4 (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180086C20 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
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
  float ScalingFactorForCVI; // xmm0_4
  CBaseObject *v14; // rcx
  struct tagRECT v15; // xmm1
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  CBaseObject *v19; // [rsp+30h] [rbp-18h] BYREF

  if ( dword_1800C9DB4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C9DB4);
    if ( dword_1800C9DB4 == -1 )
    {
      dword_1800C9D50 = -2147023434;
      Init_thread_footer(&dword_1800C9DB4);
    }
  }
  v19 = 0LL;
  v9 = CVisual::Initialize(this, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C9D50, 1u, v9, 0x57u);
    return v10;
  }
  v11 = CWindowSnapshot::Create(a3, &v19);
  v10 = v11;
  if ( v11 < 0 )
  {
    v18 = 90;
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
        v18 = 95;
        goto LABEL_21;
      }
LABEL_10:
      v14 = v19;
      *((struct tagRECT *)this + 21) = *a5;
      v15 = *a5;
      *((_QWORD *)this + 35) = v14;
      *((struct tagRECT *)this + 20) = v15;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      CVisual::SetDirtyFlags(this, 0x1000u);
      goto LABEL_13;
    }
    if ( !a4 )
    {
      v10 = -2147023434;
      v18 = 100;
      v17 = -2147023434;
      goto LABEL_23;
    }
    *((_QWORD *)this + 39) = a4;
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    if ( (*(_DWORD *)(v12 + 600) & 0xFFF) == 0x17 )
      ScalingFactorForCVI = FLOAT_1_0;
    else
      ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a5);
    *((float *)this + 88) = ScalingFactorForCVI;
    v11 = CVisual::RenderRecursive(*((CVisual **)this + 39));
    v10 = v11;
    if ( v11 < 0 )
    {
      v18 = 116;
      goto LABEL_21;
    }
    v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a5);
    v10 = v11;
    if ( v11 >= 0 )
      goto LABEL_10;
    v18 = 119;
  }
LABEL_21:
  v17 = v11;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C9D50, 1u, v17, v18);
LABEL_13:
  if ( v19 )
    CBaseObject::Release(v19);
  return v10;
}
