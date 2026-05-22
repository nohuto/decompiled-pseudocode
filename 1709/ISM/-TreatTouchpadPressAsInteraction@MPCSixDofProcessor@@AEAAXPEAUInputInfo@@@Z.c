/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180050F6C
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  char v4; // r14
  bool v5; // bp
  volatile signed __int32 *v6; // rbx
  int v7; // esi
  _QWORD *ButtonHoldHelper; // rax
  volatile signed __int32 *v9; // rbx
  char v10; // bp
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rbx
  char v13; // bp
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-50h]
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-30h]

  v4 = 1;
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v15) + 10LL)
    && *((_DWORD *)a2 + 175) != 3;
  v6 = v16;
  if ( v16 )
  {
    if ( !_InterlockedDecrement(v16 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = 2;
  if ( v5 )
  {
    *((_DWORD *)a2 + 175) = 2;
  }
  else
  {
    ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v17);
    v9 = v18;
    v10 = *(_BYTE *)(*ButtonHoldHelper + 8LL);
    if ( v18 )
    {
      if ( !_InterlockedDecrement(v18 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( !_InterlockedDecrement(v9 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    if ( v10 )
    {
      *((_DWORD *)a2 + 175) = 3;
    }
    else
    {
      v11 = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v19);
      v12 = v20;
      v13 = *(_BYTE *)(*v11 + 12LL);
      if ( v20 )
      {
        if ( !_InterlockedDecrement(v20 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( !_InterlockedDecrement(v12 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      if ( v13 )
        *((_DWORD *)a2 + 175) = 4;
    }
  }
  if ( *((_BYTE *)a2 + 1320) )
    v7 = 0;
  else
    v4 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 494), &v21) + 8LL);
  *((_BYTE *)a2 + 1320) = v4;
  if ( v7 )
  {
    v14 = v22;
    if ( v22 )
    {
      if ( !_InterlockedDecrement(v22 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( !_InterlockedDecrement(v14 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
  }
}
