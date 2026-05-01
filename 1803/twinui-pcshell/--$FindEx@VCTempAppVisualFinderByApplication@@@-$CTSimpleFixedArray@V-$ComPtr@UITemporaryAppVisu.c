/*
 * XREFs of ??$FindEx@VCTempAppVisualFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@@@@@QEBAJAEBVCTempAppVisualFinderByApplication@@AEBV?$ComPtr@UITemporaryAppVisual@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F4A48
 * Callers:
 *     ?GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F5180 (-GetItemForApp@CTempAppVisualArray@@UEAAJPEAUIImmersiveApplication@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802F4EDC (-Compare@CTempAppVisualFinderByApplication@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITemporaryAppVisual>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITemporaryAppVisual>>>::FindEx<CTempAppVisualFinderByApplication>(
        _QWORD *a1,
        __int64 a2,
        CWinRTApplicationView **a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  bool v9; // bl
  CWinRTApplicationView *v11; // [rsp+50h] [rbp+8h] BYREF
  CWinRTApplicationView *v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v12 = *a3;
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v12);
    v11 = *(CWinRTApplicationView **)(*a1 + 8 * v4);
    Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v11);
    v9 = (unsigned int)CTempAppVisualFinderByApplication::Compare(a2, &v11) == 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v9 )
      break;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
