/*
 * XREFs of ??$make_unique@VMPCSlateDeadzoneHelper@@AEBMAEBMX@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@AEBM0@Z @ 0x180039F7C
 * Callers:
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180039600 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180050900 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 * Callees:
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180060B6C (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_unique<MPCSlateDeadzoneHelper,float const &,float const &,void>(
        _QWORD *a1,
        unsigned int *a2,
        float *a3)
{
  void *v6; // rsi
  float v7; // xmm6_4
  _DWORD *v8; // r15
  volatile signed __int32 *v9; // rbx

  v6 = operator new(0x20uLL);
  v7 = *a3;
  *(_QWORD *)v6 = *a2;
  *((_DWORD *)v6 + 2) = 0;
  *((_WORD *)v6 + 6) = 0;
  *((_BYTE *)v6 + 14) = 0;
  *((_QWORD *)v6 + 2) = 0LL;
  *((_QWORD *)v6 + 3) = 0LL;
  v8 = operator new(0x38uLL);
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj<MPCButtonHoldHelper>::`vftable';
  if ( v8 != (_DWORD *)-16LL )
    MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)(v8 + 4), v7);
  v9 = (volatile signed __int32 *)*((_QWORD *)v6 + 3);
  *((_QWORD *)v6 + 3) = v8;
  *((_QWORD *)v6 + 2) = v8 + 4;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  *a1 = v6;
  return a1;
}
