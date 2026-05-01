/*
 * XREFs of ?LoadSchema@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180173CAC
 * Callers:
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180173E70 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180173A84 (-AddSchemaToCollection@StartLayout@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall StartLayout::LoadSchema(__int64 a1, unsigned __int16 **a2)
{
  HRESULT Instance; // eax
  struct IXMLDOMSchemaCollection *v5; // r9
  unsigned int v6; // ebx
  unsigned __int16 *v7; // rcx
  char *i; // rbx
  int v10; // eax
  unsigned int v11; // esi
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int16 *v15; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  Instance = CoCreateInstance(
               &GUID_88d96a07_f192_11d4_a65f_0040963251e5,
               0LL,
               1u,
               &GUID_373984c8_b845_449b_91e7_45ac83036ade,
               (LPVOID *)&v15);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = *(char **)a1; ; i += 16 )
    {
      if ( i == *(char **)(a1 + 8) )
      {
        v13 = v15;
        if ( v15 )
        {
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v15 + 8LL))(v15);
          v13 = v15;
        }
        *a2 = v13;
        if ( v13 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( *(_QWORD *)a1 )
        {
          std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4, 0x10uLL);
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_QWORD *)(a1 + 16) = 0LL;
        }
        return 0LL;
      }
      v10 = StartLayout::AddSchemaToCollection(*(StartLayout **)i, *((const unsigned __int16 **)i + 1), v15, v5);
      v11 = v10;
      if ( v10 < 0 )
        break;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1AE,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v10);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( *(_QWORD *)a1 )
    {
      std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4, 0x10uLL);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    return v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1AA,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Instance);
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( *(_QWORD *)a1 )
    {
      std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4, 0x10uLL);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    return v6;
  }
}
