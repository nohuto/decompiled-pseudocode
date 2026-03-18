/*
 * XREFs of ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C005CA00
 * Callers:
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 * Callees:
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GetMonitorRectForDpi @ 0x1C0059998 (GetMonitorRectForDpi.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(struct tagMONITOR *a1, unsigned __int16 a2)
{
  int v3; // r8d
  int v4; // eax
  HRGN *v5; // rbx
  __m128i v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return (HRGN)*((_QWORD *)a1 + 9);
  v3 = -1;
  if ( a2 == *((unsigned __int16 *)gpsi + 4987) )
  {
    v3 = 0;
  }
  else if ( a2 >= 0x60u && a2 == 24 * (a2 / 0x18u) )
  {
    v3 = (a2 - 72) / 24;
    if ( v3 >= 18 )
      v3 = -1;
  }
  v4 = 0;
  if ( v3 != -1 )
    v4 = v3;
  v5 = (HRGN *)((char *)a1 + 8 * v4);
  if ( !v5[10] )
  {
    v6 = *GetMonitorRectForDpi(&v6, (__int64)a1, a2);
    SetOrCreateRectRgnIndirectPublic(v5 + 10, (struct _RECTL *)&v6);
  }
  return v5[10];
}
