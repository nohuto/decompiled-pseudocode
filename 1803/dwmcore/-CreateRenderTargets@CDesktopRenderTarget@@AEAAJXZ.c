/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800450B8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180044B30 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180044D24 (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180157474 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // [rsp+20h] [rbp-19h]
  int v6; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-5h] BYREF
  struct CDisplaySet *v8; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v7 = 0;
  v8 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v8);
  v6 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 139;
  }
  else
  {
    v7 = *((_DWORD *)v8 + 18);
    if ( !v7 )
    {
      v6 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x94u);
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1345LL) )
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
        goto LABEL_5;
      cData = 153;
    }
    else
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets2(this);
      v6 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
      {
LABEL_5:
        CurrentDisplaySet = CDesktopRenderTarget::CreateDDARenderTargets(this);
        v6 = CurrentDisplaySet;
        if ( CurrentDisplaySet >= 0 )
          goto LABEL_6;
        cData = 160;
        goto LABEL_14;
      }
      cData = 157;
    }
  }
LABEL_14:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, CurrentDisplaySet, cData);
LABEL_15:
  if ( v6 < 0 )
    CDesktopRenderTarget::ReleaseRenderTargets(this);
LABEL_6:
  if ( v7 >= 2 && dword_1802D3F60 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3F60, 0x400000000000uLL) )
  {
    v12 = 0;
    v15 = 0;
    v10 = &v7;
    v13 = &v6;
    v11 = 4;
    v14 = 4;
    TlgWrite(v4, &unk_1802A7212, 0LL, 0LL, 4u, &pData);
  }
  ReleaseInterface<CDisplaySet const>(&v8);
  return (unsigned int)v6;
}
