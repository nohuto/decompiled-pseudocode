/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C0005A60
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C000A6DC (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C00048F0 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  DMMVIDPNTARGET *v4; // rcx
  DMMVIDPNTARGET **v5; // rbx
  _QWORD *v6; // r14
  const struct DMMVIDPNTARGET *v7; // rdi
  DMMVIDPNTARGET *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTARGET *v10; // rdx
  DMMVIDPNTARGET **v11; // rax
  DMMVIDPNTARGET ***v12; // rax
  DMMVIDPNTARGET ***v13; // rdx
  _QWORD *v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v16 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (DMMVIDPNTARGET **)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v6 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v6 == v6 || (v7 = (const struct DMMVIDPNTARGET *)(*v6 - 8LL), *v6 == 8LL) )
  {
LABEL_20:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v18 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v8 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4B677844u, PagedPool);
      if ( !v8 )
        break;
      v10 = DMMVIDPNTARGET::DMMVIDPNTARGET(v8, v7);
      if ( !v10 )
        break;
      v4 = *v5;
      if ( *v5 == (DMMVIDPNTARGET *)v5 )
        goto LABEL_15;
      v4 = (DMMVIDPNTARGET *)((char *)v4 - 8);
      if ( !v4 )
        goto LABEL_15;
      do
      {
        if ( v4 == v10 )
          break;
        v11 = (DMMVIDPNTARGET **)*((_QWORD *)v4 + 1);
        v4 = (DMMVIDPNTARGET *)(v11 - 1);
        if ( v11 == v5 )
          v4 = 0LL;
      }
      while ( v4 );
      if ( !v4 )
      {
LABEL_15:
        v12 = *(DMMVIDPNTARGET ****)(a1 + 24);
        v13 = (DMMVIDPNTARGET ***)((char *)v10 + 8);
        if ( *v12 != v5 )
          __fastfail(3u);
        *v13 = v5;
        v13[1] = (DMMVIDPNTARGET **)v12;
        *v12 = (DMMVIDPNTARGET **)v13;
        *(_QWORD *)(a1 + 24) = v13;
        ++*(_QWORD *)(a1 + 32);
      }
      v14 = (_QWORD *)*((_QWORD *)v7 + 1);
      v7 = (const struct DMMVIDPNTARGET *)(v14 - 1);
      if ( v14 == v6 )
        v7 = 0LL;
      if ( !v7 )
        goto LABEL_20;
    }
    v17 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v17 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
