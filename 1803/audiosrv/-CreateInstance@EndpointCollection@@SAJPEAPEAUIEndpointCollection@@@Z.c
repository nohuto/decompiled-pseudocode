/*
 * XREFs of ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180055DE0
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005642C (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ?QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056690 (-QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x1800567AC (--0EndpointCollection@@IEAA@XZ.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointCollection::CreateInstance(struct IEndpointCollection **a1)
{
  EndpointCollection *v2; // rbx
  HANDLE ProcessHeap; // rax
  EndpointCollection *v4; // rax
  __int64 (__fastcall *v5)(EndpointCollection *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v7; // edi
  unsigned int (__fastcall *v8)(EndpointDevice *__hidden); // rax

  v2 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    ProcessHeap = GetProcessHeap();
    v4 = (EndpointCollection *)HeapAlloc(ProcessHeap, 0, 0x78uLL);
    if ( v4 )
      v2 = EndpointCollection::EndpointCollection(v4);
    else
      v2 = 0LL;
    if ( v2 )
    {
      v5 = **(__int64 (__fastcall ***)(EndpointCollection *__hidden, const struct _GUID *, void **))v2;
      if ( v5 == EndpointCollection::QueryInterface )
        Interface = EndpointCollection::QueryInterface(v2, &GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32, (void **)a1);
      else
        Interface = v5(v2, &GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32, (void **)a1);
      v7 = 0;
      if ( Interface < 0 )
        v7 = Interface;
    }
    else
    {
      v7 = -2147024882;
    }
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v2 )
  {
    v8 = *(unsigned int (__fastcall **)(EndpointDevice *__hidden))(*(_QWORD *)v2 + 16LL);
    if ( v8 == EndpointDevice::Release )
      EndpointDevice::Release(v2);
    else
      v8(v2);
  }
  return v7;
}
