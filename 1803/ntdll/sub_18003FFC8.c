/*
 * XREFs of sub_18003FFC8 @ 0x18003FFC8
 * Callers:
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18003FEA8 @ 0x18003FEA8 (sub_18003FEA8.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenSection @ 0x18009B1A0 (ZwOpenSection.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18003FFC8(unsigned __int16 *a1, __int64 a2, unsigned __int16 *a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  unsigned __int16 *v14; // [rsp+40h] [rbp-28h]
  int v15; // [rsp+48h] [rbp-20h]
  __int128 v16; // [rsp+50h] [rbp-18h]

  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1447,
      (unsigned int)"LdrpFindKnownDll",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !qword_18015BEF0 )
  {
LABEL_11:
    v9 = -1073741515;
    goto LABEL_7;
  }
  v12 = 48;
  v13 = qword_18015BEF0;
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
  v9 = sub_18003FEA8((__int64)a3, *a1 + (unsigned int)(unsigned __int16)word_18015BED0 + 2);
  if ( v9 < 0 )
  {
    ZwClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &word_18015BED0);
    RtlAppendUnicodeToString(a3, "\\");
    v10 = *((_QWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(a2, v10);
    v9 = 0;
  }
LABEL_7:
  if ( (dword_180156A70 & 9) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      1519,
      (unsigned int)"LdrpFindKnownDll",
      4,
      "Status: 0x%08lx\n",
      v9);
  return (unsigned int)v9;
}
