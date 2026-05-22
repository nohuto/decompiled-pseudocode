/*
 * XREFs of ?GetCutoffTimeInMS@SpatialInteractionDevice@@UEAAJPEAG@Z @ 0x180074F70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevice::GetCutoffTimeInMS(SpatialInteractionDevice *this, unsigned __int16 *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *((_WORD *)this + 49);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AC,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
