/*
 * XREFs of ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007AFA0
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180079D88 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x18007B5B4 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000C42C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18007A544 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18007AE18 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProvid_ea_18007AE18.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  bool v4; // al
  PSRWLOCK v5; // rcx
  bool v6; // di
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v9; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  DWORD *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         a2,
         &v9);
  v5 = SRWLock;
  v6 = v4;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                                                      (__int64)v5,
                                                      (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v7 > 5u
      && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v14 = 0;
      LODWORD(SRWLock) = a2;
      v13 = 4;
      p_SRWLock = &SRWLock;
      CurrentThreadId = GetCurrentThreadId();
      v17 = 0;
      v9 = CurrentThreadId;
      v15 = &v9;
      v16 = 4;
      TlgWrite(v7, &unk_1800AF12B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
