/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C020FED8
 * Callers:
 *     xxxTrackThumb @ 0x1C0211C00 (xxxTrackThumb.c)
 * Callees:
 *     DrawThumb2 @ 0x1C0082658 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0082D64 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // r9
  INT v9; // r10d
  struct tagWND *v10; // rdx
  __int64 DCEx; // rax
  int v12; // edx
  HDC v13; // rbx
  HBRUSH ColorObjects; // r15
  __int64 v15; // r12
  _DWORD *v16; // r14

  v3 = a3;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
  if ( v6 && a3 != *(_DWORD *)(v6 + 76) )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)a2 + 15);
      if ( v3 >= v7 )
      {
        v9 = *((_DWORD *)a2 + 14);
        if ( v3 < v9 + v7 )
          v8 = v9
             ? (unsigned int)(*(_DWORD *)a2
                            + EngMulDiv(
                                *((_DWORD *)a2 + 1)
                              - (*((_DWORD *)a2 + 2) != 0 ? *((_DWORD *)a2 + 2) - 1 : 0)
                              - *(_DWORD *)a2,
                                v3 - v7,
                                v9))
             : (unsigned int)(*(_DWORD *)a2 - 1);
        else
          v8 = *((_DWORD *)a2 + 1) - ((*((_DWORD *)a2 + 2) - 1) & (unsigned int)-(*((_DWORD *)a2 + 2) != 0));
      }
      else
      {
        v8 = *(unsigned int *)a2;
      }
      *(_DWORD *)(v6 + 84) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(v6 + 80) )
        break;
      v10 = *(struct tagWND **)(v6 + 24);
      if ( v10 )
        xxxDoScroll(*(struct tagWND **)(v6 + 16), v10, 5LL, v8, (*(_DWORD *)v6 >> 1) & 1);
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
      if ( !v6 || !*(_QWORD *)(v6 + 48) )
        return;
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 84);
      if ( v3 < *((_DWORD *)a2 + 15) + *((_DWORD *)a2 + 14) )
        break;
      v3 = *((_DWORD *)a2 + 15) + *((_DWORD *)a2 + 14);
    }
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v12 = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 13) = v3;
    *((_DWORD *)a2 + 12) = v3 + v12;
    v13 = (HDC)DCEx;
    ColorObjects = (HBRUSH)xxxGetColorObjects(a1, DCEx);
    v15 = GreSelectBrush(v13, ColorObjects);
    v16 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 688LL);
    if ( v16 )
    {
      DrawThumb2((__int64)a1, a2, v13, ColorObjects, (*v16 >> 1) & 1, 0);
      GreSelectBrush(v13, v15);
      _ReleaseDC(v13);
      v16[19] = v3;
    }
    else
    {
      _ReleaseDC(v13);
    }
  }
}
