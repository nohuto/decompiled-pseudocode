/*
 * XREFs of ?ComputeNewWorkingSet@VIDMM_SEGMENT@@QEAAXK@Z @ 0x1C004B1F0
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DE58 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::ComputeNewWorkingSet(VIDMM_SEGMENT *this, unsigned int a2)
{
  __int64 v2; // r9

  if ( a2 )
  {
    v2 = *((_QWORD *)this + 6) - *((_QWORD *)this + 9);
    *((_QWORD *)this + 16) = v2 * (unsigned __int64)(unsigned int)dword_1C003C258 / 0x64 / a2;
    *((_QWORD *)this + 17) = v2 * (unsigned __int64)(unsigned int)dword_1C003C25C / 0x64 / a2;
  }
}
