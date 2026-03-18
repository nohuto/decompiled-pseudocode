/*
 * XREFs of ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C01A9E54
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0008A54 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall DripsBlockerInfoList::DeAllocate(DripsBlockerInfoList *this)
{
  char *v2; // rcx
  char *v3; // rbx

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      48LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DripsBlockerInfoList::DripsBlockerInfoEntry::~DripsBlockerInfoEntry);
    operator delete(v3);
  }
  *((_QWORD *)this + 1) = 0LL;
}
