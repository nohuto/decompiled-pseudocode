/*
 * XREFs of ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800BEDBC
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180007210 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800258E0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180025CB4 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMegaRectCollection::ReplaceMegaRectsWithClippedRects(CMegaRectCollection *this)
{
  bool v1; // cf
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  CMegaRect *v11; // rcx
  int updated; // eax
  LPVOID v13[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-29h]
  int v15; // [rsp+50h] [rbp-21h]
  LPVOID v16[2]; // [rsp+58h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-9h]
  int v18; // [rsp+70h] [rbp-1h]
  LPVOID v19[2]; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  LPVOID lpMem[2]; // [rsp+98h] [rbp+27h]
  __int64 v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]

  v1 = *((_QWORD *)this + 4) < 2uLL;
  v3 = 0;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  *(_OWORD *)lpMem = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( !v1 )
  {
    v5 = CMegaRectCollection::PrepMegaRectData(this);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1CAu);
    }
    else
    {
      v6 = CMegaRectCollection::OccludeRegions(this);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1CBu);
        return v3;
      }
      v7 = *((_QWORD *)this + 3);
      v8 = *(__int64 **)this;
      v9 = v7 + *((_QWORD *)this + 4);
      while ( v7 != v9 )
      {
        v10 = 0LL;
        if ( v8 )
          v10 = *v8;
        v11 = *(CMegaRect **)(*(_QWORD *)(v10 + 8) + 8 * (v7 & (*(_QWORD *)(v10 + 16) - 1LL)));
        if ( *((_QWORD *)v11 + 1) )
        {
          updated = CMegaRect::UpdatePrimitive(v11, (struct CMegaRect::UpdatePrimitiveWorkingBuffers *)v13);
          v3 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1D5u);
            break;
          }
        }
        ++v7;
      }
    }
    if ( lpMem[0] != lpMem[1] && lpMem[0] )
      HeapFree(WPF::g_processHeap, 0, lpMem[0]);
    if ( v19[0] != v19[1] && v19[0] )
      HeapFree(WPF::g_processHeap, 0, v19[0]);
    if ( v16[0] != v16[1] && v16[0] )
      HeapFree(WPF::g_processHeap, 0, v16[0]);
    if ( v13[0] != v13[1] && v13[0] )
      HeapFree(WPF::g_processHeap, 0, v13[0]);
  }
  return v3;
}
