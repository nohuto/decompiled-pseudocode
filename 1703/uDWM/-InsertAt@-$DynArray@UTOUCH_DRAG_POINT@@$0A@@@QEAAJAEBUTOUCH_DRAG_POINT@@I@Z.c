/*
 * XREFs of ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18006E5BC
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004B4EC (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x1Cu, 1, 0, &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v7 = v6 + 28 * v5;
      do
      {
        LODWORD(v5) = v5 - 1;
        v8 = 28LL * (unsigned int)v5;
        v9 = *(_QWORD *)(v8 + v6 + 16);
        v10 = *(_DWORD *)(v8 + v6 + 24);
        *(_OWORD *)v7 = *(_OWORD *)(v8 + v6);
        *(_QWORD *)(v7 + 16) = v9;
        *(_DWORD *)(v7 + 24) = v10;
        v7 -= 28LL;
      }
      while ( (_DWORD)v5 );
    }
    v11 = v13;
    if ( v13 >= v6 && v13 < 28LL * *(unsigned int *)(a1 + 24) + v6 - 28 )
      v11 = v13 + 28;
    *(_OWORD *)v6 = *(_OWORD *)v11;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v11 + 16);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(v11 + 24);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
