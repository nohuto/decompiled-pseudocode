/*
 * XREFs of sub_1800FC890 @ 0x1800FC890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FC890(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = xmmword_18015A790;
  v4 = sub_18005E238(0x20uLL, 0x20uLL, 0, &v8);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x20uLL);
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v5 = 1;
    *a3 = v6;
  }
  return v5;
}
