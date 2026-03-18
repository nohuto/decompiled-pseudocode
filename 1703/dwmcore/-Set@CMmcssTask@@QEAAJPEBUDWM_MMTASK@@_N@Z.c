/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800B6714
 * Callers:
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x18004E6B4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18005C754 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1800B5D5C (-Initialize@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x180191E34 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800B6528 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800B6598 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800B6880 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800B6948 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(CMmcssTask *this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  int Runtime; // eax
  LPVOID v10; // rax
  _OWORD *v11; // rax
  _DWORD *v12; // rcx
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
      v12 = (_DWORD *)*((_QWORD *)this + 5);
LABEL_16:
      WPF::ProcessHeapImpl::Free(v12);
      *((_QWORD *)this + 5) = 0LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)this + 5) )
    {
      Runtime = CMmcssTask::LoadRuntime(this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Runtime, 0xBFu);
        goto LABEL_13;
      }
      v10 = HeapAlloc(WPF::g_processHeap, 0, 0x90uLL);
      *((_QWORD *)this + 5) = v10;
      if ( !v10 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC8u);
LABEL_20:
        v12 = (_DWORD *)*((_QWORD *)this + 5);
        if ( !v12 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          v12[33] = 0;
          goto LABEL_5;
        }
        goto LABEL_16;
      }
    }
    v11 = (_OWORD *)*((_QWORD *)this + 5);
    *v11 = *(_OWORD *)v4;
    v11[1] = *((_OWORD *)v4 + 1);
    v11[2] = *((_OWORD *)v4 + 2);
    v11[3] = *((_OWORD *)v4 + 3);
    v11[4] = *((_OWORD *)v4 + 4);
    v11[5] = *((_OWORD *)v4 + 5);
    v11[6] = *((_OWORD *)v4 + 6);
    v11[7] = *((_OWORD *)v4 + 7);
    v11[8] = *((_OWORD *)v4 + 8);
    *(_QWORD *)(*((_QWORD *)this + 5) + 136LL) = 0LL;
    if ( a3 )
    {
      v13 = CMmcssTask::Apply(this, 0);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD4u);
    }
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return 0LL;
}
