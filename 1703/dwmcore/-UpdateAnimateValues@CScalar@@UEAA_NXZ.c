/*
 * XREFs of ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x180163740
 * Callers:
 *     ??1CScalar@@MEAA@XZ @ 0x180163684 (--1CScalar@@MEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBAFC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScalar::UpdateAnimateValues(CScalar *this)
{
  unsigned int i; // edi

  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * i) + 80LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * i),
      *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * i + 8),
      18LL,
      (char *)this + 48);
  CBaseAnimation::UnregisterAnimateResource((CComposition **)this - 7);
  return 1;
}
