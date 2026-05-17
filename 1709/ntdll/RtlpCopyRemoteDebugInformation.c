/*
 * XREFs of RtlpCopyRemoteDebugInformation @ 0x1800D8E54
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180017914 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpCopyRemoteDebugInformation(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int128 v4; // [rsp+70h] [rbp-39h]
  __int128 v5; // [rsp+90h] [rbp-19h]
  __int128 v6; // [rsp+A0h] [rbp-9h]
  __int128 v7; // [rsp+C0h] [rbp+17h]
  __int128 v8; // [rsp+D0h] [rbp+27h]
  __int64 v9; // [rsp+110h] [rbp+67h]
  __int64 v10; // [rsp+118h] [rbp+6Fh]

  v10 = a1 + *(_QWORD *)(a1 + 88);
  v4 = *(_OWORD *)(v10 + 64);
  v5 = *(_OWORD *)(v10 + 96);
  v6 = *(_OWORD *)(v10 + 112);
  v7 = *(_OWORD *)(v10 + 144);
  v8 = *(_OWORD *)(v10 + 160);
  v9 = *(_QWORD *)(v10 + 72);
  if ( *((_QWORD *)&v4 + 1) > *(_QWORD *)(a1 + 88) || *((_QWORD *)&v4 + 1) < 0xD0uLL )
    return 3221225473LL;
  result = ZwAllocateVirtualMemory();
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 208LL;
    if ( RtlpCommitQueryDebugInfo((_QWORD *)a1, (int)v9 - 208) )
    {
      memmove((void *)(a1 + 208), (const void *)(v10 + 208), (unsigned int)(v9 - 208));
      v3 = *(_DWORD *)(a1 + 64);
      if ( (v3 & 0x21C) != 0 )
      {
        *(_QWORD *)(a1 + 112) = v6;
        *(_QWORD *)(a1 + 152) = *((_QWORD *)&v7 + 1);
      }
      if ( (v3 & 0x41) != 0 )
        *(_QWORD *)(a1 + 96) = v5;
      if ( (v3 & 0x20) != 0 )
        *(_QWORD *)(a1 + 120) = *((_QWORD *)&v6 + 1);
      if ( (v3 & 2) != 0 )
        *(_QWORD *)(a1 + 104) = *((_QWORD *)&v5 + 1);
      if ( (v3 & 0x80u) != 0 )
        *(_QWORD *)(a1 + 144) = v7;
      if ( (v3 & 0xC00) != 0 )
        *(_QWORD *)(a1 + 168) = *((_QWORD *)&v8 + 1);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
