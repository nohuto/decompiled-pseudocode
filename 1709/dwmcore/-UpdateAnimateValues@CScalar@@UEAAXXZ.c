/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x180175CA0
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x180175B84 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * i) + 88LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i),
      *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
      18LL,
      (char *)this + 48);
  if ( *((_DWORD *)this + 8) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 5) + 216LL) + 376LL) |= 2u;
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 7);
}
