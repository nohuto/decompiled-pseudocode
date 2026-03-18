/*
 * XREFs of MdlToPrp @ 0x1C00070DC
 * Callers:
 *     ScsiToNVMe @ 0x1C000A3C4 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x1C000D04C (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C000D704 (ProtocolCommandToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0006F54 (GetSrbScsiData.c)
 *     BuildReadWriteCommand @ 0x1C00076A4 (BuildReadWriteCommand.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall MdlToPrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // rsi
  char *SrbScsiData; // rax
  unsigned __int64 v9; // r9
  char *v10; // r8
  char v11; // cl
  char v12; // al
  char v13; // al
  unsigned __int8 v14; // cl
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned int v19; // esi
  unsigned int v20; // r8d
  _QWORD *v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+44h] [rbp-1Ch]
  int v25; // [rsp+44h] [rbp-1Ch]
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  int v27; // [rsp+98h] [rbp+38h]
  int v28; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp+48h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0LL;
  v26 = 0LL;
  v29 = 0;
  v27 = 0;
  if ( (*(_BYTE *)(v4 + 4253) & 6) != 2 )
    return 0LL;
  result = StorPortExtendedFunction(6LL, a1, a2, &v26);
  if ( !(_DWORD)result )
  {
    result = StorPortExtendedFunction(76LL, a1, a2, v26);
    if ( !(_DWORD)result )
    {
      v7 = 60LL;
      if ( *(_BYTE *)(a2 + 2) != 40 )
        v7 = 16LL;
      if ( *(_DWORD *)(a1 + 100) )
      {
        v28 = 0;
        SrbScsiData = (char *)GetSrbScsiData(a2, &v28, 0LL, 0LL, 0LL);
        v25 = HIDWORD(v9) & v24;
        v10 = SrbScsiData;
        if ( v28 == 16 )
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
          HIDWORD(v23) = v9 & v25;
          BYTE3(v23) = SrbScsiData[2];
          BYTE2(v23) = SrbScsiData[3];
          BYTE1(v23) = SrbScsiData[4];
          v12 = SrbScsiData[5];
        }
        LOBYTE(v23) = v12;
        if ( v23 > v9 )
        {
          v13 = *v10;
          if ( *v10 == 40 || v13 == 42 || v13 == -120 || v13 == -118 )
          {
            v27 = *(_DWORD *)(a1 + 100);
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v14 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v14 = *(_BYTE *)(a2 + 7);
            v15 = v14;
            v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v14 + 1224) + 52LL);
            *(_DWORD *)(v7 + a2) -= ~(v16 - 1) & (v16 + *(_DWORD *)(a1 + 100) - 1);
            if ( (unsigned int)v15 < *(_DWORD *)(a1 + 156) )
            {
              v17 = *(_QWORD *)(a1 + 8 * v15 + 1224);
              if ( v17 )
                LODWORD(v9) = *(_DWORD *)(v17 + 16);
            }
            BuildReadWriteCommand(a1, a2, (_DWORD)v10, v28, v4 + 4096, v9);
          }
        }
      }
      v18 = v27 + *(_DWORD *)(v4 + 4216);
      v19 = (*(_DWORD *)(v7 + a2) >> 12) + (((v18 & 0xFFF) + (*(_DWORD *)(v7 + a2) & 0xFFF) + 4095) >> 12);
      if ( v18 >= 0x1000 )
      {
        v5 = v18 >> 12;
        v18 -= v18 >> 12 << 12;
      }
      if ( !v19 || (unsigned int)v5 + v19 > v29 )
        return 3238002689LL;
      *(_QWORD *)(v4 + 4120) = v18 + (*(_QWORD *)(8 * v5) << 12);
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)(8LL * (unsigned int)(v5 + 1)) << 12;
          memset((void *)v4, 0, 0x1000uLL);
          *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
        }
        else
        {
          memset((void *)v4, 0, 0x1000uLL);
          v20 = 1;
          v21 = (_QWORD *)v4;
          do
          {
            v22 = v20 + (unsigned int)v5;
            ++v20;
            *v21++ = *(_QWORD *)(8 * v22) << 12;
          }
          while ( v20 < v19 );
          *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v28);
        }
      }
      return 0LL;
    }
  }
  return result;
}
