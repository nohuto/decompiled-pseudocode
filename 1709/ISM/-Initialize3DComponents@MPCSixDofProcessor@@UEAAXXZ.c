/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180050900
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
void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  MPCButtonHoldHelper *v2; // rbx
  char *v3; // rdx
  MPCButtonHoldHelper *v4; // rax
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v6; // rbx
  char *v7; // rdx
  MPCButtonHoldHelper *v8; // rax
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v10; // rbx
  char *v11; // rdx
  MPCButtonHoldHelper *v12; // rax
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v14; // rbx
  char *v15; // rdx
  MPCButtonHoldHelper *v16; // rax
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v18; // rbx
  char *v19; // rdx
  MPCButtonHoldHelper *v20; // rax
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  MPCButtonHoldHelper *v22; // rbx
  char *v23; // rdx
  MPCButtonHoldHelper *v24; // rax
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  MPCButtonHoldHelper *v28; // [rsp+40h] [rbp+8h] BYREF

  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v2 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, 0.5);
  v3 = (char *)this + 3880;
  if ( (MPCButtonHoldHelper **)((char *)this + 3880) != &v28 )
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
  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v6 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, *((float *)this + 169));
  v7 = (char *)this + 3888;
  if ( (MPCButtonHoldHelper **)((char *)this + 3888) != &v28 )
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
  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v10 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, 0.0);
  v11 = (char *)this + 3896;
  if ( (MPCButtonHoldHelper **)((char *)this + 3896) != &v28 )
  {
    v12 = v10;
    v10 = 0LL;
    v13 = *(void (__fastcall ****)(_QWORD, __int64))v11;
    *(_QWORD *)v11 = v12;
    if ( !v13 )
      goto LABEL_16;
    (**v13)(v13, 1LL);
  }
  if ( v10 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v10)(v10, 1LL);
LABEL_16:
  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v14 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, *((float *)this + 140));
  v15 = (char *)this + 3904;
  if ( (MPCButtonHoldHelper **)((char *)this + 3904) != &v28 )
  {
    v16 = v14;
    v14 = 0LL;
    v17 = *(void (__fastcall ****)(_QWORD, __int64))v15;
    *(_QWORD *)v15 = v16;
    if ( !v17 )
      goto LABEL_21;
    (**v17)(v17, 1LL);
  }
  if ( v14 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v14)(v14, 1LL);
LABEL_21:
  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v18 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, *((float *)this + 141));
  v19 = (char *)this + 3912;
  if ( (MPCButtonHoldHelper **)((char *)this + 3912) != &v28 )
  {
    v20 = v18;
    v18 = 0LL;
    v21 = *(void (__fastcall ****)(_QWORD, __int64))v19;
    *(_QWORD *)v19 = v20;
    if ( !v21 )
      goto LABEL_26;
    (**v21)(v21, 1LL);
  }
  if ( v18 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v18)(v18, 1LL);
LABEL_26:
  v28 = (MPCButtonHoldHelper *)operator new(0x28uLL);
  v22 = MPCButtonHoldHelper::MPCButtonHoldHelper(v28, *((float *)this + 163));
  v23 = (char *)this + 3920;
  if ( (MPCButtonHoldHelper **)((char *)this + 3920) != &v28 )
  {
    v24 = v22;
    v22 = 0LL;
    v25 = *(void (__fastcall ****)(_QWORD, __int64))v23;
    *(_QWORD *)v23 = v24;
    if ( !v25 )
      goto LABEL_31;
    (**v25)(v25, 1LL);
  }
  if ( v22 )
    (**(void (__fastcall ***)(MPCButtonHoldHelper *, __int64))v22)(v22, 1LL);
LABEL_31:
  v26 = std::make_unique<MPCSlateDeadzoneHelper,float const &,float const &,void>(
          &v28,
          (unsigned int *)this + 153,
          (float *)this + 154);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 491, v26);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)&v28);
  v27 = std::make_unique<MPCSlateDeadzoneHelper,float const &,float const &,void>(
          &v28,
          (unsigned int *)this + 138,
          (float *)this + 139);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 492, v27);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD **)&v28);
}
