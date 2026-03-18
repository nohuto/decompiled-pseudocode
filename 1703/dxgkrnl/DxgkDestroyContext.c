/*
 * XREFs of DxgkDestroyContext @ 0x1C00FBE40
 * Callers:
 *     ?VmBusDestroyContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002CF60 (-VmBusDestroyContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004C60 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  bool v4; // si
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // r14
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  DXGCONTEXT *v16; // rsi
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (unsigned int *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2040);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v5);
  if ( Current )
  {
    if ( v4 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      v11 = *v3;
    }
    else
    {
      v11 = *v3;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27, Current, v8, v9);
    v15 = (v11 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)Current + 52)
      && (v14 = *((_QWORD *)Current + 24),
          v13 = *(unsigned int *)(v14 + 16LL * (unsigned int)v15 + 8),
          v12 = (v11 >> 26) & 0x30,
          ((v11 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v15 + 8) & 0x30))
      && (v13 & 0x1000) == 0
      && (v13 & 0xF) != 0
      && (*(_BYTE *)(v14 + 16LL * (unsigned int)v15 + 8) & 0xF) == 7 )
    {
      v16 = *(DXGCONTEXT **)(v14 + 16LL * (unsigned int)v15);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      if ( (unsigned int)v15 < *((_DWORD *)Current + 52) )
      {
        v17 = *((_QWORD *)Current + 24);
        v18 = *(_DWORD *)(v17 + 16LL * (unsigned int)v15 + 8);
        if ( ((v11 >> 26) & 0x30) == (v18 & 0x30) && (v18 & 0x1000) == 0 && (v18 & 0xF) != 0 )
          *(_DWORD *)(v17 + 16 * (((unsigned __int64)v11 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
      DXGCONTEXT::ReleaseReference(v16);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v19, &EventProfilerExit, v20, 2040);
      return 0LL;
    }
    v26 = WdLogNewEntry5_WdWarning(v12, v15, v13, v14);
    *(_QWORD *)(v26 + 24) = v11;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
    v25 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v24 = qword_1C006E790;
    v25 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v24, &EventProfilerExit, v23, 2040);
  return 3221225485LL;
}
