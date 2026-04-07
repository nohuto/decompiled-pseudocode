/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003D918
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003D654 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF88 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800158A4 (-SetRect@CRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015978 (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003E208 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // r8
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct IDwmChannel *v10; // rcx
  int v11; // eax
  bool v12; // dl
  const struct _D3DCOLORVALUE *v13; // r8
  const struct _D3DCOLORVALUE *v14; // r9
  int v15; // eax
  struct CRenderDataInstruction *v16; // rcx
  int v17; // eax
  CVisual *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch]
  struct CRectangleInstruction *v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v24 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( v1[49] - v1[47] >= 0 )
    v3 = v1[49] - v1[47];
  v5 = v3 - v1[64] - v1[63];
  if ( v5 < 0 )
    v5 = 0;
  v22 = v5;
  if ( v1[50] - v1[48] >= 0 )
    v4 = v1[50] - v1[48];
  v6 = v4 - v1[66] - v1[65];
  if ( v6 < 0 )
    v6 = 0;
  v23 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 80LL))(*((_QWORD *)this + 13), &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x100u);
  }
  else
  {
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 13));
    v9 = *((_DWORD *)this + 4);
    if ( v9 >= 0 )
    {
      if ( v9 > 1 )
      {
        if ( v9 == 2 )
        {
          CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
          CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
        }
      }
      else
      {
        *(_QWORD *)&v25 = 0LL;
        v10 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        *((float *)&v25 + 2) = (float)v22;
        *((float *)&v25 + 3) = (float)v23;
        v11 = CRectangleInstruction::Create(v10, &v24);
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x10Eu);
        }
        else
        {
          v15 = CRectangleInstruction::SetLinearGradientFill(v24, v12, v13, v14, 1.0);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x10Fu);
          }
          else
          {
            CRectangleInstruction::SetRect((__int64)v24, &v25);
            v17 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v16);
            v8 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x112u);
            }
            else
            {
              v18 = (CVisual *)*((_QWORD *)this + 12);
              LODWORD(v19) = 0;
              *(_QWORD *)&v25 = 0LL;
              v20 = *((_QWORD *)v18 + 35);
              if ( v20 )
              {
                v19 = *(_QWORD *)(v20 + 24);
                *(_QWORD *)&v25 = v19;
              }
              CVisual::SetInsetFromParentLeft(v18, (v22 - (int)v19) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v23 - DWORD1(v25)) / 2);
            }
          }
        }
        if ( v24 )
          CBaseObject::Release(v24);
      }
    }
  }
  return v8;
}
