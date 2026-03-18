/*
 * XREFs of ?GetSurfaceUpdates@CCompositionSurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18013FBBC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276988, 3u, FrameSurfaceUpdates | 0x10000000, 0x7Eu);
  }
  return v4;
}
