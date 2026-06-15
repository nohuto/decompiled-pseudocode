/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x180027FA0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDev.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPositionCalc@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioPos.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028D80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_180028D80.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  void (*v10)(void); // rax
  __int64 v11; // rcx
  HANDLE ProcessHeap; // rax

  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 108) = 0;
  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &SpatialAudioDevicePropertyReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    _aligned_free(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    _aligned_free(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  operator delete(*((void **)this + 64));
  *((_QWORD *)this + 64) = 0LL;
  v6 = *((_QWORD *)this + 53);
  if ( v6 )
  {
    *((_QWORD *)this + 53) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release();
    else
      v7();
  }
  v8 = *((_QWORD *)this + 52);
  if ( v8 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 51);
  if ( v9 )
  {
    *((_QWORD *)this + 51) = 0LL;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::Release();
    else
      v10();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  *((_DWORD *)this + 13) = -1073741823;
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
