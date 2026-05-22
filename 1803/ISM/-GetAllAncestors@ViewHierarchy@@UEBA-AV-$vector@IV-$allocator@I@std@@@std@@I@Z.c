/*
 * XREFs of ?GetAllAncestors@ViewHierarchy@@UEBA?AV?$vector@IV?$allocator@I@std@@@std@@I@Z @ 0x18002C710
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEBI@Z @ 0x18002563C (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEBI@Z.c)
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ?at@?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEBAAEBUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18002CCBC (-at@-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHierarchy::GetAllAncestors(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rdi
  __int128 v4; // xmm0
  __int64 v5; // rsi
  __int64 i; // rax
  const char *v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+10h]
  int v14; // [rsp+70h] [rbp+18h]

  v14 = a3;
  v13 = a2;
  v3 = a2;
  v4 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 144) == 1 )
  {
    try
    {
      v12 = a3;
      v5 = a1 + 80;
      for ( i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(a1 + 80, &v12);
            ;
            i = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::at(v5, &v12) )
      {
        v12 = *(_DWORD *)(i + 8);
        if ( !v12 )
          break;
        std::vector<unsigned int>::emplace_back<unsigned int const &>((__int64)&v9, &v12);
      }
    }
    catch ( ... )
    {
      *((_QWORD *)&v9 + 1) = v9;
      LODWORD(v8) = v14;
      wil::details::in1diag3::Log_CaughtExceptionMsg(
        retaddr,
        (void *)0x12C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
        v8);
      v3 = v13;
    }
    *(_OWORD *)v3 = v9;
    v3[2] = v10;
    v4 = 0LL;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  v10 = 0LL;
  v9 = v4;
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)&v9);
  return v3;
}
