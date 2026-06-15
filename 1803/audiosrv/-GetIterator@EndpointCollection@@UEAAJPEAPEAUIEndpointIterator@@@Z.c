/*
 * XREFs of ?GetIterator@EndpointCollection@@UEAAJPEAPEAUIEndpointIterator@@@Z @ 0x180117C10
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z @ 0x1801175C8 (-CreateInstance@EndpointIterator@@SAJPEAVEndpointCollection@@PEAPEAUIEndpointIterator@@@Z.c)
 */

__int64 __fastcall EndpointCollection::GetIterator(struct IUnknown *this, struct IEndpointIterator **a2)
{
  unsigned int v2; // ebx
  int Instance; // eax

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    Instance = EndpointIterator::CreateInstance(this, a2);
    if ( Instance < 0 )
      return (unsigned int)Instance;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
