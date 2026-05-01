/*
 * XREFs of ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x1801C0B10
 * Callers:
 *     ??0SelectionDataParser@StartLayout@@QEAA@XZ @ 0x1801C0228 (--0SelectionDataParser@StartLayout@@QEAA@XZ.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18000506C (-_com_issue_error@@YAXJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
const OLECHAR ***__fastcall _bstr_t::operator=(const OLECHAR ***a1, const OLECHAR *a2)
{
  const OLECHAR *v4; // rcx
  volatile signed __int32 *v5; // rbx
  void *v6; // rcx
  BSTR *v7; // rax
  BSTR *v8; // rbx
  BSTR v9; // rax

  if ( !a2 || (!*a1 ? (v4 = 0LL) : (v4 = **a1), v4 != a2) )
  {
    v5 = (volatile signed __int32 *)*a1;
    if ( *a1 )
    {
      if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) == 1 && v5 )
      {
        if ( *(_QWORD *)v5 )
        {
          SysFreeString(*(BSTR *)v5);
          *(_QWORD *)v5 = 0LL;
        }
        v6 = (void *)*((_QWORD *)v5 + 1);
        if ( v6 )
        {
          operator delete(v6);
          *((_QWORD *)v5 + 1) = 0LL;
        }
        operator delete((void *)v5);
      }
      *a1 = 0LL;
    }
    v7 = (BSTR *)operator new(0x18uLL);
    v8 = v7;
    if ( v7 )
    {
      v7[1] = 0LL;
      *((_DWORD *)v7 + 4) = 1;
      v9 = SysAllocString(a2);
      *v8 = v9;
      if ( !v9 && a2 )
        _com_issue_error();
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = (const OLECHAR **)v8;
    if ( !v8 )
      _com_issue_error();
  }
  return a1;
}
