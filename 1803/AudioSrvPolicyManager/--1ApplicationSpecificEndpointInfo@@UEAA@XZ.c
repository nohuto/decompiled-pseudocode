/*
 * XREFs of ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x1800195B4
 * Callers:
 *     ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x180019580 (--_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x1800196B4 (--1-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180035048 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(
        ApplicationSpecificEndpointInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &ApplicationSpecificEndpointInfo::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 152,
    8uLL,
    7uLL,
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>);
  `eh vector destructor iterator'(
    (char *)this + 96,
    8uLL,
    7uLL,
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    CoTaskMemFree(v3);
  std::vector<unsigned long>::~vector<unsigned long>((char *)this + 56);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
