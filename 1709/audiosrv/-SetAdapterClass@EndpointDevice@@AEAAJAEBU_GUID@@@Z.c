/*
 * XREFs of ?SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z @ 0x1800EA3F0
 * Callers:
 *     ?InitAdapterInformation@EndpointDevice@@AEAAJXZ @ 0x1800E96C8 (-InitAdapterInformation@EndpointDevice@@AEAAJXZ.c)
 *     ?SetEndpointType@EndpointDevice@@UEAAJAEBU_GUID@@H@Z @ 0x1800EA510 (-SetEndpointType@EndpointDevice@@UEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z @ 0x1800E9094 (--4CComBSTR@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?CreateInstance@EndpointDeviceId@@SAJAEBU_GUID@@0KPEAPEAUIEndpointDeviceId@@@Z @ 0x1800ECF04 (-CreateInstance@EndpointDeviceId@@SAJAEBU_GUID@@0KPEAPEAUIEndpointDeviceId@@@Z.c)
 */

__int64 __fastcall EndpointDevice::SetAdapterClass(EndpointDevice *this, const struct _GUID *a2)
{
  struct IEndpointDeviceId **v2; // r15
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v7; // ebx
  __int64 v8; // rax
  int Instance; // eax
  OLECHAR sz[64]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = (struct IEndpointDeviceId **)((char *)this + 40);
  v4 = *((_QWORD *)this + 5);
  v5 = 0;
  if ( v4 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)&a2->Data1 - *((_QWORD *)&unk_18014A1E8 + 3 * (int)v7);
    if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)&unk_18014A1E8 + 3 * (int)v7) )
      v8 = *(_QWORD *)a2->Data4 - *((_QWORD *)&unk_18014A1E8 + 3 * (int)v7 + 1);
    if ( !v8 )
      break;
    if ( ++v7 >= 2 )
      goto LABEL_10;
  }
  ATL::CComBSTR::operator=((BSTR *)this + 6, *((const OLECHAR **)&unk_18014A1E8 + 3 * (int)v7 + 2));
LABEL_10:
  if ( v7 >= 2 )
  {
    StringFromGUID2(a2, sz, 64);
    ATL::CComBSTR::operator=((BSTR *)this + 6, sz);
  }
  Instance = EndpointDeviceId::CreateInstance(a2, (const struct _GUID *)this + 4, 1 << *((_DWORD *)this + 24), v2);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  return v5;
}
