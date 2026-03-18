/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C000D250
 * Callers:
 *     NVMeHwBuildIo @ 0x1C00021D0 (NVMeHwBuildIo.c)
 * Callees:
 *     MdlToPrp @ 0x1C0006E34 (MdlToPrp.c)
 *     SglToPrp @ 0x1C0007118 (SglToPrp.c)
 *     FillClippedSGL @ 0x1C00072D0 (FillClippedSGL.c)
 *     SrbAssignQueueId @ 0x1C00075C0 (SrbAssignQueueId.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C000CE28 (NVMeValidateProtocolCommandRequest.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  char v4; // cl
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ecx
  unsigned int v18; // eax

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
  v9 = NVMeValidateProtocolCommandRequest((__int64)a1, a2);
  if ( !v9 )
  {
    if ( *(_DWORD *)(v7 + 36) )
    {
      v10 = *(_DWORD *)(v7 + 52);
    }
    else
    {
      if ( !*(_DWORD *)(v7 + 32) )
        goto LABEL_26;
      v10 = *(_DWORD *)(v7 + 48);
    }
    v6 = v7 + v10;
    if ( v6 )
    {
      if ( (a1[13] & 8) == 0 )
      {
        v11 = a1[36];
        if ( v11 > 0x200000 )
          v11 = 0x200000;
        v12 = a1[7];
        if ( v12 && v11 >= v12 )
          v11 = a1[7];
        v13 = a1[12];
        if ( v13 && v13 < v11 )
          v11 = a1[12];
        StorPortExtendedFunction(0LL, a1, 24 * (((v11 - 1) >> 12) + 2) + 16, 1701672526LL);
        *(_DWORD *)(v7 + 16) = 7;
        *(_BYTE *)(a2 + 3) = 21;
        v9 = -1056964607;
        goto LABEL_36;
      }
      *(_DWORD *)(v5 + 4208) = v10;
    }
LABEL_26:
    if ( *(int *)(v7 + 12) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v15 = *(unsigned __int8 *)(a2 + 7);
      if ( (unsigned int)v15 < a1[37] && (v16 = *(_QWORD *)&a1[2 * v15 + 296]) != 0 )
        v14 = *(_DWORD *)(v16 + 16);
      else
        v14 = 0;
    }
    else
    {
      v14 = *(_DWORD *)(v7 + 84);
    }
    *(_BYTE *)(v5 + 4245) = (v6 != 0 ? 2 : 0) | *(_BYTE *)(v5 + 4245) & 0xFC | (*(_DWORD *)(v7 + 56) == 1);
    SrbAssignQueueId((__int64)a1, a2);
    *(_BYTE *)(v5 + 4096) = *(_BYTE *)(v7 + 80);
    v17 = *(_DWORD *)(v5 + 4096) ^ *(_DWORD *)(v7 + 80);
    *(_DWORD *)(v5 + 4100) = v14;
    *(_DWORD *)(v5 + 4096) ^= v17 & 0x300;
    *(_DWORD *)(v5 + 4136) = *(_DWORD *)(v7 + 120);
    *(_DWORD *)(v5 + 4140) = *(_DWORD *)(v7 + 124);
    *(_DWORD *)(v5 + 4144) = *(_DWORD *)(v7 + 128);
    *(_DWORD *)(v5 + 4148) = *(_DWORD *)(v7 + 132);
    *(_DWORD *)(v5 + 4152) = *(_DWORD *)(v7 + 136);
    *(_DWORD *)(v5 + 4156) = *(_DWORD *)(v7 + 140);
    *(_QWORD *)(v5 + 4216) = ProtocolCommandCompletion;
  }
LABEL_36:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    if ( (a1[13] & 8) != 0 )
      v18 = MdlToPrp((__int64)a1, a2);
    else
      v18 = SglToPrp((__int64)a1, a2, v8);
    v9 = v18;
    if ( v18 )
    {
      ++a1[818];
      *(_DWORD *)(v7 + 16) = 2;
      *(_BYTE *)(a2 + 3) = 4;
    }
    else
    {
      *(_DWORD *)(v7 + 16) = 0;
    }
  }
  return v9;
}
