/*
 * XREFs of ?GetAllStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@Z @ 0x180095CF8 (--$emplace_back@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetAllStreamGroups(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const char *v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *i; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  int v12; // eax
  unsigned int v13; // r14d
  __int64 *j; // rbx
  __int64 result; // rax
  __int64 *k; // rbx
  __int64 *v17; // [rsp+28h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v9 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    v7 = **(__int64 ***)(a1 + 56);
    while ( v7 != *(__int64 **)(a1 + 56) )
    {
      std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::emplace_back<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
        (__int64)&v17,
        v7 + 8);
      if ( !*((_BYTE *)v7 + 25) )
      {
        v6 = (__int64 *)v7[2];
        if ( *((_BYTE *)v6 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v7 = i;
          v7 = i;
        }
        else
        {
          do
          {
            v7 = v6;
            v6 = (__int64 *)*v6;
          }
          while ( !*((_BYTE *)v6 + 25) );
        }
      }
      v9 = v17;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v10 = v9;
    v11 = (__int64 *)v18;
    while ( v10 != v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v10 + 128LL))(*v10, a2);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2E3,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v12);
        if ( v9 )
        {
          for ( j = v9; j != v11; ++j )
            Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(j);
          std::_Deallocate(v9, (__int64)(*((_QWORD *)&v18 + 1) - (_QWORD)v9) >> 3, 8uLL);
        }
        return v13;
      }
      ++v10;
    }
    if ( v9 )
    {
      for ( k = v9; k != v11; ++k )
        Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(k);
      std::_Deallocate(v9, (__int64)(*((_QWORD *)&v18 + 1) - (_QWORD)v9) >> 3, 8uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E8,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v5);
  }
  return result;
}
