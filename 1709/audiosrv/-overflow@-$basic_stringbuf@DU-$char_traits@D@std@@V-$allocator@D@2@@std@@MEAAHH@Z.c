/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18002F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  size_t v4; // rbp
  unsigned __int64 v5; // rcx
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v8; // rcx
  char *v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // r12
  char *v12; // rdx
  __int64 v13; // rcx
  char *v14; // r9
  char *v15; // r8
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rbx
  LPVOID v21; // rax
  __int64 v22; // rcx
  char *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFFFFFLL;
  if ( a2 != -1 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 8) != 0
      && std::streambuf::pptr(a1)
      && (unsigned __int64)std::streambuf::pptr(a1) < *(_QWORD *)(a1 + 104) )
    {
      v17 = std::streambuf::epptr(a1);
      v18 = std::streambuf::pbase(a1);
      std::streambuf::setp(a1, v18, *(_QWORD *)(a1 + 104), v17);
    }
    if ( std::streambuf::pptr(a1) )
    {
      v19 = std::streambuf::epptr(a1);
      if ( std::streambuf::pptr(a1) < v19 )
        goto LABEL_19;
    }
    if ( std::streambuf::pptr(a1) )
    {
      v20 = std::streambuf::eback(a1);
      v4 = std::streambuf::epptr(a1) - v20;
    }
    else
    {
      v4 = 0LL;
    }
    v5 = 32LL;
    if ( v4 >> 1 < 0x20 || (v5 = v4 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v5 >= v4 )
          break;
        v5 >>= 1;
      }
      while ( v5 );
    }
    if ( v5 )
    {
      v6 = v5 + v4;
      if ( v5 + v4 )
      {
        if ( v6 >= 0x1000 )
        {
          if ( v6 + 39 < v6 )
          {
            std::_Xbad_alloc();
            JUMPOUT(0x180057A4BLL);
          }
          v21 = operator new(v6 + 39);
          if ( !v21 )
          {
            _o__invalid_parameter_noinfo_noreturn(v22);
            JUMPOUT(0x180057A5CLL);
          }
          v9 = (char *)(((unsigned __int64)v21 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v9 - 1) = v21;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v9 = (char *)HeapAlloc(ProcessHeap, 0, v6);
          if ( !v9 )
          {
            _o__invalid_parameter_noinfo_noreturn(v8);
            JUMPOUT(0x180057A74LL);
          }
        }
      }
      else
      {
        v9 = 0LL;
      }
      v10 = (_BYTE *)std::streambuf::eback(a1);
      v11 = v10;
      if ( v4 )
      {
        memcpy_0(v9, v10, v4);
        v23 = &v9[v6];
        *(_QWORD *)(a1 + 104) += v9 - v11;
        v24 = std::streambuf::pptr(a1) + v9 - v11;
        v25 = std::streambuf::pbase(a1);
        std::streambuf::setp(a1, v25 + v9 - v11, v24, v23);
        v13 = a1;
        if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
        {
          v14 = v9;
          v15 = 0LL;
        }
        else
        {
          v26 = std::streambuf::pptr(a1);
          v27 = std::streambuf::gptr(a1);
          v14 = (char *)(v26 + 1);
          v13 = a1;
          v15 = (char *)(v27 + v9 - v11);
        }
        v12 = v9;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = v9;
        std::streambuf::setp(a1, v9, &v9[v6]);
        v12 = v9;
        v13 = a1;
        if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
        {
          v14 = v9;
          v15 = 0LL;
        }
        else
        {
          v14 = v9 + 1;
          v15 = v9;
        }
      }
      std::streambuf::setg(v13, v12, v15, v14);
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        std::_Deallocate(v11, v4, 1uLL);
      *(_DWORD *)(a1 + 112) |= 1u;
LABEL_19:
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
    return 0xFFFFFFFFLL;
  }
  return 0LL;
}
