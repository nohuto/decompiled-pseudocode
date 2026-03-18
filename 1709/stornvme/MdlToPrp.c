/*
 * XREFs of MdlToPrp @ 0x1C0006E34
 * Callers:
 *     ScsiToNVMe @ 0x1C0009FE4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D250 (ProtocolCommandToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006CB0 (GetSrbScsiData.c)
 *     BuildReadWriteCommand @ 0x1C00073B0 (BuildReadWriteCommand.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  _DWORD *v7; // r15
  char *SrbScsiData; // rax
  int v9; // r9d
  char *v10; // r8
  char v11; // cl
  char v12; // al
  char v13; // al
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // edi
  _QWORD *v19; // r9
  unsigned int i; // r8d
  __int64 v21; // rcx
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+98h] [rbp+38h]
  int v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+48h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v24 = 0;
  if ( (*(_BYTE *)(v4 + 4245) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v23);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v23);
    if ( !(_DWORD)result )
    {
      v7 = (_DWORD *)(a2 + 60);
      if ( *(_BYTE *)(a2 + 2) != 40 )
        v7 = (_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 100) )
      {
        v25 = 0;
        SrbScsiData = (char *)GetSrbScsiData(a2, &v25, 0LL, 0LL, 0LL);
        v10 = SrbScsiData;
        if ( v25 == 16 )
        {
          HIBYTE(v22) = SrbScsiData[2];
          BYTE6(v22) = SrbScsiData[3];
          BYTE5(v22) = SrbScsiData[4];
          v11 = SrbScsiData[5];
          BYTE3(v22) = SrbScsiData[6];
          BYTE2(v22) = SrbScsiData[7];
          BYTE1(v22) = SrbScsiData[8];
          v12 = SrbScsiData[9];
          BYTE4(v22) = v11;
        }
        else
        {
          HIBYTE(v22) = 0;
          *(_DWORD *)((char *)&v22 + 3) = (unsigned __int8)SrbScsiData[2];
          BYTE2(v22) = SrbScsiData[3];
          BYTE1(v22) = SrbScsiData[4];
          v12 = SrbScsiData[5];
        }
        LOBYTE(v22) = v12;
        if ( v22 )
        {
          v13 = *v10;
          if ( *v10 == 40 || v13 == 42 || v13 == -120 || v13 == -118 )
          {
            v24 = *(_DWORD *)(a1 + 100);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v14 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v14 = *(unsigned __int8 *)(a2 + 7);
            v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v14 + 1184) + 52LL);
            *v7 -= ~(v15 - 1) & (v15 + *(_DWORD *)(a1 + 100) - 1);
            if ( (unsigned int)v14 < *(_DWORD *)(a1 + 148) )
            {
              v16 = *(_QWORD *)(a1 + 8 * v14 + 1184);
              if ( v16 )
                v9 = *(_DWORD *)(v16 + 16);
            }
            BuildReadWriteCommand(a1, a2, (_DWORD)v10, v25, v4 + 4096, v9);
          }
        }
      }
      v17 = *(_DWORD *)(v4 + 4208) + v24;
      v18 = (*v7 >> 12) + (((*v7 & 0xFFF) + (v17 & 0xFFF) + 4095) >> 12);
      if ( v17 >= 0x1000 )
      {
        v5 = v17 >> 12;
        v17 += -4096 * v5;
      }
      if ( !v18 || (unsigned int)v5 + v18 > v26 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v17 + (*(_QWORD *)(8 * v5) << 12);
      if ( v18 != 1 )
      {
        if ( v18 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(8LL * (unsigned int)(v5 + 1)) << 12;
        }
        else
        {
          memset((void *)v4, 0, 0x1000uLL);
          v19 = (_QWORD *)v4;
          for ( i = 1; i < v18; ++i )
          {
            v21 = i + (unsigned int)v5;
            *v19++ = *(_QWORD *)(8 * v21) << 12;
          }
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, 0LL, v4, &v25);
        }
      }
      return 0LL;
    }
  }
  return result;
}
