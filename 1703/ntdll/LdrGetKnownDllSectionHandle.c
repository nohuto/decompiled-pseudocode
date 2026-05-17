/*
 * XREFs of LdrGetKnownDllSectionHandle @ 0x180085BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     ZwOpenSection @ 0x1800A59E0 (ZwOpenSection.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall LdrGetKnownDllSectionHandle(__int64 a1, char a2, __int64 a3)
{
  __int64 v6; // rdi
  int inited; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  _BYTE *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int128 v14; // [rsp+60h] [rbp-18h]

  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3728,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      3,
      "DLL name: %ws\n",
      a1);
  if ( a2 )
  {
    if ( !dword_18015B264 )
      goto LABEL_13;
    v6 = qword_18015AED0;
  }
  else
  {
    v6 = qword_18015AED8;
  }
  if ( !v6 )
  {
LABEL_13:
    inited = -1073741816;
    goto LABEL_8;
  }
  inited = RtlInitUnicodeStringEx((__int64)v9, a1);
  if ( inited >= 0 )
  {
    v10 = 48;
    v12 = v9;
    v11 = v6;
    v13 = 64;
    v14 = 0LL;
    inited = ZwOpenSection(a3, 15LL, &v10);
  }
LABEL_8:
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      3781,
      (unsigned int)"LdrGetKnownDllSectionHandle",
      4,
      "Status: 0x%08lx\n",
      inited);
  return (unsigned int)inited;
}
