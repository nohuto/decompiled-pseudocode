/*
 * XREFs of ?GetStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A8CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@Z @ 0x1800A80BC (--$emplace_back@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphStore::GetStreamGroups(__int64 a1, __int64 a2)
{
  const char *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 *i; // rax
  __int64 *v8; // rbx
  __int64 *j; // rdi
  __int64 *v10; // rsi
  unsigned __int128 v11; // kr10_16
  int v12; // eax
  unsigned int v13; // r14d
  __int64 *k; // rdi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *m; // rdi
  __int64 v18; // rcx
  unsigned __int128 v19; // [rsp+28h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp+8h] BYREF

  try
  {
    v19 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)&lpCriticalSection);
    v6 = **(__int64 ***)(a1 + 56);
    while ( v6 != *(__int64 **)(a1 + 56) )
    {
      std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::emplace_back<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
        (__int64)&v19,
        v6 + 8);
      if ( !*((_BYTE *)v6 + 25) )
      {
        v5 = (__int64 *)v6[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v6 = i;
          v6 = i;
        }
        else
        {
          do
          {
            v6 = v5;
            v5 = (__int64 *)*v5;
          }
          while ( !*((_BYTE *)v5 + 25) );
        }
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v11 = v19;
    v8 = (__int64 *)(v11 >> 64);
    v10 = (__int64 *)v11;
    for ( j = (__int64 *)v19; j != v8; ++j )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*j + 112LL))(*j, a2);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x264,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v12);
        if ( v10 )
        {
          for ( k = v10; k != v8; ++k )
          {
            v15 = *k;
            if ( *k )
            {
              *k = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
          }
          std::_Deallocate(v10, (v20 - (__int64)v10) >> 3, 8uLL);
        }
        return v13;
      }
    }
    if ( v10 )
    {
      for ( m = v10; m != v8; ++m )
      {
        v18 = *m;
        if ( *m )
        {
          *m = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      std::_Deallocate(v10, (v20 - (__int64)v10) >> 3, 8uLL);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x269,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v4);
  }
  return result;
}
