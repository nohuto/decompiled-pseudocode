/*
 * XREFs of ??1?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA@XZ @ 0x180067D18
 * Callers:
 *     ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x180067790 (--_EEdgyConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Edge>::~vector<Edge>(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 *v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v2 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(unsigned __int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[5];
        if ( v4 )
        {
          v2[5] = 0LL;
          (**(void (__fastcall ***)(__int64))(v4 + 16))(v4 + 16);
        }
        std::wstring::_Tidy_deallocate(v2 + 1);
        v2 += 12;
      }
      while ( v2 != v3 );
      v2 = *(unsigned __int64 **)a1;
    }
    v5 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v5 / 96;
    if ( (unsigned __int64)(v5 / 96) <= 0x2AAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(96 * v6) < 0x1000 )
      {
LABEL_13:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v7 = *(v2 - 1);
        if ( v7 < (unsigned __int64)v2 && (unsigned __int64)v2 - v7 - 8 <= 0x1F )
        {
          v2 = (unsigned __int64 *)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5, v6);
    JUMPOUT(0x180067E0BLL);
  }
}
