/*
 * XREFs of ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180056A1C
 * Callers:
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x180056290 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ?Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z @ 0x180057240 (-Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x1800575CC (--0PhoneTopology@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::CreateInstance(
        struct IMMDevice *a1,
        struct IEndpointCollection *a2,
        struct IEndpointCollection *a3,
        struct IPhoneTopology **a4)
{
  unsigned int v6; // esi
  EndpointDevice *v7; // rbx
  PhoneTopology *v8; // rax
  PhoneTopology *v9; // rdi
  __int64 (__fastcall *v10)(PVOID, struct IMMDevice *); // rax
  int v11; // eax
  __int64 (__fastcall *v12)(EndpointDevice *); // rax

  v6 = 0;
  v7 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v8 = (PhoneTopology *)operator new(0x520uLL);
    if ( v8 )
      v9 = PhoneTopology::PhoneTopology(v8);
    else
      v9 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v10 = *(__int64 (__fastcall **)(PVOID, struct IMMDevice *))(*(_QWORD *)v9 + 160LL);
      if ( v10 == PhoneTopology::Initialize )
        v11 = PhoneTopology::Initialize(v9, a1);
      else
        v11 = v10(v9, a1);
      if ( v11 >= 0 )
      {
        v7 = 0LL;
        *a4 = v9;
      }
      else
      {
        v6 = v11;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
  {
    v12 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v7 + 16LL);
    if ( v12 == EndpointDevice::Release )
      EndpointDevice::Release(v7);
    else
      v12(v7);
  }
  return v6;
}
