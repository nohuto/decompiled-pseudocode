/*
 * XREFs of ??1CProcess@@MEAA@XZ @ 0x180014BB8
 * Callers:
 *     ??_ECProcess@@MEAAPEAXI@Z @ 0x180013E10 (--_ECProcess@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F880 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180015E90 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHH@Z @ 0x180016BC0 (-RemoveAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSi.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180016D60 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x180017704 (--1-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PEAUIU.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180019884 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcess::~CProcess(CProcess *this, unsigned int a2)
{
  char *v3; // rsi
  void *v4; // rbx
  HANDLE ProcessHeap; // rax
  void *v6; // rbx
  HANDLE v7; // rax
  struct _TP_TIMER *v8; // rcx
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  char *v18; // rcx

  *(_QWORD *)this = &CProcess::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 2) = &CProcess::`vftable'{for `IAudioProcess'};
  *((_QWORD *)this + 3) = &CProcess::`vftable'{for `IAudioProcessInternal'};
  if ( *((int *)this + 82) > 0 )
  {
    v3 = (char *)this + 312;
    while ( *((int *)v3 + 4) > 0 )
    {
      v4 = (void *)**((_QWORD **)v3 + 1);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        v3,
        0LL);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v4);
      if ( *((int *)this + 82) <= 0 )
        goto LABEL_5;
    }
    ATL::_AtlRaiseException((unsigned int)this, a2);
LABEL_35:
    ATL::_AtlRaiseException((unsigned int)this, a2);
    JUMPOUT(0x180014EA9LL);
  }
LABEL_5:
  if ( *((int *)this + 88) > 0 )
  {
    while ( *((int *)this + 88) > 0 )
    {
      v6 = (void *)**((_QWORD **)this + 43);
      ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::RemoveAt(
        (char *)this + 336,
        0LL);
      v7 = GetProcessHeap();
      HeapFree(v7, 0, v6);
      if ( *((int *)this + 88) <= 0 )
        goto LABEL_8;
    }
    goto LABEL_35;
  }
LABEL_8:
  if ( *((_DWORD *)this + 72) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 40LL))(*((_QWORD *)this + 37));
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 78);
  if ( v8 )
  {
    SetThreadpoolTimer(v8, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 78), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 78));
  }
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  v9 = *((_QWORD *)this + 93);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::~CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>((char *)this + 672);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 632));
  v10 = (char *)*((_QWORD *)this + 77);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 424));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 376));
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 336);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((char *)this + 312);
  v11 = *((_QWORD *)this + 38);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 37);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = (volatile signed __int32 *)*((_QWORD *)this + 35);
  if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1LL);
  }
  v14 = (void *)*((_QWORD *)this + 32);
  if ( v14 )
    CoTaskMemFree(v14);
  v15 = (void *)*((_QWORD *)this + 30);
  if ( v15 )
    CoTaskMemFree(v15);
  v16 = (void *)*((_QWORD *)this + 29);
  if ( v16 )
    CoTaskMemFree(v16);
  v17 = (void *)*((_QWORD *)this + 28);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = (char *)*((_QWORD *)this + 26);
  if ( (unsigned __int64)(v18 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CUnknown::`vftable';
}
