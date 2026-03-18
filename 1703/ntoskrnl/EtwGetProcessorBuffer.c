/*
 * XREFs of EtwGetProcessorBuffer @ 0x140255680
 * Callers:
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402006D8 (KiSaveCurrentEtwTraceBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwGetProcessorBuffer(unsigned int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int *v8; // rcx
  unsigned int v9; // eax

  v3 = 0;
  if ( !EtwpInitialized )
    return 3221225473LL;
  if ( a1 >= 0x40 )
  {
    v6 = 1LL;
  }
  else
  {
    _mm_lfence();
    v6 = *(_QWORD *)(EtwpHostSiloState + 8LL * a1 + 920);
  }
  if ( (v6 & 1) != 0 )
  {
    return (unsigned int)-1073741816;
  }
  else if ( *(_DWORD *)(v6 + 300) == 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 12) & 0x10000000) != 0 )
      v7 = *(_QWORD *)(v6 + 128);
    else
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 944) + 5104LL) + 8 * (a1 + ((unsigned __int64)a2 << 7)));
    v8 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v8 )
    {
      *(_DWORD *)(a3 + 8) = *v8;
      v9 = v8[2];
      *(_QWORD *)a3 = v8;
      if ( v9 <= *v8 )
        *(_DWORD *)(a3 + 12) = v8[2];
      else
        *(_DWORD *)(a3 + 12) = v8[1];
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v3;
}
