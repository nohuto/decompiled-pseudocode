/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01327C4
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0137E8C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v4; // r11d
  _DWORD *v5; // rax
  unsigned int v8; // edx
  __int64 v9; // r10
  int v10; // edi
  int v11; // eax
  char v12; // r9
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // edx
  int v17; // r10d
  __int64 v18; // rax

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
    || (v11 = *((_DWORD *)this + 820), (v11 & 0x2000) != 0)
    || (v12 = 1, (v11 & 0x800000) != 0) )
  {
    v12 = 0;
  }
  v13 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x200000) == 0 )
    goto LABEL_21;
  if ( (v10 & 0x40) != 0
    && (int)HIDWORD(*(_QWORD *)((char *)a2 + 4)) >= *((_DWORD *)this + 805)
    && (v13 & 0x100000) != 0 )
  {
    v14 = 276LL;
    v15 = (unsigned int)(*((_DWORD *)this + 61) * *((_DWORD *)this + 61));
    v16 = *((_DWORD *)this + 63) * *((_DWORD *)this + 63);
    v17 = *((_DWORD *)this + 64) * *((_DWORD *)this + 64);
    goto LABEL_23;
  }
  if ( !v12 )
    goto LABEL_21;
  if ( (v13 & 0x40000) != 0 )
  {
    v14 = 244LL;
    v15 = (unsigned int)(*((_DWORD *)this + 56) * *((_DWORD *)this + 56));
    v16 = *((_DWORD *)this + 58) * *((_DWORD *)this + 58);
    v17 = *((_DWORD *)this + 59) * *((_DWORD *)this + 59);
    goto LABEL_23;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    v14 = 260LL;
    v15 = (unsigned int)(*((_DWORD *)this + 95) * *((_DWORD *)this + 95));
    v16 = *((_DWORD *)this + 96) * *((_DWORD *)this + 96);
  }
  else
  {
LABEL_21:
    v16 = *((_DWORD *)this + 41);
    v14 = 228LL;
    v15 = *((unsigned int *)this + 40);
  }
  v17 = v16;
LABEL_23:
  if ( (v10 & 1) != 0 )
  {
    LOBYTE(v4) = !PtInRect((struct CContactState *)((char *)a2 + v14), *(_QWORD *)&a3);
  }
  else
  {
    if ( a4 )
      v18 = *(_QWORD *)((char *)a2 + 12);
    else
      v18 = *(_QWORD *)((char *)a2 + 4);
    if ( SHIDWORD(v18) < a3.y )
      v16 = v17;
    LOBYTE(v4) = v15 * (HIDWORD(v18) - a3.y) * (HIDWORD(v18) - a3.y)
               + (unsigned __int64)v16 * ((int)v18 - a3.x) * ((int)v18 - a3.x) >= v15 * (unsigned __int64)v16;
  }
  return v4;
}
