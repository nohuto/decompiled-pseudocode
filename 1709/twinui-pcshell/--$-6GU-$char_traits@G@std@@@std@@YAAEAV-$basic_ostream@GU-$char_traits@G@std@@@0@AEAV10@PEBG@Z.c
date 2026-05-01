/*
 * XREFs of ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180116E18
 * Callers:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180113D90 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::operator<<<unsigned short,std::char_traits<unsigned short>>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+90h] [rbp+18h]

  v2 = a1;
  v3 = 0;
  v21 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v5 = *(int *)(*(_QWORD *)a1 + 4LL);
  v6 = *(_QWORD *)(v5 + v2 + 40);
  if ( v6 <= 0 || v6 <= v4 )
    v7 = 0LL;
  else
    v7 = v6 - v4;
  v8 = v2;
  v16 = v2;
  v9 = *(_QWORD *)(v5 + v2 + 72);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *(int *)(*(_QWORD *)v2 + 4LL);
  if ( !*(_DWORD *)(v10 + v2 + 16) )
  {
    v11 = *(_QWORD *)(v10 + v2 + 80);
    if ( v11 )
    {
      if ( v11 != v2 )
        std::basic_ostream<unsigned short>::flush(v11);
    }
  }
  v12 = *(int *)(*(_QWORD *)v2 + 4LL);
  if ( *(_DWORD *)(v12 + v2 + 16) )
  {
    v3 = 4;
  }
  else
  {
    try
    {
      if ( (*(_DWORD *)(v12 + v2 + 24) & 0x1C0) != 0x40 )
      {
        while ( v7 > 0 )
        {
          if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 88)) == 0xFFFF )
            goto LABEL_22;
          --v7;
        }
      }
      if ( std::basic_streambuf<unsigned short>::sputn(*(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72), a2, v4) == v4 )
      {
        while ( v7 > 0 )
        {
          if ( (unsigned __int16)std::basic_streambuf<unsigned short>::sputc(
                                   *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72),
                                   *(unsigned __int16 *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 88)) == 0xFFFF )
            goto LABEL_22;
          --v7;
        }
      }
      else
      {
LABEL_22:
        v3 = 4;
        v21 = 4;
      }
      *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 40) = 0LL;
    }
    catch ( ... )
    {
      LOBYTE(v13) = 1;
      std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v13);
      v2 = a1;
      v3 = v21;
      v8 = v16;
    }
  }
  std::basic_ios<unsigned short>::setstate(v2 + *(int *)(*(_QWORD *)v2 + 4LL), v3, 0LL);
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v8);
  v14 = *(_QWORD *)(*(int *)(*(_QWORD *)v8 + 4LL) + v8 + 72);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v2;
}
