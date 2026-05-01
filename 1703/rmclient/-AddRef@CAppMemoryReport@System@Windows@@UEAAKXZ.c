/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180002EA0
 * Callers:
 *     ?AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x180008340 (-AddRef@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180008350 (-AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::AddRef(Windows::System::CAppMemoryReport *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
