/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x1800438A0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  int v2; // eax
  char *v5; // rsi
  size_t v6; // rbp
  unsigned __int64 v7; // rcx
  SIZE_T v8; // rdi
  HANDLE ProcessHeap; // rax
  __int64 v10; // rcx
  _BYTE *v11; // rax
  _BYTE *v12; // r12
  char *v13; // r15
  int v14; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  char *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdi
  __int64 v28; // rax

  v2 = *(_DWORD *)(a1 + 112);
  if ( (v2 & 2) != 0 )
    return 0xFFFFFFFFLL;
  if ( a2 == -1 )
    return 0LL;
  if ( (v2 & 8) != 0 && std::streambuf::pptr(a1) && (unsigned __int64)std::streambuf::pptr(a1) < *(_QWORD *)(a1 + 104) )
  {
    v16 = std::streambuf::epptr(a1);
    v17 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v17, *(_QWORD *)(a1 + 104), v16);
  }
  if ( std::streambuf::pptr(a1) )
  {
    v18 = std::streambuf::epptr(a1);
    if ( std::streambuf::pptr(a1) < v18 )
    {
      *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
      return a2;
    }
  }
  v5 = 0LL;
  if ( std::streambuf::pptr(a1) )
  {
    v19 = std::streambuf::eback(a1);
    v6 = std::streambuf::epptr(a1) - v19;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 >> 1;
  if ( v6 >> 1 >= 0x20 )
  {
    if ( !v7 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v7 = 32LL;
  }
  do
  {
    if ( 0x7FFFFFFF - v7 >= v6 )
      break;
    v7 >>= 1;
  }
  while ( v7 );
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v8 = v7 + v6;
  if ( v7 + v6 )
  {
    if ( v8 >= 0x1000 )
    {
      if ( v8 + 39 < v8 )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x180077C9FLL);
      }
      v20 = operator new(v8 + 39);
      if ( !v20 )
      {
        _o__invalid_parameter_noinfo_noreturn(v21);
        JUMPOUT(0x180077CB0LL);
      }
      v5 = (char *)(((unsigned __int64)v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v5 - 1) = v20;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v5 = (char *)HeapAlloc(ProcessHeap, 0, v8);
      if ( !v5 )
      {
        _o__invalid_parameter_noinfo_noreturn(v10);
        JUMPOUT(0x180077CC8LL);
      }
    }
  }
  v11 = (_BYTE *)std::streambuf::eback(a1);
  v12 = v11;
  if ( v6 )
    memcpy_0(v5, v11, v6);
  v13 = &v5[v8];
  if ( v6 )
  {
    *(_QWORD *)(a1 + 104) += v5 - v12;
    v22 = std::streambuf::pptr(a1) + v5 - v12;
    v23 = std::streambuf::pbase(a1);
    std::streambuf::setp(a1, v23 + v5 - v12, v22, v13);
    v24 = a1;
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
    {
      v25 = v5;
      v26 = 0LL;
    }
    else
    {
      v27 = std::streambuf::pptr(a1);
      v28 = std::streambuf::gptr(a1);
      v25 = (char *)(v27 + 1);
      v24 = a1;
      v26 = v28 + v5 - v12;
    }
    std::streambuf::setg(v24, v5, v26, v25);
  }
  else
  {
    *(_QWORD *)(a1 + 104) = v5;
    std::streambuf::setp(a1, v5, &v5[v8]);
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      std::streambuf::setg(a1, v5, 0LL, v5);
    else
      std::streambuf::setg(a1, v5, v5, v5 + 1);
  }
  v14 = *(_DWORD *)(a1 + 112);
  if ( (v14 & 1) != 0 )
  {
    std::_Deallocate(v12, v6, 1uLL);
    v14 = *(_DWORD *)(a1 + 112);
  }
  *(_DWORD *)(a1 + 112) = v14 | 1;
  *(_BYTE *)std::streambuf::_Pninc(a1) = a2;
  return a2;
}
