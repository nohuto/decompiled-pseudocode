/*
 * XREFs of ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x18007C814
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180024950 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002F0CC (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 (__fastcall ****__fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        _QWORD *a2))(_QWORD, __int64)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rax

  if ( *a1 == (__int64 (__fastcall ***)(_QWORD, __int64))*a2 )
  {
    if ( a1 != a2 )
      *a2 = 0LL;
  }
  else
  {
    ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
    v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
