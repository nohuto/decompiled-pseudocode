/*
 * XREFs of HvpApplyLegacyLogFile @ 0x140705F60
 * Callers:
 *     HvApplyLogFile @ 0x140705C50 (HvApplyLogFile.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14008B0F0 (RtlNumberOfSetBits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvpGenerateLogMetadata @ 0x140498FD4 (HvpGenerateLogMetadata.c)
 *     HvpApplyLogEntryDataToFileBackedHive @ 0x1406F82E8 (HvpApplyLogEntryDataToFileBackedHive.c)
 *     HvpRecoverDataReadRoutine @ 0x1406F8D10 (HvpRecoverDataReadRoutine.c)
 *     HvpIsMetadataArrayCoherent @ 0x1407062D4 (HvpIsMetadataArrayCoherent.c)
 *     HvpUpdateRecoveryVector @ 0x140706770 (HvpUpdateRecoveryVector.c)
 */

__int64 __fastcall HvpApplyLegacyLogFile(
        _DWORD *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        ULONG_PTR a5,
        __int64 (__fastcall *a6)(_QWORD, _QWORD, __int64),
        void (__fastcall *a7)(__int64, _QWORD),
        __int64 a8)
{
  unsigned int v10; // r13d
  unsigned int v11; // r13d
  int v12; // ebx
  ULONG v13; // r14d
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r15d
  unsigned int v19; // [rsp+30h] [rbp-69h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-61h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v23; // [rsp+58h] [rbp-41h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-39h]
  void (__fastcall *v25)(__int64, _QWORD); // [rsp+68h] [rbp-31h]
  _DWORD v26[10]; // [rsp+70h] [rbp-29h] BYREF

  BugCheckParameter2 = a5;
  v23 = a3;
  v25 = a7;
  memset(v26, 0, sizeof(v26));
  v10 = a1[10];
  v19 = 0;
  v11 = v10 >> 12;
  v12 = HvpRecoverDataReadRoutine(a3, 0x200u, v11 + 4, &v20);
  if ( v12 >= 0 )
  {
    if ( *v20 == 1414678852 )
    {
      BitMapHeader.SizeOfBitMap = a1[10] >> 9;
      BitMapHeader.Buffer = v20 + 1;
      v13 = RtlNumberOfSetBits(&BitMapHeader);
      if ( v13 )
      {
        v14 = v13 << 9;
        HvpGenerateLogMetadata(&BitMapHeader, 0LL, &v19);
        v15 = a6(8 * v19, 0LL, 859000131LL);
        v16 = v15;
        if ( v15 )
        {
          HvpGenerateLogMetadata(&BitMapHeader, v15, &v19);
          v17 = v19;
          v26[4] = a1[10];
          v26[0] = 1162638920;
          v26[5] = v19;
          v26[1] = v14 + 8 * (v19 + 5);
          if ( (unsigned __int8)HvpIsMetadataArrayCoherent(v26, v16, v19) )
          {
            v12 = HvpRecoverDataReadRoutine(v23, (v11 + 1027) & 0xFFFFFE00, v14, &v20);
            if ( v12 >= 0 )
            {
              v12 = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, (__int64)v26, v16, (__int64)v20, v14, &v22);
              if ( v12 >= 0 )
              {
                if ( (v26[2] & 1) != 0 )
                  a1[36] |= 1u;
                if ( a8 )
                  HvpUpdateRecoveryVector(v16, v17, a8);
                v12 = 1073741833;
              }
            }
          }
          else
          {
            v12 = -1073741492;
          }
          v25(v16, 8 * v17);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
    {
      a1[1022] |= 4u;
      return 1073741833;
    }
    else
    {
      return (unsigned int)-1073741492;
    }
  }
  return (unsigned int)v12;
}
