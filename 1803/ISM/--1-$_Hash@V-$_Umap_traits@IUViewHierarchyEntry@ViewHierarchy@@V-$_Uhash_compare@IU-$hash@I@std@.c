/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18000F75C
 * Callers:
 *     ??_EWin32kInterop@@UEAAPEAXI@Z @ 0x18000F4F0 (--_EWin32kInterop@@UEAAPEAXI@Z.c)
 *     ??1ViewHierarchy@@UEAA@XZ @ 0x18002B8D4 (--1ViewHierarchy@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::~_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>(
        _QWORD *a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (__int64)(a1[5] - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        a1[3] = 0LL;
        a1[4] = 0LL;
        a1[5] = 0LL;
        goto LABEL_9;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2, 0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x18000F859LL);
  }
LABEL_9:
  v5 = (_QWORD **)a1[1];
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v7 = (_QWORD *)a1[1];
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      v9 = v6[3];
      if ( v9 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      operator delete(v6);
      v6 = v8;
      v7 = (_QWORD *)a1[1];
    }
    while ( v8 != v7 );
  }
  operator delete(v7);
}
