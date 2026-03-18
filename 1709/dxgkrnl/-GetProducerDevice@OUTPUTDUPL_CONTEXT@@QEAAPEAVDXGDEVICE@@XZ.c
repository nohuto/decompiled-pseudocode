/*
 * XREFs of ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C01CBFC8
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00907E0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 * Callees:
 *     <none>
 */

struct DXGDEVICE *__fastcall OUTPUTDUPL_CONTEXT::GetProducerDevice(OUTPUTDUPL_CONTEXT *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = 0LL;
  v2 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)this + v2 + 6);
      v5 = *(_QWORD *)(v4 + 8);
      if ( v1 )
        goto LABEL_5;
      if ( v5 )
        break;
LABEL_8:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 10) )
        return (struct DXGDEVICE *)v1;
    }
    v1 = *(_QWORD *)(v4 + 8);
LABEL_5:
    if ( v5 && v1 != v5 )
    {
      v6 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v6 + 24) = 2041LL;
      WdLogEvent5_WdAssertion(v6);
    }
    goto LABEL_8;
  }
  return (struct DXGDEVICE *)v1;
}
