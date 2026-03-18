/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C0008A30
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C000C86C (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0007DE0 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET>::DoublyLinkedList<DMMVIDPNTARGET>(__int64 a1, __int64 a2)
{
  DMMVIDPNTARGET *v4; // rdx
  DMMVIDPNTARGET *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DMMVIDPNTARGET *v8; // rbx
  _QWORD *v9; // r14
  const struct DMMVIDPNTARGET *v10; // rdi
  DMMVIDPNTARGET *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DMMVIDPNTARGET *v15; // rax
  DMMVIDPNTARGET **v16; // rax
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v19);
  }
  v8 = (DMMVIDPNTARGET *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v9 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v9 == v9 || (v10 = (const struct DMMVIDPNTARGET *)(*v9 - 8LL), *v9 == 8LL) )
  {
LABEL_20:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
      WdLogEvent5_WdAssertion(v21);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v11 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, PagedPool);
      if ( !v11 )
        break;
      v4 = DMMVIDPNTARGET::DMMVIDPNTARGET(v11, v10, v13, v14);
      if ( !v4 )
        break;
      v5 = *(DMMVIDPNTARGET **)v8;
      if ( *(DMMVIDPNTARGET **)v8 == v8 )
        goto LABEL_15;
      v5 = (DMMVIDPNTARGET *)((char *)v5 - 8);
      if ( !v5 )
        goto LABEL_15;
      do
      {
        if ( v5 == v4 )
          break;
        v15 = (DMMVIDPNTARGET *)*((_QWORD *)v5 + 1);
        v5 = (DMMVIDPNTARGET *)((char *)v15 - 8);
        if ( v15 == v8 )
          v5 = 0LL;
      }
      while ( v5 );
      if ( !v5 )
      {
LABEL_15:
        v16 = *(DMMVIDPNTARGET ***)(a1 + 24);
        v4 = (DMMVIDPNTARGET *)((char *)v4 + 8);
        if ( *v16 != v8 )
          __fastfail(3u);
        *(_QWORD *)v4 = v8;
        *((_QWORD *)v4 + 1) = v16;
        *v16 = v4;
        *(_QWORD *)(a1 + 24) = v4;
        ++*(_QWORD *)(a1 + 32);
      }
      v17 = (_QWORD *)*((_QWORD *)v10 + 1);
      v10 = (const struct DMMVIDPNTARGET *)(v17 - 1);
      if ( v17 == v9 )
        v10 = 0LL;
      if ( !v10 )
        goto LABEL_20;
    }
    v20 = WdLogNewEntry5_WdLowResource(v12);
    WdLogEvent5_WdLowResource(v20);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
