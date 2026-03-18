/*
 * XREFs of MdlToPrp @ 0x1C0006A1C
 * Callers:
 *     ScsiToNVMe @ 0x1C0009970 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000C478 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000CAE0 (ProtocolCommandToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006898 (GetSrbScsiData.c)
 *     BuildReadWriteCommand @ 0x1C0006F74 (BuildReadWriteCommand.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  _DWORD *v7; // r15
  char *SrbScsiData; // rax
  char *v9; // r8
  int v10; // r9d
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // edi
  _QWORD *v19; // r9
  unsigned int i; // r8d
  __int64 v21; // rcx
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
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
  v22 = 0LL;
  v26 = 0;
  v24 = 0;
  if ( (*(_BYTE *)(v4 + 4245) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v22);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v22);
    if ( !(_DWORD)result )
    {
      v7 = (_DWORD *)(a2 + 60);
      if ( *(_BYTE *)(a2 + 2) != 40 )
        v7 = (_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 100) )
      {
        v25 = 0;
        SrbScsiData = (char *)GetSrbScsiData(a2, &v25, 0LL, 0LL, 0LL);
        v23 = 0LL;
        v9 = SrbScsiData;
        v10 = v25;
        if ( v25 == 16 )
        {
          HIBYTE(v23) = SrbScsiData[2];
          BYTE6(v23) = SrbScsiData[3];
          BYTE5(v23) = SrbScsiData[4];
          v11 = SrbScsiData[5];
          BYTE3(v23) = SrbScsiData[6];
          BYTE2(v23) = SrbScsiData[7];
          BYTE1(v23) = SrbScsiData[8];
          v12 = SrbScsiData[9];
          BYTE4(v23) = v11;
        }
        else
        {
          v13 = SrbScsiData[2];
          HIDWORD(v23) = 0;
          BYTE3(v23) = v13;
          BYTE2(v23) = v9[3];
          BYTE1(v23) = v9[4];
          v12 = v9[5];
        }
        LOBYTE(v23) = v12;
        v14 = *v9;
        if ( v23 )
        {
          if ( v14 == 40 || v14 == 42 || v14 == -120 || v14 == -118 )
          {
            v24 = *(_DWORD *)(a1 + 100);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v15 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v15 = *(unsigned __int8 *)(a2 + 7);
            v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v15 + 1184) + 52LL);
            *v7 -= ~(v16 - 1) & (v16 + *(_DWORD *)(a1 + 100) - 1);
            BuildReadWriteCommand(a1, a2, (_DWORD)v9, v10, v4 + 4096);
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
