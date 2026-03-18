/*
 * XREFs of PiValidatePowerRelations @ 0x1405C2A10
 * Callers:
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 *__fastcall PiValidatePowerRelations(__int64 a1)
{
  __int64 **v2; // rdx
  __int64 *result; // rax
  __int64 *v4; // rcx
  __int64 v5; // rcx
  __int64 **v6; // rdx
  __int64 v7; // r9
  __int64 **v8; // rdx
  __int64 i; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 **v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // r10
  __int64 **v15; // r10
  __int64 *v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v17; // [rsp+38h] [rbp-8h]

  v17 = &v16;
  v2 = (__int64 **)(a1 + 176);
  v16 = (__int64 *)&v16;
  while ( *v2 != (__int64 *)v2 )
  {
    v10 = *v2;
    v11 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v2 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v2;
    v12 = v17;
    if ( *v17 != (__int64 *)&v16 )
      __fastfail(3u);
    v10[1] = (__int64)v17;
    *v10 = (__int64)&v16;
    *v12 = v10;
    v17 = (__int64 **)v10;
  }
  result = v16;
  if ( v16 != (__int64 *)&v16 )
  {
    do
    {
      v7 = result[5] - 144;
      v8 = (__int64 **)(v7 + 176);
      while ( *v8 != (__int64 *)v8 )
      {
        v13 = *v8;
        v14 = **v8;
        if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v14 + 8) != v13 )
          __fastfail(3u);
        *v8 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v8;
        v15 = v17;
        if ( *v17 != (__int64 *)&v16 )
          __fastfail(3u);
        v13[1] = (__int64)v17;
        *v13 = (__int64)&v16;
        *v15 = v13;
        v17 = (__int64 **)v13;
      }
      for ( i = v7; i; i = *(_QWORD *)(i + 16) )
      {
        if ( i == a1 )
          KeBugCheckEx(0xCAu, 0xCuLL, *(_QWORD *)(a1 + 32), *(_QWORD *)(v7 + 32), 0LL);
      }
      result = (__int64 *)*result;
    }
    while ( result != (__int64 *)&v16 );
    goto LABEL_9;
  }
  while ( result != (__int64 *)&v16 )
  {
    v4 = (__int64 *)*result;
    if ( (__int64 **)result[1] != &v16 || (__int64 *)v4[1] != result )
      __fastfail(3u);
    v16 = (__int64 *)*result;
    v4[1] = (__int64)&v16;
    v5 = result[2] + 32;
    v6 = *(__int64 ***)(result[2] + 40);
    if ( *v6 != (__int64 *)v5 )
      __fastfail(3u);
    *result = v5;
    result[1] = (__int64)v6;
    *v6 = result;
    *(_QWORD *)(v5 + 8) = result;
LABEL_9:
    result = v16;
  }
  return result;
}
