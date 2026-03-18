/*
 * XREFs of ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z @ 0x1C01AEBA4
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 */

__int64 __fastcall IsTPRightClick(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagTPSTATE *a2,
        int a3,
        struct tagPOINT *a4)
{
  unsigned int v4; // r10d
  unsigned int v7; // ebx
  unsigned int v8; // r11d
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r9d

  v4 = 0;
  if ( a3 || (gTouchPadParameters[5] & 2) == 0 )
    return 0LL;
  v7 = *((_DWORD *)a1 + 10);
  v8 = 0;
  v9 = *((_QWORD *)a1 + 11);
  if ( !v7 )
    return v4;
  v10 = *((_DWORD *)a2 + 411);
  while ( 1 )
  {
    v11 = 272LL * (*(unsigned __int16 *)(v9 + 48) % v10);
    v12 = *(_DWORD *)(v9 + 68);
    if ( !v12 || (v12 & 0x40000) != 0 )
      goto LABEL_12;
    v13 = -__CFSHR__(*(_DWORD *)((char *)a2 + v11 + 264), 6);
    if ( __CFSHR__(*(_DWORD *)((char *)a2 + v11 + 264), 6) )
    {
LABEL_11:
      *a4 = *(struct tagPOINT *)(v9 + 96);
      goto LABEL_12;
    }
    if ( *(_DWORD *)((char *)a2 + v11 + 268) == v4 && PtInRect((_DWORD *)a2 + 470, *(_QWORD *)(v9 + 96)) )
      break;
    if ( v13 )
      goto LABEL_11;
LABEL_12:
    ++v8;
    v9 += 216LL;
    if ( v8 >= v7 )
      return v4;
  }
  v4 = 1;
  *a4 = *(struct tagPOINT *)(v9 + 96);
  return v4;
}
