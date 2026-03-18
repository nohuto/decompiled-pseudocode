/*
 * XREFs of LogSenseTemperature @ 0x1C0008908
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C0008CBC (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C0002610 (NVMeAllocateDmaBuffer.c)
 *     SrbAssignQueueId @ 0x1C000718C (SrbAssignQueueId.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall LogSenseTemperature(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  bool v5; // zf
  _DWORD *v7; // rbx
  unsigned int *v8; // rax
  unsigned __int64 v9; // rsi
  char v10; // cl
  char v11; // al
  char v12; // al
  unsigned __int16 v13; // ax
  __int64 v14; // rsi
  __int64 PhysicalAddress; // rax
  __int64 v16; // rbx
  int v17; // eax
  char v19; // [rsp+58h] [rbp+10h] BYREF
  void *v20; // [rsp+60h] [rbp+18h]

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 2) == 40;
  v20 = 0LL;
  if ( v5 )
  {
    v7 = *(_DWORD **)(a2 + 64);
    v8 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v7 = *(_DWORD **)(a2 + 24);
    v8 = (unsigned int *)(a2 + 16);
  }
  if ( v7 && (v9 = *v8, v9 >= 0xA) )
  {
    if ( (v9 & 3) != 0 )
    {
      memset(v7, 0, *v8);
    }
    else if ( (unsigned int)v9 >> 2 )
    {
      memset(v7, 0, 4LL * ((unsigned int)v9 >> 2));
    }
    *v7 = 201326605;
    v10 = -1;
    *((_WORD *)v7 + 2) = 0;
    v11 = *((_BYTE *)v7 + 6) & 0x40;
    *((_BYTE *)v7 + 7) = 2;
    *((_BYTE *)v7 + 9) = -1;
    *((_BYTE *)v7 + 6) = v11 | 1;
    if ( v9 >= 0x10 )
    {
      *((_WORD *)v7 + 5) = 256;
      v12 = v7[3] & 0x40;
      *((_BYTE *)v7 + 13) = 2;
      *((_BYTE *)v7 + 12) = v12 | 1;
      v13 = *(_WORD *)(a1 + 156);
      if ( v13 != 0xFFFF )
      {
        if ( v13 <= 0x20Fu )
        {
          if ( v13 <= 0x111u )
            v10 = 0;
          else
            v10 = v13 - 17;
        }
        else
        {
          v10 = -2;
        }
      }
      *((_BYTE *)v7 + 15) = v10;
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    if ( v20 )
    {
      if ( *(_BYTE *)(v4 + 2) == 40 )
        v14 = *(_QWORD *)(v4 + 104);
      else
        v14 = *(_QWORD *)(v4 + 56);
      if ( (v14 & 0xFFF) != 0 )
        v14 = v14 - (v14 & 0xFFF) + 4096;
      memset(v20, 0, 0x200uLL);
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v20, &v19);
      *(_BYTE *)(v14 + 4245) |= 3u;
      v16 = PhysicalAddress;
      SrbAssignQueueId(a1, v4);
      *(_DWORD *)(v14 + 4100) = -1;
      *(_BYTE *)(v14 + 4136) = 2;
      v17 = *(_DWORD *)(v14 + 4136);
      *(_BYTE *)(v14 + 4096) = 2;
      *(_QWORD *)(v14 + 4120) = v16;
      *(_DWORD *)(v14 + 4136) = v17 & 0xF000FFFF | 0x7F0000;
      *(_BYTE *)(v14 + 4245) |= 4u;
      *(_QWORD *)(v14 + 4216) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(v14 + 4200) = v20;
      *(_DWORD *)(v14 + 4232) = 512;
      *(_QWORD *)(v14 + 4224) = 13LL;
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 4;
    }
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
