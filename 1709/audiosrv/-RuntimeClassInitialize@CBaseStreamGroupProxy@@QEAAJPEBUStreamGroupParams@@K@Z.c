/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000DE94
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002A098 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180094BF4 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180008324 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000F248 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180031050 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v6; // r8
  unsigned __int64 v7; // r9
  void *v8; // rcx
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // rax
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  __int64 v15; // [rsp+20h] [rbp-48h]

  v6 = *(const unsigned __int16 **)a2;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  v9 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, v6, v7, v15, (unsigned __int16 **)this + 6);
  if ( v9 >= 0 )
  {
    v10 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
    v9 = CTCoAllocPolicy::Alloc(v8, 1u, v10 + 18, (void **)this + 5);
    if ( v9 >= 0 )
    {
      memcpy_0(*((void **)this + 5), *((const void **)a2 + 2), v10 + 18);
      v11 = *((_QWORD *)a2 + 7);
      if ( v11 )
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 8LL))(v11, (char *)this + 64);
      if ( v9 >= 0 )
      {
        *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 2);
        *((_QWORD *)this + 2) = *((_QWORD *)a2 + 3);
        *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
        *((_QWORD *)this + 17) = 0LL;
        *((_DWORD *)this + 36) = 0;
        *((_BYTE *)this + 56) = *((_BYTE *)a2 + 49);
        *((_BYTE *)this + 57) = *((_BYTE *)a2 + 50);
        v12 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v12;
        if ( v12 )
        {
          InitializeCriticalSectionEx(v12, 0, 0);
          v13[1].DebugInfo = 0LL;
          *(_QWORD *)&v13[1].LockCount = 0LL;
          v13[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
          LODWORD(v13[1].OwningThread) = a3;
        }
        else
        {
          v13 = 0LL;
        }
        *((_QWORD *)this + 9) = v13;
        return v13 == 0LL ? 0x8007000E : 0;
      }
    }
  }
  return (unsigned int)v9;
}
