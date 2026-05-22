/*
 * XREFs of ??_EInputInfoSanitizer@@UEAAPEAXI@Z @ 0x1800A2C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall InputInfoSanitizer::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  *this = &InputInfoSanitizer::`vftable';
  operator delete(this[4]);
  v4 = this[2];
  if ( v4 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents((MPCClickerProcessor *)this);
    else
      free(this);
  }
  return this;
}
