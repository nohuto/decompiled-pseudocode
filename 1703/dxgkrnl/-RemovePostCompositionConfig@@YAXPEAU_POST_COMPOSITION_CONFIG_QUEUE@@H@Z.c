/*
 * XREFs of ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01726F0
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C00A6D3C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0171A90 (-GetPreviousConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePostCompositionConfig(
        struct _POST_COMPOSITION_CONFIG_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v5 = (int)a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 7339LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 7340LL;
    WdLogEvent5_WdAssertion(v7);
  }
  memset((char *)a1 + 32 * v5 + 4 * v5 + 8, 0, 0x24uLL);
  if ( *(_DWORD *)a1 == (_DWORD)v5 )
  {
    if ( *((_DWORD *)a1 + 1) == (_DWORD)v5 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v5);
    }
  }
  else if ( *((_DWORD *)a1 + 1) == (_DWORD)v5 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v5);
  }
}
