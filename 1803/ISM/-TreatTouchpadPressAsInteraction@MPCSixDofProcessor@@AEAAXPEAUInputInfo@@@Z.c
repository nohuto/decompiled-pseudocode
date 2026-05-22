/*
 * XREFs of ?TreatTouchpadPressAsInteraction@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003FAA4
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::TreatTouchpadPressAsInteraction(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rax
  char v5; // si
  volatile signed __int32 *v6; // rbx
  bool v7; // bp
  int v8; // r14d
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // bp
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  char v14; // bp
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  volatile signed __int32 *v17; // [rsp+50h] [rbp+8h]

  v2 = *((_QWORD *)this + 335);
  LODWORD(v17) = 0;
  v5 = 1;
  v6 = *(volatile signed __int32 **)(v2 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v2 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v2 + 16) + 10LL) && *((_DWORD *)a2 + 131) != 3;
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v8 = 2;
  if ( v7 )
  {
    *((_DWORD *)a2 + 131) = 2;
  }
  else
  {
    v9 = *((_QWORD *)this + 335);
    v10 = *(volatile signed __int32 **)(v9 + 24);
    if ( v10 )
    {
      _InterlockedAdd(v10 + 2, 1u);
      v10 = *(volatile signed __int32 **)(v9 + 24);
    }
    v11 = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 8LL);
    if ( v10 )
    {
      if ( !_InterlockedDecrement(v10 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
    if ( v11 )
    {
      *((_DWORD *)a2 + 131) = 3;
    }
    else
    {
      v12 = *((_QWORD *)this + 335);
      v13 = *(volatile signed __int32 **)(v12 + 24);
      if ( v13 )
      {
        _InterlockedAdd(v13 + 2, 1u);
        v13 = *(volatile signed __int32 **)(v12 + 24);
      }
      v14 = *(_BYTE *)(*(_QWORD *)(v12 + 16) + 12LL);
      if ( v13 )
      {
        if ( !_InterlockedDecrement(v13 + 2) )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
          if ( !_InterlockedDecrement(v13 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        }
      }
      if ( v14 )
        *((_DWORD *)a2 + 131) = 4;
    }
  }
  if ( *((_BYTE *)a2 + 1144) )
  {
    v15 = v17;
    v8 = 0;
  }
  else
  {
    v16 = *((_QWORD *)this + 335);
    v15 = *(volatile signed __int32 **)(v16 + 24);
    if ( v15 )
    {
      _InterlockedAdd(v15 + 2, 1u);
      v15 = *(volatile signed __int32 **)(v16 + 24);
    }
    v5 = *(_BYTE *)(*(_QWORD *)(v16 + 16) + 8LL);
  }
  *((_BYTE *)a2 + 1144) = v5;
  if ( v8 && v15 && !_InterlockedDecrement(v15 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
    if ( !_InterlockedDecrement(v15 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
  }
}
