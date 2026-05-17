/*
 * XREFs of sub_180086FA0 @ 0x180086FA0
 * Callers:
 *     RtlCreateUserProcessEx @ 0x180086EE0 (RtlCreateUserProcessEx.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x18009C2F0 (ZwCreateUserProcess.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180086FA0(unsigned __int16 *a1, __int64 a2, int a3, int a4, __int64 a5, char *a6)
{
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  int v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  _QWORD v36[12]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+130h] [rbp+30h] BYREF
  __int64 v38; // [rsp+138h] [rbp+38h]
  __int64 v39; // [rsp+140h] [rbp+40h]
  char *v40; // [rsp+148h] [rbp+48h]
  _QWORD v41[38]; // [rsp+150h] [rbp+50h]

  memset(a6, 0, 0x68uLL);
  *(_DWORD *)a6 = 104;
  if ( a5 && *(_WORD *)a5 != 1 )
    return 3221225485LL;
  v31 = 0LL;
  v30 = 48;
  v33 = 512;
  v32 = 0LL;
  if ( a5 )
    v34 = *(_QWORD *)(a5 + 8);
  else
    v34 = 0LL;
  v35 = 0LL;
  v24 = 48;
  v25 = 0LL;
  v27 = 512;
  v26 = 0LL;
  if ( a5 )
    v28 = *(_QWORD *)(a5 + 16);
  else
    v28 = 0LL;
  v29 = 0LL;
  memset(v36, 0, 0x58uLL);
  LOBYTE(v36[2]) |= 4u;
  v40 = a6 + 24;
  v36[0] = 88LL;
  v38 = 65539LL;
  v39 = 16LL;
  v41[0] = 0LL;
  v41[1] = 6LL;
  v10 = 2;
  v41[2] = 64LL;
  v41[4] = 0LL;
  v41[3] = a6 + 40;
  if ( a1 )
  {
    v10 = 4;
    v41[6] = *a1;
    v41[7] = *((_QWORD *)a1 + 1);
    v41[5] = 131077LL;
    v41[8] = 0LL;
    v23 = v23 & 0xFFFFFFE0 | 2;
    v41[11] = &v23;
    v41[9] = 131082LL;
    v41[10] = 8LL;
    v41[12] = 0LL;
  }
  if ( a5 )
  {
    v11 = *(_QWORD *)(a5 + 24);
    if ( v11 )
    {
      v18 = 4LL * v10++;
      *(__int64 *)((char *)&v38 + v18 * 8) = 393216LL;
      *(__int64 *)((char *)&v39 + v18 * 8) = 8LL;
      v41[v18] = 0LL;
      v41[v18 - 1] = v11;
    }
    v12 = *(_QWORD *)(a5 + 32);
    if ( v12 )
    {
      v19 = 4LL * v10++;
      *(__int64 *)((char *)&v38 + v19 * 8) = 393217LL;
      *(__int64 *)((char *)&v39 + v19 * 8) = 8LL;
      v41[v19] = 0LL;
      v41[v19 - 1] = v12;
    }
    v13 = *(_QWORD *)(a5 + 40);
    if ( v13 )
    {
      v20 = 4LL * v10++;
      *(__int64 *)((char *)&v38 + v20 * 8) = 393218LL;
      *(__int64 *)((char *)&v39 + v20 * 8) = 8LL;
      v41[v20] = 0LL;
      v41[v20 - 1] = v13;
    }
    if ( *(_QWORD *)(a5 + 48) )
    {
      v21 = 4LL * v10++;
      *(__int64 *)((char *)&v38 + v21 * 8) = 131091LL;
      *(__int64 *)((char *)&v39 + v21 * 8) = 8LL;
      v41[v21] = 0LL;
      v41[v21 - 1] = a5 + 48;
    }
    v14 = *(_WORD *)(a5 + 2);
    if ( v14 )
    {
      v22 = v14 - 1;
      v17 = 4LL * v10++;
      *(__int64 *)((char *)&v38 + v17 * 8) = 131085LL;
      *(__int64 *)((char *)&v39 + v17 * 8) = 2LL;
      v41[v17] = 0LL;
      v41[v17 - 1] = &v22;
    }
    else
    {
      a3 |= 0x100u;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v15 = 4LL * v10++;
    *(__int64 *)((char *)&v38 + v15 * 8) = 393233LL;
    *(__int64 *)((char *)&v39 + v15 * 8) = 1LL;
    v41[v15] = 0LL;
    v41[v15 - 1] = 97LL;
  }
  v37 = 32LL * v10 + 8;
  return ZwCreateUserProcess(a6 + 8, a6 + 16, 0x2000000LL, 0x2000000LL, &v30, &v24, a3, a4, a2, v36, &v37);
}
