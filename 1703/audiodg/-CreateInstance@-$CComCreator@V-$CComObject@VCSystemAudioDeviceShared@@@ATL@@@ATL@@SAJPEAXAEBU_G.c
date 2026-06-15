/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002790
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002CF0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140005E84 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     ?QueryInterface@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140008E90 (-QueryInterface@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v5; // esi
  char *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, _QWORD *); // rbx
  __int64 (__fastcall *v8)(_QWORD, __int64, _QWORD *); // rax
  int Interface; // eax
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  try
  {
    v6 = (char *)operator new(0x1A8uLL);
    v7 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *))v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 92) = 0;
      memset(v6 + 376, 0, 0x28uLL);
      *((_BYTE *)v7 + 416) = 0;
      CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase((CSystemAudioDeviceSharedBase *)v7);
      *v7 = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
      v7[1] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
      v7[2] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
      v7[3] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmix'};
      v7[37] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
      v7[38] = (__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))&ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISubmixInternal'};
      (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
    v13 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v13;
  }
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 92);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 47));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 416) = 1;
      v5 = 0;
    }
    _InterlockedDecrement((volatile signed __int32 *)v7 + 92);
    if ( v5
      || ((v8 = **v7, (char *)v8 != (char *)ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface)
        ? (Interface = v8(v7, v4, v3))
        : (Interface = ATL::CComObject<CSystemAudioDeviceShared>::QueryInterface(v7, v4, v3)),
          (v5 = Interface) != 0) )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, _QWORD *), __int64))(*v7)[23])(v7, 1LL);
    }
  }
  return (unsigned int)v5;
}
