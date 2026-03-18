/*
 * XREFs of ?DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z @ 0x18011D224
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@0@Z @ 0x18013AD18 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkManager@@@std@@@.c)
 *     ?erase@?$vector@USuperWetPass@CWetInkManager@@V?$allocator@USuperWetPass@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetPass@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18013ADD4 (-erase@-$vector@USuperWetPass@CWetInkManager@@V-$allocator@USuperWetPass@CWetInkMan_ea_18013ADD4.c)
 *     ?Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSuperWetStrokePartner@@@Z @ 0x18015106C (-Draw@CSuperWetInkRenderer@@QEAAJPEAVCD3DPhysicalSwapChainBuffer@@PEAUIDCompositionDirectInkSupe.c)
 */

__int64 __fastcall CWetInkManager::DrawSuperWetPassForFrame(CWetInkManager *this, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rbx
  int v6; // edi
  signed int v7; // eax
  char v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  v6 = 0;
  while ( v4 != *((_QWORD *)this + 2) )
  {
    if ( *(_QWORD *)(v4 + 16) <= a2 )
    {
      if ( *(_QWORD *)(v4 + 16) >= a2 )
      {
        v7 = CSuperWetInkRenderer::Draw(
               *(CSuperWetInkRenderer **)this,
               *(struct CD3DPhysicalSwapChainBuffer **)(v4 + 8),
               *(struct IDCompositionDirectInkSuperWetStrokePartner **)(v4 + 24));
        v6 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xCCu);
          break;
        }
      }
      v4 = *(_QWORD *)std::vector<CWetInkManager::SuperWetPass>::erase(v2, &v9, v4);
    }
    else
    {
      v4 += 32LL;
    }
  }
  if ( v6 < 0 && (__int64)(v2[1] - *v2) >> 5 )
    std::vector<CWetInkManager::SuperWetPass>::erase(v2, &v9);
  return (unsigned int)v6;
}
