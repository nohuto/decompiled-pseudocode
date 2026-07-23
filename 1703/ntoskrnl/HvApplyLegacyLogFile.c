/*
 * XREFs of HvApplyLegacyLogFile @ 0x140678004
 * Callers:
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14006E280 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvpIsMetadataArrayCoherent @ 0x1401E1C60 (HvpIsMetadataArrayCoherent.c)
 *     HvpGenerateLogMetadata @ 0x1404B72B0 (HvpGenerateLogMetadata.c)
 *     HvpRecoverDataReadRoutine @ 0x140677748 (HvpRecoverDataReadRoutine.c)
 *     HvpApplyLogEntry @ 0x1406786E0 (HvpApplyLogEntry.c)
 *     HvpUpdateRecoveryVector @ 0x140678ACC (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvApplyLegacyLogFile(ULONG_PTR BugCheckParameter2, __int64 a2, char **a3, __int64 a4)
{
  __int64 v7; // rax
  int v8; // r13d
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // r14d
  int v16; // [rsp+20h] [rbp-50h]
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v18[12]; // [rsp+40h] [rbp-30h] BYREF
  char *v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  v20 = a2;
  memset(v18, 0, 0x28uLL);
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  LODWORD(v20) = 0;
  v8 = *(_DWORD *)(v7 + 40) >> 12;
  v9 = HvpRecoverDataReadRoutine(BugCheckParameter2, a3, 0x200u, v8 + 4, &v19);
  if ( v9 >= 0 )
  {
    if ( *(_DWORD *)v19 == 1414678852 )
    {
      BitMapHeader.SizeOfBitMap = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) >> 9;
      BitMapHeader.Buffer = (unsigned int *)(v19 + 4);
      v9 = RtlNumberOfSetBits(&BitMapHeader);
      if ( v9 )
      {
        v10 = v9 << 9;
        HvpGenerateLogMetadata(&BitMapHeader, 0LL, (unsigned int *)&v20);
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                (unsigned int)(8 * v20),
                0LL,
                859000131LL);
        v12 = v11;
        if ( v11 )
        {
          HvpGenerateLogMetadata(&BitMapHeader, v11, (unsigned int *)&v20);
          v13 = *(_QWORD *)(BugCheckParameter2 + 64);
          v14 = v20;
          v18[0] = 1162638920;
          v18[5] = v20;
          v18[4] = *(_DWORD *)(v13 + 40);
          v18[1] = v10 + 8 * (v20 + 5);
          if ( HvpIsMetadataArrayCoherent(v18, v12, v20) )
          {
            v9 = HvpRecoverDataReadRoutine(BugCheckParameter2, a3, (v8 + 1027) & 0xFFFFFE00, v10, &v19);
            if ( v9 >= 0 )
            {
              v9 = HvpApplyLogEntry(BugCheckParameter2, v16, (__int64)&v20);
              if ( v9 >= 0 )
              {
                if ( a4 )
                  HvpUpdateRecoveryVector(v12, v14, a4);
                v9 = 1073741833;
              }
            }
          }
          else
          {
            v9 = -1073741492;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v12, 8 * v14);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
    else if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
    {
      v9 = 1073741833;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v9;
}
