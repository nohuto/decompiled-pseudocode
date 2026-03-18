/*
 * XREFs of NtGdiSetBrushOrg @ 0x1C007D4F0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x1C007F6C8 (GreSetBrushOrg.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edx
  __int64 v7; // [rsp+20h] [rbp-18h]

  v5 = GreSetBrushOrg(a1);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v7;
  }
  return v5;
}
