/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00DC300
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0014244 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00A5968 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // rdi
  int PairingAdapters; // eax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rbx
  struct _KTHREAD **v13; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+30h] [rbp-50h] BYREF
  DXGADAPTER *v21; // [rsp+38h] [rbp-48h] BYREF
  DXGPUSHLOCK *v22[2]; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+58h] [rbp-28h]
  _BYTE v24[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h]
  DXGADAPTER *v26; // [rsp+70h] [rbp-10h]
  char v27; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v28; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v29; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v21, v3, Current, &v29);
    v9 = v29;
    if ( v29 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v29, 0, &v28, &v20, 0LL, 0LL);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v19 + 24) = v9;
        *(_QWORD *)(v19 + 32) = v3;
        WdLogEvent5_WdError(v19);
      }
      else
      {
        v12 = v28;
        v26 = v28;
        v27 = 0;
        if ( v28 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v28 + 3);
          v25 = -1LL;
          v12 = v28;
        }
        DXGADAPTER::ReleaseReferenceNoTracking(v12);
        v13 = (struct _KTHREAD **)*((_QWORD *)v12 + 308);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, v13 + 92, 0);
        DXGPUSHLOCK::AcquireShared(v22[1]);
        v23 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue((ADAPTER_RENDER *)v13, v22, 1);
        if ( PresentHistoryTokenQueue )
        {
          v15 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v15;
          ObfReferenceObject(v15);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v18 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v18 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v18);
    }
    if ( v21 )
      DXGADAPTER::ReleaseReferenceNoTracking(v21);
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v5);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
  }
  return (unsigned int)v3;
}
