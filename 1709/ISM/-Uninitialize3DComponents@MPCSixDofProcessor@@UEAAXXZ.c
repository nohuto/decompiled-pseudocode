/*
 * XREFs of ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x180050C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::Uninitialize3DComponents(MPCSixDofProcessor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  _QWORD *v8; // rsi
  volatile signed __int32 *v9; // rdi
  _QWORD *v10; // rdi
  volatile signed __int32 *v11; // rbx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 485);
  *((_QWORD *)this + 485) = 0LL;
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 486);
  *((_QWORD *)this + 486) = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 487);
  *((_QWORD *)this + 487) = 0LL;
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 488);
  *((_QWORD *)this + 488) = 0LL;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 489);
  *((_QWORD *)this + 489) = 0LL;
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 490);
  *((_QWORD *)this + 490) = 0LL;
  if ( v7 )
    (**v7)(v7, 1LL);
  v8 = (_QWORD *)*((_QWORD *)this + 491);
  *((_QWORD *)this + 491) = 0LL;
  if ( v8 )
  {
    v9 = (volatile signed __int32 *)v8[3];
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    operator delete(v8);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 492);
  *((_QWORD *)this + 492) = 0LL;
  if ( v10 )
  {
    v11 = (volatile signed __int32 *)v10[3];
    if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    operator delete(v10);
  }
}
