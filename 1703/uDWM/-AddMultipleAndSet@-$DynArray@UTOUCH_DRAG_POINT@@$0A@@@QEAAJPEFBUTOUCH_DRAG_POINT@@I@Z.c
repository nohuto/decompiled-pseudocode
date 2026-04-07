/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJPEFBUTOUCH_DRAG_POINT@@I@Z @ 0x18008C29C
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18004B068 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::AddMultipleAndSet(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v3 )
  {
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x1Cu, 1, a2);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xC0u);
    }
    else
    {
      v8 = *(_QWORD *)a1 + 28 * v3;
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  return v7;
}
