/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0064738
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C006D300 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00113A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011428 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00645F0 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(VIDMM_RECYCLE_HEAP_MGR *this, __int64 a2, __int64 a3)
{
  PRKPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  char *v9; // [rsp+28h] [rbp-50h] BYREF
  char v10; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v10 = 0;
  v9 = (char *)this + 1184;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1184LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(-1184LL, a2);
    *(_QWORD *)(v8 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v9, a2, a3);
  v4 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 178);
  KeStackAttachProcess(*v4, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 176) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1408)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 174) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1392) )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)this + 358, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 346, 0);
    if ( !v7 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 358, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 1224), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1288));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 346, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 180), 0, 0);
LABEL_6:
  if ( v10 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v9, v5, v6);
}
