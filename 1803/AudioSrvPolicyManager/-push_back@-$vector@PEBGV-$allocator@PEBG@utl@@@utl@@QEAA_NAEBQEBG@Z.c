/*
 * XREFs of ?push_back@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@QEAA_NAEBQEBG@Z @ 0x18002AC84
 * Callers:
 *     IsEUCountry @ 0x18002AD2C (IsEUCountry.c)
 * Callees:
 *     ?_Grow@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_NXZ @ 0x18002AB98 (-_Grow@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@AEAA_NXZ.c)
 */

char __fastcall utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::push_back(
        _QWORD *a1,
        char *a2)
{
  char *v3; // rdi
  _QWORD *v4; // rcx
  char *v5; // rsi
  char v6; // al
  char v7; // cl

  v3 = a2;
  v4 = (_QWORD *)a1[1];
  if ( v4 != (_QWORD *)a1[2] )
  {
    *v4 = *(_QWORD *)a2;
LABEL_7:
    a1[1] += 8LL;
    return 1;
  }
  v5 = &a2[-*a1];
  v6 = utl::vector<unsigned short const *,utl::allocator<unsigned short const *>>::_Grow((__int64)a1);
  v7 = 0;
  if ( v6 )
  {
    if ( (unsigned __int64)v5 < a1[1] - *a1 )
      v3 = &v5[*a1];
    *(_QWORD *)a1[1] = *(_QWORD *)v3;
    goto LABEL_7;
  }
  return v7;
}
