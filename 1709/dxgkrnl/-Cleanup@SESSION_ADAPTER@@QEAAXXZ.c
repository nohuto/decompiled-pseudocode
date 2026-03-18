/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00B331C
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00B2E3C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00FAB8C (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00B3394 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this)
{
  __int64 v2; // rcx
  SESSION_ADAPTER *v3; // rdi
  DXGADAPTER *v4; // rcx
  _QWORD *v5; // rax
  char *v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  _QWORD *v11; // rsi
  _QWORD *v12; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v5[3] = *((unsigned int *)this + 12);
    v5[4] = *((int *)this + 3);
    v5[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v5);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v3 = this[10];
  while ( v3 != (SESSION_ADAPTER *)(this + 10) )
  {
    v6 = (char *)v3 - 32;
    v3 = *(SESSION_ADAPTER **)v3;
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v2);
    v7[3] = *((unsigned int *)v6 + 18);
    v7[4] = *((unsigned int *)v6 + 4);
    v7[5] = *((int *)this + 3);
    v7[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v7);
    if ( *((_QWORD *)v6 + 11) || *((_QWORD *)v6 + 75) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 2209LL;
      WdLogEvent5_WdAssertion(v9);
    }
    memset(v6 + 88, 0, 0x200uLL);
    v10 = *((_DWORD *)v6 + 4);
    *((_QWORD *)v6 + 75) = 0LL;
    *((_DWORD *)v6 + 18) = 0;
    *((_DWORD *)this + 18) &= ~(1 << v10);
    *((_QWORD *)v6 + 3) = 0LL;
    v11 = v6 + 32;
    v2 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v12 = (_QWORD *)v11[1], (_QWORD *)*v12 != v11) )
      __fastfail(3u);
    *v12 = v2;
    *(_QWORD *)(v2 + 8) = v12;
    --*((_DWORD *)this + 19);
  }
  v4 = this[2];
  if ( v4 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
    this[2] = 0LL;
  }
}
