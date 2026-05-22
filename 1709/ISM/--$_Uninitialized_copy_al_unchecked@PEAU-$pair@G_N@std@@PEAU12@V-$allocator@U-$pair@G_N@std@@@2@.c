/*
 * XREFs of ??$_Uninitialized_copy_al_unchecked@PEAU?$pair@G_N@std@@PEAU12@V?$allocator@U?$pair@G_N@std@@@2@@std@@YAPEAU?$pair@G_N@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@G_N@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800420E8
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180042044 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x1800425A0 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short,bool> *,std::pair<unsigned short,bool> *,std::allocator<std::pair<unsigned short,bool>>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx

  try
  {
    v3 = 0LL;
    v4 = (a2 - a1 + 3) >> 2;
    if ( a1 > a2 )
      v4 = 0LL;
    if ( v4 )
    {
      v5 = a1 - (_QWORD)a3;
      do
      {
        if ( a3 )
          *a3 = *(_DWORD *)((char *)a3 + v5);
        ++a3;
        ++v3;
      }
      while ( v3 != v4 );
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
