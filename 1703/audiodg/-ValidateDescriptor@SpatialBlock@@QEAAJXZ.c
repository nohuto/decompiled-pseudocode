/*
 * XREFs of ?ValidateDescriptor@SpatialBlock@@QEAAJXZ @ 0x14005D014
 * Callers:
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C3EC (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x14005CF30 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall SpatialBlock::ValidateDescriptor(SpatialBlock *this)
{
  _DWORD *v1; // rax
  unsigned int v2; // ebx

  v1 = *(_DWORD **)this;
  v2 = 0;
  if ( !*(_QWORD *)this )
  {
    v2 = -2147467261;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("SpatialBlock::ValidateDescriptor", 137, v2);
    return v2;
  }
  if ( *v1 != 28 || v1[6] != 1396785732 || !v1[2] )
  {
    v2 = -2005139387;
    goto LABEL_7;
  }
  return v2;
}
