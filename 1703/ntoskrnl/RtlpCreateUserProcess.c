/*
 * XREFs of RtlpCreateUserProcess @ 0x14081038C
 * Callers:
 *     RtlCreateUserProcessEx @ 0x140810324 (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x14017F740 (ZwCreateUserProcess.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, int a5, char *a6)
{
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD v12[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+80h] [rbp-80h]
  __int128 v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+B0h] [rbp-50h]
  __int128 v21; // [rsp+B8h] [rbp-48h]
  _QWORD v22[13]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+138h] [rbp+38h]
  __int64 v24; // [rsp+140h] [rbp+40h]
  char *v25; // [rsp+148h] [rbp+48h]
  _QWORD v26[38]; // [rsp+150h] [rbp+50h]

  memset(a6, 0, 0x68uLL);
  v18 = 0LL;
  v19 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v17 = 48;
  v12[2] = 48;
  *(_DWORD *)a6 = 104;
  v20 = 512;
  v21 = 0LL;
  v15 = 512;
  v16 = 0LL;
  memset(v22, 0, 0x58uLL);
  LOBYTE(v22[2]) |= 4u;
  v26[0] = 0LL;
  v8 = 2;
  v26[4] = 0LL;
  v25 = a6 + 24;
  v26[3] = a6 + 40;
  v22[0] = 88LL;
  v23 = 65539LL;
  v24 = 16LL;
  v26[1] = 6LL;
  v26[2] = 64LL;
  if ( a1 )
  {
    v9 = *a1;
    v26[8] = 0LL;
    v26[6] = v9;
    v26[7] = *((_QWORD *)a1 + 1);
    v26[5] = 131077LL;
    v26[9] = 131082LL;
    v26[12] = 0LL;
    v8 = 4;
    v12[0] = v12[0] & 0xFFFFFFE0 | 2;
    v26[11] = v12;
    v26[10] = 8LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v10 = 4LL * v8;
    v26[v10] = 0LL;
    ++v8;
    *(__int64 *)((char *)&v23 + v10 * 8) = 393233LL;
    *(__int64 *)((char *)&v24 + v10 * 8) = 1LL;
    v26[v10 - 1] = 97LL;
  }
  v22[12] = 32LL * v8 + 8;
  return ZwCreateUserProcess((__int64)(a6 + 8), (__int64)(a6 + 16), 0x2000000LL);
}
