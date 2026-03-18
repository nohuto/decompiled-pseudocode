/*
 * XREFs of ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C003280C
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vDeleteCache(RFONTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx

  v4 = *(_QWORD *)this + 536LL;
  v5 = *(_QWORD **)(*(_QWORD *)this + 560LL);
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = v5;
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        break;
      Win32FreePool(v8, a2, a3);
    }
    Win32FreePool(*(_QWORD *)(*(_QWORD *)this + 480LL), a2, a3);
  }
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v6 = *(_QWORD **)(v4 + 64);
  if ( v6 )
  {
    do
    {
      v9 = (_QWORD *)*v6;
      Win32FreePool(v6, a2, a3);
      v6 = v9;
    }
    while ( v9 );
    *(_QWORD *)(v4 + 64) = 0LL;
  }
  v7 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v7 )
  {
    Win32FreePool(v7, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
  }
}
