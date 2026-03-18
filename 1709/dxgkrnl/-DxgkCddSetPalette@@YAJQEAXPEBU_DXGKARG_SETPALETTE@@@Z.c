/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C01875D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C017C110 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rbp
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // rsi
  ADAPTER_DISPLAY **v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v27; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v28[32]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v29[80]; // [rsp+58h] [rbp-50h] BYREF
  struct DXGADAPTER *v30; // [rsp+B0h] [rbp+8h] BYREF
  struct DXGADAPTER *v31; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 v32; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v33; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3010);
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, &v31, &v33, &v30, &v32);
  v8 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v12 = (__int64 *)v31;
    v13 = (ADAPTER_DISPLAY **)v30;
    if ( !v31 || !v30 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v14 + 24) = 2261LL;
      WdLogEvent5_WdAssertion(v14);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)&v27,
      (struct DXGADAPTER *const)v12,
      (struct DXGADAPTER *const)v13);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v12);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
    v15 = COREADAPTERACCESS::AcquireExclusive(&v27, 2u);
    v8 = v15;
    if ( v15 >= 0 )
    {
      if ( !v12[289] )
      {
        v21 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v21 + 24) = 2278LL;
        WdLogEvent5_WdAssertion(v21);
      }
      if ( !v13[288] )
      {
        v22 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v22 + 24) = 2279LL;
        WdLogEvent5_WdAssertion(v22);
      }
      ADAPTER_RENDER::FlushScheduler(v12[289], 6, 0xFFFFFFFF, 0);
      v8 = (int)ADAPTER_DISPLAY::DdiSetPalette(v13[288], a2, v23);
      ADAPTER_RENDER::FlushScheduler(v12[289], 7, 0xFFFFFFFF, 0);
      if ( (int)v8 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v25[3] = v8;
        v25[4] = v13;
        v25[5] = a2->VidPnSourceId;
        v25[6] = Current;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
      v20[3] = v8;
      v20[4] = v12;
      v20[5] = v13;
      v20[6] = Current;
      WdLogEvent5_WdEvent(v20);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = a1;
    *(_QWORD *)(v9 + 32) = v8;
    WdLogEvent5_WdError(v9);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 3010);
  return (unsigned int)v8;
}
