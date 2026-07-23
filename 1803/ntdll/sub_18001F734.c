/*
 * XREFs of sub_18001F734 @ 0x18001F734
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

__int64 __fastcall sub_18001F734(__int64 a1, __int64 a2, int a3)
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
    if ( (byte_18015D028 & 8) != 0 )
      sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
  }
  return v3;
}
