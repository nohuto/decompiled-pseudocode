/*
 * XREFs of ?Reset@EndpointIterator@@UEAAXXZ @ 0x180031DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EndpointIterator::Reset(EndpointIterator *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
}
