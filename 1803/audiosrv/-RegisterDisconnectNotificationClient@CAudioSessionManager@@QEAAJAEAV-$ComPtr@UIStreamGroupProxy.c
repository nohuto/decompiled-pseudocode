/*
 * XREFs of ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68
 * Callers:
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800CFD24 (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 * Callees:
 *     ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180014EA0 (--$emplace_back@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakR.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097428 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180098618 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     std::_Find_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800B0EBC (std--_Find_if_unchecked_Microsoft--WRL--WeakRef_____ptr64__lambda_3640aac1012d9f944c7183fa6cd164.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800C7CA4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RegisterDisconnectNotificationClient(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  char *v9; // rcx
  __int64 result; // rax
  char *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v13; // [rsp+50h] [rbp+8h] BYREF
  char **v14; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+18h]

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
    v15 = v4;
    std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
      &v13,
      *(_QWORD *)(a1 + 176),
      *(_QWORD *)(a1 + 184));
    std::vector<Microsoft::WRL::WeakRef>::erase(a1 + 176, &v13, v13, *(char **)(a1 + 184));
    if ( std::_Find_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_3640aac1012d9f944c7183fa6cd164a8___(
           *(_QWORD **)(a1 + 176),
           *(_QWORD **)(a1 + 184),
           a2) == *(_QWORD **)(a1 + 184) )
    {
      v13 = 0LL;
      v14 = &v13;
      v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
      v7 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*a2, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA08,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v7);
        v9 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v8;
      }
      std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(
        (__int64 **)(a1 + 176),
        (__int64 *)&v13);
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA0E,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v5);
  }
  return result;
}
