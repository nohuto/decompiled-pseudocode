/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x1C0296FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0084384 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiGetColorSpaceforBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  SURFACE *v3; // rcx
  __int64 v4; // rcx

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v3 = (SURFACE *)HmgShareLockCheck(a1, a2);
  if ( v3 )
  {
    if ( (unsigned int)SURFACE::bDIBSection(v3) )
      v2 = *(_QWORD *)(v4 + 216);
    DEC_SHARE_REF_CNT(v4);
  }
  return v2;
}
