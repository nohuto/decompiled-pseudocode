/*
 * XREFs of ??0PhoneCallAudio@@IEAA@XZ @ 0x1800C7818
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800C7B7C (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180033188 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x180060C00 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
PhoneCallAudio *__fastcall PhoneCallAudio::PhoneCallAudio(PhoneCallAudio *this)
{
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 3;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 1065353216;
  `eh vector constructor iterator'(
    (char *)this + 112,
    8LL,
    2LL,
    (void (*)(void *))ATL::CComPtr<IEndpointDevice>::CComPtr<IEndpointDevice>);
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  *(_QWORD *)((char *)this + 92) = 0LL;
  return this;
}
