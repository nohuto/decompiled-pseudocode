/*
 * XREFs of AudioVolumeGetVolumeRange @ 0x180009130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioVolumeGetVolumeRange(CVolumeStrip **a1, unsigned int a2, float *a3, float *a4, float *a5)
{
  CVolumeStrip *v5; // r10
  __int64 (__fastcall *v6)(CVolumeStrip *__hidden, unsigned int, float *, float *, float *); // rax

  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, float *, float *, float *))(*(_QWORD *)*a1 + 200LL);
  if ( v6 == CVolumeStrip::GetVolumeRange )
    return CVolumeStrip::GetVolumeRange(v5, a2, a3, a4, a5);
  else
    return ((__int64 (__fastcall *)(CVolumeStrip *))v6)(v5);
}
