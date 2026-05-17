/*
 * XREFs of sub_18003ADA8 @ 0x18003ADA8
 * Callers:
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_1800473D0 @ 0x1800473D0 (sub_1800473D0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18003ADA8(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-28h]

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1309,
      (unsigned int)"LdrpFindKnownDll",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !qword_18015AED8 )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  v12 = 48;
  v13 = qword_18015AED8;
  v15 = 64;
  v14 = a1;
  v16 = 0LL;
  v8 = ZwOpenSection(a4, 15LL, &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  v9 = sub_1800473D0(a3, *a1 + (unsigned int)(unsigned __int16)word_18015AEB0 + 2);
  if ( v9 < 0 )
  {
    ZwClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &word_18015AEB0);
    RtlAppendUnicodeToString(a3, L"\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1381,
      (unsigned int)"LdrpFindKnownDll",
      4,
      "Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
