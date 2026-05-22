/*
 * XREFs of ??_EDWMInputDisplay@@MEAAPEAXI@Z @ 0x180020744
 * Callers:
 *     ??_EDWMInputDisplay@@O7EAAPEAXI@Z @ 0x180020DE0 (--_EDWMInputDisplay@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
DWMInputDisplay *__fastcall DWMInputDisplay::`vector deleting destructor'(DWMInputDisplay *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
  *((_QWORD *)this + 1) = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 )
    {
      if ( *(_BYTE *)(v4 + 40) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, v4 + 16);
    }
  }
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
