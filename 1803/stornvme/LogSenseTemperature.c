/*
 * XREFs of LogSenseTemperature @ 0x1C00091F4
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C00095B4 (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002820 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // esi
  char v9; // cl
  char v10; // al
  char v11; // al
  unsigned __int16 v12; // ax

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
  if ( v6 && (v8 = *(_DWORD *)(a2 + v7), v8 >= 0xA) )
  {
    if ( (v8 & 3) != 0 )
    {
      memset(v6, 0, *(unsigned int *)(a2 + v7));
    }
    else if ( v8 >> 2 )
    {
      memset(v6, 0, 4LL * (v8 >> 2));
    }
    *v6 = 201326605;
    v9 = -1;
    *((_WORD *)v6 + 2) = 0;
    v10 = *((_BYTE *)v6 + 6) & 0x40;
    *((_BYTE *)v6 + 7) = 2;
    *((_BYTE *)v6 + 9) = -1;
    *((_BYTE *)v6 + 6) = v10 | 1;
    if ( v8 >= 0x10 )
    {
      *((_WORD *)v6 + 5) = 256;
      v11 = v6[3] & 0x40;
      *((_BYTE *)v6 + 13) = 2;
      *((_BYTE *)v6 + 12) = v11 | 1;
      v12 = *(_WORD *)(a1 + 164);
      if ( v12 != 0xFFFF )
      {
        if ( v12 <= 0x20Fu )
        {
          if ( v12 <= 0x111u )
            v9 = 0;
          else
            v9 = v12 - 17;
        }
        else
        {
          v9 = -2;
        }
      }
      *((_BYTE *)v6 + 15) = v9;
    }
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
