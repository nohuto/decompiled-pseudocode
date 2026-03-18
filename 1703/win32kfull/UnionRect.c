/*
 * XREFs of UnionRect @ 0x1C0020BD4
 * Callers:
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     _ScrollDC @ 0x1C0067304 (_ScrollDC.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F6DB8 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01C1FF0 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  BOOL v4; // ecx
  BOOL v5; // eax
  _DWORD *v6; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  __int128 v11; // xmm0

  v4 = *a2 >= a2[2] || a2[1] >= a2[3];
  v5 = *a3 >= a3[2] || a3[1] >= a3[3];
  if ( !v4 )
  {
    if ( !v5 )
    {
      v6 = a3;
      if ( *a2 < *a3 )
        v6 = a2;
      *a1 = *v6;
      v7 = a3[1];
      if ( a2[1] < v7 )
        v7 = a2[1];
      a1[1] = v7;
      v8 = a3[2];
      if ( a2[2] > v8 )
        v8 = a2[2];
      a1[2] = v8;
      v9 = a3[3];
      if ( a2[3] > v9 )
        v9 = a2[3];
      a1[3] = v9;
      return 1LL;
    }
    v11 = *(_OWORD *)a2;
LABEL_22:
    *(_OWORD *)a1 = v11;
    return 1LL;
  }
  if ( !v5 )
  {
    v11 = *(_OWORD *)a3;
    goto LABEL_22;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
