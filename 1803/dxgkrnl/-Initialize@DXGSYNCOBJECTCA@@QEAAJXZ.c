/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C01C0ACC
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F9840 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD *v7; // rax
  int v8; // eax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x4B677844u);
  v4 = 0LL;
  *((_QWORD *)this + 35) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v7 = (_QWORD *)(*((_QWORD *)this + 35) + 16LL);
    v7[1] = v7;
    *v7 = v7;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 35) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 35));
    v8 = *((_DWORD *)this + 42);
    if ( v8 == 3 || v8 == 5 )
      v4 = *((_QWORD *)this + 22);
    *(_QWORD *)(*((_QWORD *)this + 35) + 40LL) = v4;
    *(_QWORD *)(*((_QWORD *)this + 35) + 32LL) = v4;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v5 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v5);
    return 3221225495LL;
  }
}
