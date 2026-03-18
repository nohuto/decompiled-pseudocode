/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C0009404
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C00095B4 (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  size_t v8; // rax
  unsigned int v9; // eax
  char v10; // al

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( v6 && (v8 = *(unsigned int *)(v7 + a2), (unsigned int)v8 >= 0xC) )
  {
    if ( (v8 & 3) != 0 )
    {
      memset(v6, 0, v8);
    }
    else
    {
      v9 = (unsigned int)v8 >> 2;
      if ( v9 )
        memset(v6, 0, 4LL * v9);
    }
    *v6 = 134217775;
    *((_WORD *)v6 + 2) = 0;
    v10 = *((_BYTE *)v6 + 6) & 0x40;
    *(_DWORD *)((char *)v6 + 7) = -16777212;
    *((_BYTE *)v6 + 6) = v10 | 0x23;
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(v4 + 3) = 4;
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
