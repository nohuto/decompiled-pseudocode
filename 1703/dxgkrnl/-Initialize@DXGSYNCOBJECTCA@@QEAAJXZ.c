/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C01A5DF8
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00D8840 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v6; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x4B677844u);
  *((_QWORD *)this + 31) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v6 = (_QWORD *)(*((_QWORD *)this + 31) + 16LL);
    v6[1] = v6;
    *v6 = v6;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 31) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 31));
    *(_QWORD *)(*((_QWORD *)this + 31) + 40LL) = *((_QWORD *)this + 19);
    *(_QWORD *)(*((_QWORD *)this + 31) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 31) + 40LL);
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
