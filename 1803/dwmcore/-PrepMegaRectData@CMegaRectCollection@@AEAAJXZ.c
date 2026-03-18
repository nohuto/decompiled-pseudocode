/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18001382C
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18000FF4C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D26B4 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v6; // rbp
  int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  v10 = 0LL;
  v6 = v3 + *((_QWORD *)this + 4);
  v9 = 0LL;
  while ( v3 != v6 )
  {
    v7 = CMegaRect::PrepareData(
           *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v3 & (*((_QWORD *)this + 2) - 1LL))),
           (const void **)&v9,
           a3);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1F2u);
      break;
    }
    ++v3;
  }
  std::vector<unsigned char>::_Tidy(&v9);
  return v4;
}
