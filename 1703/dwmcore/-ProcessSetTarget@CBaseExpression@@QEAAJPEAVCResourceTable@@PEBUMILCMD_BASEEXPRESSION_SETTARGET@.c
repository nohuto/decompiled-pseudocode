/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18002D8A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  unsigned int *v3; // r10
  struct CResource *ResourceWithoutType; // rax
  unsigned int v5; // edx
  const struct MILCMD_BASEEXPRESSION_SETTARGET *v6; // r9
  CBaseExpression *v7; // r11
  int v8; // eax
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp-18h]

  v3 = (unsigned int *)a2;
  ResourceWithoutType = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v6 = a3;
  v7 = this;
  if ( v5 )
    ResourceWithoutType = CResourceTable::GetResourceWithoutType((CResourceTable *)v3, v5);
  v11 = *((_BYTE *)v6 + 24);
  v8 = CBaseExpression::SetTarget(
         v7,
         v3[12],
         ResourceWithoutType,
         *((unsigned int *)v6 + 3),
         *((_DWORD *)v6 + 7),
         *((unsigned __int16 *)v6 + 13),
         v11,
         *((_QWORD *)v6 + 2));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x56u);
  else
    return 0;
  return v9;
}
