/*
 * XREFs of sub_180054D18 @ 0x180054D18
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 */

__int64 __fastcall sub_180054D18(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 **v5; // rsi
  char v6; // al
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  int v9; // ecx
  __int64 v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  _BYTE *v13; // [rsp+50h] [rbp+18h]

  v13 = a3;
  if ( *(_DWORD *)(a1 + 56) == -4 )
    return 3221225794LL;
  v5 = *(__int64 ***)(a1 + 40);
  v6 = 0;
  v12 = 0;
  if ( v5 )
  {
    v7 = v5;
    do
    {
      v7 = (__int64 **)*v7;
      if ( ((_BYTE)v7[3] & 1) == 0 )
      {
        v8 = v7[1];
        if ( *((_DWORD *)v8 + 14) == 7 )
        {
          v9 = sub_180054D18(v8, a2, &v12);
          if ( v9 < 0 )
            goto LABEL_13;
          v6 = v12;
        }
        else
        {
          if ( *((_DWORD *)v8 + 14) == -4 )
          {
            v9 = -1073741502;
            goto LABEL_13;
          }
          if ( *((_DWORD *)v8 + 14) == 8 )
            v6 = 1;
          v12 = v6;
        }
      }
    }
    while ( v7 != v5 );
    if ( v6 )
    {
      *v13 = 1;
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( v11 )
      {
        if ( a2 != *(_QWORD *)(v11 + 40) )
        {
          v9 = 0;
          goto LABEL_13;
        }
      }
    }
  }
  v9 = sub_180054DE8(a1);
LABEL_13:
  if ( v9 < 0 )
    *(_DWORD *)(a1 + 56) = -4;
  return (unsigned int)v9;
}
