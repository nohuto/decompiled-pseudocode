/*
 * XREFs of ??0EndpointCollection@@IEAA@XZ @ 0x1800567AC
 * Callers:
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180055DE0 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 * Callees:
 *     ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x1800576D4 (--0CComAutoCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
EndpointCollection *__fastcall EndpointCollection::EndpointCollection(EndpointCollection *this)
{
  *((_DWORD *)this + 6) = 1;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *(_QWORD *)this = &EndpointCollection::`vftable'{for `IEndpointCollection'};
  *((_QWORD *)this + 1) = &EndpointCollection::`vftable'{for `CUnknown'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 10;
  ATL::CComAutoCriticalSection::CComAutoCriticalSection((EndpointCollection *)((char *)this + 80));
  return this;
}
