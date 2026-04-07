/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B394
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E900 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180009148 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002F548 (-RoundToNearestInt@@YAHM@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18008AA3C (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  const RECT *v2; // r12
  CBaseObject *v3; // rdi
  int v4; // ecx
  __int64 v5; // r9
  int v6; // eax
  struct tagRECT v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r8
  int RectangleGeometry; // eax
  unsigned int v11; // ebx
  struct CResource *BrushNoRef; // rax
  int v13; // eax
  CBaseObject *v14; // r14
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  struct CResource *v23; // [rsp+30h] [rbp-40h] BYREF
  struct CRenderDataInstruction *v24; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF

  v2 = (const RECT *)((char *)this + 840);
  v3 = 0LL;
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v5 = 0LL;
  v24 = 0LL;
  v6 = v2->bottom - v2->top;
  v7 = *(struct tagRECT *)((char *)this + 856);
  v8 = *((unsigned int *)this + 211);
  if ( v6 >= 0 )
    v5 = (unsigned int)v6;
  v9 = 0LL;
  v23 = 0LL;
  rc = v7;
  if ( v4 >= 0 )
    v9 = (unsigned int)v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        (unsigned int)v2->left,
                        v8,
                        v9,
                        v5,
                        (struct CResource **)this + 89);
  v11 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
    v13 = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CResource **)this + 89), &v24);
    v14 = v24;
    v11 = v13;
    if ( v13 >= 0 )
    {
      v15 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v24);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = RoundToNearestInt(*((float *)this + 189));
        v17 = RoundToNearestInt(*((float *)this + 188));
        OffsetRect(&rc, v17, v16);
        IntersectRect(&rcDst, v2, &rc);
        v18 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v23);
        v11 = v18;
        if ( v18 >= 0 )
        {
          v3 = v23;
          v19 = *((_QWORD *)this + 3);
          if ( v19 )
            v20 = *(unsigned int *)(v19 + 24);
          else
            v20 = 0LL;
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 4)
                                                                   + 384LL))(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v20,
                  *((unsigned int *)v23 + 6));
          v11 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x477u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x472u);
          v3 = v23;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x46Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x46Au);
    }
    if ( v14 )
      CBaseObject::Release(v14);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x464u);
  }
  return v11;
}
