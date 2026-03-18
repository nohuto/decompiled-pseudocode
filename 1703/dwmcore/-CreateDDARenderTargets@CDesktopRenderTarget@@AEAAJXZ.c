/*
 * XREFs of ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A75C
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A9DC (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180146B38 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateDDARenderTargets(CDesktopRenderTarget *this)
{
  int CurrentDisplaySet; // eax
  unsigned int v3; // ebx
  const struct CDisplaySet *v4; // r14
  unsigned int v5; // edi
  unsigned int v6; // ebp
  __int64 v7; // rsi
  struct CDisplay *v8; // rdx
  int v10; // eax
  const struct CDisplaySet *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v11);
  v3 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, CurrentDisplaySet, 0x2BDu);
  }
  else
  {
    v4 = v11;
    v5 = 0;
    v6 = *((_DWORD *)v11 + 18);
    if ( v6 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        v8 = *(struct CDisplay **)(v7 + *((_QWORD *)v4 + 6));
        if ( *((_BYTE *)v8 + 298) )
        {
          if ( *((_BYTE *)v8 + 295) )
          {
            v10 = CDesktopRenderTarget::CreateAndAddDDARenderTarget(this, v8);
            v3 = v10;
            if ( v10 < 0 )
              break;
          }
        }
        ++v5;
        v7 += 8LL;
        if ( v5 >= v6 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801E9F58, 2u, v10, 0x2CBu);
    }
  }
LABEL_6:
  ReleaseInterface<CDisplaySet const>(&v11);
  return v3;
}
