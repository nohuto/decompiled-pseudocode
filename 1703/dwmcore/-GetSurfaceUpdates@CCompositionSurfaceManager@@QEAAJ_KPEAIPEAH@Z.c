/*
 * XREFs of ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x180133B30
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceManager::GetSurfaceUpdates(
        CCompositionSurfaceManager *this,
        __int64 a2,
        unsigned int *a3,
        int *a4)
{
  unsigned int v4; // ebx
  int FrameSurfaceUpdates; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 0;
  FrameSurfaceUpdates = NtDCompositionGetFrameSurfaceUpdates(&v7, a3, a4);
  if ( FrameSurfaceUpdates < 0 )
  {
    v4 = FrameSurfaceUpdates | 0x10000000;
    MilInstrumentationCheckHR(0x14u, &dword_1801F35B8, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Eu);
  }
  return v4;
}
