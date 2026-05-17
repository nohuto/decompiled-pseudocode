/*
 * XREFs of sub_180062960 @ 0x180062960
 * Callers:
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18005FB48 @ 0x18005FB48 (sub_18005FB48.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     sub_180062AA4 @ 0x180062AA4 (sub_180062AA4.c)
 *     sub_1800FC524 @ 0x1800FC524 (sub_1800FC524.c)
 */

unsigned int *__fastcall sub_180062960(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rcx
  unsigned int *result; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  v8 = v4;
  if ( a3 )
    sub_180062AA4(&unk_18015D838, 2 * ((a2 - qword_18015D878) >> 20), 2 * ((unsigned __int64)(unsigned int)v4 >> 20));
  v7 = *(_OWORD *)(a1 + 96);
  sub_1800624DC(&v9, &v8, 0x8000, &v7);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v6 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v6 = 2147353480LL;
  }
  if ( *(_BYTE *)v6 )
    return (unsigned int *)sub_1800FC524(a1, v9, v8);
  return result;
}
