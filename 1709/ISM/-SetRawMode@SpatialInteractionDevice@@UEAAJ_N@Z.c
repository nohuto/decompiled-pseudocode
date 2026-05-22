/*
 * XREFs of ?SetRawMode@SpatialInteractionDevice@@UEAAJ_N@Z @ 0x180075300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevice::SetRawMode(SpatialInteractionDevice *this, char a2)
{
  __int64 v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 272) = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
