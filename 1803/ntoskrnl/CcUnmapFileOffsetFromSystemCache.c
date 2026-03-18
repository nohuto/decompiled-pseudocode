/*
 * XREFs of CcUnmapFileOffsetFromSystemCache @ 0x1400C37F0
 * Callers:
 *     <none>
 * Callees:
 *     CcUnmapVacbArray @ 0x1400DCE30 (CcUnmapVacbArray.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcUnmapFileOffsetFromSystemCache(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v3 + 4) )
    KeBugCheckEx(0x34u, 0x156EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return CcUnmapVacbArray(v3, a2, a3, 0, 0, 1);
}
