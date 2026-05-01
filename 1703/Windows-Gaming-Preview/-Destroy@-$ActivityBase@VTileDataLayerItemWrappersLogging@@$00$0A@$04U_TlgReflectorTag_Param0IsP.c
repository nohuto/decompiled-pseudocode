/*
 * XREFs of ?Destroy@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025BA4
 * Callers:
 *     _lambda_849682ba5faec79a8a918f75d9dbfadc_::operator() @ 0x1800252D8 (_lambda_849682ba5faec79a8a918f75d9dbfadc_--operator().c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180026670 (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ?LockExclusive@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002670C (-LockExclusive@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?ReportStopActivity@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800267B4 (-ReportStopActivity@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTa.c)
 */

void __fastcall wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rdx
  int v5; // eax
  int v6; // r8d
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 304);
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 304) )
    goto LABEL_8;
  wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TileDataLayerItemWrappersLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_8:
    v4 = *(_DWORD **)(a1 + 48);
    if ( *v4 == 1 )
    {
      v5 = -2147024322;
      v6 = v4[18];
      if ( (int)v4[21] < 0 )
        v5 = v4[21];
      if ( v6 < 1 )
        __fastfail(7u);
      if ( (int)v4[19] >= 0 )
        v4[19] = v5;
      v4[18] = v6 - 1;
      wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (unsigned int)v4[19]);
    }
  }
}
