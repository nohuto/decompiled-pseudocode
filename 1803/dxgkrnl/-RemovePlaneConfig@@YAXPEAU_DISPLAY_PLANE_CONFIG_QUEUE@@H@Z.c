/*
 * XREFs of ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x1C0156880
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0150E84 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C010E014 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C010F308 (-GetNextConfigIndex@@YAHH@Z.c)
 */

void __fastcall RemovePlaneConfig(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax

  v3 = a2;
  if ( *(_DWORD *)a1 == -1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 7979LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)a1 + 1) == -1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 7980LL;
    WdLogEvent5_WdAssertion(v5);
  }
  memset((char *)a1 + 80 * v3 + 8, 0, 0x50uLL);
  v6 = *((_DWORD *)a1 + 1);
  if ( *(_DWORD *)a1 == (_DWORD)v3 )
  {
    if ( v6 == (_DWORD)v3 )
    {
      *((_DWORD *)a1 + 1) = -1;
      *(_DWORD *)a1 = -1;
    }
    else
    {
      *(_DWORD *)a1 = GetPreviousConfigIndex(v3);
    }
  }
  else if ( v6 == (_DWORD)v3 )
  {
    *((_DWORD *)a1 + 1) = GetNextConfigIndex(v3);
  }
}
