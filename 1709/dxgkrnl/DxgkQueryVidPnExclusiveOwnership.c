/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C00FEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _DWORD *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // [rsp+20h] [rbp-E8h]
  _QWORD v31[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v32[24]; // [rsp+48h] [rbp-C0h] BYREF
  void *v33[2]; // [rsp+60h] [rbp-A8h]
  __int128 v34; // [rsp+70h] [rbp-98h]
  int v35; // [rsp+80h] [rbp-88h]
  int v36; // [rsp+84h] [rbp-84h]
  int v37; // [rsp+88h] [rbp-80h]
  int v38; // [rsp+8Ch] [rbp-7Ch]
  _BYTE v39[24]; // [rsp+90h] [rbp-78h] BYREF
  int v40; // [rsp+A8h] [rbp-60h]
  char v41; // [rsp+ACh] [rbp-5Ch]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2126);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v6 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v33 = *v6;
    v34 = v6[1];
    memset(v31, 0, sizeof(v31));
    LODWORD(v31[2]) = -1;
    v7 = v33[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v39, v33[0], 4096);
    LODWORD(v9) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v39, 1);
    if ( (_DWORD)v9 == -1073741790 )
    {
      if ( v41 )
      {
        v23 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v23 + 24) = 1277LL;
        WdLogEvent5_WdAssertion(v23);
      }
      v40 = 1024;
      LODWORD(v9) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v39, 1);
    }
    if ( (int)v9 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v24 + 24) = v7;
      WdLogEvent5_WdError(v24);
    }
    else
    {
      v31[0] = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v39);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v32, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v32, 1u);
      if ( (unsigned int)_guard_dispatch_icall_fptr() )
      {
        LODWORD(v30) = (v37 + v35) / 2;
        HIDWORD(v30) = (v38 + v36) / 2;
        v31[1] = v30;
        Global = DXGGLOBAL::GetGlobal(v10);
        v12 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)v31,
                1);
        v9 = v12;
        if ( v12 < 0 )
        {
          v27 = *((unsigned int *)DXGGLOBAL::GetGlobal(v13) + 276);
          if ( (v27 & 2) != 0 )
          {
            v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
            v29[3] = 275LL;
            v29[4] = 33LL;
            v29[5] = v9;
            v29[6] = 0LL;
            v29[7] = 0LL;
            WdLogEvent5_WdCriticalError(v29);
          }
        }
        else
        {
          v14 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v14 = (_QWORD *)MmUserProbeAddress;
          *v14 = *(_QWORD *)((char *)&v31[2] + 4);
          v15 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = v31[2];
          v16 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v16 = (_DWORD *)MmUserProbeAddress;
          *v16 = HIDWORD(v31[3]);
        }
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v25 + 24) = 8175LL;
        WdLogEvent5_WdError(v25);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v32);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v39);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, 2126);
    return (unsigned int)v9;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v20 + 24) = 8131LL;
    WdLogEvent5_WdError(v20);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, 2126);
    return 3221225485LL;
  }
}
