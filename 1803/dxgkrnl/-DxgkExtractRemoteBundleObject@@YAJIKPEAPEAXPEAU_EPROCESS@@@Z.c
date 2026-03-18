/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BC834
 * Callers:
 *     ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C01E6DF0 (-VailDRTProcessExtractWorker@@YAXPEAX@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C000BE20 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B74FC (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C01B7558 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BCED4 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(__int64 a1, __int64 a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGVAILOBJECT *v12; // rsi
  struct DXGGLOBAL *Global; // rax
  char v14; // dl
  bool v15; // al
  bool v16; // dl
  struct DXGPROCESS *v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int BundleObject; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _EPROCESS *v39; // [rsp+20h] [rbp-58h]
  _BYTE v40[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v41[24]; // [rsp+48h] [rbp-30h] BYREF

  v5 = (unsigned int)a1;
  v6 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    v12 = 0LL;
    if ( (*((_BYTE *)Current + 323) & 4) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v11);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v41,
        (struct _KTHREAD **)Global + 33);
      v14 = *((_BYTE *)Current + 323);
      v15 = (v14 & 4) != 0;
      v16 = (v14 & 8) != 0;
      if ( v16 )
      {
        v17 = (struct DXGPROCESS *)*((_QWORD *)Current + 57);
      }
      else if ( v15 )
      {
        v17 = Current;
      }
      else
      {
        v17 = 0LL;
      }
      if ( *((_QWORD *)v17 + 57) )
      {
        if ( v16 )
          v18 = *((_QWORD *)Current + 57);
        else
          v18 = (unsigned __int64)Current & -(__int64)v15;
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v40,
          (struct _KTHREAD **)(*(_QWORD *)(v18 + 456) + 64LL));
        v19 = *((_BYTE *)Current + 323);
        if ( (v19 & 8) != 0 )
          v20 = *((_QWORD *)Current + 57);
        else
          v20 = (unsigned __int64)Current & -(__int64)((v19 & 4) != 0);
        v12 = DXGVIRTUALMACHINE::ReferenceVailObject(*(struct _KTHREAD ***)(v20 + 456));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, *((struct DXGFASTMUTEX *const *)Current + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
      if ( *((_QWORD *)Current + 55) )
        v12 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      if ( v40[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
    }
    if ( v12 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v12 + 9) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v12 + 12) + 48LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v12 + 14),
                           v5,
                           v6,
                           a3,
                           v39);
          v10 = BundleObject;
          if ( BundleObject < 0 )
          {
            v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
            *(_QWORD *)(v35 + 24) = v5;
            *(_QWORD *)(v35 + 32) = v10;
            WdLogEvent5_WdWarning(v35);
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v12 + 12) + 48LL));
        }
        else
        {
          LODWORD(v10) = -2147483611;
          v36 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v36 + 24) = 2LL;
          *(_QWORD *)(v36 + 32) = -2147483611LL;
          WdLogEvent5_WdWarning(v36);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v12 + 9);
      }
      else
      {
        LODWORD(v10) = -2147483611;
        v37 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v37 + 24) = 1LL;
        *(_QWORD *)(v37 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v37);
      }
      DxgkCompositionObject::Release(v12);
    }
    else
    {
      LODWORD(v10) = -1073741811;
      v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = Current;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v10;
}
