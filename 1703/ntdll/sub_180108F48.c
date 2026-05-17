/*
 * XREFs of sub_180108F48 @ 0x180108F48
 * Callers:
 *     LdrFlushAlternateResourceModules @ 0x18008E170 (LdrFlushAlternateResourceModules.c)
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180109904 @ 0x180109904 (sub_180109904.c)
 *     sub_180109B30 @ 0x180109B30 (sub_180109B30.c)
 *     sub_180109C90 @ 0x180109C90 (sub_180109C90.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 */

_BOOL8 __fastcall sub_180108F48(_QWORD *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  int v5; // eax
  __int64 v6; // rcx
  BOOL v7; // edi
  __int64 v8; // rsi

  v1 = 0LL;
  v3 = 1;
  if ( !a1 )
    return 0LL;
  if ( a1[1] )
  {
    v5 = sub_18010E10C();
    a1[1] = 0LL;
    v3 = v5;
  }
  v6 = a1[2];
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 64) )
    {
      sub_180109B30();
      *(_QWORD *)(a1[2] + 64LL) = 0LL;
    }
    v1 = *(unsigned int *)(*(_QWORD *)(a1[2] + 24LL) + 68LL);
    v7 = (unsigned int)sub_180109904() && v3;
    a1[2] = 0LL;
  }
  else
  {
    v7 = 0;
  }
  if ( a1[3] )
  {
    if ( (_DWORD)v1 )
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)(v8 + a1[3]) )
        {
          v7 = (unsigned int)sub_180109C90() && v7;
          *(_QWORD *)(v8 + a1[3]) = 0LL;
        }
        v8 += 8LL;
        --v1;
      }
      while ( v1 );
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1[3]);
    a1[3] = 0LL;
  }
  else
  {
    v7 = 0;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return v7;
}
