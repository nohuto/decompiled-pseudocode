/*
 * XREFs of sub_1800F13DC @ 0x1800F13DC
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_1800F13B0 @ 0x1800F13B0 (sub_1800F13B0.c)
 */

bool __fastcall sub_1800F13DC(unsigned __int16 *a1, unsigned __int64 a2, int a3)
{
  int v6; // edi
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // r10
  int v10; // r11d
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // r10
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  if ( (int)RtlImageNtHeaderEx(0, (unsigned __int64)a1, a2, &v13) < 0 )
  {
    v12 = 0;
    v6 = a3;
  }
  else
  {
    v6 = *(_DWORD *)(v13 + 88);
    if ( !v6 )
      return 1;
    v8 = sub_1800F13B0(0, a1, (unsigned __int64)(v13 - (_QWORD)a1 + 88) >> 1);
    v11 = sub_1800F13B0(v8, v9, v10);
    v12 = v11;
    if ( (a2 & 1) != 0 )
      v12 = v11 + *((unsigned __int8 *)a1 + a2 - 1) + ((v11 + (unsigned int)*((unsigned __int8 *)a1 + a2 - 1)) >> 16);
  }
  return a3 + v12 == v6;
}
