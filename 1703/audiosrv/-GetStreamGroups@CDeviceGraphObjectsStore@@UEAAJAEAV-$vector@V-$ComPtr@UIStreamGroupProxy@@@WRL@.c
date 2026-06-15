/*
 * XREFs of ?GetStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A8B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B1A4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007B230 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800A8214 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphObjectsStore::GetStreamGroups(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 *i; // rdi
  __int64 result; // rax
  LPCRITICAL_SECTION lpCriticalSection[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  try
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, (__int64)lpCriticalSection);
    for ( i = *(__int64 **)(a1 + 56); i != *(__int64 **)(a1 + 64); ++i )
    {
      v4 = *i;
      v12 = v4;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v10 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v12, &v10) >= 0 && v10 )
      {
        v11 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v10, &v11) >= 0 )
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
            a2,
            &v11);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v11);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1C7,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v5);
  }
  return result;
}
