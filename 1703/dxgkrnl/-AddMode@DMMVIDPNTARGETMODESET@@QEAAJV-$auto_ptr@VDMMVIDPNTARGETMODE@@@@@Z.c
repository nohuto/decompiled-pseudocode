/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C00DE21C
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00F8F70 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0007988 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C000855C (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C000CB50 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000D04C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax

  if ( !*a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = *a2;
  v7 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a1 + 24, *(_DWORD *)(*a2 + 24));
  if ( v7 )
  {
    v12 = DMMVIDPNTARGETMODE::operator!=(v7, v6) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v6) )
  {
    v12 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail() != 1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v8, v9, v10);
      WdLogEvent5_WdAssertion(v18);
    }
    v12 = 3;
  }
  v13 = (unsigned int)(v12 - 1);
  if ( (_DWORD)v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v15 = *a2 + 32;
        if ( a1 )
        {
          if ( *(_QWORD *)(*a2 + 40) )
          {
            v21 = WdLogNewEntry5_WdAssertion(v14, v8, v9, v10);
            WdLogEvent5_WdAssertion(v21);
          }
          *(_QWORD *)(v15 + 8) = a1;
        }
        else
        {
          v20 = WdLogNewEntry5_WdError(v14, v8);
          *(_QWORD *)(v20 + 24) = v15;
          *(_QWORD *)(v20 + 32) = *(_QWORD *)(v15 + 8);
          WdLogEvent5_WdError(v20);
        }
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v14, v8);
        WdLogEvent5_WdError(v19);
        if ( *a2 )
          (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v14, v8);
      v22[3] = *(unsigned int *)(*a2 + 24);
      v22[4] = *a2;
      v22[5] = a1;
      WdLogEvent5_WdError(v22);
      if ( *a2 )
        (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
      return 3223192356LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdTrace(v13, v8, v9, v10);
    *(_QWORD *)(v23 + 24) = *a2;
    *(_QWORD *)(v23 + 32) = a1;
    if ( *a2 )
      (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
    return 3223192340LL;
  }
}
