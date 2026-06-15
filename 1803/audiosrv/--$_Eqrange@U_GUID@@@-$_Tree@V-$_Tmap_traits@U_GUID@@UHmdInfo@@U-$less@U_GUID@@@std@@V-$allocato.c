/*
 * XREFs of ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@V12@@1@AEBU_GUID@@@Z @ 0x1800F79D8
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBU_GUID@@@Z @ 0x1800F9DC4 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator_ea_1800F9DC4.c)
 * Callees:
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Eqrange<_GUID>(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 **v3; // r15
  __int64 **v6; // rbx
  __int64 *v7; // rdi
  __int64 *v8; // rsi
  __int128 v9; // xmm1
  __int64 **v10; // rsi
  char v11; // al
  _QWORD *result; // rax
  __int128 Buf2; // [rsp+20h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h] BYREF

  v3 = (__int64 **)*a1;
  v6 = (__int64 **)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  v8 = v7;
  if ( !*((_BYTE *)v7 + 25) )
  {
    Buf2 = *a3;
    do
    {
      Buf1 = *((_OWORD *)v8 + 2);
      if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) >= 0 )
      {
        if ( *((_BYTE *)v6 + 25) )
        {
          v9 = *a3;
          Buf1 = *((_OWORD *)v8 + 2);
          v15 = v9;
          if ( memcmp_0(&v15, &Buf1, 0x10uLL) < 0 )
            v6 = (__int64 **)v8;
        }
        v3 = (__int64 **)v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = *v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    Buf1 = *a3;
    do
    {
      v10 = (__int64 **)v7;
      v15 = *((_OWORD *)v7 + 2);
      if ( memcmp_0(&Buf1, &v15, 0x10uLL) >= 0 )
      {
        v7 = (__int64 *)v7[2];
        v11 = 0;
      }
      else
      {
        v7 = (__int64 *)*v7;
        v11 = 1;
      }
      if ( !v11 )
        v10 = v6;
      v6 = v10;
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  a2[1] = v6;
  result = a2;
  *a2 = v3;
  return result;
}
