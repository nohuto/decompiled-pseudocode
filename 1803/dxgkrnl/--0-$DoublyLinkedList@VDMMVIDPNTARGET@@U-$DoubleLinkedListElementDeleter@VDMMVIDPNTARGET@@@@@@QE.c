/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x1C000472C
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0003E70 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0004F00 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  _QWORD **v6; // rsi
  const struct DMMVIDPNTARGET *v7; // rbp
  _QWORD *v8; // rcx
  DMMVIDPNTARGET *PoolWithTag; // rax
  DMMVIDPNTARGET *v10; // r8
  __int64 v11; // rdx
  _QWORD **v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
  v3 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 155LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v6 = (_QWORD **)(a1 + 16);
  v7 = 0LL;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v8 = *(_QWORD **)(a2 + 16);
  if ( v8 != (_QWORD *)(a2 + 16) )
    v7 = (const struct DMMVIDPNTARGET *)(v8 - 1);
  if ( v7 )
  {
    while ( 1 )
    {
      PoolWithTag = (DMMVIDPNTARGET *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4B677844u);
      v10 = PoolWithTag ? DMMVIDPNTARGET::DMMVIDPNTARGET(PoolWithTag, v7) : 0LL;
      if ( !v10 )
        break;
      v8 = *v6;
      v11 = 0LL;
      if ( *v6 != v6 )
        v11 = (__int64)(*v6 - 1);
      while ( v11 && (DMMVIDPNTARGET *)v11 != v10 )
      {
        v12 = *(_QWORD ***)(v11 + 8);
        v11 = (__int64)(v12 - 1);
        if ( v12 == v6 )
          v11 = 0LL;
      }
      if ( !v11 )
      {
        v8 = *(_QWORD **)(a1 + 24);
        v13 = (_QWORD *)((char *)v10 + 8);
        if ( (_QWORD **)*v8 != v6 )
          __fastfail(3u);
        *v13 = v6;
        *((_QWORD *)v10 + 2) = v8;
        *v8 = v13;
        *(_QWORD *)(a1 + 24) = v13;
        ++*(_QWORD *)(a1 + 32);
      }
      v14 = *((_QWORD *)v7 + 1);
      v7 = (const struct DMMVIDPNTARGET *)(v14 - 8);
      if ( v14 == a2 + 16 )
        v7 = 0LL;
      if ( !v7 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        goto LABEL_24;
      }
    }
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = 172LL;
    WdLogEvent5_WdLowResource(v17);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  else
  {
LABEL_24:
    if ( v3 != *(_QWORD *)(a2 + 32) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v18 + 24) = 186LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  return a1;
}
