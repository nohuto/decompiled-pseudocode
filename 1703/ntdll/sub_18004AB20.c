/*
 * XREFs of sub_18004AB20 @ 0x18004AB20
 * Callers:
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall sub_18004AB20(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // eax
  __int128 v5; // xmm0
  unsigned __int16 *v6; // [rsp+40h] [rbp-39h] BYREF
  __int128 v7; // [rsp+48h] [rbp-31h] BYREF
  int v8; // [rsp+58h] [rbp-21h] BYREF
  __int64 v9; // [rsp+60h] [rbp-19h]
  __int64 v10; // [rsp+68h] [rbp-11h]
  int v11; // [rsp+70h] [rbp-9h]
  __int128 v12; // [rsp+78h] [rbp-1h]
  _BYTE v13[40]; // [rsp+88h] [rbp+Fh] BYREF

  result = sub_18003E060(1, 0, a1, (unsigned __int16 *)a2, (unsigned __int16 *)&v7, &v6, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v6 == (unsigned __int16 *)&v7 )
    {
      if ( a2 + 16 != *(_QWORD *)(a2 + 8) )
        RtlDeleteBoundaryDescriptor();
      v5 = v7;
      *(_DWORD *)a2 = 0x1000000;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v5;
    }
    v4 = 64;
    v8 = 48;
    v9 = 0LL;
    if ( !byte_18015B2E8 )
      v4 = 2112;
    v10 = a2;
    v11 = v4;
    v12 = 0LL;
    return ZwQueryAttributesFile(&v8, v13);
  }
  return result;
}
