/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x140297EF0
 * Callers:
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  _RTL_RB_TREE *v7; // rcx
  unsigned int v8; // r10d
  unsigned __int64 Root; // rdx
  BOOLEAN v10; // r8
  int v11; // r9d
  _RTL_BALANCED_NODE *v12; // rax

  v3 = 0LL;
  if ( !a3 && (*(_BYTE *)(a1 + 13) & 2) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = (_RTL_RB_TREE *)(a1 + 56);
    v8 = *(_DWORD *)(a2 + 28);
    Root = (unsigned __int64)v7->Root;
    if ( (v6 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v7;
      else
        Root = 0LL;
    }
    v10 = 0;
    v11 = v6 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v8 < *(_DWORD *)(Root + 28) )
        {
          v12 = *(_RTL_BALANCED_NODE **)Root;
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_21;
            v12 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v12);
          }
          if ( !v12 )
          {
LABEL_21:
            v10 = 0;
            break;
          }
        }
        else
        {
          v12 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_15;
            v12 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v12);
          }
          if ( !v12 )
          {
LABEL_15:
            v10 = 1;
            break;
          }
        }
        Root = (unsigned __int64)v12;
      }
    }
    RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v10, (PRTL_BALANCED_NODE)a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
      (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8));
  }
  return v3;
}
