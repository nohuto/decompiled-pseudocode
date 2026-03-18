/*
 * XREFs of ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C0138274
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 * Callees:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01383B0 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowMoveNow(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        int *a4)
{
  int v8; // ebp
  BOOL v9; // esi
  int v10; // eax
  unsigned __int64 v12; // r11
  int v13; // ecx
  BOOL v14; // ecx

  v8 = -__CFSHR__(*(_DWORD *)a3, 13);
  v9 = !__CFSHR__(*(_DWORD *)a3, 13) && (*(_DWORD *)a3 & 0x100) != 0;
  v10 = CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x20u, 0, 0);
  if ( *((_DWORD *)this + 733) == 2 )
  {
    if ( v9 && !v10 )
    {
      *a4 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    if ( v9 && (*(_DWORD *)a3 & 0x2000) != 0 )
      return 0LL;
    v12 = *((_QWORD *)this + 12);
    if ( *((_DWORD *)this + 5) )
      v13 = *((_DWORD *)this + 97);
    else
      v13 = 0;
    v14 = v8 && (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)a3 + 9)) / v12) >= *((unsigned int *)this + v13 + 119);
    if ( (!v8 || (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)this + 397)) / v12) > *((unsigned int *)this + 124))
      && !v14
      && !v10 )
    {
LABEL_23:
      *(_DWORD *)a3 |= 0x2000u;
      return 0LL;
    }
  }
  return 1LL;
}
