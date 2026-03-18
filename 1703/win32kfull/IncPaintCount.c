/*
 * XREFs of IncPaintCount @ 0x1C020BA3C
 * Callers:
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBit @ 0x1C004C3B0 (SetWakeBit.c)
 */

int __fastcall IncPaintCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int result; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 520);
  result = v2 + 1;
  *(_DWORD *)(v1 + 520) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    return SetWakeBit(v1, 0x20u);
  }
  return result;
}
