/*
 * XREFs of ?AddRef@EndpointCollection@@UEAAKXZ @ 0x1800E84E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::AddRef(EndpointCollection *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
}
