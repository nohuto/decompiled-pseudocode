/*
 * XREFs of ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C009DD68
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CalculateLockData(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rbx
  int v4; // r8d
  __int64 v5; // r10
  int v6; // edi
  __int64 v7; // r9
  int v8; // r11d
  __int64 v9; // rax

  v3 = *a3;
  v4 = 0;
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  v5 = *v3;
  if ( !*((_DWORD *)v3 + 19) )
  {
    v6 = *(_DWORD *)(v5 + 80);
    v7 = *(_QWORD *)(v5 + 136);
    *(_DWORD *)a2 = 1;
    if ( (v6 & 0x80u) == 0 )
    {
      *(_DWORD *)a2 = 5;
      return a2;
    }
    if ( (*(_DWORD *)(a1 + 7040) & 0x20) != 0 )
    {
      if ( v7 )
      {
LABEL_5:
        *(_DWORD *)a2 = 4;
LABEL_6:
        *(_BYTE *)(a2 + 4) = 1;
      }
    }
    else if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 80);
      if ( (v8 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v5 + 504) & 4) != 0 && !*(_BYTE *)(v7 + 474) || (v6 & 0x8000) != 0 )
          goto LABEL_5;
        if ( (v8 & 4) != 0 )
        {
          if ( (v3[4] & 1) == 0 )
          {
            *(_DWORD *)a2 = 3;
            if ( *(_QWORD *)(v5 + 264) )
              goto LABEL_6;
          }
        }
        else
        {
          if ( (v8 & 0x2000) == 0 )
            goto LABEL_5;
          v9 = *(_QWORD *)(v5 + 104);
          if ( !v9 || (*(_BYTE *)(v9 + 32) & 1) == 0 )
          {
            *(_BYTE *)(a2 + 4) = 1;
            v4 = 2;
          }
          *(_DWORD *)a2 = v4;
        }
      }
    }
  }
  return a2;
}
