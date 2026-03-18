/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C000D704
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002120 (NVMeHwBuildIo.c)
 * Callees:
 *     MdlToPrp @ 0x1C00070DC (MdlToPrp.c)
 *     SglToPrp @ 0x1C00073DC (SglToPrp.c)
 *     FillClippedSGL @ 0x1C00075C4 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C00078B4 (SrbAssignQueueId.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C000D2D4 (NVMeValidateProtocolCommandRequest.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  char v4; // cl
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // r15d
  unsigned __int8 v14; // cl
  __int64 v15; // rcx
  int v16; // ecx
  unsigned int v17; // eax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 0LL;
  if ( v4 == 40 )
    v7 = *(_QWORD *)(a2 + 64);
  else
    v7 = *(_QWORD *)(a2 + 24);
  v8 = NVMeValidateProtocolCommandRequest((__int64)a1, a2);
  if ( !v8 )
  {
    if ( *(_DWORD *)(v7 + 36) )
    {
      v9 = *(_DWORD *)(v7 + 52);
    }
    else
    {
      if ( !*(_DWORD *)(v7 + 32) )
        goto LABEL_26;
      v9 = *(_DWORD *)(v7 + 48);
    }
    v6 = v7 + v9;
    if ( v6 )
    {
      if ( (a1[13] & 8) == 0 )
      {
        v10 = a1[38];
        if ( v10 > 0x200000 )
          v10 = 0x200000;
        v11 = a1[7];
        if ( v11 && v10 >= v11 )
          v10 = a1[7];
        v12 = a1[12];
        if ( v12 && v12 < v10 )
          v10 = a1[12];
        StorPortExtendedFunction(0LL, a1, 24 * (((v10 - 1) >> 12) + 2) + 16, 1701672526LL);
        *(_DWORD *)(v7 + 16) = 7;
        *(_BYTE *)(a2 + 3) = 21;
        v8 = -1056964607;
        goto LABEL_36;
      }
      *(_DWORD *)(v5 + 4216) = v9;
    }
LABEL_26:
    if ( *(int *)(v7 + 12) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v14 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v14 = *(_BYTE *)(a2 + 7);
      if ( (unsigned int)v14 < a1[39] && (v15 = *(_QWORD *)&a1[2 * v14 + 306]) != 0 )
        v13 = *(_DWORD *)(v15 + 16);
      else
        v13 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(v7 + 84);
    }
    *(_BYTE *)(v5 + 4253) = (v6 != 0 ? 2 : 0) | *(_BYTE *)(v5 + 4253) & 0xFC | (*(_DWORD *)(v7 + 56) == 1);
    SrbAssignQueueId((__int64)a1, a2);
    *(_BYTE *)(v5 + 4096) = *(_BYTE *)(v7 + 80);
    v16 = *(_DWORD *)(v5 + 4096) ^ *(_DWORD *)(v7 + 80);
    *(_DWORD *)(v5 + 4100) = v13;
    *(_DWORD *)(v5 + 4096) ^= v16 & 0x300;
    *(_DWORD *)(v5 + 4136) = *(_DWORD *)(v7 + 120);
    *(_DWORD *)(v5 + 4140) = *(_DWORD *)(v7 + 124);
    *(_DWORD *)(v5 + 4144) = *(_DWORD *)(v7 + 128);
    *(_DWORD *)(v5 + 4148) = *(_DWORD *)(v7 + 132);
    *(_DWORD *)(v5 + 4152) = *(_DWORD *)(v7 + 136);
    *(_DWORD *)(v5 + 4156) = *(_DWORD *)(v7 + 140);
    *(_QWORD *)(v5 + 4224) = ProtocolCommandCompletion;
  }
LABEL_36:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (a1[13] & 8) != 0 )
      v17 = MdlToPrp((__int64)a1, a2);
    else
      v17 = SglToPrp((__int64)a1, a2);
    v8 = v17;
    if ( v17 )
    {
      ++a1[830];
      *(_DWORD *)(v7 + 16) = 2;
      *(_BYTE *)(a2 + 3) = 4;
    }
    else
    {
      *(_DWORD *)(v7 + 16) = 0;
    }
  }
  return v8;
}
