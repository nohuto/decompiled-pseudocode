/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18001A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  int v2; // r14d
  int v3; // eax
  _QWORD *v6; // r14
  size_t v7; // rbp
  unsigned __int64 v8; // rcx
  SIZE_T v9; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rax
  _BYTE *v13; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // rcx
  char *v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h]

  v3 = *(_DWORD *)(a1 + 112);
  if ( (v3 & 2) != 0 )
    return 0xFFFFFFFFLL;
  if ( a2 == -1 )
    return 0LL;
  if ( (v3 & 8) != 0 && std::streambuf::pptr(a1) && (unsigned __int64)std::streambuf::pptr(a1) < *(_QWORD *)(a1 + 104) )
  {
    v15 = std::streambuf::epptr(a1);
    v16 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v16, *(_QWORD *)(a1 + 104), v15);
  }
  if ( std::streambuf::pptr(a1) )
  {
    v17 = std::streambuf::epptr(a1);
    if ( std::streambuf::pptr(a1) < v17 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  v29 = v2;
  v6 = 0LL;
  if ( std::streambuf::pptr(a1) )
  {
    v18 = std::streambuf::eback(a1);
    v7 = std::streambuf::epptr(a1) - v18;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 >> 1;
  if ( v7 >> 1 >= 0x20 )
  {
    if ( !v8 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v8 = 32LL;
  }
  do
  {
    if ( 0x7FFFFFFF - v8 >= v7 )
      break;
    v8 >>= 1;
  }
  while ( v8 );
  if ( !v8 )
    return 0xFFFFFFFFLL;
  v9 = v8 + v7;
  if ( v8 + v7 )
  {
    if ( v9 >= 0x1000 )
    {
      if ( v9 + 39 < v9 )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x18006B6A3LL);
      }
      v19 = operator new(v9 + 39);
      if ( !v19 )
      {
        _o__invalid_parameter_noinfo_noreturn(v20);
        JUMPOUT(0x18006B6B4LL);
      }
      v6 = (_QWORD *)(((unsigned __int64)v19 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v6 - 1) = v19;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, v9);
      if ( !v6 )
      {
        _o__invalid_parameter_noinfo_noreturn(v11);
        JUMPOUT(0x18006B6CCLL);
      }
    }
  }
  v12 = (_BYTE *)std::streambuf::eback(a1);
  v13 = v12;
  if ( v7 )
  {
    memcpy_0(v6, v12, v7);
    v21 = (char *)v6 + v9;
    *(_QWORD *)(a1 + 104) += (char *)v6 - v13;
    v22 = std::streambuf::pptr(a1) + (char *)v6 - v13;
    v23 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v23 + (char *)v6 - v13, v22, v21);
    v24 = a1;
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    {
      v25 = v6;
      v26 = 0LL;
    }
    else
    {
      v27 = std::streambuf::pptr(a1);
      v28 = std::streambuf::gptr(a1);
      v25 = (_QWORD *)(v27 + 1);
      v24 = a1;
      v26 = v28 + (char *)v6 - v13;
    }
    std::streambuf::setg(v24, v6, v26, v25, v29);
  }
  else
  {
    *(_QWORD *)(a1 + 104) = v6;
    std::streambuf::setp(a1, v6, (char *)v6 + v9);
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      std::streambuf::setg(a1, v6, 0LL, v6, v29);
    else
      std::streambuf::setg(a1, v6, v6, (char *)v6 + 1, v29);
  }
  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
    std::_Deallocate(v13, v7, 1uLL);
  *(_DWORD *)(a1 + 112) |= 1u;
  *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
  return a2;
}
