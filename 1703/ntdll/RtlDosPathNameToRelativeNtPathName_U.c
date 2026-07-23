/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40
 * Callers:
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 * Callees:
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  PUNICODE_STRING v4; // r9

  v4 = NtFileName;
  LOBYTE(NtFileName) = 1;
  return (int)sub_18003D6A4(DosFileName, NtFileName, DosFileName, v4, FilePart, RelativeName) >= 0;
}
