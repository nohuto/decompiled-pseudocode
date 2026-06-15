/*
 * XREFs of ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x18008AB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x18002969C (-reset@-$shared_ptr@VCPowerReference@@@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::DestroyStream(CVADServer *this, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  std::shared_ptr<CPowerReference>::reset((_QWORD *)this + 51);
  if ( !*((_DWORD *)this + 46) )
  {
    v5 = -2004287487;
    v6 = 2005LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v5);
    goto LABEL_15;
  }
  v7 = *((_QWORD *)this + 24);
  if ( !v7 )
  {
    v5 = -2004287487;
    v6 = 2006LL;
    goto LABEL_7;
  }
  if ( a2 != *(_QWORD *)(v7 + 48) )
  {
    v5 = -2147024809;
    v6 = 2007LL;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 188) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 256LL))(*((_QWORD *)this + 21));
    *((_BYTE *)this + 188) = 0;
  }
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 21) + 264LL))(
    *((_QWORD *)this + 21),
    *((_QWORD *)this + 24),
    v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 64LL))(*((_QWORD *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, a2);
  }
  v5 = 0;
LABEL_15:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
