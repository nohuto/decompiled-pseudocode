/*
 * XREFs of ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0251684
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C0251744 (DxEngSyncPaletteTableWithDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::apalColorSet(XEPALOBJ *this, struct PALETTE *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( v5 != v2 )
    DEC_SHARE_REF_CNT(v5);
  INC_SHARE_REF_CNT(a2);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *((_DWORD *)a2 + 7);
  *(_QWORD *)(*(_QWORD *)this + 120LL) = *((_QWORD *)a2 + 15);
  *(_QWORD *)(*(_QWORD *)this + 128LL) = a2;
}
