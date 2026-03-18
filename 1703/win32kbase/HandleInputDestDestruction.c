/*
 * XREFs of HandleInputDestDestruction @ 0x1C004BF10
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C004BFF0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C012EC50 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HandleInputDestDestruction(struct CInputDest *a1)
{
  char v2; // bl
  __int64 v3; // rax
  volatile __int32 *v4; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v6[208]; // [rsp+30h] [rbp-E8h] BYREF

  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  v5[0] = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v5);
  CInputDest::CInputDest((CInputDest *)v6, a1);
  v2 = CInputDest::operator==(*(int **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, (__int64)v6);
  CInputDest::SetEmpty((CInputDest *)v6);
  if ( v2 )
    CInputDest::SetEmpty(*(CInputDest **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  if ( v3 )
  {
    v4 = (volatile __int32 *)(v3 + 2544);
    if ( CInputDest::operator==((int *)(v3 + 2544), (__int64)a1) )
    {
      CInputDest::SetEmpty((CInputDest *)v4);
      _InterlockedExchange(v4 + 50, 0);
    }
  }
  if ( !v5[0] )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v5);
  }
}
