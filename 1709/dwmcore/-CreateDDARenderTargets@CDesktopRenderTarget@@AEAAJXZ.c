/*
 * XREFs of ?CreateDDARenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016A1C
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016D30 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, CurrentDisplaySet, 0x2BAu);
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
        if ( *((_BYTE *)v8 + 308) )
        {
          if ( *((_BYTE *)v8 + 305) )
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v10, 0x2C8u);
    }
  }
LABEL_6:
  ReleaseInterface<CDisplaySet const>(&v11);
  return v3;
}
