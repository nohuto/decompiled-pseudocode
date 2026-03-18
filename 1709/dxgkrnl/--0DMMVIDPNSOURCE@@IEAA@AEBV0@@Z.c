/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AC48
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x1C000A870 (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C000A41C (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C000B1C0 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000B9D0 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  char *v4; // rdi
  _DWORD *v5; // rax
  DMMVIDPNSOURCEMODESET *v6; // rcx
  DMMVIDPNSOURCEMODESET *v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6));
  *((_QWORD *)this + 5) = 0LL;
  v4 = (char *)this + 112;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
  *((_QWORD *)this + 19) = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 3;
  *((_DWORD *)this + 22) = 1;
  v5 = operator new(0x30uLL, 0x4E506456u, PagedPool);
  if ( v5 )
  {
    v5[2] = 0;
    *(_QWORD *)v5 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 3) = v5 + 4;
    *((_QWORD *)v5 + 2) = v5 + 4;
    v5[10] = 2;
  }
  else
  {
    v5 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
    (__int64 *)this + 14,
    (__int64)v5);
  v6 = *(DMMVIDPNSOURCEMODESET **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_18;
  if ( !(**(unsigned __int8 (__fastcall ***)(DMMVIDPNSOURCEMODESET *))v6)(v6) )
  {
    v14 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v14);
    v15 = *(_DWORD *)(*(_QWORD *)v4 + 8LL);
    goto LABEL_21;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v7 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v7 )
      v8 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v7, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v8 = 0LL;
    v9 = *((_QWORD *)this + 13);
    if ( v9 && v8 != (DMMVIDPNSOURCEMODESET *)v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 88));
    *((_QWORD *)this + 13) = v8;
    v6 = v8;
    if ( v8 )
    {
      if ( (**((unsigned __int8 (__fastcall ***)(__int64))v8 + 3))((__int64)v8 + 24) )
      {
        v11 = *((_QWORD *)this + 13);
        if ( *(_QWORD *)(v11 + 112) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v10);
          WdLogEvent5_WdAssertion(v17);
        }
        *(_QWORD *)(v11 + 112) = this;
        goto LABEL_14;
      }
      v16 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v16);
      v15 = *(_DWORD *)(*((_QWORD *)this + 13) + 40LL);
LABEL_21:
      *((_DWORD *)this + 18) = v15;
      return this;
    }
LABEL_18:
    v13 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v13);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_14:
  *((_DWORD *)this + 22) = 2;
  return this;
}
