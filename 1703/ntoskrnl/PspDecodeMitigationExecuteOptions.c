/*
 * XREFs of PspDecodeMitigationExecuteOptions @ 0x140457C78
 * Callers:
 *     PspApplyMitigationOptions @ 0x1404A0710 (PspApplyMitigationOptions.c)
 * Callees:
 *     <none>
 */

char __fastcall PspDecodeMitigationExecuteOptions(_QWORD *a1)
{
  char v1; // dl
  __int64 v2; // rax

  v1 = 0;
  switch ( *a1 & 3 )
  {
    case 1LL:
      v1 = 13;
      break;
    case 2LL:
      v1 = 58;
      break;
    case 3LL:
      v1 = 9;
      break;
  }
  v2 = *a1 >> 4;
  if ( (v2 & 3) == 1 )
    return v1 | 8;
  if ( (v2 & 3) == 2 )
    return v1 | 0x48;
  return v1;
}
