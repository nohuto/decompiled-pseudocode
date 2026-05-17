/*
 * XREFs of sub_18003FC1C @ 0x18003FC1C
 * Callers:
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009B260 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall sub_18003FC1C(__int128 *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 *v7; // [rsp+40h] [rbp-39h] BYREF
  __int128 v8; // [rsp+48h] [rbp-31h] BYREF
  int v9; // [rsp+58h] [rbp-21h] BYREF
  __int64 v10; // [rsp+60h] [rbp-19h]
  __int64 v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+70h] [rbp-9h]
  __int128 v13; // [rsp+78h] [rbp-1h]
  _BYTE v14[40]; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_18003D190(1, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v8, &v7, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v7 == &v8 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v5 )
        RtlDeleteBoundaryDescriptor(v5);
      v6 = v8;
      *(_DWORD *)a2 = 0x1000000;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v6;
    }
    v4 = 64;
    v9 = 48;
    v10 = 0LL;
    if ( !byte_18015C318 )
      v4 = 2112;
    v11 = a2;
    v12 = v4;
    v13 = 0LL;
    return ZwQueryAttributesFile(&v9, v14);
  }
  return result;
}
