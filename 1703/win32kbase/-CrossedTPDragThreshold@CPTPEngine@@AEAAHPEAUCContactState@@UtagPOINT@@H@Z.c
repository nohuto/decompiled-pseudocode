/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01336F8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v8; // r10d
  __int64 v9; // r11
  int v10; // edx
  int v11; // r9d
  __int64 v12; // r11
  unsigned int v13; // r10d
  unsigned int v14; // edx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rax

  v4 = 0;
  v5 = (_DWORD *)((char *)this + 1168);
  v8 = 0;
  v9 = 6LL;
  do
  {
    if ( (*v5 & 1) != 0 && (*v5 & 0x1000000) == 0 )
      ++v8;
    v5 += 72;
    --v9;
  }
  while ( v9 );
  v10 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x400000) == 0 )
    goto LABEL_17;
  v11 = *((_DWORD *)this + 55);
  if ( (v11 & 0x40) != 0
    && (int)HIDWORD(*(_QWORD *)((char *)a2 + 4)) >= *((_DWORD *)this + 787)
    && (v10 & 0x200000) != 0 )
  {
    v12 = 268LL;
    v13 = *((_DWORD *)this + 61) * *((_DWORD *)this + 61);
    v14 = *((_DWORD *)this + 63) * *((_DWORD *)this + 63);
    v15 = *((_DWORD *)this + 64) * *((_DWORD *)this + 64);
    goto LABEL_18;
  }
  if ( (v11 & 0x10) != 0
    && (v10 & 0x100000) != 0
    && v8 <= 1
    && (v16 = *((_DWORD *)this + 805), (v16 & 0x4000) == 0)
    && (v16 & 0x1000000) == 0 )
  {
    v12 = 252LL;
    v13 = *((_DWORD *)this + 56) * *((_DWORD *)this + 56);
    v14 = *((_DWORD *)this + 58) * *((_DWORD *)this + 58);
    v15 = *((_DWORD *)this + 59) * *((_DWORD *)this + 59);
  }
  else
  {
LABEL_17:
    v14 = *((_DWORD *)this + 41);
    v12 = 236LL;
    v13 = *((_DWORD *)this + 40);
    v15 = v14;
  }
LABEL_18:
  if ( (*((_DWORD *)this + 55) & 1) != 0 )
  {
    LOBYTE(v4) = !PtInRect((struct CContactState *)((char *)a2 + v12), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v17 = *(_QWORD *)((char *)a2 + 12);
    else
      v17 = *(_QWORD *)((char *)a2 + 4);
    if ( SHIDWORD(v17) < a3.y )
      v14 = v15;
    LOBYTE(v4) = v14 * (__int64)(((int)v17 - a3.x) * ((int)v17 - a3.x))
               + (unsigned __int64)v13 * (HIDWORD(v17) - a3.y) * (HIDWORD(v17) - a3.y) >= v14 * (unsigned __int64)v13;
  }
  return v4;
}
