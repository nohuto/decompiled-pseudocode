/*
 * XREFs of ?QueryInterface@EndpointCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056690
 * Callers:
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180055DE0 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::QueryInterface(EndpointCollection *this, const struct _GUID *a2, void **a3)
{
  EndpointCollection *v3; // rcx
  __int64 (__fastcall *v4)(EndpointCollection *__hidden, const struct _GUID *, void **); // rax

  v3 = (EndpointCollection *)*((_QWORD *)this + 2);
  v4 = **(__int64 (__fastcall ***)(EndpointCollection *__hidden, const struct _GUID *, void **))v3;
  if ( v4 == EndpointCollection::NonDelegatingQueryInterface )
    return EndpointCollection::NonDelegatingQueryInterface(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
