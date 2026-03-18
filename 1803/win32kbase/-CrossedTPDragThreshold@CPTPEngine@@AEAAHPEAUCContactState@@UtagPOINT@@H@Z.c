/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C013687C
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C013C224 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v4; // r10d
  _DWORD *v5; // rax
  unsigned int v8; // edx
  __int64 v9; // rdi
  int v10; // ebx
  int v11; // eax
  char v12; // r9
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // r9d
  int v21; // edx
  int v22; // eax
  int v23; // r9d
  int v24; // edx
  int v25; // eax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rcx
  int v28; // ebp

  v4 = 0;
  v5 = (_DWORD *)((char *)this + 1192);
  v8 = 0;
  v9 = 6LL;
  do
  {
    if ( (*v5 & 1) != 0 && (*v5 & 0x800000) == 0 )
      ++v8;
    v5 += 74;
    --v9;
  }
  while ( v9 );
  v10 = *((_DWORD *)this + 55);
  if ( (v10 & 0x10) == 0
    || v8 > 1
    || (v11 = *((_DWORD *)this + 824), (v11 & 0x2000) != 0)
    || (v12 = 1, (v11 & 0x1000000) != 0) )
  {
    v12 = 0;
  }
  if ( *((_DWORD *)this + 750) && *((_QWORD *)a2 + 8) > *((_QWORD *)this + 388) )
    goto LABEL_20;
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x200000) == 0 )
    goto LABEL_23;
  if ( (v10 & 0x40) != 0 && (int)HIDWORD(*((_QWORD *)a2 + 1)) >= *((_DWORD *)this + 807) && (v13 & 0x100000) != 0 )
  {
    v14 = *((_DWORD *)this + 61);
    v15 = *((_DWORD *)this + 63);
    v16 = *((_DWORD *)this + 64);
    v17 = 276LL;
    v18 = v14 * v14;
    v19 = v15 * v15;
    v20 = v16 * v16;
    goto LABEL_25;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( (v13 & 0x40000) != 0 )
  {
LABEL_20:
    v21 = *((_DWORD *)this + 56);
    v22 = *((_DWORD *)this + 58);
    v23 = *((_DWORD *)this + 59);
    v17 = 244LL;
    v18 = v21 * v21;
    v19 = v22 * v22;
    v20 = v23 * v23;
    goto LABEL_25;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    v24 = *((_DWORD *)this + 95);
    v25 = *((_DWORD *)this + 96);
    v17 = 260LL;
    v18 = v24 * v24;
    v19 = v25 * v25;
  }
  else
  {
LABEL_23:
    v18 = *((_DWORD *)this + 40);
    v19 = *((_DWORD *)this + 41);
    v17 = 228LL;
  }
  v20 = v19;
LABEL_25:
  if ( (v10 & 1) != 0 )
  {
    LOBYTE(v4) = !PtInRect((struct CContactState *)((char *)a2 + v17), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v26 = *((_QWORD *)a2 + 2);
    else
      v26 = *((_QWORD *)a2 + 1);
    v27 = HIDWORD(v26);
    v28 = HIDWORD(v26);
    if ( SHIDWORD(v26) < a3.y )
    {
      v19 = v20;
      LODWORD(v27) = HIDWORD(v26);
      v28 = HIDWORD(v26);
    }
    LOBYTE(v4) = v19 * (__int64)(((int)v26 - a3.x) * ((int)v26 - a3.x))
               + (unsigned __int64)v18 * (v28 - a3.y) * ((int)v27 - a3.y) >= v19 * (unsigned __int64)v18;
  }
  return v4;
}
