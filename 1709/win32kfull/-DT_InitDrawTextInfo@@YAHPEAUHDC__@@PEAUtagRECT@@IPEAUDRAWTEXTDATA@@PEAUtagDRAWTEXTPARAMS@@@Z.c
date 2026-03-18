/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C023B7C8
 * Callers:
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C00B0A64 (GreGetTextCharsetInfo.c)
 *     GreGetTextMetricsW @ 0x1C0108CF4 (GreGetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C023BE50 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int TextMetricsW; // eax
  int v17; // r15d
  int v18; // r14d
  int v19; // r12d
  _DWORD *DPIServerInfo; // rax
  int v21; // eax
  int v22; // edi
  __int64 v23; // [rsp+28h] [rbp-71h] BYREF
  __int64 v24; // [rsp+30h] [rbp-69h] BYREF
  __int128 v25; // [rsp+38h] [rbp-61h]
  __int128 v26; // [rsp+48h] [rbp-51h]
  __int128 v27; // [rsp+58h] [rbp-41h]
  _OWORD v28[5]; // [rsp+78h] [rbp-21h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  if ( a5 )
  {
    v9 = *((_DWORD *)a5 + 2);
    v10 = *((_DWORD *)a5 + 3);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v24);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v23);
    *((_DWORD *)a4 + 5) = (((int)(v24 ^ v23) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v24) ^ HIDWORD(v23)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v13, v12, v14, v15);
      v19 = DPIServerInfo[9];
      v17 = DPIServerInfo[15];
      v18 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 48LL), 0LL);
    }
    else
    {
      memset(v28, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v28);
      v25 = v28[0];
      v26 = v28[1];
      v17 = DWORD1(v28[1]);
      v27 = v28[2];
      if ( TextMetricsW )
        v18 = v27;
      else
        v18 = 0;
      v19 = v25;
    }
    v21 = v19 * *((_DWORD *)a4 + 6);
    *((_DWORD *)a4 + 14) = v18;
    *((_DWORD *)a4 + 7) = v21;
    *((_DWORD *)a4 + 4) = 8 * v17;
    if ( gptiCurrent == gptiRit )
      *((_DWORD *)a4 + 15) = 0;
    else
      *((_DWORD *)a4 + 15) = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit) + 720) & 4;
    if ( !*((_DWORD *)a4 + 15) )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *((_DWORD *)a4 + 5) * v9;
      v22 = *((_DWORD *)a4 + 5) * v10;
      *((_DWORD *)a4 + 10) = v22;
      *((_DWORD *)a4 + 2) -= v22;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    result = 1LL;
    *((_QWORD *)a4 + 4) = (unsigned int)(*((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4));
  }
  return result;
}
