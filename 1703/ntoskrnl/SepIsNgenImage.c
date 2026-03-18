/*
 * XREFs of SepIsNgenImage @ 0x140545D34
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140545960 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

char __fastcall SepIsNgenImage(unsigned __int16 *a1)
{
  __int64 CurrentServerSilo; // rax
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  unsigned __int16 v5; // cx
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  CurrentServerSilo = PsGetCurrentServerSilo();
  v3 = (unsigned int *)*((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 97);
  if ( !v3 )
    return 0;
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v5 = *a1;
  if ( *a1 < *((_WORD *)v3 + 2) )
    return 0;
  if ( v5 > *((_WORD *)v3 + 3) )
    return 0;
  String1.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + 8LL);
  v7 = a1[1];
  v8 = 0;
  String1.Length = v5 - 8;
  String1.MaximumLength = v7 - 8;
  if ( !v4 )
    return 0;
  while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&v3[4 * v8 + 2], 1u) )
  {
    if ( ++v8 >= v4 )
      return 0;
  }
  return 1;
}
