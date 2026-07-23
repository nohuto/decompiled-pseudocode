/*
 * XREFs of RtlInitializeCorrelationVector @ 0x1800F1850
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800F19A8 @ 0x1800F19A8 (sub_1800F19A8.c)
 */

DWORD __cdecl RtlInitializeCorrelationVector(PCORRELATION_VECTOR CorrelationVector, int Version, const GUID *Guid)
{
  CHAR v4; // di
  __int64 v6; // rdx
  DWORD result; // eax

  v4 = Version;
  if ( (unsigned __int8)(Version - 1) > 1u || !Guid )
    return -1073741811;
  memset(CorrelationVector, 0, sizeof(CORRELATION_VECTOR));
  CorrelationVector->Version = v4;
  result = sub_1800F19A8(Guid, v6, CorrelationVector->Vector);
  if ( (result & 0x80000000) == 0 )
  {
    if ( v4 == 1 )
      strcpy(&CorrelationVector->Vector[16], ".0");
    else
      strcpy(&CorrelationVector->Vector[22], ".0");
  }
  return result;
}
