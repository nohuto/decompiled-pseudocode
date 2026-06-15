/*
 * XREFs of ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18005528C
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     ?QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057800 (-QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z @ 0x18005789C (-Initialize@EndpointDevice@@AEAAJPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EndpointDevice::CreateInstance(struct IMMDevice *a1, struct IEndpointDevice **a2)
{
  __int64 (__fastcall ***v4)(EndpointDevice *__hidden, const struct _GUID *, void **); // rbx
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall ***v6)(EndpointDevice *__hidden, const struct _GUID *, void **); // rax
  char *v7; // rax
  int v8; // edi
  __int64 (__fastcall *v9)(EndpointDevice *__hidden, const struct _GUID *, void **); // rax
  int v10; // eax
  unsigned int (__fastcall *v11)(EndpointDevice *__hidden); // rax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      ProcessHeap = GetProcessHeap();
      v6 = (__int64 (__fastcall ***)(EndpointDevice *__hidden, const struct _GUID *, void **))HeapAlloc(
                                                                                                ProcessHeap,
                                                                                                0,
                                                                                                0x60uLL);
      v4 = v6;
      if ( v6 )
      {
        v7 = (char *)(v6 + 1);
        *((_DWORD *)v7 + 4) = 1;
        *((_QWORD *)v7 + 1) = v7;
        *v4 = (__int64 (__fastcall **)(EndpointDevice *__hidden, const struct _GUID *, void **))&EndpointDevice::`vftable'{for `IEndpointDevice'};
        *(_QWORD *)v7 = &EndpointDevice::`vftable'{for `CUnknown'};
        v4[4] = 0LL;
        v4[5] = 0LL;
        v4[6] = 0LL;
        *((_DWORD *)v4 + 18) = 0;
        v4[10] = 0LL;
        v4[11] = 0LL;
        v8 = EndpointDevice::Initialize((EndpointDevice *)v4, a1);
        if ( v8 >= 0 )
        {
          v9 = **v4;
          v10 = v9 == EndpointDevice::QueryInterface
              ? EndpointDevice::QueryInterface(
                  (EndpointDevice *)v4,
                  &GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba,
                  (void **)a2)
              : v9((EndpointDevice *)v4, &GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba, (void **)a2);
          v8 = 0;
          if ( v10 < 0 )
            v8 = v10;
        }
      }
      else
      {
        v4 = 0LL;
        v8 = -2147024882;
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v4 )
  {
    v11 = (unsigned int (__fastcall *)(EndpointDevice *__hidden))(*v4)[2];
    if ( v11 == EndpointDevice::Release )
      EndpointDevice::Release((EndpointDevice *)v4);
    else
      v11((EndpointDevice *)v4);
  }
  return (unsigned int)v8;
}
