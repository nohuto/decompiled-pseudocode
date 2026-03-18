/*
 * XREFs of ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A9DC
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18006A550 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A75C (-CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateRenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  UINT32 cData; // [rsp+20h] [rbp-29h]
  int v8; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-15h] BYREF
  struct CDisplaySet *v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v9 = 0;
  v10 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v10);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    cData = 263;
  }
  else
  {
    v9 = *((_DWORD *)v10 + 18);
    if ( !v9 )
    {
      v8 = -2003304442;
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, -2003304442, 0x110u);
      goto LABEL_15;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1361LL) )
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets(this);
      v8 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
        goto LABEL_5;
      cData = 277;
    }
    else
    {
      CurrentDisplaySet = CDesktopRenderTarget::CreateFullScreenRenderTargets2(this);
      v8 = CurrentDisplaySet;
      if ( CurrentDisplaySet >= 0 )
      {
LABEL_5:
        CurrentDisplaySet = CDesktopRenderTarget::CreateDDARenderTargets(this);
        v8 = CurrentDisplaySet;
        if ( CurrentDisplaySet >= 0 )
          goto LABEL_6;
        cData = 284;
        goto LABEL_14;
      }
      cData = 281;
    }
  }
LABEL_14:
  MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, CurrentDisplaySet, cData);
LABEL_15:
  if ( v8 < 0 )
    CDesktopRenderTarget::ReleaseRenderTargets(this);
LABEL_6:
  if ( v9 >= 2 && hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v9;
    v15 = &v8;
    v13 = 4;
    v16 = 4;
    TlgWrite(v4, &unk_1801F6833, v5, v6, 4u, &pData);
  }
  ReleaseInterface<CDisplaySet const>(&v10);
  return (unsigned int)v8;
}
