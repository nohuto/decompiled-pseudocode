/*
 * XREFs of ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x1800E84F4
 * Callers:
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800E74EC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0EndpointCollection@@IEAA@XZ @ 0x1800E8288 (--0EndpointCollection@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EndpointCollection::CreateInstance(struct IEndpointCollection **a1)
{
  EndpointCollection *v2; // rbx
  unsigned int v3; // edi
  EndpointCollection *v4; // rax
  int v5; // eax

  v2 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v4 = (EndpointCollection *)operator new(0x78uLL);
    if ( v4 )
      v2 = EndpointCollection::EndpointCollection(v4);
    else
      v2 = 0LL;
    if ( v2 )
    {
      v5 = (**(__int64 (__fastcall ***)(EndpointCollection *, GUID *, struct IEndpointCollection **))v2)(
             v2,
             &GUID_6f89337f_65d4_41b5_8fd9_83b0aa4f1a32,
             a1);
      v3 = 0;
      if ( v5 < 0 )
        v3 = v5;
    }
    else
    {
      v3 = -2147024882;
    }
  }
  else
  {
    v3 = -2147467261;
  }
  if ( v2 )
    (*(void (__fastcall **)(EndpointCollection *))(*(_QWORD *)v2 + 16LL))(v2);
  return v3;
}
