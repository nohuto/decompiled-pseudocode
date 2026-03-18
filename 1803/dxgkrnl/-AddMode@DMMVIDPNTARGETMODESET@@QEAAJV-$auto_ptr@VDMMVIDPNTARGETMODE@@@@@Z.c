/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00BD97C
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00C0580 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0004890 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0004B28 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNT.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0005FA0 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000707C (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDPNTARGET>::FindById(a1 + 24, *(_DWORD *)(v2 + 24));
  if ( v6 )
  {
    v11 = DMMVIDPNTARGETMODE::operator!=(v6, v2) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v2) )
  {
    v11 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::InsertTail(
           a1 + 32,
           v2) != 1 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v17 + 24) = 108LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v11 = 3;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 )
      {
        v14 = *a2 + 32;
        if ( a1 )
        {
          if ( *(_QWORD *)(*a2 + 40) )
          {
            v20 = WdLogNewEntry5_WdAssertion(v13);
            WdLogEvent5_WdAssertion(v20);
          }
          *(_QWORD *)(v14 + 8) = a1;
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v19 + 24) = v14;
          *(_QWORD *)(v19 + 32) = *(_QWORD *)(v14 + 8);
          WdLogEvent5_WdError(v19);
        }
        *a2 = 0LL;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v13);
        WdLogEvent5_WdError(v18);
        v3 = -1073741823;
      }
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v21[3] = *(unsigned int *)(*a2 + 24);
      v21[4] = *a2;
      v21[5] = a1;
      WdLogEvent5_WdError(v21);
      v3 = -1071774940;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdTrace(v12, v7, v8, v9);
    v3 = -1071774956;
    *(_QWORD *)(v22 + 24) = *a2;
    *(_QWORD *)(v22 + 32) = a1;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
