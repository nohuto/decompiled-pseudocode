/*
 * XREFs of ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C00EEAE4
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00EEA18 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C00EEBF4 (TransformMD5.c)
 *     ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C00EF4D4 (-DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

void __fastcall DX_MD5Final(struct MD5_CTX *a1)
{
  int v1; // r8d
  int v2; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  int *v6; // r9
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rax
  int v10; // edx
  char *v11; // rdx
  __int64 v12; // r8
  char v13; // al
  __int64 v14; // rcx
  _BYTE v15[56]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+5Ch] [rbp-1Ch]

  v1 = 56;
  v2 = *((_DWORD *)a1 + 1);
  v16 = *(_DWORD *)a1;
  v4 = (v16 >> 3) & 0x3F;
  v17 = v2;
  if ( v4 >= 0x38 )
    v1 = 120;
  DX_MD5Update(a1, &byte_1C006F050, v1 - v4);
  v5 = 2;
  v6 = (int *)v15;
  LODWORD(v7) = 2;
  v8 = 14LL;
  do
  {
    v9 = (unsigned int)(v7 - 2);
    v10 = (*((unsigned __int8 *)a1 + (unsigned int)(v7 - 1) + 24) | ((*((unsigned __int8 *)a1 + (unsigned int)v7 + 24) | (*((unsigned __int8 *)a1 + (unsigned int)(v7 + 1) + 24) << 8)) << 8)) << 8;
    v7 = (unsigned int)(v7 + 4);
    *v6++ = *((unsigned __int8 *)a1 + v9 + 24) | v10;
    --v8;
  }
  while ( v8 );
  TransformMD5((char *)a1 + 8, v15, v7, v6);
  v11 = (char *)a1 + 9;
  v12 = 4LL;
  do
  {
    *((_BYTE *)a1 + v5 + 86) = *(v11 - 1);
    v13 = *v11;
    v11 += 4;
    *((_BYTE *)a1 + v5 + 87) = v13;
    *((_BYTE *)a1 + v5 + 88) = *(v11 - 3);
    v14 = v5 + 1;
    v5 += 4;
    *((_BYTE *)a1 + v14 + 88) = *(v11 - 2);
    --v12;
  }
  while ( v12 );
}
