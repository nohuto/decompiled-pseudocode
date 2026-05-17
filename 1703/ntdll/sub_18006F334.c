/*
 * XREFs of sub_18006F334 @ 0x18006F334
 * Callers:
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 * Callees:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 *sub_18006F334()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  int v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 *result; // rax
  char v9; // al
  int v10; // [rsp+30h] [rbp-79h]
  _QWORD v11[20]; // [rsp+40h] [rbp-69h] BYREF
  char v12; // [rsp+110h] [rbp+67h] BYREF
  int v13; // [rsp+118h] [rbp+6Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v0 = (__int64 *)qword_18015B350;
  v11[4] = &v13;
  LODWORD(v11[3]) = 0x80000;
  while ( v0 != &qword_18015B350 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v11;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_18015B350;
  v2 = 0;
  v13 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_18015B350 )
      goto LABEL_18;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_10:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v12 = 0;
        v13 = sub_18006FC38(v7, &v13, &v12);
        v2 = v13;
        if ( v13 < 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_16:
    if ( v6 == v5 )
      goto LABEL_10;
  }
  v2 = -1073741502;
  v13 = -1073741502;
LABEL_18:
  result = (__int64 *)qword_18015B350;
  if ( (__int64 *)qword_18015B350 != &qword_18015B350 )
  {
    do
    {
      v3 = (__int64)result;
      if ( (_QWORD *)result[22] == v11 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_18015B350 );
    v2 = v13;
  }
  if ( v2 < 0 )
  {
    v9 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      v10 = v2;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2490,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v10);
      v2 = v13;
      v9 = dword_180155A10;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    sub_1800048B8(v2);
    return (__int64 *)ZwTerminateProcess(-1LL, (unsigned int)v13);
  }
  return result;
}
