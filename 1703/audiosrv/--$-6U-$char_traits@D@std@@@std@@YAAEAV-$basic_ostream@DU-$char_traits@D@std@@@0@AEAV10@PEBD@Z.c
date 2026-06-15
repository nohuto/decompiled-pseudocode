/*
 * XREFs of ??$?6U?$char_traits@D@std@@@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@PEBD@Z @ 0x1800166D0
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::operator<<<std::char_traits<char>>(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  unsigned __int8 v13; // r15
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v19 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) <= 1 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) - 1;
  }
  v4 = v1;
  v15 = v1;
  if ( std::ios::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL)) )
  {
    v5 = std::ios::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( std::ios_base::good((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)))
    && std::ios::tie(v1 + *(int *)(*(_QWORD *)v1 + 4LL))
    && std::ios::tie(v1 + *(int *)(*(_QWORD *)v1 + 4LL)) != v1 )
  {
    v10 = std::ios::tie(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
    std::ostream::flush(v10);
  }
  if ( std::ios_base::good((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) )
  {
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL))) & 0x1C0) != 0x40 )
      {
        while ( v3 > 0 )
        {
          v11 = std::ios::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v12 = std::ios::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          if ( (unsigned int)std::streambuf::sputc(v12, v11) == -1 )
            goto LABEL_29;
          --v3;
        }
      }
      v6 = std::ios::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
      if ( std::streambuf::sputn(v6, " ", 1LL) == 1 )
      {
        while ( v3 > 0 )
        {
          v13 = std::ios::fill(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          v14 = std::ios::rdbuf(v1 + *(int *)(*(_QWORD *)v1 + 4LL));
          if ( (unsigned int)std::streambuf::sputc(v14, v13) == -1 )
          {
            v2 = 4;
            goto LABEL_30;
          }
          --v3;
        }
      }
      else
      {
LABEL_29:
        v2 = 4;
LABEL_30:
        v19 = 4;
      }
      std::ios_base::width((std::ios_base *)(v1 + *(int *)(*(_QWORD *)v1 + 4LL)), 0LL);
    }
    catch ( ... )
    {
      LOBYTE(v7) = 1;
      std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v7);
      v1 = a1;
      v2 = v19;
      v4 = v15;
    }
  }
  else
  {
    v2 = 4;
  }
  std::ios::setstate(v1 + *(int *)(*(_QWORD *)v1 + 4LL), v2, 0LL);
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(v4);
  if ( std::ios::rdbuf(v4 + *(int *)(*(_QWORD *)v4 + 4LL)) )
  {
    v8 = std::ios::rdbuf(v4 + *(int *)(*(_QWORD *)v4 + 4LL));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v1;
}
