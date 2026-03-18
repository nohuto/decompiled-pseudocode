/*
 * XREFs of ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C008C914
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vDeleteCache(RFONTOBJ *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  v2 = *(_QWORD *)this + 536LL;
  v3 = *(_QWORD **)(*(_QWORD *)this + 560LL);
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = v3;
      v3 = (_QWORD *)*v3;
      if ( !v3 )
        break;
      Win32FreePool(v6);
    }
    Win32FreePool(*(_QWORD *)(*(_QWORD *)this + 480LL));
  }
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v4 = *(_QWORD **)(v2 + 64);
  if ( v4 )
  {
    do
    {
      v7 = (_QWORD *)*v4;
      Win32FreePool(v4);
      v4 = v7;
    }
    while ( v7 );
    *(_QWORD *)(v2 + 64) = 0LL;
  }
  v5 = *(_QWORD *)(*(_QWORD *)this + 632LL);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(*(_QWORD *)this + 632LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 640LL) = 0LL;
  }
}
