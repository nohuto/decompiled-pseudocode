/*
 * XREFs of ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1C01375D4
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C013770C (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
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

  v8 = -__CFSHR__(*(_DWORD *)a3, 12);
  v9 = !__CFSHR__(*(_DWORD *)a3, 12) && (*(_DWORD *)a3 & 0x80u) != 0;
  v10 = CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x20u, 0, 0);
  if ( *((_DWORD *)this + 750) == 2 )
  {
    if ( v9 && !v10 )
    {
      *a4 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    if ( v9 && (*(_DWORD *)a3 & 0x1000) != 0 )
      return 0LL;
    v12 = *((_QWORD *)this + 12);
    if ( *((_DWORD *)this + 5) )
      v13 = *((_DWORD *)this + 102);
    else
      v13 = 0;
    v14 = v8 && (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)a3 + 8)) / v12) >= *((unsigned int *)this + v13 + 124);
    if ( (!v8 || (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)this + 406)) / v12) > *((unsigned int *)this + 129))
      && !v14
      && !v10 )
    {
LABEL_23:
      *(_DWORD *)a3 |= 0x1000u;
      return 0LL;
    }
  }
  return 1LL;
}
