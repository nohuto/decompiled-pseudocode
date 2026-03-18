/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x14046C5E4
 * Callers:
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14046C6E4 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
