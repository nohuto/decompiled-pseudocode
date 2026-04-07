/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800151F4
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002FEE0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CWindowData *,0>::InsertAt(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *((_DWORD *)a1 + 6) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
  }
  else
  {
    v13 = a2;
    v5 = DynArrayImpl<0>::Grow((_DWORD)a1, 8, 1, 0, (__int64)&v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1CDu);
    }
    else
    {
      ++*((_DWORD *)a1 + 6);
      v7 = *a1;
      v8 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
      if ( (unsigned int)v8 > (unsigned int)v4 )
      {
        v9 = (_QWORD *)(v7 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v9-- = *(_QWORD *)(v7 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v4 );
      }
      v10 = v13;
      v11 = (_QWORD *)(v7 + 8 * v4);
      if ( v13 >= v11 && (unsigned __int64)v13 < v7 + 8 * ((unsigned __int64)*((unsigned int *)a1 + 6) - 1) )
        v10 = v13 + 1;
      *v11 = *v10;
    }
  }
  return v6;
}
