/*
 * XREFs of ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009D14
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00DE7F0 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C00025C4 (-reset@-$auto_ptr@V-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@@@QEAAXPEAV-$DoublyLinkedList@VD.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C000A394 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000D138 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DMMVIDPNSOURCE *__fastcall DMMVIDPNSOURCE::DMMVIDPNSOURCE(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCESET *const a2,
        struct DMMVIDEOPRESENTSOURCE *const a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rbx
  _DWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, *((unsigned int *)a3 + 6));
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173000;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 12) = a3;
  v10 = (_QWORD *)((char *)this + 112);
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
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v18);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = (char *)this + 32;
    *(_QWORD *)(v17 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v17);
  }
  v11 = operator new(0x30uLL, 0x4E506456u, PagedPool);
  if ( v11 )
  {
    v11[2] = 0;
    *(_QWORD *)v11 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
    *((_QWORD *)v11 + 4) = 0LL;
    *((_QWORD *)v11 + 3) = v11 + 4;
    *((_QWORD *)v11 + 2) = v11 + 4;
    v11[10] = 2;
  }
  else
  {
    v11 = 0LL;
  }
  auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET>>::reset((__int64 *)this + 14, (__int64)v11);
  if ( *v10 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD))*v10)(*v10) )
    {
      v12 = DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(this);
      v15 = v12;
      if ( v12 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v21 + 24) = this;
        *(_QWORD *)(v21 + 32) = v15;
        WdLogEvent5_WdError(v21);
        *((_DWORD *)this + 18) = v15;
      }
      else
      {
        *((_DWORD *)this + 22) = 2;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v20 + 24) = this;
      *(_QWORD *)(v20 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v20);
      *((_DWORD *)this + 18) = *(_DWORD *)(*v10 + 8LL);
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = *((unsigned int *)this + 6);
    WdLogEvent5_WdLowResource(v19);
    *((_DWORD *)this + 18) = -1073741801;
  }
  return this;
}
