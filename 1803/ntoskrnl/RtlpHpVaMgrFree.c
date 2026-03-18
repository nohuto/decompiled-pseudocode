/*
 * XREFs of RtlpHpVaMgrFree @ 0x140296EB4
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402969E4 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlpHpVaMgrRangeCoalesce @ 0x140297018 (RtlpHpVaMgrRangeCoalesce.c)
 */

__int64 __fastcall RtlpHpVaMgrFree(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int16 v3; // cx
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // r8
  unsigned __int64 v9; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = (unsigned __int64 *)(a1 + 8);
    v5 = v3;
    v6 = v4[1];
    v7 = *v4;
    if ( (v6 & 1) != 0 && v7 )
      v7 ^= (unsigned __int64)v4;
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( v5 < *(unsigned __int16 *)(v7 + 24) )
        {
          v9 = *(_QWORD *)v7;
          if ( (v6 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_17;
            v9 ^= v7;
          }
          if ( !v9 )
          {
LABEL_17:
            v8 = 0;
            break;
          }
        }
        else
        {
          v9 = *(_QWORD *)(v7 + 8);
          if ( (v6 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_11;
            v9 ^= v7;
          }
          if ( !v9 )
          {
LABEL_11:
            v8 = 1;
            break;
          }
        }
        v7 = v9;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)v4, v7, v8, (_QWORD *)v2);
    return 0LL;
  }
  return v2;
}
