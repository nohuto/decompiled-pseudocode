/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001AEC0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001AEB0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x14000EDD8 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015B10 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  char *v6; // rax
  __int64 (__fastcall ***v7)(volatile signed __int32 *, _DWORD *, _QWORD *); // rdi
  char *v8; // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *, _DWORD *, _QWORD *); // rax
  unsigned int Interface; // eax
  __int64 (__fastcall ***v15)(volatile signed __int32 *, _DWORD *, _QWORD *); // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (char *)operator new(0x1A8uLL);
    v7 = (__int64 (__fastcall ***)(volatile signed __int32 *, _DWORD *, _QWORD *))v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 92) = 0;
      v8 = v6 + 376;
      memset(v6 + 376, 0, 0x28uLL);
      v8[40] = 0;
      CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase((CSystemAudioDeviceSharedBase *)v7);
      *v7 = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
      v7[1] = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
      v7[2] = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
      v7[3] = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
      v7[37] = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
      v7[38] = (__int64 (__fastcall **)(volatile signed __int32 *, _DWORD *, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v15 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v15;
  }
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 92);
    v9 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v7 + 47));
    if ( v9 >= 0 )
    {
      *((_BYTE *)v7 + 416) = 1;
      v9 = 0;
    }
    v5 = 0;
    if ( v9 < 0 )
      v5 = v9;
    _InterlockedDecrement((volatile signed __int32 *)v7 + 92);
    if ( v5
      || ((v10 = **v7, v10 != ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface)
        ? (Interface = v10((volatile signed __int32 *)v7, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface((volatile signed __int32 *)v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(volatile signed __int32 *, _DWORD *, _QWORD *), __int64))(*v7)[23])(
        v7,
        1LL);
    }
  }
  return v5;
}
