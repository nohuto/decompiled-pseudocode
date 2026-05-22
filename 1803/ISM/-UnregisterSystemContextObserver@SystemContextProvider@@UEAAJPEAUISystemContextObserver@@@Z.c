/*
 * XREFs of ?UnregisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180091060
 * Callers:
 *     ?UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090710 (-UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A084 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

__int64 __fastcall SystemContextProvider::UnregisterSystemContextObserver(
        SystemContextProvider *this,
        struct ISystemContextObserver *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r11
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 *v13; // rcx
  struct ISystemContextObserver *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  v2 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v5 = 0xCBF29CE484222325uLL;
  v6 = 0LL;
  do
  {
    v7 = *((unsigned __int8 *)&v15 + v6++);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  while ( v6 < 8 );
  v8 = v5 & *((_QWORD *)this + 9);
  v9 = *((_QWORD *)this + 6);
  v10 = 2 * v8;
  v11 = *(__int64 **)(v9 + 16 * v8);
  for ( i = v11; ; i = (__int64 *)*i )
  {
    v13 = v11 == *((__int64 **)this + 4) ? (__int64 *)*((_QWORD *)this + 4) : **(__int64 ***)(v9 + 8 * v10 + 8);
    if ( i == v13 )
      break;
    if ( (struct ISystemContextObserver *)i[2] == a2 )
      goto LABEL_13;
  }
  i = (__int64 *)*((_QWORD *)this + 4);
LABEL_13:
  if ( i == *((__int64 **)this + 4) )
    return (unsigned int)-2147024809;
  else
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
      (_QWORD *)this + 3,
      &v15);
  return v2;
}
