/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C00697A8
 * Callers:
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D794 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0069A04 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0069BC0 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00912D4 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, int a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdi
  int v5; // edi
  __int64 **v6; // rcx
  __int64 *v7; // rcx
  __int64 **v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 *v10; // rcx
  __int64 **v11; // rax
  bool v12; // zf
  __int64 *v13; // rax
  __int64 **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 **v17; // rax

  LODWORD(v2) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = (__int64 *)WdLogNewEntry5_WdTrace(a1);
    v2[3] = (__int64)a1;
    v2[4] = *((int *)a1 + 28);
    v2[5] = v4;
  }
  if ( !(_DWORD)v4 )
  {
    v7 = (__int64 *)*a1;
    v8 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v8 != a1 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (__int64)v8;
    *a1 = 0LL;
    a1[1] = 0LL;
    *((_DWORD *)a1 + 28) = 0;
    v9 = (struct _KEVENT *)a1[15];
    goto LABEL_12;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( *((_DWORD *)a1 + 28) == 2 )
    {
      v10 = (__int64 *)*a1;
      v11 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v11 != a1 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (__int64)v11;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v12 = *((_BYTE *)a1 + 128) == 0;
    v13 = (__int64 *)a1[10];
    *((_DWORD *)a1 + 28) = 1;
    if ( v12 )
    {
      if ( *((_BYTE *)a1 + 129) )
      {
        v14 = (__int64 **)v13[11];
        v15 = v13 + 10;
        if ( *v14 != v15 )
          __fastfail(3u);
      }
      else
      {
        v14 = (__int64 **)v13[9];
        v15 = v13 + 8;
        if ( *v14 != v15 )
          __fastfail(3u);
      }
    }
    else if ( *((_DWORD *)a1 + 29) == 3 )
    {
      v14 = (__int64 **)v13[9];
      v15 = v13 + 8;
      if ( *v14 != v15 )
        __fastfail(3u);
    }
    else
    {
      v14 = (__int64 **)v13[13];
      v15 = v13 + 12;
      if ( *v14 != v15 )
        __fastfail(3u);
    }
    *a1 = (__int64)v15;
    a1[1] = (__int64)v14;
    *v14 = a1;
    v15[1] = (__int64)a1;
    v9 = *(struct _KEVENT **)(a1[10] + 152);
LABEL_12:
    LODWORD(v2) = KeSetEvent(v9, 0, 0);
    return (int)v2;
  }
  if ( v5 == 1 )
  {
    if ( *((_DWORD *)a1 + 28) == 1 )
    {
      v16 = (__int64 *)*a1;
      v17 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v17 != a1 )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = (__int64)v17;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v2 = (__int64 *)(a1[10] + 112);
    v6 = *(__int64 ***)(a1[10] + 120);
    if ( *v6 != v2 )
      __fastfail(3u);
    *a1 = (__int64)v2;
    a1[1] = (__int64)v6;
    *v6 = a1;
    v2[1] = (__int64)a1;
    *((_DWORD *)a1 + 28) = 2;
  }
  return (int)v2;
}
