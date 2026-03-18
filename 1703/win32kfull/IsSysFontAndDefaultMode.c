/*
 * XREFs of IsSysFontAndDefaultMode @ 0x1C023A4A4
 * Callers:
 *     DT_InitDrawTextInfo @ 0x1C023A078 (DT_InitDrawTextInfo.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     GreGetHFONT @ 0x1C027E024 (GreGetHFONT.c)
 *     GreGetMapMode @ 0x1C0295510 (GreGetMapMode.c)
 */

__int64 __fastcall IsSysFontAndDefaultMode(HDC a1)
{
  __int64 v2; // rbx
  int MapMode; // eax
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(GetDPIServerInfo((__int64)a1) + 48);
  if ( GreGetHFONT(a1) != v2 )
    return 0;
  MapMode = GreGetMapMode(a1);
  v4 = 1;
  if ( MapMode != 1 )
    return 0;
  return v4;
}
