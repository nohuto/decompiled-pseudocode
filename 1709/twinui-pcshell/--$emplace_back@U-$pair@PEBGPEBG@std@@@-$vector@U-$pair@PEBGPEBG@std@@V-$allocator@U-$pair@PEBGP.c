/*
 * XREFs of ??$emplace_back@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@1@@Z @ 0x18008C320
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008ADF4 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008AECC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEBU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEBU10@0PEAU10@AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008C9F8 (--$_Uninitialized_copy_al_unchecked@PEBU-$pair@PEBGPEBG@std@@PEAU12@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::emplace_back<std::pair<unsigned short const *,unsigned short const *>>(
        unsigned __int64 *a1,
        _OWORD *a2)
{
  _OWORD *v4; // rcx
  _OWORD *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _OWORD *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // [rsp+80h] [rbp+18h]

  v4 = (_OWORD *)a1[2];
  v5 = (_OWORD *)a1[1];
  if ( v4 == v5 )
  {
    v6 = (__int64)((__int64)v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = v6 + 1;
    v8 = (__int64)((__int64)v4 - *a1) >> 4;
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
    v11 = std::_Allocate(v10, 0x10uLL);
    v12 = v11;
    v18 = v11;
    try
    {
      v13 = &v11[2 * v6];
      if ( v13 )
        *v13 = *a2;
      std::_Uninitialized_copy_al_unchecked<std::pair<unsigned short const *,unsigned short const *> const *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v14, v18, v10);
      throw;
    }
    v15 = *a1;
    if ( !*a1 )
      goto LABEL_24;
    v16 = (__int64)(a1[2] - v15) >> 4;
    if ( v16 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v16 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v15);
LABEL_24:
        *a1 = (unsigned __int64)v12;
        a1[1] = (unsigned __int64)&v12[2 * v7];
        a1[2] = (unsigned __int64)&v12[2 * v10];
        return;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v17 = *(_QWORD *)(v15 - 8);
        if ( v17 < v15 )
        {
          v15 = v15 - v17 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v17;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15);
    __debugbreak();
  }
  if ( v5 )
    *v5 = *a2;
  a1[1] += 16LL;
}
