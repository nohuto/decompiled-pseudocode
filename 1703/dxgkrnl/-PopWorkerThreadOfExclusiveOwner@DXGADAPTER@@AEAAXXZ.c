/*
 * XREFs of ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C0006BCC
 * Callers:
 *     ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0002F1C (--1ADAPTEROWNERTRACKER@@QEAA@XZ.c)
 *     ?DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z @ 0x1C00A62C0 (-DxgkCddPopWorkerThreadOfOwner@@YAXQEAX0@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::PopWorkerThreadOfExclusiveOwner(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _ERESOURCE *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v7 + 24) = 2395LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !this[20] )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v8[3] = 275LL;
    v8[4] = 17LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v6 = this[21];
  this[21] = 0LL;
  this[20] = v6;
}
