/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01A19C4
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C01D9D80 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // r13d
  int v13; // edx
  unsigned int v14; // r12d
  int v15; // ecx
  int v16; // eax
  unsigned int v18; // edi
  unsigned int i; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  INT v22; // r14d
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  int DwmDependentMetric; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  INT v30; // eax
  int v31; // eax
  __int64 v32; // [rsp+28h] [rbp-60h] BYREF
  INT v33; // [rsp+30h] [rbp-58h] BYREF
  INT v34; // [rsp+34h] [rbp-54h]
  __int64 v35; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v36[18]; // [rsp+40h] [rbp-48h] BYREF

  LODWORD(v35) = *a1;
  HIDWORD(v35) = a1[2];
  LogicalToPhysicalDPIPoint(v36, &v35, 0LL, 0LL);
  if ( gptInd )
    v4 = (gptInd - 1) & 0x3F;
  else
    v4 = 63;
  v5 = v4;
  do
  {
    v6 = 0;
    v7 = (unsigned __int64)*((int *)&gaptMouse + 6 * v5) >> 16;
    if ( !(_WORD)v7 )
      break;
    v8 = (unsigned __int64)*((int *)&gaptMouse + 6 * v5 + 1) >> 16;
    if ( !(_WORD)v8 )
      break;
    v9 = (unsigned __int16)v7 + 1;
    v10 = (unsigned __int16)v8 + 1;
    v11 = *(_DWORD *)(gpsi + 2192LL);
    if ( v9 == v11 )
      v12 = *((__int16 *)&gaptMouse + 12 * v5);
    else
      v12 = v11 * *((__int16 *)&gaptMouse + 12 * v5) / v9;
    v13 = *(_DWORD *)(gpsi + 2196LL);
    if ( v10 == v13 )
      v14 = *((__int16 *)&gaptMouse + 12 * v5 + 2);
    else
      v14 = v13 * *((__int16 *)&gaptMouse + 12 * v5 + 2) / v10;
    if ( v12 == v36[0] && v14 == v36[1] )
      goto LABEL_20;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    {
      v33 = v12;
      v34 = v14;
      PhysicalToLogicalDPIPoint(&v32, &v33, 0LL, 0LL);
      if ( v32 == v35 )
        v6 = 1;
    }
    if ( v6 )
    {
LABEL_20:
      v15 = *((_DWORD *)a1 + 2);
      if ( !v15 || v15 == *((_DWORD *)&gaptMouse + 6 * v5 + 2) )
      {
        v16 = 1;
        goto LABEL_28;
      }
    }
    v5 = v5 ? ((_BYTE)v5 - 1) & 0x3F : 63;
  }
  while ( v5 != v4 );
  v16 = 0;
LABEL_28:
  if ( !v16 )
  {
    UserSetLastError(1171LL);
    return 0xFFFFFFFFLL;
  }
  v18 = v5 - v4;
  if ( v5 <= v4 )
    v18 += 64;
  if ( v18 >= a3 )
    v18 = a3;
  for ( i = 0; i < v18; ++i )
  {
    v20 = (unsigned __int64)*((int *)&gaptMouse + 6 * v5) >> 16;
    v21 = (unsigned __int64)*((int *)&gaptMouse + 6 * v5 + 1) >> 16;
    v22 = (unsigned __int16)v21 + 1;
    if ( !(_WORD)v20 || !(_WORD)v21 )
      break;
    v33 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v5), *(_DWORD *)(gpsi + 2192LL), (unsigned __int16)v20 + 1);
    v34 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v5 + 2), *(_DWORD *)(gpsi + 2196LL), v22);
    PhysicalToLogicalDPIPoint(&v32, &v33, 0LL, 0LL);
    v25 = a2 + 24LL * i;
    if ( a4 == 2 )
    {
      DwmDependentMetric = GetDwmDependentMetric(78LL, 0LL, v23, v24);
      *(_DWORD *)v25 = EngMulDiv((unsigned __int16)v32, 0x10000, DwmDependentMetric - 1);
      v29 = GetDwmDependentMetric(79LL, 0LL, v27, v28);
      v30 = EngMulDiv(WORD2(v32), 0x10000, v29 - 1);
LABEL_44:
      *(_DWORD *)(v25 + 4) = v30;
      goto LABEL_45;
    }
    *(_QWORD *)v25 = v32;
    if ( *(int *)v25 < 0 )
      *(_DWORD *)v25 += 0x10000;
    v31 = *(_DWORD *)(v25 + 4);
    if ( v31 < 0 )
    {
      v30 = v31 + 0x10000;
      goto LABEL_44;
    }
LABEL_45:
    *(_DWORD *)(v25 + 8) = *((_DWORD *)&gaptMouse + 6 * v5 + 2);
    *(_QWORD *)(v25 + 16) = *((_QWORD *)&gaptMouse + 3 * v5 + 2);
    if ( v5 )
      v5 = ((_BYTE)v5 - 1) & 0x3F;
    else
      v5 = 63;
  }
  return i;
}
