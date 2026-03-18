/*
 * XREFs of HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1C001BBE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogAlternateMode @ 0x1C0025784 (HUBDTX_LogAlternateMode.c)
 */

__int64 __fastcall HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rbx
  __int64 v3; // rdi
  char v4; // cl
  char v5; // dl
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(__int64 **)(v1 + 2632);
  v3 = *v2;
  if ( *((_BYTE *)v2 + 8) == 0xFF )
    *((_BYTE *)v2 + 8) = 0;
  for ( ; *((_BYTE *)v2 + 8) < *(_BYTE *)(v3 + 4); ++*((_BYTE *)v2 + 8) )
  {
    if ( *(_BYTE *)(v3 + 4LL * *((unsigned __int8 *)v2 + 8) + 47) )
      break;
    HUBDTX_LogAlternateMode(v1, 0LL);
  }
  v4 = *((_BYTE *)v2 + 8);
  v5 = *(_BYTE *)(v3 + 4);
  if ( v4 == v5 )
    *((_BYTE *)v2 + 8) = -1;
  result = 4061LL;
  if ( v4 != v5 )
    return 4089LL;
  return result;
}
