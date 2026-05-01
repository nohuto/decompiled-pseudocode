/*
 * XREFs of ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1801164CC
 * Callers:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180113D90 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ??_D?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180114684 (--_D-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x1801165A8 (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 *     ??_E?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180116640 (--_E-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::~basic_stringbuf<unsigned short>(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::basic_stringbuf<unsigned short>::`vftable';
  if ( !v1 )
  {
    v3 = **(_QWORD **)(a1 + 64);
    if ( v3 )
      v4 = v3 + 2LL * **(int **)(a1 + 88);
    else
      v4 = **(_QWORD **)(a1 + 56) + 2LL * **(int **)(a1 + 80);
    v5 = **(_QWORD **)(a1 + 24);
    v6 = (__int64)(v4 - v5) >> 1;
    if ( v6 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * v6 < 0x1000 )
      {
LABEL_11:
        operator delete((void *)v5);
        goto LABEL_12;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_11;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
    JUMPOUT(0x1801165A7LL);
  }
LABEL_12:
  **(_QWORD **)(a1 + 24) = 0LL;
  **(_QWORD **)(a1 + 56) = 0LL;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = 0LL;
  **(_DWORD **)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(a1);
}
