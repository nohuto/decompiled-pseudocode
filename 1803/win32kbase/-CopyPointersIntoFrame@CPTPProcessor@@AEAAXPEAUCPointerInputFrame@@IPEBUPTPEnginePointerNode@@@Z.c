/*
 * XREFs of ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@@Z @ 0x1C01252B4
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0125340 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0125780 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPProcessor::CopyPointersIntoFrame(
        CPTPProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        const struct PTPEnginePointerNode *a4)
{
  unsigned int v4; // r8d
  _OWORD *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  v4 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = (_OWORD *)(*((_QWORD *)a2 + 12) + 232LL);
    do
    {
      ++v4;
      *((_WORD *)v5 - 4) = *((_WORD *)a4 + 2);
      v6 = *(_OWORD *)a4;
      a4 = (const struct PTPEnginePointerNode *)((char *)a4 + 96);
      *v5 = v6;
      v5 += 36;
      *(v5 - 35) = *((_OWORD *)a4 - 5);
      *(v5 - 34) = *((_OWORD *)a4 - 4);
      *(v5 - 33) = *((_OWORD *)a4 - 3);
      *(v5 - 32) = *((_OWORD *)a4 - 2);
      v7 = *((_OWORD *)a4 - 1);
      *((_DWORD *)v5 - 201) |= 0x1000u;
      *(v5 - 31) = v7;
      *((_DWORD *)v5 - 143) = 0;
    }
    while ( v4 < *((_DWORD *)a2 + 12) );
  }
}
