/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009B58
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009C84 (--0TestCommandHost@@AEAA@XZ.c)
 *     _lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_ @ 0x180009E60 (_lambda_e553b185ff1de720e49cf48bc3fd719c_--_lambda_invoker_cdecl_.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009EE8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18004DA40 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ??0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@W4HandleWrapperDesiredAccess@123@_NPEAX@Z @ 0x1800B7340 (--0SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAA@PEAUHSTRING__@@AEBU_GUID@@.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003094 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 0, (unsigned int)a4);
}
