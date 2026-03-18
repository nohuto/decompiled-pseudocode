/*
 * XREFs of DxgkTrimProcessCommitment @ 0x1C01A3910
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkTrimProcessCommitment(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned int *v4; // rax
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  const void *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rax
  void *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGPROCESS *Process; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rdx
  _QWORD v35[4]; // [rsp+28h] [rbp-B0h] BYREF
  void *v36[5]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v37[80]; // [rsp+70h] [rbp-68h] BYREF

  memset(v36, 0, sizeof(v36));
  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v5 = *v4;
  v6 = v5;
  if ( v5 >= 0x28 )
  {
    if ( v5 > 0x28 )
      v6 = 40LL;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    memmove(v36, v9, v6);
    v14 = (int)v36[2];
    if ( ((__int64)v36[2] & 0xFFFFFFFC) != 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 720LL;
      WdLogEvent5_WdWarning(v15);
      return 3221225485LL;
    }
    else
    {
      v16 = v36[1];
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v37, v36[1], 0x2000);
      v21 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v37, 1);
      if ( v21 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v37);
        memset(v35, 0, sizeof(v35));
        v35[0] = Process;
        LODWORD(v35[1]) = v14;
        v35[2] = v36[3];
        Global = DXGGLOBAL::GetGlobal(v28, v27, v29, v30);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)Global,
          (__int64 (__fastcall *)(_QWORD *, __int64))DxgkTrimProcessCommitmentAdapterCallback,
          (__int64)v35,
          2LL);
        v34 = (_QWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v34 = (_QWORD *)MmUserProbeAddress;
        *v34 = v35[3];
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v37, (__int64)v34, v32, v33);
        return 0LL;
      }
      else
      {
        v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        *(_QWORD *)(v22 + 24) = v16;
        WdLogEvent5_WdWarning(v22);
        DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v37, v23, v24, v25);
        return (unsigned int)v21;
      }
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v5, v3);
    *(_QWORD *)(v7 + 24) = 698LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
}
