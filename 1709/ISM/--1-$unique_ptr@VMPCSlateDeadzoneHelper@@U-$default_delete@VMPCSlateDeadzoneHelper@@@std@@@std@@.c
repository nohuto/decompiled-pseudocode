/*
 * XREFs of ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x180039A2C
 * Callers:
 *     ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1800371C4 (--_GMPCGamepadProcessor@@UEAAPEAXI@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180039600 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180050900 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x180052180 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(_QWORD **a1)
{
  _QWORD *v1; // rdi
  volatile signed __int32 *v2; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (volatile signed __int32 *)v1[3];
    if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    operator delete(v1);
  }
}
