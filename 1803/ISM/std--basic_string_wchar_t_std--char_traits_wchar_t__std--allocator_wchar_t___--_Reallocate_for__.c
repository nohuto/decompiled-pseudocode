/*
 * XREFs of std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C
 * Callers:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180066864 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18006966C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18006FD8C (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180070758 (GetHolographicInputSession.c)
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18009BCC4 (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 *     ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1800B47EC (-EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z.c)
 *     ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6240 (-BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJX.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180044B08 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

unsigned __int64 *__fastcall std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdi
  size_t v13; // rcx
  void *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v8 = a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = v4 + 1;
  if ( v4 == -1 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v11 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Default_allocate_traits<1>::_Fail();
    v13 = 2 * v11;
    if ( v13 < 0x1000 )
    {
      v12 = operator new(v13);
    }
    else
    {
      if ( v13 + 39 < v13 )
        std::_Default_allocate_traits<1>::_Fail();
      v14 = operator new(v13 + 39);
      v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v12 - 1) = v14;
    }
  }
  a1[3] = v4;
  a1[2] = a2;
  memcpy_0(v12, a4, 2 * a2);
  *((_WORD *)v12 + a2) = 0;
  if ( v8 >= 8 )
  {
    v15 = *a1;
    if ( v8 + 1 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * (v8 + 1) < 0x1000 )
      {
LABEL_20:
        operator delete((void *)v15);
        goto LABEL_21;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v16 = *(_QWORD *)(v15 - 8);
        if ( v16 < v15 )
        {
          v15 = v15 - v16 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v16;
            goto LABEL_20;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15, 0x7FFFFFFFFFFFFFFFLL);
    __debugbreak();
  }
LABEL_21:
  *a1 = (unsigned __int64)v12;
  return a1;
}
