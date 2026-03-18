/*
 * XREFs of GreOffsetRgn @ 0x1C00569D0
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 *     NtGdiOffsetRgn @ 0x1C0094430 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C00FC840 (EngOffsetRgn.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0046980 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreOffsetRgn(struct HOBJ__ *a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  int *v6; // rbx
  int *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  struct _POINTL v10; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 0);
  v10.x = a2;
  v5 = 0;
  v6 = v8[0];
  v10.y = a3;
  if ( v8[0] && (unsigned int)RGNOBJ::bOffset(v8, &v10) )
    v5 = RGNOBJ::iComplexity((RGNOBJ *)v8);
  if ( !v9 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v8);
  if ( v6 )
    _InterlockedDecrement(v6 + 3);
  return v5;
}
