/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18007F3A0
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x18007F0F0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18007F154 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-28h] BYREF

  rc = *(struct tagRECT *)((char *)this + 280);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 296) )
    {
      v4 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 2, &stru_1800B0958);
      v3 = v4;
      if ( v4 >= 0 )
      {
        InflateRect(&rc, -2, -2);
        v5 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 1, &stru_1800B0948);
        v3 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x6Cu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x68u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x63u);
  }
  return v3;
}
