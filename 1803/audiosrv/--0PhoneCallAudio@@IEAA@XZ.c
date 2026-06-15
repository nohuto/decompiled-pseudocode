/*
 * XREFs of ??0PhoneCallAudio@@IEAA@XZ @ 0x180055B74
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005F664 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800576D4 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060FA8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=8
PhoneCallAudio *__fastcall PhoneCallAudio::PhoneCallAudio(PhoneCallAudio *this)
{
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ITelephonyControlInternal'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 4) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 3;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 1065353216;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 2;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneCallAudio *)((char *)this + 136));
  `eh vector constructor iterator'(
    (char *)this + 176,
    8uLL,
    2uLL,
    ATL::CComPtr<IEndpointDevice>::CComPtr<IEndpointDevice>,
    ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>);
  `eh vector constructor iterator'(
    (char *)this + 192,
    8uLL,
    2uLL,
    ATL::CComPtr<IEndpointDevice>::CComPtr<IEndpointDevice>,
    ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>);
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((PhoneCallAudio *)((char *)this + 208));
  *(_QWORD *)((char *)this + 100) = 0LL;
  return this;
}
