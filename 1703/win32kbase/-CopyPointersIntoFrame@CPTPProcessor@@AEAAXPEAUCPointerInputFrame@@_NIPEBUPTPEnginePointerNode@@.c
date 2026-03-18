/*
 * XREFs of ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_NIPEBUPTPEnginePointerNode@@@Z @ 0x1C012B1D0
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C012B260 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPProcessor::CopyPointersIntoFrame(
        CPTPProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4,
        const struct PTPEnginePointerNode *a5)
{
  unsigned int v6; // r9d
  _OWORD *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  v6 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v7 = (_OWORD *)(*((_QWORD *)a2 + 12) + 248LL);
    do
    {
      ++v6;
      *((_WORD *)v7 - 4) = *((_WORD *)a5 + 2);
      v8 = *(_OWORD *)a5;
      a5 = (const struct PTPEnginePointerNode *)((char *)a5 + 96);
      *v7 = v8;
      v7 += 38;
      *(v7 - 37) = *((_OWORD *)a5 - 5);
      *(v7 - 36) = *((_OWORD *)a5 - 4);
      *(v7 - 35) = *((_OWORD *)a5 - 3);
      *(v7 - 34) = *((_OWORD *)a5 - 2);
      v9 = *((_OWORD *)a5 - 1);
      *((_DWORD *)v7 - 213) |= 0x1000u;
      *(v7 - 33) = v9;
      *((_DWORD *)v7 - 151) = 0;
    }
    while ( v6 < *((_DWORD *)a2 + 12) );
  }
}
