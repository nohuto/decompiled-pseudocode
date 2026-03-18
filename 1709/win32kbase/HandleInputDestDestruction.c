/*
 * XREFs of HandleInputDestDestruction @ 0x1C0016E5C
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0016DC0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C012E150 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HandleInputDestDestruction(struct CInputDest *a1)
{
  char v2; // bl
  __int64 v3; // rax
  volatile __int32 *v4; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v6[208]; // [rsp+30h] [rbp-E8h] BYREF

  if ( (*((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 10) + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    CInputDest::CInputDest((CInputDest *)v6, a1);
    v2 = CInputDest::operator==(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v6);
    CInputDest::SetEmpty((CInputDest *)v6);
    if ( v2 )
      CInputDest::SetEmpty(*(CInputDest **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
    v3 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
    if ( v3 )
    {
      v4 = (volatile __int32 *)(v3 + 2696);
      if ( (unsigned __int8)CInputDest::operator==(v3 + 2696, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v4);
        _InterlockedExchange(v4 + 50, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  }
}
