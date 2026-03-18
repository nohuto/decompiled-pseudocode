/*
 * XREFs of ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C01D3B80
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

void __fastcall TTSqm(struct tagPOINT a1, const struct tagTOUCHTARGETINGCONTACT *a2)
{
  unsigned int v2; // edi
  LONG x; // ebx
  int v5; // esi
  int v6; // r9d
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  LONG y; // [rsp+44h] [rbp+Ch]

  y = a1.y;
  v2 = 0;
  x = a1.x;
  if ( gSqmIsOptedIn )
  {
    if ( a1.x || (v5 = 0, a1.y) )
      v5 = 1;
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8657LL, v5 != 0 ? 0x3E8 : 0);
    if ( v5 )
    {
      v6 = 0x7FFFFFFF;
      v7 = 0x7FFFFFFF;
      v8 = *((int *)a2 + 46) * (__int64)(int)abs32(x) / 1000;
      if ( (unsigned __int64)(v8 + 0x80000000LL) <= 0xFFFFFFFF )
        v7 = v8;
      v9 = *((int *)a2 + 47) * (__int64)(int)abs32(y) / 1000;
      if ( (unsigned __int64)(v9 + 0x80000000LL) <= 0xFFFFFFFF )
        v6 = v9;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8293LL, (unsigned int)(v6 + v7));
      v10 = 0LL;
      if ( x > 0 )
        v10 = 1000LL;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8294LL, v10);
      if ( y > 0 )
        v2 = 1000;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8634LL, v2);
    }
  }
}
