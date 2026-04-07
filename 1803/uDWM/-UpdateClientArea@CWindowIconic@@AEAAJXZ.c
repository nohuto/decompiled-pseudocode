/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003A2E4
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A024 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003A960 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002592C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800314FC (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18003ABE0 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  struct CRectangleInstruction *v15; // rsi
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  int v22; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+34h] [rbp-2Ch]
  struct CRectangleInstruction *v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v24 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( v1[47] - v1[45] >= 0 )
    v3 = v1[47] - v1[45];
  v5 = v3 - v1[62] - v1[61];
  if ( v5 < 0 )
    v5 = 0;
  v22 = v5;
  if ( v1[48] - v1[46] >= 0 )
    v4 = v1[48] - v1[46];
  v6 = v4 - v1[64] - v1[63];
  if ( v6 < 0 )
    v6 = 0;
  v23 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 80LL))(*((_QWORD *)this + 13), &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x100u);
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
        v15 = v24;
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x10Eu);
        }
        else
        {
          v16 = CRectangleInstruction::SetLinearGradientFill(v24, v12, v13, v14, 1.0);
          v8 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x10Fu);
          }
          else
          {
            *(_OWORD *)((char *)v15 + 24) = v25;
            v17 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v15);
            v8 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x112u);
            }
            else
            {
              LODWORD(v18) = 0;
              LODWORD(v19) = 0;
              v20 = *(_QWORD *)(*((_QWORD *)this + 12) + 280LL);
              if ( v20 )
              {
                v18 = *(_QWORD *)(v20 + 24);
                v19 = HIDWORD(v18);
              }
              CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), (v22 - (int)v18) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v23 - (int)v19) / 2);
            }
          }
        }
        if ( v15 )
          CBaseObject::Release(v15);
      }
    }
  }
  return v8;
}
