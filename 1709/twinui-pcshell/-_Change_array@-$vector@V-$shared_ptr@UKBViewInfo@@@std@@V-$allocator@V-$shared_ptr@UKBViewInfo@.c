/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18019F110
 * Callers:
 *     ??$emplace_back@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019E9C0 (--$emplace_back@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$a.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18019ECF0 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 * Callees:
 *     ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x18019E4AC (-_Destroy@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( *(_QWORD *)a1 )
  {
    std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(
      a1,
      *(volatile signed __int32 ***)a1,
      *(volatile signed __int32 ***)(a1 + 8));
    v8 = *(_QWORD *)a1;
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
    if ( v9 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v9 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v8);
        goto LABEL_9;
      }
      if ( (v8 & 0x1F) == 0 )
      {
        v10 = *(_QWORD *)(v8 - 8);
        if ( v10 < v8 )
        {
          v8 = v8 - v10 - 8;
          if ( v8 <= 0x1F )
          {
            v8 = v10;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v8);
    JUMPOUT(0x18019F1C1LL);
  }
LABEL_9:
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
