/*
 * XREFs of ??_EVIDPNSOURCEINFO@@QEAAPEAXI@Z @ 0x1C0038890
 * Callers:
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C00388D0 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 *     DxgkCheckDisplayState @ 0x1C01EB330 (DxgkCheckDisplayState.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall VIDPNSOURCEINFO::`vector deleting destructor'(VIDPNSOURCEINFO *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    56LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
