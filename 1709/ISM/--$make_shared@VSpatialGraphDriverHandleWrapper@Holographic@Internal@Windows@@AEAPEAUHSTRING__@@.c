/*
 * XREFs of ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@AEAU_GUID@@AEAW4HandleWrapperDesiredAccess@234@AEA_NAEAPEAX@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEAPEAUHSTRING__@@AEAU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1800BC3C0
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 * Callees:
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 *     ?_Reset0@?$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@PEAV_Ref_count_base@2@@Z @ 0x1800BC974 (-_Reset0@-$_Ptr_base@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXP.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,HSTRING__ * &,_GUID &,enum Windows::Internal::Holographic::HandleWrapperDesiredAccess &,bool &,void * &>(
        _QWORD *a1,
        HSTRING *a2,
        _OWORD *a3,
        int *a4,
        char *a5,
        __int64 *a6)
{
  _DWORD *v10; // rdi

  v10 = operator new(0xC0uLL);
  v10[2] = 1;
  v10[3] = 1;
  *(_QWORD *)v10 = &std::_Ref_count_obj<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vftable';
  if ( v10 != (_DWORD *)-16LL )
    Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::SpatialGraphDriverHandleWrapper(
      (__int64)(v10 + 4),
      *a2,
      a3,
      *a4,
      *a5,
      *a6);
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::_Reset0(a1, v10 + 4);
  return a1;
}
