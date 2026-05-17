/*
 * XREFs of RtlpGetLegacyContextLength @ 0x180072514
 * Callers:
 *     RtlGetExtendedContextLength @ 0x1800724A0 (RtlGetExtendedContextLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLegacyContextLength(int a1, int *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 4LL;
    v3 = 716;
    goto LABEL_3;
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v3 = 1232;
LABEL_10:
    result = 16LL;
    goto LABEL_3;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    result = 8LL;
    v3 = 416;
  }
  else if ( (a1 & 0x400000) != 0 )
  {
    v3 = 912;
    goto LABEL_10;
  }
LABEL_3:
  if ( a2 )
    *a2 = v3;
  if ( a3 )
    *a3 = result;
  return result;
}
