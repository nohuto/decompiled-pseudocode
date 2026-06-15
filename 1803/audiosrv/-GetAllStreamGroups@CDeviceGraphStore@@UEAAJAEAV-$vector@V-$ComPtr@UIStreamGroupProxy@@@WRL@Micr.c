/*
 * XREFs of ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@Z @ 0x1800CBF98 (--$emplace_back@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDe.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x1800D37BC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetAllStreamGroups(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 i; // rax
  __int64 v10; // rbx
  __int64 *v11; // rsi
  __int64 *v12; // rbx
  __int64 *v13; // rdi
  int v14; // eax
  unsigned int v15; // r14d
  __int64 *j; // rbx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 *k; // rbx
  __int64 v20; // rcx
  __int64 *v21; // [rsp+28h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v11 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v10 = **(_QWORD **)(a1 + 56);
    while ( v10 != *(_QWORD *)(a1 + 56) )
    {
      std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::emplace_back<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
        &v21,
        (__int64 *)(v10 + 64));
      if ( !*(_BYTE *)(v10 + 25) )
      {
        v8 = *(_QWORD *)(v10 + 16);
        if ( *(_BYTE *)(v8 + 25) )
        {
          for ( i = *(_QWORD *)(v10 + 8); !*(_BYTE *)(i + 25) && v10 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v10 = i;
        }
        else
        {
          i = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v8, v5, v6);
        }
        v10 = i;
      }
      v11 = v21;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v12 = v11;
    v13 = (__int64 *)v22;
    while ( v12 != v13 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v12 + 144LL))(*v12, a2);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FD,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v14);
        if ( v11 )
        {
          for ( j = v11; j != v13; ++j )
          {
            v17 = *j;
            if ( *j )
            {
              *j = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
          }
          std::_Deallocate(v11, (__int64)(*((_QWORD *)&v22 + 1) - (_QWORD)v11) >> 3, 8uLL);
        }
        return v15;
      }
      ++v12;
    }
    if ( v11 )
    {
      for ( k = v11; k != v13; ++k )
      {
        v20 = *k;
        if ( *k )
        {
          *k = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      std::_Deallocate(v11, (__int64)(*((_QWORD *)&v22 + 1) - (_QWORD)v11) >> 3, 8uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x302,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v7);
  }
  return result;
}
