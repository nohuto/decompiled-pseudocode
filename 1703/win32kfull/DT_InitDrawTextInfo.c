/*
 * XREFs of DT_InitDrawTextInfo @ 0x1C023A078
 * Callers:
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C000C4B4 (GreGetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     GreGetTextCharsetInfo @ 0x1C00E08F4 (GreGetTextCharsetInfo.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C023A4A4 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(HDC a1, _OWORD *a2, __int16 a3, __int64 a4, __int64 a5)
{
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  int TextMetricsW; // eax
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // r14d
  int v17; // r12d
  _DWORD *DPIServerInfo; // rax
  int v19; // eax
  int v20; // edi
  __int64 v21; // [rsp+28h] [rbp-71h] BYREF
  __int64 v22; // [rsp+30h] [rbp-69h] BYREF
  __int128 v23; // [rsp+38h] [rbp-61h]
  __int128 v24; // [rsp+48h] [rbp-51h]
  __int128 v25; // [rsp+58h] [rbp-41h]
  _OWORD v26[5]; // [rsp+78h] [rbp-21h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  if ( a5 )
  {
    v9 = *(_DWORD *)(a5 + 8);
    v10 = *(_DWORD *)(a5 + 12);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v22);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v21);
    *(_DWORD *)(a4 + 20) = (((int)(v22 ^ v21) >> 31) & 0xFFFFFFFE) + 1;
    *(_DWORD *)(a4 + 24) = (((HIDWORD(v22) ^ HIDWORD(v21)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v12);
      v17 = DPIServerInfo[15];
      v15 = DPIServerInfo[21];
      v16 = DPIServerInfo[24];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 48LL), 0LL);
    }
    else
    {
      memset(v26, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v26);
      v23 = v26[0];
      v24 = v26[1];
      v15 = DWORD1(v26[1]);
      v25 = v26[2];
      if ( TextMetricsW )
        v16 = v25;
      else
        v16 = 0;
      v17 = v23;
    }
    v19 = v17 * *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a4 + 56) = v16;
    *(_DWORD *)(a4 + 28) = v19;
    *(_DWORD *)(a4 + 16) = 8 * v15;
    if ( gptiCurrent == gptiRit )
      *(_DWORD *)(a4 + 60) = 0;
    else
      *(_DWORD *)(a4 + 60) = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit, v14) + 712) & 4;
    if ( !*(_DWORD *)(a4 + 60) )
      *(_QWORD *)(a4 + 48) = UserTextOutWInternal;
    *(_OWORD *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *(_DWORD *)(a4 + 20) * v9;
      v20 = *(_DWORD *)(a4 + 20) * v10;
      *(_DWORD *)(a4 + 40) = v20;
      *(_DWORD *)(a4 + 8) -= v20;
    }
    else
    {
      *(_DWORD *)(a4 + 40) = 0;
    }
    result = 1LL;
    *(_QWORD *)(a4 + 32) = (unsigned int)(*(_DWORD *)(a4 + 20) * (*(_DWORD *)(a4 + 8) - *(_DWORD *)a4));
  }
  return result;
}
