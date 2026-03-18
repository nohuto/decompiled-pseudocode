/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C01CFB8C
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01CECD4 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rax
  SIZE_T v8; // rax
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  char *v14; // rcx

  v3 = (unsigned int)a2;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3686LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((struct _KTHREAD **)this + 11) != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3687LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)this + 18);
  do
    v6 *= 2;
  while ( (unsigned int)v3 >= v6 );
  v7 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2);
  v7[3] = *((unsigned int *)this + 18);
  v7[4] = v6;
  v7[5] = v3;
  WdLogEvent5_WdEvent(v7);
  v8 = 8LL * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, 0x4B677844u, PagedPool);
  v11 = v9;
  if ( v9 )
  {
    memmove(v9, *((const void **)this + 5), 8LL * *((unsigned int *)this + 18));
    memset(&v11[8 * *((unsigned int *)this + 18)], 0, 8LL * (v6 - *((_DWORD *)this + 18)));
    v14 = (char *)*((_QWORD *)this + 5);
    if ( v14 != (char *)this + 48 )
      operator delete[](v14);
    *((_QWORD *)this + 5) = v11;
    result = 0LL;
    *((_DWORD *)this + 18) = v6;
  }
  else
  {
    *((_DWORD *)this + 32) |= 1u;
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = v6;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
  return result;
}
