/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x18002F0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(CVolumeStrip **a1, __int64 a2, float *a3, float *a4, float *a5)
{
  CVolumeStrip *v5; // r10
  __int64 (__fastcall *v6)(CVolumeStrip *, __int64, float *, float *, float *); // rax

  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(CVolumeStrip *, __int64, float *, float *, float *))(*(_QWORD *)*a1 + 64LL);
  if ( v6 == CVolumeStrip::GetVolumeRange )
    return CVolumeStrip::GetVolumeRange(v5, a2, a3, a4, a5);
  else
    return ((__int64 (__fastcall *)(CVolumeStrip *))v6)(v5);
}
