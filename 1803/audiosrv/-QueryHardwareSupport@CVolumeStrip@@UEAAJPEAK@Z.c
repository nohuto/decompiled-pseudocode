/*
 * XREFs of ?QueryHardwareSupport@CVolumeStrip@@UEAAJPEAK@Z @ 0x1800057B0
 * Callers:
 *     AudioVolumeQueryHardwareSupport @ 0x180005650 (AudioVolumeQueryHardwareSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeStrip::QueryHardwareSupport(CVolumeStrip *this, unsigned int *a2)
{
  unsigned int v4; // ebx

  if ( !a2 )
    return 2147500035LL;
  v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30)) == 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 56LL))(*((_QWORD *)this + 31)) )
    v4 |= 2u;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32)) )
    v4 |= 4u;
  *a2 = v4;
  return 0LL;
}
