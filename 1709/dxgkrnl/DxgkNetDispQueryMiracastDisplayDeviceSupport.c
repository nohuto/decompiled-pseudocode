/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00FB170
 * Callers:
 *     <none>
 * Callees:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceSupport(_QWORD *a1)
{
  int v2; // edx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h]

  LODWORD(v5) = 0;
  v4 = 0LL;
  v2 = DxgkMiracastQueryMiracastSupportInternal(&v4);
  if ( v2 >= 0 )
  {
    HIDWORD(v5) = HIDWORD(v4);
    LOBYTE(v5) = v4;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v5;
  }
  return (unsigned int)v2;
}
