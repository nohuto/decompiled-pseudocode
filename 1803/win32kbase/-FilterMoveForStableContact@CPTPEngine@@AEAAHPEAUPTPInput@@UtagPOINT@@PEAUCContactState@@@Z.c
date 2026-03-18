/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C0138808
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0136D8C (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0137F18 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 * Callees:
 *     ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0136A4C (-CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct tagPOINT *a4)
{
  struct tagPOINT v7; // r12
  unsigned int x; // ecx
  char v9; // dl
  bool v10; // r10
  char v11; // bp
  unsigned int v12; // ebx
  int v13; // r8d
  bool v14; // cl
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  BOOL v17; // ecx
  bool v18; // al

  if ( (*((_DWORD *)this + 55) & 0x80u) == 0 )
    return 0LL;
  v7 = *(struct tagPOINT *)a2;
  if ( a3 )
  {
    x = a4->x;
    v9 = 1;
  }
  else
  {
    x = a4->x;
    v9 = 0;
    if ( (a4->x & 0x1000000) == 0 )
    {
      x |= 0x1000000u;
      a4->x = x;
      a4[14] = *(struct tagPOINT *)a2;
    }
  }
  v10 = __CFSHR__(x, 25) && v9;
  v11 = 0;
  v12 = x;
  if ( v9 )
  {
    v12 = x & 0xFEFFFFFF;
    a4->x = x & 0xFEFFFFFF;
  }
  v13 = *((_DWORD *)this + 824);
  v14 = (v13 & 1) != 0 && *(_QWORD *)&a4[8] <= *((_QWORD *)this + 388);
  if ( ((v13 & 0x40000000) != 0 || v14)
    && v10
    && *(_QWORD *)&v7 - *(_QWORD *)&a4[14] >= *((_QWORD *)this + 12)
                                            * (unsigned __int64)*((unsigned int *)this + 67)
                                            / 0x3E8 )
  {
    v11 = 1;
  }
  v15 = *((_QWORD *)this + 12) * *((unsigned int *)this + 66);
  v16 = *(_QWORD *)&v7 - *(_QWORD *)&a4[13];
  v17 = CPTPEngine::CrossedTPMoveFilteringThreshold(this, (struct CContactState *)a4, a4[3]);
  v18 = (v12 & 0x2000000) != 0 && v16 < v15 / 0x3E8 && !v17;
  if ( v11 )
  {
    a4[6] = a4[3];
    a4[7] = *(struct tagPOINT *)((char *)a2 + 28);
    a4->x = v12 | 0x2000000;
    a4[13] = v7;
  }
  else if ( !v18 )
  {
    a4->x = v12 & 0xFDFFFFFF;
    return 0LL;
  }
  return 1LL;
}
