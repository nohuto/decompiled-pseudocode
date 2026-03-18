/*
 * XREFs of ?reset@?$auto_ptr@V?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@@QEAAXPEAV?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@@Z @ 0x1C000A41C
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000A97C (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AC48 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00A4C10 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall auto_ptr<DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 && v4 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  *a1 = a2;
  return result;
}
