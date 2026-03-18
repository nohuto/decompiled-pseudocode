/*
 * XREFs of ?DeAllocate@DripsBlockerInfoList@@QEAAXXZ @ 0x1C019D95C
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C019C618 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C000A7A4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
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
    operator delete[](v3);
  }
  *((_QWORD *)this + 1) = 0LL;
}
