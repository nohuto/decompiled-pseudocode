/*
 * XREFs of ?CreateInstance@EndpointDeviceId@@SAJAEBU_GUID@@0KPEAPEAUIEndpointDeviceId@@@Z @ 0x1800ECF04
 * Callers:
 *     ?SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z @ 0x1800EA3F0 (-SetAdapterClass@EndpointDevice@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF430 (-QueryInterface@EndpointIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall EndpointDeviceId::CreateInstance(
        const struct _GUID *a1,
        const struct _GUID *a2,
        unsigned int a3,
        struct IEndpointDeviceId **a4)
{
  unsigned int v4; // ebx
  GUID *v9; // rax
  GUID *v10; // rdi
  unsigned __int8 *Data4; // rax
  GUID v12; // xmm1
  int Interface; // eax

  v4 = 0;
  if ( a4 )
  {
    *a4 = 0LL;
    v9 = (GUID *)operator new(0x48uLL);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9[1].Data4 = 1;
      Data4 = v9->Data4;
      *((_QWORD *)Data4 + 1) = Data4;
      *(_QWORD *)&v10->Data1 = &EndpointDeviceId::`vftable'{for `IEndpointDeviceId'};
      *(_QWORD *)Data4 = &EndpointDeviceId::`vftable'{for `CUnknown'};
      v10[4].Data1 = 0;
      v10[2] = GUID_00000000_0000_0000_0000_000000000000;
      v10[3] = GUID_00000000_0000_0000_0000_000000000000;
      v10[2] = *a1;
      v12 = *a2;
      v10[4].Data1 = a3;
      v10[3] = v12;
      Interface = EndpointIterator::QueryInterface(
                    (EndpointIterator *)v10,
                    &GUID_353cf51c_1f45_48b2_8abd_88e803977804,
                    (void **)a4);
      if ( Interface < 0 )
        v4 = Interface;
      (*(void (__fastcall **)(GUID *))(*(_QWORD *)&v10->Data1 + 16LL))(v10);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v4;
}
