/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1801BF014
 * Callers:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C2E50 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1801C0650 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int16 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // [rsp+28h] [rbp-50h] BYREF
  char v16; // [rsp+30h] [rbp-48h]
  int v19; // [rsp+90h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v19 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) - v5;
  }
  std::basic_ostream<unsigned short>::sentry::sentry(&v15, v3);
  if ( v16 )
  {
    try
    {
      if ( (std::ios_base::flags((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL))) & 0x1C0) != 0x40 )
      {
        while ( v6 > 0 )
        {
          v7 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
          v8 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
          if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v8, v7) == 0xFFFF )
            goto LABEL_17;
          --v6;
        }
        v2 = a2;
      }
      v9 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
      if ( std::basic_streambuf<unsigned short>::sputn(v9, v2, v5) == v5 )
      {
        while ( v6 > 0 )
        {
          v10 = std::basic_ios<unsigned short>::fill(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
          v11 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
          if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(v11, v10) == 0xFFFF )
            goto LABEL_17;
          --v6;
        }
      }
      else
      {
LABEL_17:
        v4 = 4;
        v19 = 4;
      }
      std::ios_base::width((std::ios_base *)(v3 + *(int *)(*(_QWORD *)v3 + 4LL)), 0LL);
    }
    catch ( ... )
    {
      LOBYTE(v12) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v12);
      v3 = a1;
      v4 = v19;
    }
  }
  else
  {
    v4 = 4;
  }
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v15);
  if ( std::basic_ios<unsigned short>::rdbuf(v15 + *(int *)(*(_QWORD *)v15 + 4LL)) )
  {
    v13 = std::basic_ios<unsigned short>::rdbuf(v15 + *(int *)(*(_QWORD *)v15 + 4LL));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v3;
}
