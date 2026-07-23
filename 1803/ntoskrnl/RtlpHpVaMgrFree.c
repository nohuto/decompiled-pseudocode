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
  _RTL_RB_TREE *v4; // rbx
  unsigned __int64 v5; // r11
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v8; // r8
  _RTL_BALANCED_NODE *v9; // rax

  v2 = RtlpHpVaMgrRangeCoalesce();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = (_RTL_RB_TREE *)(a1 + 8);
    v5 = v3;
    Min = v4->Min;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && Root )
      Root ^= (unsigned __int64)v4;
    v8 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v5 < *(unsigned __int16 *)(Root + 24) )
        {
          v9 = *(_RTL_BALANCED_NODE **)Root;
          if ( ((unsigned __int8)Min & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_17;
            v9 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v9);
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
          v9 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( ((unsigned __int8)Min & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_11;
            v9 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v9);
          }
          if ( !v9 )
          {
LABEL_11:
            v8 = 1;
            break;
          }
        }
        Root = (unsigned __int64)v9;
      }
    }
    RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)Root, v8, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
