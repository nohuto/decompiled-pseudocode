/*
 * XREFs of ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0098E28
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CalculateLockData(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // r11
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // r8
  int v7; // r10d
  bool v8; // zf
  __int64 v9; // rax

  v3 = *a3;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  v4 = *v3;
  if ( !*((_DWORD *)v3 + 19) )
  {
    v5 = *(_DWORD *)(v4 + 80);
    v6 = *(_QWORD *)(v4 + 136);
    *(_DWORD *)a2 = 1;
    if ( (v5 & 0x80u) == 0 )
    {
      *(_DWORD *)a2 = 5;
      return a2;
    }
    if ( (*(_DWORD *)(a1 + 6464) & 0x20) != 0 )
    {
      if ( v6 )
      {
LABEL_5:
        *(_DWORD *)a2 = 4;
LABEL_6:
        *(_BYTE *)(a2 + 4) = 1;
      }
    }
    else if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 80);
      if ( (v7 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v4 + 504) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 300LL) & 8) == 0
          || (v5 & 0x4000) != 0 )
        {
          goto LABEL_5;
        }
        if ( (v7 & 4) == 0 )
        {
          if ( (v7 & 0x2000) != 0 )
          {
            v9 = *(_QWORD *)(v4 + 104);
            if ( v9 && (*(_BYTE *)(v9 + 32) & 1) != 0 )
            {
              *(_DWORD *)a2 = 0;
              return a2;
            }
            *(_DWORD *)a2 = 2;
            goto LABEL_6;
          }
          goto LABEL_5;
        }
        if ( (v3[4] & 1) == 0 )
        {
          v8 = *(_QWORD *)(v4 + 264) == 0LL;
          *(_DWORD *)a2 = 3;
          if ( !v8 )
            goto LABEL_6;
        }
      }
    }
  }
  return a2;
}
