/*
 * XREFs of ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01AD458
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplyElasticDragModeDeltas(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagTPCONTACTSTATE *a2,
        struct tagPOINTER_INFO *a3,
        struct tagPOINT *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // r10
  int v14; // eax
  int v15; // ecx
  int v16; // eax

  v4 = *((_QWORD *)a3 + 5);
  v5 = 0;
  v7 = gTPThresholds[6];
  v8 = gTPThresholds[5]
     / 0xAu
     * ((unsigned __int64)(1000LL * (*((_QWORD *)a3 + 10) - *((_QWORD *)a2 + 8)))
      / gliQpcFreq);
  if ( (int)v4 <= v7 )
  {
    v9 = *((_DWORD *)a2 + 30);
    if ( (v9 & 2) == 0 && *((_DWORD *)a2 + 2) > v7 )
      *((_DWORD *)a2 + 30) = v9 | 2;
    if ( (*((_DWORD *)a2 + 30) & 2) != 0 )
    {
      a4->x -= v8;
      v5 = 1;
    }
  }
  v10 = *((_DWORD *)a1 + 37) - gTPThresholds[6];
  if ( (int)v4 >= v10 )
  {
    v11 = *((_DWORD *)a2 + 30);
    if ( (v11 & 1) == 0 && *((_DWORD *)a2 + 2) < v10 )
      *((_DWORD *)a2 + 30) = v11 | 1;
    if ( (*((_DWORD *)a2 + 30) & 1) != 0 )
    {
      a4->x += v8;
      v5 = 1;
    }
  }
  v12 = gTPThresholds[7];
  v13 = HIDWORD(v4);
  if ( (int)v13 <= v12 )
  {
    v14 = *((_DWORD *)a2 + 30);
    if ( (v14 & 4) == 0 && *((_DWORD *)a2 + 3) > v12 )
      *((_DWORD *)a2 + 30) = v14 | 4;
    if ( (*((_DWORD *)a2 + 30) & 4) != 0 )
    {
      a4->y -= v8;
      v5 = 1;
    }
  }
  v15 = *((_DWORD *)a1 + 38) - gTPThresholds[7];
  if ( (int)v13 >= v15 )
  {
    v16 = *((_DWORD *)a2 + 30);
    if ( (v16 & 8) == 0 && *((_DWORD *)a2 + 3) < v15 )
      *((_DWORD *)a2 + 30) = v16 | 8;
    if ( (*((_DWORD *)a2 + 30) & 8) != 0 )
    {
      a4->y += v8;
      return 1;
    }
  }
  return v5;
}
