/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180025CB4
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800BEDBC (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180008780 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@IEAAXXZ @ 0x18001DC68 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v9 = 0LL;
  v3 = *(__int64 **)this;
  v4 = v1 + *((_QWORD *)this + 4);
  v8 = 0LL;
  while ( v1 != v4 )
  {
    if ( v3 )
      v5 = *v3;
    else
      v5 = 0LL;
    v6 = CMegaRect::PrepareData(
           *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * (v1 & (*(_QWORD *)(v5 + 16) - 1LL))),
           (__int64)&v8);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1F2u);
      break;
    }
    ++v1;
  }
  std::vector<unsigned char>::_Tidy((__int64)&v8);
  return v2;
}
