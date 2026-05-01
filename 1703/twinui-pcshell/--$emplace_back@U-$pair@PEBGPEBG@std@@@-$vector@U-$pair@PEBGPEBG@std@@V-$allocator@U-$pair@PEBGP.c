/*
 * XREFs of ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x180089F98
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800888EC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180088A38 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked1@PEAU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008A600 (--$_Uninitialized_copy_al_unchecked1@PEAU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPE.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
        char **a1,
        _OWORD *a2)
{
  char *v4; // rcx
  char *v5; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  char *v11; // r14
  size_t v12; // rcx
  void *v13; // rax
  char *v14; // rax
  __int64 v15; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 16 * v10;
      if ( 16 * v10 < 0x1000 )
      {
        v11 = (char *)operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (char *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[16 * v6];
      if ( v14 )
        *(_OWORD *)v14 = *a2;
      std::_Uninitialized_copy_al_unchecked1<std::pair<unsigned short const *,unsigned short const *> *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v15, v11, v10);
      throw;
    }
    if ( *a1 )
      std::_Deallocate(*a1, (a1[2] - *a1) >> 4, 0x10uLL);
    *a1 = v11;
    a1[1] = &v11[16 * v7];
    a1[2] = &v11[16 * v10];
  }
  else
  {
    if ( v5 )
      *(_OWORD *)v5 = *a2;
    a1[1] += 16;
  }
}
