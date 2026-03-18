/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C00B2340
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C00BAD50 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, char *a2)
{
  char v2; // bl
  __int64 v5; // rcx
  char *i; // r8
  char *v7; // rdx
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r9
  char result; // al
  __int64 v13; // rax

  v2 = 0;
  if ( !a2 )
    return 1;
  v5 = *(unsigned int *)(*((_QWORD *)a2 + 63) + 12LL);
  if ( (_DWORD)v5 || (*((_DWORD *)a2 + 19) & 0x100) != 0 )
  {
    if ( *((_QWORD *)a2 + 17) )
    {
      v13 = WdLogNewEntry5_WdWarning(v5, a2);
      *(_QWORD *)(v13 + 24) = a2;
      WdLogEvent5_WdWarning(v13);
      result = 0;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !*((_QWORD *)a2 + 17) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5) + 24) = a2;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v7 = (char *)*((_QWORD *)a2 + 37);
LABEL_17:
  if ( v7 == a2 + 296 )
  {
    v2 = 1;
  }
  else
  {
    for ( i = (char *)*((_QWORD *)v7 - 2); ; i = *(char **)i )
    {
      if ( i == v7 - 16 )
      {
        v7 = *(char **)v7;
        goto LABEL_17;
      }
      v8 = (_QWORD *)*((_QWORD *)i - 4);
      if ( !v8[3] || (*(_DWORD *)(v8[1] + 88LL) & 2) != 0 )
        break;
      v9 = v8 + 22;
      if ( !v8[22] )
      {
        v10 = *(_QWORD *)a1;
        v11 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v11 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v9 = v10;
        v9[1] = v11;
        *v11 = v9;
        *(_QWORD *)(v10 + 8) = v9;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), (__int64)v7, (__int64)i);
  return v2;
}
