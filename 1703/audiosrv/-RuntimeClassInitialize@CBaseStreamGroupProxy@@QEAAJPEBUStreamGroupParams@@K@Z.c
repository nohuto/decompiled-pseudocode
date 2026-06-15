/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000A6B0
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002BE9C (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800A6F84 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x1800093F8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const WCHAR *v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _WORD *v9; // rax
  _WORD *v10; // r9
  int v11; // r15d
  unsigned __int64 v12; // rax
  _WORD *v13; // rdx
  int v14; // r10d
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  char *v17; // rdi
  __int16 v18; // cx
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  LPVOID v21; // rdi
  size_t v22; // rsi
  int v23; // edi
  __int64 v24; // rcx
  IMalloc *v25; // rax
  IMalloc *v26; // rdi
  LPMALLOC ppMalloc; // [rsp+70h] [rbp+8h] BYREF
  IMalloc *v29; // [rsp+78h] [rbp+10h]

  v6 = *(const WCHAR **)a2;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *((_QWORD *)this + 5) = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
    return 2147942934LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( !is_mul_ok(v8, 2uLL) )
  {
    v11 = -2147024362;
    goto LABEL_18;
  }
  v9 = CoTaskMemAlloc(2 * v8);
  v10 = v9;
  *((_QWORD *)this + 5) = v9;
  if ( !v9 )
    return 2147942414LL;
  v11 = 0;
  if ( v8 > 0x7FFFFFFF )
  {
    if ( v7 == -1LL )
      goto LABEL_18;
    goto LABEL_39;
  }
  if ( v7 >= 0x7FFFFFFF )
  {
    if ( v7 == -1LL )
      goto LABEL_18;
LABEL_39:
    *v9 = 0;
    goto LABEL_18;
  }
  if ( !v6 )
  {
    v6 = &word_1800EAD74;
    v7 = 0LL;
  }
  if ( v8 )
  {
    v12 = v8;
    v13 = v10;
    v14 = 0;
    v15 = 0LL;
    v16 = v7 - v8;
    v17 = (char *)((char *)v6 - (char *)v10);
    while ( v16 + v12 )
    {
      v18 = *(_WORD *)((char *)v13 + (_QWORD)v17);
      if ( !v18 )
        break;
      *v13++ = v18;
      ++v15;
      if ( !--v12 )
      {
        --v13;
        --v15;
        v14 = -2147024774;
        break;
      }
    }
    *v13 = 0;
    v19 = v8 - v15;
    if ( v14 >= 0 && v19 > 1 && 2 * v19 > 2 )
      memset(&v10[v15 + 1], 0, 2 * v19 - 2);
  }
LABEL_18:
  if ( v11 < 0 )
    return (unsigned int)v11;
  v20 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v21 = CoTaskMemAlloc(v20 + 18);
  *((_QWORD *)this + 4) = v21;
  if ( !v21 )
    return 2147942414LL;
  v22 = 0LL;
  if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
  {
    v22 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v21);
    ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
  }
  memset(*((void **)this + 4), 0, v22);
  v23 = 0;
  memcpy_0(*((void **)this + 4), *((const void **)a2 + 2), v20 + 18);
  v24 = *((_QWORD *)a2 + 7);
  if ( v24 )
    v23 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v24 + 8LL))(v24, (char *)this + 56);
  if ( v23 >= 0 )
  {
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 2);
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 3);
    *((_DWORD *)this + 13) = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 16) = 0LL;
    *((_DWORD *)this + 34) = 0;
    *((_BYTE *)this + 48) = *((_BYTE *)a2 + 49);
    *((_BYTE *)this + 49) = *((_BYTE *)a2 + 50);
    v25 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v26 = v25;
    ppMalloc = v25;
    if ( v25 )
    {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)v25, 0, 0);
      v29 = v26 + 5;
      v26[5].lpVtbl = 0LL;
      v26[6].lpVtbl = 0LL;
      v26[5].lpVtbl = (struct IMallocVtbl *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
      LODWORD(v26[7].lpVtbl) = a3;
    }
    else
    {
      v26 = 0LL;
    }
    *((_QWORD *)this + 8) = v26;
    if ( v26 )
      return 0LL;
    return 2147942414LL;
  }
  return (unsigned int)v23;
}
