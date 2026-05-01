/*
 * XREFs of ?Stop@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800261F4
 * Callers:
 *     _lambda_849682ba5faec79a8a918f75d9dbfadc_::operator() @ 0x1800252D8 (_lambda_849682ba5faec79a8a918f75d9dbfadc_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180023278 (-Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180026300 (-IgnoreCurrentThread@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorT.c)
 *     ?LockExclusive@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002670C (-LockExclusive@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?ReportStopActivity@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800267B4 (-ReportStopActivity@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTa.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  unsigned int v6; // esi
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  int v10; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]

  wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  v6 = *(_DWORD *)(v2 + 76);
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v7 = TileDataLayerItemWrappersLogging::Provider();
    if ( *(_DWORD *)v7 > 5u )
    {
      v10 = 0;
      v15 = 0;
      v13 = &v10;
      v14 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v18 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v17 = 4;
      TlgWrite(v7, &unk_18003485F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      v6);
  }
  return wil::ActivityBase<TileDataLayerItemWrappersLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
