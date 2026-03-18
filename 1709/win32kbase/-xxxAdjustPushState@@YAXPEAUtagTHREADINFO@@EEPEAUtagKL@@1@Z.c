/*
 * XREFs of ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C012C540
 * Callers:
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C012C71C (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     InternalMapVirtualKeyEx @ 0x1C00582A0 (InternalMapVirtualKeyEx.c)
 */

void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned int v9; // r15d
  char v10; // al
  unsigned __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // eax

  if ( a2 )
  {
    v9 = a2;
    v10 = a2 & 3;
    v11 = (unsigned __int64)a2 >> 2;
    v12 = 1 << (2 * v10);
    if ( ((unsigned __int8)v12 & gafRawKeyState[v11]) != 0
      || ((unsigned __int8)v12 & *((_BYTE *)&gafAsyncKeyState + v11)) != 0
      || (*(_BYTE *)(*((_QWORD *)a1 + 51) + v11 + 224) & (unsigned __int8)v12) != 0 )
    {
      v13 = InternalMapVirtualKeyEx(v9, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v14 = InternalMapVirtualKeyEx(v9, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v13 )
      {
        if ( !v14 )
          xxxKeyEvent((CAsyncKeyEventMonitor *)(a2 | 0x8000u), v13 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
      }
    }
  }
  if ( a3 )
  {
    v15 = (unsigned __int64)a3 >> 2;
    v16 = 1 << (2 * (a3 & 3));
    if ( ((unsigned __int8)v16 & gafRawKeyState[v15]) != 0
      || ((unsigned __int8)v16 & *((_BYTE *)&gafAsyncKeyState + v15)) != 0
      || (*(_BYTE *)(*((_QWORD *)a1 + 51) + v15 + 224) & (unsigned __int8)v16) != 0 )
    {
      v17 = InternalMapVirtualKeyEx(a3, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v18 = InternalMapVirtualKeyEx(a3, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v17 )
      {
        if ( !v18 )
          xxxKeyEvent((CAsyncKeyEventMonitor *)(a3 | 0x8000u), v17 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
      }
    }
  }
}
