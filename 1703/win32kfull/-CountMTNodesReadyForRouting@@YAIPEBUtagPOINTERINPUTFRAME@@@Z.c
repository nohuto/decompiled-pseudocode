/*
 * XREFs of ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C5400
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     EditionBuildManipulationInputInfo @ 0x1C01C9CA0 (EditionBuildManipulationInputInfo.c)
 * Callees:
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall CountMTNodesReadyForRouting(const struct tagPOINTERINPUTFRAME *a1)
{
  unsigned int v1; // edx
  const struct tagPOINTERINFONODE *v2; // r8
  int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // r9
  unsigned int v6; // ecx

  v1 = 0;
  if ( *((_DWORD *)a1 + 10) )
  {
    v2 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a1 + 11);
    do
    {
      v3 = IsManipulationThreadNode(v2);
      v6 = v4 + 1;
      if ( !v3 )
        v6 = v4;
      v1 = v6;
    }
    while ( v5 != 1 );
  }
  return v1;
}
