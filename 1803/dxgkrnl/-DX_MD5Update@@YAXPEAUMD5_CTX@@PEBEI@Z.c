/*
 * XREFs of ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C00B17D4
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00B0D1C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C00B0DE4 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C00B0EF4 (TransformMD5.c)
 */

void __fastcall DX_MD5Update(struct MD5_CTX *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v6; // r8d
  int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  int v16; // edx
  int v17[16]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)a1;
  v6 = *(_DWORD *)a1 >> 3;
  v8 = *((_DWORD *)a1 + 1);
  v9 = v6 & 0x3F;
  v10 = v3 + 8 * a3;
  if ( v10 < v3 )
    *((_DWORD *)a1 + 1) = ++v8;
  *(_DWORD *)a1 = v10;
  *((_DWORD *)a1 + 1) = v8 + (a3 >> 29);
  if ( a3 )
  {
    v11 = v9;
    do
    {
      --a3;
      *((_BYTE *)a1 + v11 + 24) = *a2++;
      if ( ++v11 == 64 )
      {
        v12 = 2;
        v13 = v17;
        v14 = 16LL;
        do
        {
          v15 = v12 - 2;
          v16 = (*((unsigned __int8 *)a1 + v12 + 23) | ((*((unsigned __int8 *)a1 + v12 + 24) | (*((unsigned __int8 *)a1
                                                                                                + v12
                                                                                                + 25) << 8)) << 8)) << 8;
          v12 += 4;
          *v13++ = *((unsigned __int8 *)a1 + v15 + 24) | v16;
          --v14;
        }
        while ( v14 );
        TransformMD5((int *)a1 + 2, v17);
        v11 = 0LL;
      }
    }
    while ( a3 );
  }
}
