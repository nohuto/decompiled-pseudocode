/*
 * XREFs of ?EvictAllocationCallback@@YAEPEAX0@Z @ 0x1C00AA220
 * Callers:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z @ 0x1C00B2384 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6AE11@Z@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall EvictAllocationCallback(_BYTE *a1, char *a2)
{
  char v2; // bl
  char *i; // r8
  char *v6; // rdx
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r9
  char result; // al
  __int64 v12; // rax

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( *((_DWORD *)a2 + 41) || (*((_DWORD *)a2 + 19) & 0x100) != 0 )
  {
    if ( *((_QWORD *)a2 + 17) )
    {
      v12 = WdLogNewEntry5_WdWarning(a1);
      *(_QWORD *)(v12 + 24) = a2;
      WdLogEvent5_WdWarning(v12);
      result = 0;
      a1[8] = 0;
      return result;
    }
    return 1;
  }
  if ( !*((_QWORD *)a2 + 17) )
    return 1;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v6 = (char *)*((_QWORD *)a2 + 37);
LABEL_17:
  if ( v6 == a2 + 296 )
  {
    v2 = 1;
  }
  else
  {
    for ( i = (char *)*((_QWORD *)v6 - 2); ; i = *(char **)i )
    {
      if ( i == v6 - 16 )
      {
        v6 = *(char **)v6;
        goto LABEL_17;
      }
      v7 = (_QWORD *)*((_QWORD *)i - 4);
      if ( !v7[3] || (*(_DWORD *)(v7[1] + 48LL) & 2) != 0 )
        break;
      v8 = v7 + 22;
      if ( !v7[22] )
      {
        v9 = *(_QWORD *)a1;
        v10 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
        if ( *v10 != *(_QWORD *)a1 )
          __fastfail(3u);
        *v8 = v9;
        v8[1] = v10;
        *v10 = v8;
        *(_QWORD *)(v9 + 8) = v8;
      }
    }
    a1[8] = 0;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), (__int64)v6, (__int64)i);
  return v2;
}
