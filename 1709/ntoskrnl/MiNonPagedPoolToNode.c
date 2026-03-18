/*
 * XREFs of MiNonPagedPoolToNode @ 0x1400F4370
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     MiMakeSystemRangeAvailable @ 0x1400F6D54 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiNonPagedPoolToNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edx
  unsigned __int64 *p_Region; // rax

  v1 = 0;
  if ( !KeNumberNodes )
LABEL_7:
    KeBugCheckEx(0x1Au, 0x5201uLL, BugCheckParameter2, 0LL, 0LL);
  p_Region = &qword_140388510[20].Region;
  while ( BugCheckParameter2 < *(p_Region - 1) || BugCheckParameter2 >= *p_Region )
  {
    ++v1;
    p_Region += 50;
    if ( v1 >= (unsigned __int16)KeNumberNodes )
      goto LABEL_7;
  }
  return v1;
}
