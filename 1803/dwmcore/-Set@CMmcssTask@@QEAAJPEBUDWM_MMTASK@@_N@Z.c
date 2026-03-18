/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18001E914
 * Callers:
 *     ?Initialize@CMit@@AEAAJXZ @ 0x18001E028 (-Initialize@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18001E854 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180025FA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18002E094 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18001E740 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18001E798 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18001EA60 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x18001EB28 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CMmcssTask::Set(const struct DWM_MMTASK **this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  const struct DWM_MMTASK *v9; // rax
  int Runtime; // eax
  int v11; // eax
  const struct DWM_MMTASK *v12; // rcx
  CMmcssTask *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = (CMmcssTask *)this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !CMmcssTask::AreEqualMmTask(this[5], v4) )
  {
    if ( this[5] )
      CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)this);
    if ( !v4 )
    {
      v12 = this[5];
LABEL_18:
      operator delete(v12);
      this[5] = 0LL;
      goto LABEL_5;
    }
    v9 = this[5];
    if ( !v9 )
    {
      Runtime = CMmcssTask::LoadRuntime((CMmcssTask *)this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Runtime, 0xBFu);
        goto LABEL_13;
      }
      v9 = (const struct DWM_MMTASK *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
      this[5] = v9;
      if ( !v9 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC8u);
LABEL_20:
        v12 = this[5];
        if ( !v12 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          *((_DWORD *)v12 + 33) = 0;
          goto LABEL_5;
        }
        goto LABEL_18;
      }
    }
    *(_OWORD *)v9 = *(_OWORD *)v4;
    *((_OWORD *)v9 + 1) = *((_OWORD *)v4 + 1);
    *((_OWORD *)v9 + 2) = *((_OWORD *)v4 + 2);
    *((_OWORD *)v9 + 3) = *((_OWORD *)v4 + 3);
    *((_OWORD *)v9 + 4) = *((_OWORD *)v4 + 4);
    *((_OWORD *)v9 + 5) = *((_OWORD *)v4 + 5);
    *((_OWORD *)v9 + 6) = *((_OWORD *)v4 + 6);
    *((_OWORD *)v9 + 7) = *((_OWORD *)v4 + 7);
    *((_OWORD *)v9 + 8) = *((_OWORD *)v4 + 8);
    *((_QWORD *)this[5] + 17) = 0LL;
    if ( a3 )
    {
      v11 = CMmcssTask::Apply((CMmcssTask *)this, 0);
      v3 = v11;
      if ( v11 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xD4u);
    }
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return 0LL;
}
