/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00FB274
 * Callers:
 *     DxgkDestroyCsrssProcess @ 0x1C00A6DA8 (DxgkDestroyCsrssProcess.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00FA908 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00FB2EC (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(DXGADAPTER **this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  SESSION_ADAPTER *v5; // rdi
  DXGADAPTER *v6; // rcx
  _QWORD *v7; // rax
  char *v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rax

  if ( *((_DWORD *)this + 12) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v7[3] = *((unsigned int *)this + 12);
    v7[4] = *((int *)this + 3);
    v7[5] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v7);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, this[7]);
  v5 = this[10];
  while ( v5 != (SESSION_ADAPTER *)(this + 10) )
  {
    v8 = (char *)v5 - 32;
    v5 = *(SESSION_ADAPTER **)v5;
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v4, v3);
    v9[3] = *((unsigned int *)v8 + 18);
    v9[4] = *((unsigned int *)v8 + 4);
    v9[5] = *((int *)this + 3);
    v9[6] = *((unsigned int *)this + 2);
    WdLogEvent5_WdError(v9);
    if ( *((_QWORD *)v8 + 11) || *((_QWORD *)v8 + 75) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v14 + 24) = 2180LL;
      WdLogEvent5_WdAssertion(v14);
    }
    memset(v8 + 88, 0, 0x200uLL);
    *((_QWORD *)v8 + 75) = 0LL;
    *((_DWORD *)v8 + 18) = 0;
    *((_DWORD *)this + 18) &= ~(1 << *((_DWORD *)v8 + 4));
    *((_QWORD *)v8 + 3) = 0LL;
    v15 = v8 + 32;
    v4 = *v15;
    v16 = (_QWORD *)v15[1];
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v16 != v15 )
      __fastfail(3u);
    *v16 = v4;
    *(_QWORD *)(v4 + 8) = v16;
    --*((_DWORD *)this + 19);
  }
  v6 = this[2];
  if ( v6 )
  {
    DXGADAPTER::ReleaseReference(v6);
    this[2] = 0LL;
  }
}
