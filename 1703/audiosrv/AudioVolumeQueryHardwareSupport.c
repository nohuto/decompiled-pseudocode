/*
 * XREFs of AudioVolumeQueryHardwareSupport @ 0x18002F110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioVolumeQueryHardwareSupport(CVolumeStrip **a1, unsigned int *a2)
{
  CVolumeStrip *v2; // rcx
  __int64 (*v3)(void); // rax

  v2 = *a1;
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 56LL);
  if ( (char *)v3 == (char *)CVolumeStrip::QueryHardwareSupport )
    return CVolumeStrip::QueryHardwareSupport(v2, a2);
  else
    return v3();
}
