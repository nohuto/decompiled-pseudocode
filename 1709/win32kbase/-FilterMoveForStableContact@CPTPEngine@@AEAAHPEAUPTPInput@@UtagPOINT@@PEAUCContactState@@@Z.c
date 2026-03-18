/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01345FC
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0132CA4 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0133D7C (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0132968 (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // r14
  char v8; // cl
  bool v9; // dl
  bool v10; // di
  int v11; // eax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbp
  BOOL v14; // eax
  int v15; // edx
  bool v16; // al

  if ( (*((_DWORD *)this + 55) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (*(_DWORD *)a4 & 0x1000000) == 0 )
    {
      *(_DWORD *)a4 |= 0x1000000u;
      *((_QWORD *)a4 + 14) = *(_QWORD *)a2;
    }
  }
  v9 = (*(_DWORD *)a4 & 0x1000000) != 0 && v8;
  v10 = 0;
  if ( v8 )
    *(_DWORD *)a4 &= ~0x1000000u;
  v11 = *((_DWORD *)this + 820);
  if ( ((v11 & 0x20000000) != 0 || (v11 & 1) != 0) && v9 )
    v10 = v7 - *((_QWORD *)a4 + 14) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 67) / 0x3E8;
  v12 = v7 - *((_QWORD *)a4 + 13);
  v13 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 66) / 0x3E8;
  v14 = CPTPEngine::CrossedTPMoveFilteringThreshold(this, a4, *(struct tagPOINT *)((char *)a4 + 20));
  v15 = *(_DWORD *)a4;
  v16 = (*(_DWORD *)a4 & 0x2000000) != 0 && v12 < v13 && !v14;
  if ( v10 )
  {
    *(_QWORD *)((char *)a4 + 44) = *(_QWORD *)((char *)a4 + 20);
    *(_QWORD *)((char *)a4 + 52) = *(_QWORD *)((char *)a2 + 28);
    *(_DWORD *)a4 = v15 | 0x2000000;
    *((_QWORD *)a4 + 13) = v7;
  }
  else if ( !v16 )
  {
    *(_DWORD *)a4 = v15 & 0xFDFFFFFF;
    return 0LL;
  }
  return 1LL;
}
