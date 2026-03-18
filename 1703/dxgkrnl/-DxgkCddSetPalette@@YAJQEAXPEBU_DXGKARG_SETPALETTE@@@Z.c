/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01833D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01787D4 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbp
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rsi
  ADAPTER_DISPLAY **v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v31; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v32[32]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v33[80]; // [rsp+58h] [rbp-50h] BYREF
  struct DXGADAPTER *v34; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v36; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v37; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3010);
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v35, &v37, &v34, &v36);
  v11 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v15 = (__int64 *)v35;
    v16 = (ADAPTER_DISPLAY **)v34;
    if ( !v35 || !v34 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v17 + 24) = 2226LL;
      WdLogEvent5_WdAssertion(v17);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)&v31,
      (struct DXGADAPTER *const)v15,
      (struct DXGADAPTER *const)v16);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v31, 2u);
    v11 = v18;
    if ( v18 >= 0 )
    {
      if ( !v15[286] )
      {
        v24 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        *(_QWORD *)(v24 + 24) = 2243LL;
        WdLogEvent5_WdAssertion(v24);
      }
      if ( !v16[285] )
      {
        v25 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
        *(_QWORD *)(v25 + 24) = 2244LL;
        WdLogEvent5_WdAssertion(v25);
      }
      ADAPTER_RENDER::FlushScheduler(v15[286], 6, 0xFFFFFFFF, 0);
      v11 = (int)ADAPTER_DISPLAY::DdiSetPalette(v16[285], a2, v26);
      ADAPTER_RENDER::FlushScheduler(v15[286], 7, 0xFFFFFFFF, 0);
      if ( (int)v11 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v29[3] = v11;
        v29[4] = v16;
        v29[5] = a2->VidPnSourceId;
        v29[6] = Current;
        WdLogEvent5_WdError(v29);
      }
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v20);
      v23[3] = v11;
      v23[4] = v15;
      v23[5] = v16;
      v23[6] = Current;
      WdLogEvent5_WdEvent(v23);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 3010);
  return (unsigned int)v11;
}
