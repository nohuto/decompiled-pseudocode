/*
 * XREFs of ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x180157EA8
 * Callers:
 *     ?AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180157150 (-AddNewComposeTopContent@CDesktopRenderTarget@@UEAAJPEAVIImageSource@@AEBVCShape@@AEBVCMILMatrix.c)
 * Callees:
 *     ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C (-GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180158890 (-NotifyMetaData@CHwndRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyDesktopDirectScreenWrite(CDesktopRenderTarget *this)
{
  unsigned int v1; // ebx
  struct CHwndRenderTarget *Primary; // rdi
  int v3; // eax
  _QWORD v5[2]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v6; // [rsp+40h] [rbp-19h]
  __int128 v7; // [rsp+50h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp+7h]
  _OWORD v9[3]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v10; // [rsp+A0h] [rbp+47h]

  v1 = 0;
  Primary = CDesktopRenderTarget::GetPrimary(this);
  if ( Primary )
  {
    memset_0(v5, 0, 0x38uLL);
    v5[1] = 0LL;
    LODWORD(v5[0]) = 3;
    v9[1] = v6;
    v9[0] = v5[0];
    v10 = v8;
    v9[2] = v7;
    v3 = CHwndRenderTarget::NotifyMetaData(Primary, v9);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x6E5u);
  }
  return v1;
}
