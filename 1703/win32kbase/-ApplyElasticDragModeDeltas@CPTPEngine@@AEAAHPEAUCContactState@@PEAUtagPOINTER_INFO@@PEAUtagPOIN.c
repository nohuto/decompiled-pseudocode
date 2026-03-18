/*
 * XREFs of ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C0132C0C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C0133988 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::ApplyElasticDragModeDeltas(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINTER_INFO *a3,
        struct tagPOINT *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  int v7; // r8d
  unsigned int v8; // kr00_4
  int v9; // ecx
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // r10
  int v16; // eax
  int v17; // ecx
  int v18; // eax

  v4 = *((_QWORD *)a3 + 5);
  v5 = 0;
  v7 = (unsigned __int64)(1000LL * (*((_QWORD *)a3 + 10) - *((_QWORD *)a2 + 11))) / *((_QWORD *)this + 12);
  v8 = *((_DWORD *)this + 32);
  v9 = *((_DWORD *)this + 33);
  v10 = v8 / 0xA * v7;
  if ( (int)v4 <= v9 )
  {
    v11 = *((_DWORD *)a2 + 35);
    if ( (v11 & 2) == 0 && *((_DWORD *)a2 + 5) > v9 )
      *((_DWORD *)a2 + 35) = v11 | 2;
    if ( (*((_DWORD *)a2 + 35) & 2) != 0 )
    {
      a4->x -= v10;
      v5 = 1;
    }
  }
  v12 = *((_DWORD *)this + 10) - *((_DWORD *)this + 33);
  if ( (int)v4 >= v12 )
  {
    v13 = *((_DWORD *)a2 + 35);
    if ( (v13 & 1) == 0 && *((_DWORD *)a2 + 5) < v12 )
      *((_DWORD *)a2 + 35) = v13 | 1;
    if ( (*((_DWORD *)a2 + 35) & 1) != 0 )
    {
      a4->x += v10;
      v5 = 1;
    }
  }
  v14 = *((_DWORD *)this + 34);
  v15 = HIDWORD(v4);
  if ( (int)v15 <= v14 )
  {
    v16 = *((_DWORD *)a2 + 35);
    if ( (v16 & 4) == 0 && *((_DWORD *)a2 + 6) > v14 )
      *((_DWORD *)a2 + 35) = v16 | 4;
    if ( (*((_DWORD *)a2 + 35) & 4) != 0 )
    {
      a4->y -= v10;
      v5 = 1;
    }
  }
  v17 = *((_DWORD *)this + 11) - *((_DWORD *)this + 34);
  if ( (int)v15 >= v17 )
  {
    v18 = *((_DWORD *)a2 + 35);
    if ( (v18 & 8) == 0 && *((_DWORD *)a2 + 6) < v17 )
      *((_DWORD *)a2 + 35) = v18 | 8;
    if ( (*((_DWORD *)a2 + 35) & 8) != 0 )
    {
      a4->y += v10;
      return 1;
    }
  }
  return v5;
}
