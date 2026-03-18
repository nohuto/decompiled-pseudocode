/*
 * XREFs of CalcSBStuff @ 0x1C0077264
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C0082E30 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C020F81C (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F9DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FCAC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 * Callees:
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     CalcSBStuff2 @ 0x1C007736C (CalcSBStuff2.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     _InitPwSB @ 0x1C0077F80 (_InitPwSB.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // esi
  bool v10; // zf
  unsigned int v11; // eax
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // r14d
  unsigned int v16; // eax
  unsigned int DpiForSystem; // eax
  int v18; // [rsp+20h] [rbp-20h] BYREF
  int v19; // [rsp+24h] [rbp-1Ch]
  int v20; // [rsp+28h] [rbp-18h]
  int v21; // [rsp+2Ch] [rbp-14h]
  int v22[2]; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+38h] [rbp-8h]
  int v24; // [rsp+3Ch] [rbp-4h]

  GetRect(a1, v22, 33);
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - v23;
    v8 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - v22[0];
  }
  else
  {
    v8 = v23;
    v9 = v22[0];
  }
  if ( a3 )
  {
    if ( (*(_BYTE *)(a1 + 65) & 0x40) != 0 )
    {
      v10 = (*(_BYTE *)(a1 + 56) & 2) == 0;
      v18 = v9;
      v20 = v9;
      if ( !v10 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6);
        v18 = v9 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v10 = (*(_BYTE *)(a1 + 56) & 2) == 0;
      v18 = v8;
      v20 = v8;
      if ( !v10 )
      {
        v11 = GetDpiForSystem(v7, v6);
        v20 = v8 + GetDpiDependentMetric(0LL, v11);
      }
    }
    v19 = v22[1];
    v21 = v24;
  }
  else
  {
    v10 = (*(_BYTE *)(a1 + 56) & 4) == 0;
    v15 = v24;
    v19 = v24;
    v21 = v24;
    if ( !v10 )
    {
      v16 = ((__int64 (*)(void))GetDpiForSystem)();
      v21 = v15 + GetDpiDependentMetric(1LL, v16);
    }
    v18 = v9;
    v20 = v8;
  }
  result = InitPwSB(a1);
  if ( result )
  {
    v13 = *(_QWORD *)(a1 + 192);
    if ( a3 )
      v14 = v13 + 20;
    else
      v14 = v13 + 4;
    return CalcSBStuff2(a2, &v18, v14, a3);
  }
  return result;
}
