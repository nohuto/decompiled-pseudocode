/*
 * XREFs of EtwpCovSampCaptureKernelStack @ 0x1402B4EE0
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1402B5344 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
 *     EtwpCovSampCaptureBufferOptimizeIP @ 0x1402B4944 (EtwpCovSampCaptureBufferOptimizeIP.c)
 */

__int64 __fastcall EtwpCovSampCaptureKernelStack(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // dx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // ebp
  ULONG v12; // eax
  char *v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( !KeQueryCurrentStackInformation(&v15, &v14, &v16) )
    return (unsigned int)-1073741637;
  if ( v15 <= 7 && (v5 = 161, _bittest(&v5, v15)) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v6 = *(_WORD *)(a1 + 62);
    v7 = *(_WORD *)(a1 + 60);
    v8 = 0;
    v9 = a2 >> 28;
    v10 = a2 & 2;
    v11 = v9;
    if ( v10 )
      v11 = 0;
    else
      v8 = v9;
    if ( v7 < v6 )
    {
      return (unsigned int)-1073741595;
    }
    else
    {
      v12 = RtlWalkFrameChain((PVOID *)(a1 + 8 * (v6 + 8LL)), v8 + v7 - v6, (v8 << 8) | (v10 != 0 ? 2 : 0));
      if ( v12 > v11 )
      {
        *(_DWORD *)(a1 + 56) |= 1u;
        *(_WORD *)(a1 + 62) += v12 - v11;
        EtwpCovSampCaptureBufferOptimizeIP(a1);
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
  }
  return v4;
}
