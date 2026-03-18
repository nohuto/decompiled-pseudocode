/*
 * XREFs of ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0067FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001215C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00121E4 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::MarkNoZeroNeed(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2, __int64 a3)
{
  bool v3; // zf
  char *v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rax
  __int64 v9; // rax
  char *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1184) == 0LL;
  v4 = (char *)this + 1184;
  v11 = 0;
  v10 = v4;
  if ( v3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v9 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10, (__int64)a2, a3);
  for ( i = (struct VIDMM_RECYCLE_RANGE *)a2[8]; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    *((_BYTE *)i + 84) &= ~2u;
    if ( i == (struct VIDMM_RECYCLE_RANGE *)a2[9] )
      break;
  }
  if ( v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v10, v6, v7);
}
