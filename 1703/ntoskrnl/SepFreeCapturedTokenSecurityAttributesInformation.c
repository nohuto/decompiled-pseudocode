/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x140456C14
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14044AC80 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeCapturedTokenSecurityAttributesInformation(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 i; // rbp
  unsigned int v4; // eax

  v1 = *(PVOID **)(a1 + 8);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 4); i = (unsigned int)(i + 1) )
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
  ExFreePoolWithTag((PVOID)a1, 0);
}
