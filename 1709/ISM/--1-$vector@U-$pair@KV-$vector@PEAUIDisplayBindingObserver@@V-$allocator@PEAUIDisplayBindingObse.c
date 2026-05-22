/*
 * XREFs of ??1?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001DF80
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC (--1DWMInputRouter@@MEAA@XZ.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$14 @ 0x1800CD08D (_DWMInputRouter--DWMInputRouter_--_1_--dtor$14.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$14 @ 0x1800CD23C (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$14.c)
 * Callees:
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>::~vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)(v1 + 8));
      v1 += 32LL;
    }
    v4 = *a1;
    v5 = (__int64)(a1[2] - *a1) >> 5;
    if ( v5 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( 32 * v5 < 0x1000 )
      {
LABEL_11:
        operator delete((void *)v4);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v4 & 0x1F) == 0 )
      {
        v6 = *(_QWORD *)(v4 - 8);
        if ( v6 < v4 )
        {
          v4 = v4 - v6 - 8;
          if ( v4 <= 0x1F )
          {
            v4 = v6;
            goto LABEL_11;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v4);
    JUMPOUT(0x18001E022LL);
  }
}
