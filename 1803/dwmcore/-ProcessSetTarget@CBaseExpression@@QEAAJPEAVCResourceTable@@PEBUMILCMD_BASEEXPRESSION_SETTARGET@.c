/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18003CC4C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18013CF48 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  const struct MILCMD_BASEEXPRESSION_SETTARGET *v3; // r9
  int *v4; // r11
  struct CResource *ResourceWithoutType; // r8
  CBaseExpression *v6; // r10
  unsigned int v7; // edx
  char v8; // dl
  int v9; // eax
  unsigned int v10; // ebx

  v3 = a3;
  v4 = (int *)a2;
  ResourceWithoutType = 0LL;
  v6 = this;
  v7 = *((_DWORD *)v3 + 3);
  if ( v7 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType((CResourceTable *)v4, v7);
  *((_DWORD *)v6 + 50) = v7;
  *((_DWORD *)v6 + 51) = *((_DWORD *)v3 + 2);
  v8 = *((_BYTE *)v6 + 208) & 0xBF | (*((_DWORD *)v3 + 9) != 0 ? 0x40 : 0);
  *((_BYTE *)v6 + 208) = v8;
  if ( (v8 & 0x40) == 0 || CBaseExpression::GetAnimationLoggingManagerNoRef(v6) )
  {
    v9 = CBaseExpression::SetTarget(
           (__int64)v6,
           v4[12],
           ResourceWithoutType,
           *((_DWORD *)v3 + 4),
           *((_DWORD *)v3 + 8),
           *((unsigned __int16 *)v3 + 15),
           *((_BYTE *)v3 + 28),
           *(_QWORD *)((char *)v3 + 20));
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x68u);
    else
      return 0;
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x5Eu);
  }
  return v10;
}
