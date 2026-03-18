/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405457FC
 * Callers:
 *     NtCreateTokenEx @ 0x140542F04 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405458FC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeCapturedTokenSecurityAttributesInformation(_QWORD *P)
{
  PVOID *v1; // rbx
  __int64 i; // rbp
  unsigned int v4; // eax

  v1 = (PVOID *)P[1];
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 1); i = (unsigned int)(i + 1) )
  {
    ExFreePoolWithTag(v1[5 * i + 1], 0);
    if ( LODWORD(v1[5 * i + 3]) )
    {
      v4 = LOWORD(v1[5 * i + 2]);
      if ( LOWORD(v1[5 * i + 2]) )
      {
        if ( v4 <= 6 || v4 == 16 )
          ExFreePoolWithTag(v1[5 * i + 4], 0);
      }
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(P, 0);
}
