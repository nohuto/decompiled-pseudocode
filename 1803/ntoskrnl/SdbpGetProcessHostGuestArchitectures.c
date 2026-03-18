/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1402C25C0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1402C2740 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x1407D81F0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x1407D8420 (SdbpGetPathSystem.c)
 * Callees:
 *     AslImageFileToArchitecture @ 0x14061F198 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14061F1C4 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, _WORD *a2, __int16 *a3)
{
  int ProcessWowInfo; // eax
  unsigned int v7; // ebx
  __int16 v8; // cx
  int v10; // [rsp+20h] [rbp-38h]
  __int16 v11[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = -1;
  v11[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v11, &v12);
  v7 = ProcessWowInfo;
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v8 = AslImageFileToArchitecture(*a3), v8 == -1) )
      v8 = v12;
    v7 = 0;
    *a1 = v11[0];
    *a2 = v8;
  }
  else
  {
    v10 = ProcessWowInfo;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHostGuestArchitectures",
      873,
      (unsigned int)"AslEnvGetProcessWowInfo failed [%x]",
      v10);
  }
  return v7;
}
