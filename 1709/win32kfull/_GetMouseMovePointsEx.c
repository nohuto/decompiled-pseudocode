/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01BB284
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C01E65F0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetScreenRect @ 0x1C013FD78 (GetScreenRect.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v22; // edi
  unsigned int i; // esi
  int v24; // ecx
  int v25; // edx
  INT v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // rdx
  __m128i v33; // xmm6
  __int64 v34; // r15
  INT v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+28h] [rbp-B0h] BYREF
  INT v38; // [rsp+30h] [rbp-A8h] BYREF
  INT v39; // [rsp+34h] [rbp-A4h]
  __int64 v40; // [rsp+38h] [rbp-A0h] BYREF
  _DWORD v41[4]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v42; // [rsp+50h] [rbp-88h] BYREF
  __int128 v43; // [rsp+60h] [rbp-78h]
  __m128i v44; // [rsp+80h] [rbp-58h]
  unsigned int v47; // [rsp+F0h] [rbp+18h]
  int v48; // [rsp+F8h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  LODWORD(v40) = *a1;
  HIDWORD(v40) = a1[2];
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3, a4);
  LogicalToPhysicalDPIPoint(v41, &v40, CurrentThreadDpiAwarenessContext, 0LL);
  if ( gptInd )
    v5 = (gptInd - 1) & 0x3F;
  else
    v5 = 63;
  v6 = v5;
  v42 = *(_OWORD *)(*gpDispInfo + 24LL);
  v43 = v42;
  do
  {
    v7 = 0;
    v8 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v6) >> 16;
    if ( !(_WORD)v8 )
      break;
    v9 = (unsigned __int64)*((unsigned int *)&gaptMouse + 6 * v6 + 1) >> 16;
    if ( !(_WORD)v9 )
      break;
    v10 = (unsigned int)(unsigned __int16)v8 + 1;
    v11 = (unsigned int)(unsigned __int16)v9 + 1;
    if ( (_DWORD)v10 == DWORD2(v42) - (_DWORD)v42 )
      v12 = *((__int16 *)&gaptMouse + 12 * v6);
    else
      v12 = (DWORD2(v42) - (int)v42) * *((__int16 *)&gaptMouse + 12 * v6) / (unsigned int)v10;
    v8 = (unsigned int)(HIDWORD(v42) - DWORD1(v42));
    if ( (_DWORD)v11 == (_DWORD)v8 )
    {
      v14 = *((__int16 *)&gaptMouse + 12 * v6 + 2);
    }
    else
    {
      v13 = v8 * *((__int16 *)&gaptMouse + 12 * v6 + 2);
      v8 = v13 % (unsigned int)v11;
      v14 = v13 / (unsigned int)v11;
    }
    if ( v12 == v41[0] && v14 == v41[1] )
      goto LABEL_20;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gaptMouse, v8, v10, v11) & 0xF) != 2 )
    {
      v38 = v12;
      v39 = v14;
      v18 = W32GetCurrentThreadDpiAwarenessContext(v15, v8, v16, v17);
      PhysicalToLogicalDPIPoint(&v37, &v38, v18, 0LL);
      if ( v37 == v40 )
        v7 = 1;
    }
    if ( v7 )
    {
LABEL_20:
      v19 = *((_DWORD *)a1 + 2);
      if ( !v19 || v19 == *((_DWORD *)&gaptMouse + 6 * v6 + 2) )
      {
        v20 = 1;
        goto LABEL_28;
      }
    }
    v6 = v6 ? ((_BYTE)v6 - 1) & 0x3F : 63;
  }
  while ( v6 != v5 );
  v20 = 0;
LABEL_28:
  if ( !v20 )
  {
    UserSetLastError(1171LL, v8);
    return 0xFFFFFFFFLL;
  }
  v22 = v6 - v5;
  if ( v6 <= v5 )
    v22 += 64;
  if ( v22 >= v47 )
    v22 = v47;
  for ( i = 0; i < v22; ++i )
  {
    v24 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v6));
    v25 = (unsigned __int16)HIWORD(*((_DWORD *)&gaptMouse + 6 * v6 + 1));
    v26 = v25 + 1;
    if ( !(_WORD)v24 || !(_WORD)v25 )
      break;
    v38 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v6), DWORD2(v43) - v43, v24 + 1);
    v39 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v6 + 2), HIDWORD(v43) - DWORD1(v43), v26);
    v31 = W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30);
    PhysicalToLogicalDPIPoint(&v37, &v38, v31, 0LL);
    if ( v48 == 2 )
    {
      v33 = *(__m128i *)GetScreenRect(&v42, v32);
      v44 = v33;
      v34 = a2 + 24LL * i;
      *(_DWORD *)v34 = EngMulDiv(
                         (unsigned __int16)v37,
                         0x10000,
                         _mm_cvtsi128_si32(_mm_srli_si128(v33, 8)) - _mm_cvtsi128_si32(v33) - 1);
      v35 = EngMulDiv(
              WORD2(v37),
              0x10000,
              _mm_cvtsi128_si32(_mm_srli_si128(v33, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v33, 4)) - 1);
LABEL_44:
      *(_DWORD *)(v34 + 4) = v35;
      goto LABEL_45;
    }
    v34 = a2 + 24LL * i;
    *(_QWORD *)v34 = v37;
    if ( *(int *)v34 < 0 )
      *(_DWORD *)v34 += 0x10000;
    v36 = *(_DWORD *)(v34 + 4);
    if ( v36 < 0 )
    {
      v35 = v36 + 0x10000;
      goto LABEL_44;
    }
LABEL_45:
    *(_DWORD *)(v34 + 8) = *((_DWORD *)&gaptMouse + 6 * v6 + 2);
    *(_QWORD *)(v34 + 16) = *((_QWORD *)&gaptMouse + 3 * v6 + 2);
    if ( v6 )
      v6 = ((_BYTE)v6 - 1) & 0x3F;
    else
      v6 = 63;
  }
  return i;
}
