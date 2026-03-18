/*
 * XREFs of ?bValid@WIDENER@@QEAAHXZ @ 0x1C00E5930
 * Callers:
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E5198 (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00E53B8 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E93EC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C64 (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall WIDENER::bValid(WIDENER *this)
{
  int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // edx
  __int64 v4; // r8

  v1 = WIDEPATHOBJ::bValid((WIDENER *)((char *)this + 1152));
  v3 = 0;
  if ( v1
    && (unsigned int)WIDEPATHOBJ::bValid((WIDEPATHOBJ *)(v2 + 992))
    && (unsigned int)WIDEPATHOBJ::bValid((WIDEPATHOBJ *)(v4 + 824)) )
  {
    return 1;
  }
  return v3;
}
