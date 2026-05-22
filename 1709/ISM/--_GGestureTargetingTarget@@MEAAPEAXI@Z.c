/*
 * XREFs of ??_GGestureTargetingTarget@@MEAAPEAXI@Z @ 0x180014B40
 * Callers:
 *     ??_EGestureTargetingTarget@@O7EAAPEAXI@Z @ 0x1800169B0 (--_EGestureTargetingTarget@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
GestureTargetingTarget *__fastcall GestureTargetingTarget::`scalar deleting destructor'(
        GestureTargetingTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &GestureTargetingTarget::`vftable'{for `IGestureTargetingTarget'};
  *((_QWORD *)this + 1) = &GestureTargetingTarget::`vftable'{for `RefCountedObject'};
  if ( *((_DWORD *)this + 21) > 1u )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( *((_DWORD *)this + 21) == 1 )
  {
    if ( *((_DWORD *)this + 21) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 2864LL * *((unsigned int *)this + 19));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 155, 5);
    }
  }
  *((_QWORD *)this + 3) = 0LL;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 8));
  operator delete(*((void **)this + 5));
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
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
