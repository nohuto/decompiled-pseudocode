/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0083CA0
 * Callers:
 *     xxxSetScrollBar @ 0x1C0083690 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C0083C74 (xxxEnableScrollBar.c)
 * Callees:
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     _InitPwSB @ 0x1C0077F80 (_InitPwSB.c)
 *     xxxDrawScrollBar @ 0x1C0082E30 (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, int a2, int a3)
{
  int *inited; // rbx
  unsigned int v4; // esi
  int v8; // r12d
  int v9; // r14d
  HDC DCEx; // rbp
  struct tagWND *v12; // rcx
  struct tagWND *v13; // rcx

  inited = (int *)*((_QWORD *)a1 + 24);
  v4 = 0;
  v8 = 0;
  if ( inited )
  {
    v9 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v9 = 0;
    inited = (int *)InitPwSB((__int64)a1);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( a2 && a2 != 3
      || (a3 ? (*inited |= a3) : (*inited &= 0xFFFFFFFC),
          (*inited == v9
        || (v8 = 1, v9 = *inited, (*((_BYTE *)a1 + 56) & 4) == 0)
        || (*((_BYTE *)a1 + 71) & 0x20) != 0
        || !(unsigned int)IsVisible((__int64)a1)
        || (xxxDrawScrollBar(v13, DCEx, 0), inited == *((int **)a1 + 24)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 1) == 0
        || (xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967290LL, 1LL, 1), inited == *((int **)a1 + 24)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 2) == 0
        || (xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967290LL, 5LL, 1), inited == *((int **)a1 + 24)))) )
    {
      if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_15;
      *inited = a3 ? (4 * a3) | *inited : *inited & 0xFFFFFFF3;
      if ( *inited == v9 )
        goto LABEL_15;
      v8 = 1;
      if ( (*((_BYTE *)a1 + 56) & 2) == 0
        || (*((_BYTE *)a1 + 71) & 0x20) != 0
        || !(unsigned int)IsVisible((__int64)a1)
        || (xxxDrawScrollBar(v12, DCEx, 1u), inited == *((int **)a1 + 24)) )
      {
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967291LL, 1LL, 1);
          if ( inited != *((int **)a1 + 24) )
            goto LABEL_16;
        }
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 8) != 0 )
          xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 4294967291LL, 5LL, 1);
LABEL_15:
        v4 = v8;
LABEL_16:
        _ReleaseDC(DCEx);
        return v4;
      }
    }
    _ReleaseDC(DCEx);
  }
  return 0LL;
}
