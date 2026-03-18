/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180075BC8
 * Callers:
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180075B38 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800AB5E0 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180195F28 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1801A044C (-Initialize@CMit@@AEAAJXZ.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1801A07AC (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x180075A10 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x180075A7C (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180075D18 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x180075DDC (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(CMmcssTask *this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  _DWORD *v9; // rcx
  int Runtime; // eax
  LPVOID v11; // rax
  _OWORD *v12; // rax
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !CMmcssTask::AreEqualMmTask(*((const struct DWM_MMTASK **)this + 5), v4) )
  {
    if ( *((_QWORD *)this + 5) )
      CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)this);
    if ( !v4 )
    {
      v9 = (_DWORD *)*((_QWORD *)this + 5);
LABEL_10:
      WPF::ProcessHeapImpl::Free(v9);
      *((_QWORD *)this + 5) = 0LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)this + 5) )
    {
      Runtime = CMmcssTask::LoadRuntime(this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Runtime, 0xBFu);
LABEL_19:
        if ( v3 >= 0 )
          goto LABEL_5;
        goto LABEL_20;
      }
      v11 = HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
      *((_QWORD *)this + 5) = v11;
      if ( !v11 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xC8u);
LABEL_20:
        v9 = (_DWORD *)*((_QWORD *)this + 5);
        if ( !v9 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          v9[33] = 0;
          goto LABEL_5;
        }
        goto LABEL_10;
      }
    }
    v12 = (_OWORD *)*((_QWORD *)this + 5);
    *v12 = *(_OWORD *)v4;
    v12[1] = *((_OWORD *)v4 + 1);
    v12[2] = *((_OWORD *)v4 + 2);
    v12[3] = *((_OWORD *)v4 + 3);
    v12[4] = *((_OWORD *)v4 + 4);
    v12[5] = *((_OWORD *)v4 + 5);
    v12[6] = *((_OWORD *)v4 + 6);
    v12[7] = *((_OWORD *)v4 + 7);
    v12[8] = *((_OWORD *)v4 + 8);
    *(_QWORD *)(*((_QWORD *)this + 5) + 136LL) = 0LL;
    if ( a3 )
    {
      v13 = CMmcssTask::Apply(this, 0);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xD4u);
    }
    goto LABEL_19;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return 0LL;
}
