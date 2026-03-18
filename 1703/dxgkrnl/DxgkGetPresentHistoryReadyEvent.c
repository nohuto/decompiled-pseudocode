/*
 * XREFs of DxgkGetPresentHistoryReadyEvent @ 0x1C00A0820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C00CF604 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetPresentHistoryReadyEvent(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rdi
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGADAPTER *v15; // rbx
  struct _KTHREAD **v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGPRESENTHISTORYTOKENQUEUE *PresentHistoryTokenQueue; // rax
  void *v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  DXGADAPTER *v26; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-38h] BYREF
  DXGPUSHLOCK *v28; // [rsp+50h] [rbp-30h]
  int v29; // [rsp+58h] [rbp-28h]
  _BYTE v30[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  DXGADAPTER *v32; // [rsp+70h] [rbp-10h]
  char v33; // [rsp+78h] [rbp-8h]
  DXGADAPTER *v34; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v35; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v26, (unsigned int)v3, Current, &v35);
    v11 = v35;
    if ( v35 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v35, 0, &v34, &v25, 0LL, 0LL);
      v3 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v24 + 24) = v11;
        *(_QWORD *)(v24 + 32) = v3;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v15 = v34;
        v32 = v34;
        v33 = 0;
        if ( v34 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v34 + 3);
          v31 = -1LL;
          v15 = v34;
        }
        DXGADAPTER::ReleaseReference(v15);
        v16 = (struct _KTHREAD **)*((_QWORD *)v15 + 286);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, v16 + 78, v17, v18);
        DXGPUSHLOCK::AcquireShared(v28);
        v29 = 1;
        PresentHistoryTokenQueue = ADAPTER_RENDER::GetPresentHistoryTokenQueue(
                                     (ADAPTER_RENDER *)v16,
                                     (struct DXGAUTOPUSHLOCK *)v27,
                                     1);
        if ( PresentHistoryTokenQueue )
        {
          v20 = (void *)*((_QWORD *)PresentHistoryTokenQueue + 9);
          *a2 = v20;
          ObfReferenceObject(v20);
          LODWORD(v3) = 0;
        }
        else
        {
          *a2 = 0LL;
          LODWORD(v3) = -1073741801;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v30);
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      *(_QWORD *)(v23 + 24) = v3;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
    }
    if ( v26 )
      DXGADAPTER::ReleaseReference(v26);
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v6, v5);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
  }
  return (unsigned int)v3;
}
