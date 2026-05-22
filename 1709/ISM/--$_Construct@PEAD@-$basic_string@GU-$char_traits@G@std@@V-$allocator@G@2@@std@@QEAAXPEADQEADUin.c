/*
 * XREFs of ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x1800293BC
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180029198 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

char *__fastcall std::wstring::_Construct<char *>(_QWORD *Src, char *a2, __int64 a3)
{
  char *result; // rax
  __int16 v6; // di
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  char *v12; // r15
  __int64 v13; // rbx
  size_t v14; // r8
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rax
  __int16 v19; // [rsp+88h] [rbp+20h]

  result = (char *)a3;
  try
  {
    while ( a2 != result )
    {
      v6 = *a2;
      v19 = v6;
      v7 = Src[2];
      v8 = Src[3];
      if ( v7 >= v8 )
      {
        if ( v7 == 0x7FFFFFFFFFFFFFFELL )
          std::wstring::_Xlen();
        v10 = (v7 + 1) | 7;
        if ( v10 > 0x7FFFFFFFFFFFFFFELL || (v11 = v8 >> 1, v8 > 0x7FFFFFFFFFFFFFFELL - (v8 >> 1)) )
        {
          v10 = 0x7FFFFFFFFFFFFFFELL;
        }
        else if ( v10 < v11 + v8 )
        {
          v10 = v11 + v8;
        }
        v12 = (char *)std::_Allocate(v10 + 1, 2uLL);
        Src[2] = v7 + 1;
        Src[3] = v10;
        v13 = 2 * v7;
        v14 = 2 * v7;
        if ( v8 < 8 )
        {
          memcpy_0(v12, Src, v14);
          *(_WORD *)&v12[v13] = v6;
          *(_WORD *)&v12[v13 + 2] = 0;
        }
        else
        {
          v15 = (_QWORD *)*Src;
          memcpy_0(v12, (const void *)*Src, v14);
          *(_WORD *)&v12[v13] = v19;
          *(_WORD *)&v12[v13 + 2] = 0;
          if ( v8 + 1 > 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_22;
          if ( 2 * (v8 + 1) >= 0x1000 )
          {
            if ( ((unsigned __int8)v15 & 0x1F) != 0
              || (v16 = *(v15 - 1), v16 >= (unsigned __int64)v15)
              || (unsigned __int64)v15 - v16 - 8 > 0x1F )
            {
LABEL_22:
              _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
              __debugbreak();
            }
            v15 = (_QWORD *)*(v15 - 1);
          }
          operator delete(v15);
        }
        *Src = v12;
      }
      else
      {
        Src[2] = v7 + 1;
        v9 = Src;
        if ( v8 >= 8 )
          v9 = (_QWORD *)*Src;
        *((_WORD *)v9 + v7) = v6;
        *((_WORD *)v9 + v7 + 1) = 0;
      }
      ++a2;
      result = (char *)a3;
    }
  }
  catch ( ... )
  {
    std::wstring::_Tidy_deallocate(Src);
    throw;
  }
  return result;
}
