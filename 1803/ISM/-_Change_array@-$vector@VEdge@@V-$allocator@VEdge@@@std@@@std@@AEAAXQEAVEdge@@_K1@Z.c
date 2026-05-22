/*
 * XREFs of ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1800697D8
 * Callers:
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Edge>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v4 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(unsigned __int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = v4[5];
        if ( v10 )
        {
          v4[5] = 0LL;
          (**(void (__fastcall ***)(__int64))(v10 + 16))(v10 + 16);
        }
        std::wstring::_Tidy_deallocate(v4 + 1);
        v4 += 12;
      }
      while ( v4 != v9 );
      v4 = *(unsigned __int64 **)a1;
    }
    v11 = *(_QWORD *)(a1 + 16) - (_QWORD)v4;
    v12 = v11 / 96;
    if ( (unsigned __int64)(v11 / 96) <= 0x2AAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(96 * v12) < 0x1000 )
      {
LABEL_13:
        operator delete(v4);
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v13 = *(v4 - 1);
        if ( v13 < (unsigned __int64)v4 && (unsigned __int64)v4 - v13 - 8 <= 0x1F )
        {
          v4 = (unsigned __int64 *)*(v4 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11, v12);
    JUMPOUT(0x1800698EBLL);
  }
LABEL_14:
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 96 * a3;
  result = a2 + 96 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
