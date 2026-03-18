/*
 * XREFs of ?CrossedTPDragThreshold@@YAHPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@UtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AAA98
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

__int64 __fastcall CrossedTPDragThreshold(
        struct tagTPCONTACTSTATE *a1,
        struct tagTPSTATE *a2,
        struct tagPOINT a3,
        struct tagHID_POINTER_DEVICE_INFO *a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v7; // r9d
  __int64 v8; // rdx
  int v9; // edx
  int v10; // r11d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // r9d
  int v14; // r10d
  int v15; // eax
  __int64 v16; // rdx

  v4 = 0;
  v5 = (_DWORD *)((char *)a2 + 264);
  v7 = 0;
  v8 = 6LL;
  do
  {
    if ( (*v5 & 1) != 0 && (*v5 & 0x800000) == 0 )
      ++v7;
    v5 += 68;
    --v8;
  }
  while ( v8 );
  v9 = *((_DWORD *)a1 + 66);
  if ( (v9 & 0x200000) == 0 )
    goto LABEL_17;
  v10 = gTPThresholds[28];
  if ( (v10 & 0x40) != 0 && (int)HIDWORD(*(_QWORD *)a1) >= *((_DWORD *)a2 + 471) && (v9 & 0x100000) != 0 )
  {
    v11 = 248LL;
    v12 = gTPThresholds[34] * gTPThresholds[34];
    v13 = gTPThresholds[36] * gTPThresholds[36];
    v14 = gTPThresholds[37] * gTPThresholds[37];
    goto LABEL_18;
  }
  if ( (v10 & 0x10) != 0
    && (v9 & 0x80000) != 0
    && v7 <= 1
    && (v15 = *((_DWORD *)a2 + 480), (v15 & 0x800) == 0)
    && (v15 & 0x800000) == 0 )
  {
    v11 = 232LL;
    v12 = gTPThresholds[29] * gTPThresholds[29];
    v13 = gTPThresholds[31] * gTPThresholds[31];
    v14 = gTPThresholds[32] * gTPThresholds[32];
  }
  else
  {
LABEL_17:
    v13 = gTPThresholds[14];
    v11 = 216LL;
    v12 = gTPThresholds[13];
    v14 = v13;
  }
LABEL_18:
  if ( (gTPThresholds[28] & 1) != 0 )
  {
    LOBYTE(v4) = !PtInRect((struct tagTPCONTACTSTATE *)((char *)a1 + v11), *(_QWORD *)&a3);
  }
  else
  {
    v16 = HIDWORD(*(_QWORD *)a1);
    if ( (int)v16 < a3.y )
      v13 = v14;
    LOBYTE(v4) = v13 * (__int64)(int)((*(_QWORD *)a1 - a3.x) * (*(_QWORD *)a1 - a3.x))
               + (unsigned __int64)v12 * ((int)v16 - a3.y) * ((int)v16 - a3.y) >= v13 * (unsigned __int64)v12;
  }
  return v4;
}
