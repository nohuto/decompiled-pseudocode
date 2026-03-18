/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1C009AE30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned int *v4; // rax
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  const void *v9; // rdx
  void *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGPROCESS *Process; // rax
  void *v17; // rbx
  void **v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  void *v21[5]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+50h] [rbp-68h] BYREF

  memset(v21, 0, 0x20uLL);
  v4 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (unsigned int *)MmUserProbeAddress;
  v5 = *v4;
  v6 = v5;
  if ( v5 >= 0x20 )
  {
    if ( v5 > 0x20 )
      v6 = 32LL;
    v9 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    memmove(v21, v9, v6);
    v10 = v21[1];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22, v21[1], 0x1000u);
    v13 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v22, 0);
    if ( v13 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v12, v11, v14, v15);
      *(_QWORD *)(v20 + 24) = v10;
      WdLogEvent5_WdWarning(v20);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22);
      return (unsigned int)v13;
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v22);
      v21[2] = *((void **)Process + 36);
      v17 = (void *)*((_QWORD *)Process + 37);
      v21[3] = v17;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v22);
      v18 = (void **)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v18 = (void **)MmUserProbeAddress;
      *v18 = v21[2];
      v19 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v19 = (_QWORD *)MmUserProbeAddress;
      *v19 = v17;
      return 0LL;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v2, v5, v3);
    *(_QWORD *)(v7 + 24) = 509LL;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
}
