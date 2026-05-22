/*
 * XREFs of ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x180069120
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180066710 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180067C38 (-OnEdgyCompositionUpdate@EdgyConnection@@AEAAXPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1800685F0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::vector<Edge>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v4; // r15
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *result; // rax
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  v4 = (_QWORD *)(a3 + 96);
  if ( (_QWORD *)(a3 + 96) != v3 )
  {
    v8 = a3 + 8;
    do
    {
      *(_QWORD *)(v8 - 8) = *v4;
      std::wstring::_Tidy_deallocate((unsigned __int64 *)v8);
      *(_OWORD *)v8 = *(_OWORD *)(v8 + 96);
      *(_OWORD *)(v8 + 16) = *(_OWORD *)(v8 + 112);
      *(_QWORD *)(v8 + 112) = 0LL;
      *(_QWORD *)(v8 + 120) = 7LL;
      *(_WORD *)(v8 + 96) = 0;
      v9 = (__int64 *)(v8 + 128);
      v10 = 0LL;
      if ( &v14 != (char *)(v8 + 128) )
      {
        v10 = *v9;
        *v9 = 0LL;
      }
      v11 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 32) = v10;
      if ( v11 )
        (**(void (__fastcall ***)(__int64))(v11 + 16))(v11 + 16);
      v4 += 12;
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 136);
      *(_OWORD *)(v8 + 44) = *(_OWORD *)(v8 + 140);
      *(_OWORD *)(v8 + 60) = *(_OWORD *)(v8 + 156);
      *(_QWORD *)(v8 + 76) = *(_QWORD *)(v8 + 172);
      v8 += 96LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD **)(a1 + 8);
  }
  v12 = *(v3 - 7);
  if ( v12 )
  {
    *(v3 - 7) = 0LL;
    (**(void (__fastcall ***)(__int64))(v12 + 16))(v12 + 16);
  }
  std::wstring::_Tidy_deallocate(v3 - 11);
  *(_QWORD *)(a1 + 8) -= 96LL;
  result = a2;
  *a2 = a3;
  return result;
}
