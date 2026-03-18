/*
 * XREFs of ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C0051ED8
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vClearDpiScaling(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 134);
  if ( (v1 & 1) != 0 )
  {
    *((_DWORD *)this + 9) |= 0x10u;
    *(_QWORD *)((char *)this + 540) = 0LL;
    *(_QWORD *)((char *)this + 548) = 0LL;
    *((_DWORD *)this + 134) = v1 & 0xFFFFFFF8 | 4;
  }
}
