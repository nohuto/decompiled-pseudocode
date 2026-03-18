/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01357B8
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAA?AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z @ 0x1C0134D64 (-DoTPMouseProcessing@CPTPEngine@@AEAA-AW4tagPTP_PROCESSING_MODE@@PEAUPTPInput@@KW42@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v6; // rbx
  char v7; // cl
  bool v8; // dl
  __int64 v9; // rax

  if ( (*((_DWORD *)this + 55) & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)a2;
    if ( a3 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      if ( (*(_DWORD *)a4 & 0x2000000) == 0 )
      {
        *(_DWORD *)a4 |= 0x2000000u;
        *((_QWORD *)a4 + 15) = *(_QWORD *)a2;
      }
    }
    v8 = (*(_DWORD *)a4 & 0x2000000) != 0 && v7;
    if ( v7 )
      *(_DWORD *)a4 &= ~0x2000000u;
    if ( (*((_DWORD *)this + 805) & 0x40000000) != 0
      && v8
      && v6 - *((_QWORD *)a4 + 15) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 67) / 0x3E8 )
    {
      *(_QWORD *)((char *)a4 + 52) = *(_QWORD *)((char *)a4 + 20);
      v9 = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a4 |= 0x4000000u;
      *(_QWORD *)((char *)a4 + 60) = v9;
      *((_QWORD *)a4 + 14) = v6;
      return 1LL;
    }
    if ( (*(_DWORD *)a4 & 0x4000000) != 0
      && v6 - *((_QWORD *)a4 + 14) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 66) / 0x3E8 )
    {
      return 1LL;
    }
    *(_DWORD *)a4 &= ~0x4000000u;
  }
  return 0LL;
}
