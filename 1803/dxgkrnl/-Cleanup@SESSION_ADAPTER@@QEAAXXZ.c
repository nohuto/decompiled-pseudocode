/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01CE5F0
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C01D0264 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C01D0F50 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01CF160 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this)
{
  _QWORD *v2; // rax
  SESSION_ADAPTER *v3; // rcx
  SESSION_ADAPTER *v4; // rdi
  SESSION_ADAPTER *v5; // r14
  char *v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  SESSION_ADAPTER **v11; // rax
  DXGADAPTER *v12; // rcx

  if ( *((_DWORD *)this + 12) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v2[3] = *((unsigned int *)this + 12);
    v2[4] = *((int *)this + 3);
    v2[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v2);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v4 = this[11];
  while ( v4 != (SESSION_ADAPTER *)(this + 11) )
  {
    v5 = v4;
    v6 = (char *)v4 - 32;
    v4 = *(SESSION_ADAPTER **)v4;
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v7[3] = *((unsigned int *)v6 + 18);
    v7[4] = *((unsigned int *)v6 + 4);
    v7[5] = *((int *)this + 3);
    v7[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v7);
    if ( *((_QWORD *)v6 + 11) || *((_QWORD *)v6 + 75) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 2289LL;
      WdLogEvent5_WdAssertion(v9);
    }
    memset(v6 + 88, 0, 0x200uLL);
    v10 = *((_DWORD *)v6 + 4);
    *((_QWORD *)v6 + 75) = 0LL;
    *((_DWORD *)v6 + 18) = 0;
    *((_DWORD *)this + 20) &= ~(1 << v10);
    *((_QWORD *)v6 + 3) = 0LL;
    v3 = *(SESSION_ADAPTER **)v5;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v5 + 8LL) != v5 || (v11 = (SESSION_ADAPTER **)*((_QWORD *)v5 + 1), *v11 != v5) )
      __fastfail(3u);
    *v11 = v3;
    *((_QWORD *)v3 + 1) = v11;
    --*((_DWORD *)this + 21);
  }
  v12 = this[2];
  if ( v12 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
    this[2] = 0LL;
  }
}
