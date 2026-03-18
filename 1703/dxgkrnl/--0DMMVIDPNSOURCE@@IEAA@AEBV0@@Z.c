/*
 * XREFs of ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009FE8
 * Callers:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C000CA1C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C00025C4 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0009870 (--0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000D138 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(DMMVIDPNSOURCE *this, const struct DMMVIDPNSOURCE *a2)
{
  char *v4; // rdi
  char *v5; // rsi
  _DWORD *v6; // rax
  unsigned __int8 (__fastcall ***v7)(_QWORD); // rcx
  DMMVIDPNSOURCEMODESET *v8; // rax
  DMMVIDPNSOURCEMODESET *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a2 + 6));
  *((_QWORD *)this + 5) = 0LL;
  v4 = (char *)this + 104;
  *((_DWORD *)this + 14) = 1833173000;
  v5 = (char *)this + 112;
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
  v6 = operator new(0x30uLL, 0x4E506456u, PagedPool);
  if ( v6 )
  {
    v6[2] = 0;
    *(_QWORD *)v6 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 3) = v6 + 4;
    *((_QWORD *)v6 + 2) = v6 + 4;
    v6[10] = 2;
  }
  else
  {
    v6 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 14, (__int64)v6);
  v7 = *(unsigned __int8 (__fastcall ****)(_QWORD))v5;
  if ( !*(_QWORD *)v5 )
    goto LABEL_17;
  if ( !(**v7)(v7) )
  {
    v17 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdDmmEvent(v17);
    v18 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    goto LABEL_20;
  }
  if ( *((_QWORD *)a2 + 13) )
  {
    v8 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v8 )
      v9 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v8, *((const struct DMMVIDPNSOURCEMODESET **)a2 + 13));
    else
      v9 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, v9);
    v7 = *(unsigned __int8 (__fastcall ****)(_QWORD))v4;
    if ( *(_QWORD *)v4 )
    {
      if ( (*v7[3])(v7 + 3) )
      {
        v14 = *(_QWORD *)v4;
        if ( *(_QWORD *)(v14 + 112) )
        {
          v20 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
          WdLogEvent5_WdAssertion(v20);
        }
        *(_QWORD *)(v14 + 112) = this;
        goto LABEL_13;
      }
      v19 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v19);
      v18 = *(_DWORD *)(*(_QWORD *)v4 + 40LL);
LABEL_20:
      *((_DWORD *)this + 18) = v18;
      return this;
    }
LABEL_17:
    v16 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v16);
    *((_DWORD *)this + 18) = -1073741801;
    return this;
  }
LABEL_13:
  *((_DWORD *)this + 22) = 2;
  return this;
}
