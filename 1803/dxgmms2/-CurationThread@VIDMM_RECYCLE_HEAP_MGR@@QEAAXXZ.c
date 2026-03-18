/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C006D634
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C0056530 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D00 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001D8C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C006D4EC (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2)
{
  PRKPROCESS *v3; // rcx
  bool v4; // zf
  __int64 v5; // rax
  char *v6; // [rsp+28h] [rbp-50h] BYREF
  char v7; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v7 = 0;
  v6 = (char *)this + 1328;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(-1328LL, a2);
    *(_QWORD *)(v5 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v6);
  v3 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 196);
  KeStackAttachProcess(*v3, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 194) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1552)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 192) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 394, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1368), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1432));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 382, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 198), 0, 0);
LABEL_6:
  if ( v7 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v6);
}
