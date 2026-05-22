/*
 * XREFs of std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800CD3E0
 * Callers:
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800BAB98 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x1800C0F0C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x1800C1284 (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800C1840 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1800C1A48 (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
        const void **a1,
        unsigned __int64 a2)
{
  char *v4; // rcx
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx
  size_t v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char *v16; // rbx

  v4 = (char *)*a1;
  v5 = (_BYTE *)a1[1] - v4;
  result = (_BYTE *)a1[2] - v4;
  if ( a2 <= result )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        result = (unsigned __int64)&v4[a2];
        a1[1] = &v4[a2];
      }
    }
    else
    {
      v16 = &v4[a2];
      result = (unsigned __int64)memset_0((void *)a1[1], 0, &v4[a2] - (_BYTE *)a1[1]);
      a1[1] = v16;
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = result >> 1;
    if ( result <= 0x7FFFFFFFFFFFFFFFLL - (result >> 1) )
    {
      v8 = v7 + result;
      if ( v7 + result < a2 )
        v8 = a2;
    }
    else
    {
      v8 = a2;
    }
    if ( v8 )
    {
      if ( v8 < 0x1000 )
      {
        v9 = operator new(v8);
      }
      else
      {
        if ( v8 + 39 < v8 )
          std::_Default_allocate_traits<1>::_Fail();
        v10 = operator new(v8 + 39);
        v9 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v9 - 1) = v10;
      }
    }
    else
    {
      v9 = 0LL;
    }
    try
    {
      v11 = (char *)v9 + a2;
      memset_0((char *)v9 + v5, 0, v11 - ((char *)v9 + v5));
      memmove(v9, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    }
    catch ( ... )
    {
      std::allocator<unsigned char>::deallocate(v13, (unsigned __int64)v9, v8);
      throw;
    }
    v14 = (unsigned __int64)*a1;
    if ( *a1 )
    {
      if ( (char *)a1[2] - v14 >= (char *)0x1000 )
      {
        if ( (v14 & 0x1F) != 0 || (v15 = *(_QWORD *)(v14 - 8), v15 >= v14) || (v14 = v14 - v15 - 8, v14 > 0x1F) )
        {
          _o__invalid_parameter_noinfo_noreturn(v14, v12);
          __debugbreak();
        }
        v14 = v15;
      }
      operator delete((void *)v14);
    }
    *a1 = v9;
    a1[1] = v11;
    result = (unsigned __int64)v9 + v8;
    a1[2] = (char *)v9 + v8;
  }
  return result;
}
