/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1801C56D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  char *v13; // rax
  char *v14; // r12
  char *v15; // r13
  char *v16; // rdx
  __int64 v17; // rcx
  char *v18; // r9
  char *v19; // r8
  char *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 112) & 8) != 0
    && ((__int64 (*)(void))std::basic_streambuf<unsigned short>::pptr)()
    && (unsigned __int64)std::basic_streambuf<unsigned short>::pptr(a1) < *(_QWORD *)(a1 + 104) )
  {
    v5 = std::basic_streambuf<unsigned short>::epptr(a1);
    v6 = std::basic_streambuf<unsigned short>::pbase(a1);
    std::basic_streambuf<unsigned short>::setp(a1, v6, *(_QWORD *)(a1 + 104), v5);
  }
  if ( !std::basic_streambuf<unsigned short>::pptr(a1)
    || (v7 = std::basic_streambuf<unsigned short>::epptr(a1), std::basic_streambuf<unsigned short>::pptr(a1) >= v7) )
  {
    if ( std::basic_streambuf<unsigned short>::pptr(a1) )
    {
      v9 = std::basic_streambuf<unsigned short>::eback(a1);
      v8 = (std::basic_streambuf<unsigned short>::epptr(a1) - v9) >> 1;
    }
    else
    {
      v8 = 0LL;
    }
    v10 = 32LL;
    if ( v8 >> 1 < 0x20 || (v10 = v8 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v10 >= v8 )
          break;
        v10 >>= 1;
      }
      while ( v10 );
    }
    if ( !v10 )
      return 0xFFFFLL;
    v11 = v10 + v8;
    v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10 + v8, 2uLL);
    v13 = (char *)std::basic_streambuf<unsigned short>::eback(a1);
    v14 = v13;
    if ( v8 )
      memcpy_0(v12, v13, 2 * v8);
    v15 = &v12[2 * v11];
    if ( v8 )
    {
      *(_QWORD *)(a1 + 104) = &v12[2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v14) >> 1)];
      v20 = &v12[2 * ((std::basic_streambuf<unsigned short>::pptr(a1) - (__int64)v14) >> 1)];
      v21 = std::basic_streambuf<unsigned short>::pbase(a1);
      std::basic_streambuf<unsigned short>::setp(a1, &v12[2 * ((v21 - (__int64)v14) >> 1)], v20, v15);
      v17 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v18 = v12;
        v19 = 0LL;
      }
      else
      {
        v22 = std::basic_streambuf<unsigned short>::pptr(a1);
        v23 = std::basic_streambuf<unsigned short>::gptr(a1);
        v18 = (char *)(v22 + 2);
        v17 = a1;
        v19 = &v12[2 * ((v23 - (__int64)v14) >> 1)];
      }
      v16 = v12;
    }
    else
    {
      *(_QWORD *)(a1 + 104) = v12;
      std::basic_streambuf<unsigned short>::setp(a1, v12, &v12[2 * v11]);
      v16 = v12;
      v17 = a1;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        v18 = v12;
        v19 = 0LL;
      }
      else
      {
        v18 = v12 + 2;
        v19 = v12;
      }
    }
    std::basic_streambuf<unsigned short>::setg(v17, v16, v19, v18);
    v24 = *(_DWORD *)(a1 + 112);
    if ( (v24 & 1) != 0 )
    {
      std::_Deallocate(v14, v8, 2uLL);
      v24 = *(_DWORD *)(a1 + 112);
    }
    *(_DWORD *)(a1 + 112) = v24 | 1;
  }
  *(_WORD *)std::basic_streambuf<unsigned short>::_Pninc(a1) = a2;
  return a2;
}
