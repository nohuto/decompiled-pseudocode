/*
 * XREFs of ?DX_MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C00EF4D4
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00EEA18 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?DX_MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C00EEAE4 (-DX_MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C00EEBF4 (TransformMD5.c)
 */

void __fastcall DX_MD5Update(struct MD5_CTX *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r8d
  int *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // edx
  int v14[16]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)a1;
  v6 = a3;
  v7 = (*(_DWORD *)a1 >> 3) & 0x3F;
  v8 = v3 + 8 * a3;
  if ( v8 < v3 )
    ++*((_DWORD *)a1 + 1);
  *(_DWORD *)a1 = v8;
  *((_DWORD *)a1 + 1) += a3 >> 29;
  if ( a3 )
  {
    do
    {
      --v6;
      *((_BYTE *)a1 + v7 + 24) = *a2++;
      if ( ++v7 == 64 )
      {
        v9 = 2;
        v10 = v14;
        v11 = 16LL;
        do
        {
          v12 = v9 - 2;
          v13 = (*((unsigned __int8 *)a1 + v9 + 23) | ((*((unsigned __int8 *)a1 + v9 + 24) | (*((unsigned __int8 *)a1
                                                                                              + v9
                                                                                              + 25) << 8)) << 8)) << 8;
          v9 += 4;
          *v10++ = *((unsigned __int8 *)a1 + v12 + 24) | v13;
          --v11;
        }
        while ( v11 );
        TransformMD5((int *)a1 + 2, v14);
        v7 = 0LL;
      }
    }
    while ( v6 );
  }
}
