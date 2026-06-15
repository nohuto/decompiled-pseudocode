/*
 * XREFs of ?seekoff@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x18007D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::stringbuf::seekoff(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // ebx
  int v17; // eax

  if ( std::streambuf::pptr(a1) && *(_QWORD *)(a1 + 104) < (unsigned __int64)std::streambuf::pptr(a1) )
    *(_QWORD *)(a1 + 104) = std::streambuf::pptr(a1);
  if ( (a5 & 1) == 0 || !std::streambuf::gptr(a1) )
  {
    if ( (a5 & 2) != 0 && std::streambuf::pptr(a1) )
    {
      if ( a4 == 2 )
      {
        a3 += *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1);
      }
      else if ( a4 == 1 )
      {
        v15 = a3 - std::streambuf::eback(a1);
        a3 = std::streambuf::pptr(a1) + v15;
      }
      else if ( a4 )
      {
        a3 = std::_BADOFF;
      }
      if ( a3 >= 0 && a3 <= *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1) )
      {
        v16 = a3 - std::streambuf::pptr(a1);
        v17 = std::streambuf::eback(a1);
        std::streambuf::pbump(a1, (unsigned int)(v16 + v17));
        goto LABEL_31;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_31;
    }
LABEL_30:
    a3 = std::_BADOFF;
    goto LABEL_31;
  }
  if ( a4 != 2 )
  {
    if ( a4 == 1 )
    {
      if ( (a5 & 2) == 0 )
      {
        v9 = a3 - std::streambuf::eback(a1);
        a3 = std::streambuf::gptr(a1) + v9;
        goto LABEL_13;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_13;
    }
    a3 = std::_BADOFF;
    goto LABEL_13;
  }
  a3 += *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1);
LABEL_13:
  if ( a3 < 0 || a3 > *(_QWORD *)(a1 + 104) - std::streambuf::eback(a1) )
    goto LABEL_30;
  v10 = a3 - std::streambuf::gptr(a1);
  v11 = std::streambuf::eback(a1);
  std::streambuf::gbump(a1, (unsigned int)(v10 + v11));
  if ( (a5 & 2) != 0 && std::streambuf::pptr(a1) )
  {
    v12 = std::streambuf::epptr(a1);
    v13 = std::streambuf::gptr(a1);
    v14 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v14, v13, v12);
  }
LABEL_31:
  a2[1] = 0LL;
  *a2 = a3;
  a2[2] = 0LL;
  return a2;
}
