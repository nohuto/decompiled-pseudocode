/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00A3164
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D7120 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005078 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005130 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000B8E4 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax

  if ( !*a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  v4 = *a2;
  v5 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1 + 24, *(_DWORD *)(*a2 + 24));
  if ( v5 )
  {
    v8 = DMMVIDPNTARGETMODE::operator!=(v5, v4) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v4) )
  {
    v8 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail() != 1 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v14 + 24) = 108LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v8 = 3;
  }
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
  {
    v20 = WdLogNewEntry5_WdTrace(v9, v6);
    v16 = -1071774956;
    *(_QWORD *)(v20 + 24) = *a2;
    *(_QWORD *)(v20 + 32) = a1;
    goto LABEL_22;
  }
  v10 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v10 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v19[3] = *(unsigned int *)(*a2 + 24);
    v19[4] = *a2;
    v19[5] = a1;
    WdLogEvent5_WdError(v19);
    v16 = -1071774940;
    goto LABEL_22;
  }
  if ( (_DWORD)v10 != 1 )
  {
    v15 = WdLogNewEntry5_WdError(v10);
    WdLogEvent5_WdError(v15);
    v16 = -1073741823;
LABEL_22:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return v16;
  }
  v11 = *a2 + 32;
  if ( a1 )
  {
    if ( *(_QWORD *)(*a2 + 40) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v18);
    }
    *(_QWORD *)(v11 + 8) = a1;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v11 + 8);
    WdLogEvent5_WdError(v17);
  }
  *a2 = 0LL;
  return 0LL;
}
