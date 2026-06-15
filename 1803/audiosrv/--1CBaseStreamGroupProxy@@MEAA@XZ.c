/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180046740
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180045170 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800954D0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800C8070 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800997B4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  HANDLE ProcessHeap; // rax
  unsigned __int64 v7; // rax
  HANDLE v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 *v14; // r14
  void *v15; // rdi
  HANDLE v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v17 = *((_QWORD *)this + 9);
    if ( v17 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v17 + 56));
  }
  v3 = *((_QWORD *)this + 27);
  if ( !v3 )
    goto LABEL_7;
  v4 = *((_QWORD *)this + 28);
  if ( v3 != v4 )
  {
    do
    {
      v2 = *(_QWORD *)v3;
      if ( *(_QWORD *)v3 )
      {
        *(_QWORD *)v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      }
      v3 += 8LL;
    }
    while ( v3 != v4 );
    v3 = *((_QWORD *)this + 27);
  }
  v5 = (__int64)(*((_QWORD *)this + 29) - v3) >> 3;
  if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_28;
  if ( 8 * v5 >= 0x1000 )
  {
    if ( (v3 & 0x1F) == 0 )
    {
      v18 = *(_QWORD *)(v3 - 8);
      if ( v18 < v3 )
      {
        v3 = v3 - v18 - 8;
        if ( v3 <= 0x1F )
        {
          v3 = v18;
          goto LABEL_6;
        }
      }
    }
LABEL_28:
    _o__invalid_parameter_noinfo_noreturn(v2);
    goto LABEL_29;
  }
LABEL_6:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, (LPVOID)v3);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
LABEL_7:
  v3 = *((_QWORD *)this + 24);
  if ( !v3 )
    goto LABEL_11;
  v7 = (__int64)(*((_QWORD *)this + 26) - v3) >> 3;
  if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_33;
  if ( 8 * v7 < 0x1000 )
  {
LABEL_10:
    v8 = GetProcessHeap();
    HeapFree(v8, 0, (LPVOID)v3);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
LABEL_11:
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v9 = *((_QWORD *)this + 11);
    if ( !v9 )
      goto LABEL_12;
    goto LABEL_34;
  }
LABEL_29:
  if ( (v3 & 0x1F) == 0 )
  {
    v19 = *(_QWORD *)(v3 - 8);
    if ( v19 < v3 && v3 - v19 - 8 <= 0x1F )
    {
      v3 = *(_QWORD *)(v3 - 8);
      goto LABEL_10;
    }
  }
LABEL_33:
  _o__invalid_parameter_noinfo_noreturn(v2);
LABEL_34:
  *((_QWORD *)this + 11) = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_12:
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = *(__int64 **)(v12 + 8);
    v14 = v13;
    if ( !*((_BYTE *)v13 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
          v11 + 40,
          v14[2]);
        v14 = (__int64 *)*v14;
        std::_Deallocate(v13, 1uLL, 0x28uLL);
        v13 = v14;
      }
      while ( !*((_BYTE *)v14 + 25) );
      v12 = *(_QWORD *)(v11 + 40);
    }
    *(_QWORD *)(v12 + 8) = v12;
    **(_QWORD **)(v11 + 40) = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(*(_QWORD *)(v11 + 40) + 16LL) = *(_QWORD *)(v11 + 40);
    *(_QWORD *)(v11 + 48) = 0LL;
    v15 = *(void **)(v11 + 40);
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v15);
    DeleteCriticalSection((LPCRITICAL_SECTION)v11);
    operator delete((void *)v11, (const struct std::nothrow_t *)0x40);
  }
  *((_QWORD *)this + 9) = 0LL;
  operator delete(*((void **)this + 8), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 8) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
