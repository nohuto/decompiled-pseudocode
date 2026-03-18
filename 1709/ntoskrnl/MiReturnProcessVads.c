/*
 * XREFs of MiReturnProcessVads @ 0x1406DEDD8
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14045BCF8 (MiInitializeUserNoAccess.c)
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateSharedUserVad @ 0x14045ECD0 (MiAllocateSharedUserVad.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnProcessVads(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[7];
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
