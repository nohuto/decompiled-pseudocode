/*
 * XREFs of ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E9320
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x1800E6968 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x1800E9EAC (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::CreateInstance(struct IMMDevice *a1, struct IEndpointDevice **a2)
{
  char *v4; // rbx
  int v5; // edi
  char *v6; // rax
  char *v7; // rax
  int v8; // eax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v6 = (char *)operator new(0x90uLL);
      v4 = v6;
      if ( v6 )
      {
        v7 = v6 + 8;
        *((_DWORD *)v7 + 4) = 1;
        *((_QWORD *)v7 + 1) = v7;
        *(_QWORD *)v4 = &EndpointDevice::`vftable'{for `IEndpointDevice'};
        *(_QWORD *)v7 = &EndpointDevice::`vftable'{for `CUnknown'};
        *((_QWORD *)v4 + 4) = 0LL;
        *((_QWORD *)v4 + 5) = 0LL;
        *((_QWORD *)v4 + 6) = 0LL;
        *((_QWORD *)v4 + 7) = 0LL;
        *((_QWORD *)v4 + 10) = 0LL;
        *((_DWORD *)v4 + 22) = 0;
        *((_DWORD *)v4 + 24) = 5;
        *(_QWORD *)(v4 + 108) = 0LL;
        *((_QWORD *)v4 + 15) = 0LL;
        *((_QWORD *)v4 + 16) = 0LL;
        *((_DWORD *)v4 + 34) = 0;
        *(_QWORD *)(v4 + 100) = 0LL;
        v5 = EndpointDevice::Initialize((EndpointDevice *)v4, a1);
        if ( v5 >= 0 )
        {
          v8 = (**(__int64 (__fastcall ***)(char *, GUID *, struct IEndpointDevice **))v4)(
                 v4,
                 &GUID_149a920f_402c_418b_8687_6fa74df4953b,
                 a2);
          v5 = 0;
          if ( v8 < 0 )
            v5 = v8;
        }
      }
      else
      {
        v4 = 0LL;
        v5 = -2147024882;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
