/*
 * XREFs of ?_Reallocate_exactly@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAX_K@Z @ 0x180016DE0
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014B9C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000C5CC (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180042950 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<_GUID>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Default_allocate_traits<1>::_Fail();
    v6 = 16 * a2;
    if ( 16 * a2 < 0x1000 )
    {
      v5 = operator new(v6);
    }
    else
    {
      if ( v6 + 39 < v6 )
        std::_Default_allocate_traits<1>::_Fail();
      v7 = operator new(v6 + 39);
      v5 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v5 - 1) = v7;
    }
  }
  else
  {
    v5 = 0LL;
  }
  try
  {
    memmove(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::allocator<_GUID>::deallocate(v9, v5, a2);
    throw;
  }
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v11 = (__int64)(*(_QWORD *)(a1 + 16) - v10) >> 4;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v11 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v10);
        goto LABEL_16;
      }
      if ( (v10 & 0x1F) == 0 )
      {
        v12 = *(_QWORD *)(v10 - 8);
        if ( v12 < v10 )
        {
          v10 = v10 - v12 - 8;
          if ( v10 <= 0x1F )
          {
            v10 = v12;
            goto LABEL_15;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10, v8);
    __debugbreak();
  }
LABEL_16:
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = (char *)v5 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  *(_QWORD *)(a1 + 16) = &v5[2 * a2];
}
