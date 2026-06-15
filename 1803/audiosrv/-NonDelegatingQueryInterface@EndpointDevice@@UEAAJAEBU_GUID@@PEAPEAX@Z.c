/*
 * XREFs of ?NonDelegatingQueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057830
 * Callers:
 *     ?QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057800 (-QueryInterface@EndpointDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@EndpointCollection@@UEAAKXZ @ 0x180056820 (-AddRef@EndpointCollection@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::NonDelegatingQueryInterface(EndpointDevice *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // rcx
  void (*v6)(void); // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba.Data4;
  if ( !v4 )
  {
    v5 = (char *)this - 8;
    *a3 = v5;
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)EndpointCollection::AddRef )
      EndpointCollection::AddRef((EndpointCollection *)v5);
    else
      v6();
    return v3;
  }
  return CUnknown::NonDelegatingQueryInterface(this, a2, a3);
}
