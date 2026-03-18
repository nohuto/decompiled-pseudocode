/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x1801A3850
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x1801A3734 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  unsigned int v1; // edi
  unsigned int v3; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v1) + 88LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v1),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v1 + 8),
        18LL,
        (char *)this + 48);
      v3 = *((_DWORD *)this + 8);
      ++v1;
    }
    while ( v1 < v3 );
    if ( v3 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 5) + 240LL) + 424LL) |= 2u;
  }
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 7);
}
