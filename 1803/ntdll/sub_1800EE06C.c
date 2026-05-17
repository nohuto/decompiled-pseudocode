/*
 * XREFs of sub_1800EE06C @ 0x1800EE06C
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_1800EE040 @ 0x1800EE040 (sub_1800EE040.c)
 */

bool __fastcall sub_1800EE06C(unsigned __int16 *a1, unsigned __int64 a2, int a3)
{
  int v6; // eax
  unsigned __int16 v7; // r10
  __int64 v8; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  int v13; // r11d
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = RtlImageNtHeaderEx(0, (unsigned __int64)a1, a2, &v14);
  v7 = 0;
  if ( v6 < 0 )
  {
    v13 = a3;
  }
  else
  {
    v8 = v14;
    if ( !*(_DWORD *)(v14 + 88) )
      return 1;
    v10 = sub_1800EE040(0, a1, (unsigned __int64)(v14 - (_QWORD)a1 + 88) >> 1);
    v12 = sub_1800EE040(v10, (unsigned __int16 *)(v8 + 92), (a2 - v11 - 4) >> 1);
    v7 = v12;
    if ( (a2 & 1) != 0 )
      v7 = v12 + *((unsigned __int8 *)a1 + a2 - 1) + ((v12 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  return a3 + v7 == v13;
}
