/*
 * XREFs of ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180039600
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x180039A2C (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180039A98 (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@AEBMAEBMX@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@AEBM0@Z @ 0x180039F7C (--$make_unique@VMPCSlateDeadzoneHelper@@AEBMAEBMX@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180060B6C (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::Initialize3DComponents(MPCGamepadProcessor *this)
{
  MPCButtonHoldHelper *v2; // rbx
  char *v3; // rdx
  MPCButtonHoldHelper *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v6; // rbx
  char *v7; // rdx
  MPCButtonHoldHelper *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  __int64 v10; // rax
  MPCButtonHoldHelper *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v2 = MPCButtonHoldHelper::MPCButtonHoldHelper(v11, 0.5);
  v3 = (char *)this + 3992;
  if ( (MPCButtonHoldHelper **)((char *)this + 3992) != &v11 )
  {
    v4 = v2;
    v2 = 0LL;
    v5 = *(void (__fastcall ****)(_QWORD, __int64))v3;
    *(_QWORD *)v3 = v4;
    if ( !v5 )
      goto LABEL_6;
    (**v5)(v5, 1LL);
  }
  if ( v2 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v2)(v2, 1LL);
LABEL_6:
  v11 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v6 = MPCButtonHoldHelper::MPCButtonHoldHelper(v11, 0.5);
  v7 = (char *)this + 4000;
  if ( (MPCButtonHoldHelper **)((char *)this + 4000) != &v11 )
  {
    v8 = v6;
    v6 = 0LL;
    v9 = *(void (__fastcall ****)(_QWORD, __int64))v7;
    *(_QWORD *)v7 = v8;
    if ( !v9 )
      goto LABEL_11;
    (**v9)(v9, 1LL);
  }
  if ( v6 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v6)(v6, 1LL);
LABEL_11:
  v10 = std::make_unique<MPCSlateDeadzoneHelper,float const &,float const &,void>(
          &v11,
          (char *)this + 3900,
          (char *)this + 3904);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((char *)this + 4008, v10);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>(&v11);
}
