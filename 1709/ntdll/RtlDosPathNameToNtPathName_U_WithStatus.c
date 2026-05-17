/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180035AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(0, a1, a2, a3, a4);
}
