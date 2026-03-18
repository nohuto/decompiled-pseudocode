/*
 * XREFs of FindOldMonitor @ 0x1C00CA0DC
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C00C9794 (xxxComputeProposedPerMonRect.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00C980C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00C9AD8 (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CA23C (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall FindOldMonitor(__int64 a1, int *a2, int *a3)
{
  unsigned int v6; // r13d
  struct tagMONITORPOS *v7; // r12
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // r14d
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+28h] [rbp-D8h] BYREF
  int v17; // [rsp+2Ch] [rbp-D4h]
  int v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  __m128i v21; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[72]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[77]; // [rsp+A8h] [rbp-58h] BYREF

  v20 = a1;
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, 0x260uLL);
  v15 = 0;
  v6 = -1;
  v24[5] = v23;
  if ( !a3 )
    a3 = (int *)(a1 + 128);
  v7 = (struct tagMONITORPOS *)(a2 + 2);
  v8 = 0;
  v9 = a3[2] - *a3;
  v10 = a3[3] - a3[1];
  if ( *a2 <= 0 )
    return v6;
  while ( 1 )
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v23, v7);
    v21 = *GetMonitorRectForDpi(&v22, (__int64)v24, (*(_DWORD *)(v20 + 368) >> 8) & 0x1FF);
    if ( (unsigned int)IntersectRect(&v16, a3, v21.m128i_i32) )
      break;
LABEL_5:
    v7 = (struct tagMONITORPOS *)((char *)v7 + 48);
    if ( (int)++v8 >= *a2 )
      return v6;
  }
  v12 = v18 - v16;
  v13 = v19 - v17;
  v18 = v12;
  v19 -= v17;
  if ( v12 != v9 || v13 != v10 )
  {
    v14 = v12 * v13;
    if ( v14 > v15 )
    {
      v15 = v14;
      v6 = v8;
    }
    goto LABEL_5;
  }
  return v8;
}
