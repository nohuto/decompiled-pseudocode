/*
 * XREFs of sub_1800477EC @ 0x1800477EC
 * Callers:
 *     sub_18004773C @ 0x18004773C (sub_18004773C.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_1800477B0 @ 0x1800477B0 (sub_1800477B0.c)
 *     sub_180047A28 @ 0x180047A28 (sub_180047A28.c)
 *     sub_180047A60 @ 0x180047A60 (sub_180047A60.c)
 *     sub_180047ACC @ 0x180047ACC (sub_180047ACC.c)
 */

int __fastcall sub_1800477EC(char *BaseOfImage, __int64 a2)
{
  __int64 VirtualAddress; // rax
  PIMAGE_NT_HEADERS v5; // rcx
  bool v6; // cc
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = BaseOfImage;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  LODWORD(VirtualAddress) = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  if ( (int)VirtualAddress >= 0 )
  {
    v5 = OutHeaders;
    *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
    *(_DWORD *)(a2 + 4) = v5->OptionalHeader.CheckSum;
    v6 = v5->OptionalHeader.NumberOfRvaAndSizes <= 2;
    LODWORD(VirtualAddress) = v5->OptionalHeader.SizeOfImage;
    DestinationString.Buffer = (PWCH)(unsigned int)VirtualAddress;
    if ( !v6 )
    {
      VirtualAddress = v5->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v5->OptionalHeader.DataDirectory[2].Size >= 0x10 )
        {
          LODWORD(VirtualAddress) = -(int)sub_180047A28(&DestinationString, &BaseOfImage[VirtualAddress], 16LL);
          v8 = v7 & -(__int64)((_DWORD)VirtualAddress != 0);
          if ( v8 )
          {
            VirtualAddress = sub_1800477B0(
                               (__int64)&DestinationString,
                               v7 & -(__int64)((_DWORD)VirtualAddress != 0),
                               *(unsigned __int16 *)((v7 & -(__int64)((_DWORD)VirtualAddress != 0)) + 0xC));
            if ( VirtualAddress )
            {
              VirtualAddress = sub_180047A60(&DestinationString, VirtualAddress, *(unsigned __int16 *)(v8 + 14), 16LL);
              if ( VirtualAddress )
              {
                v9 = *(unsigned int *)(VirtualAddress + 4);
                LODWORD(v9) = v9 & 0x7FFFFFFF;
                LODWORD(VirtualAddress) = sub_180047A28(&DestinationString, v8 + v9, 16LL);
                if ( (_DWORD)VirtualAddress )
                {
                  VirtualAddress = sub_1800477B0((__int64)&DestinationString, v10, *(unsigned __int16 *)(v11 + 12));
                  if ( VirtualAddress )
                  {
                    VirtualAddress = sub_180047A60(
                                       &DestinationString,
                                       VirtualAddress,
                                       *(unsigned __int16 *)(v12 + 14),
                                       1LL);
                    if ( VirtualAddress )
                    {
                      v13 = *(unsigned int *)(VirtualAddress + 4);
                      LODWORD(v13) = v13 & 0x7FFFFFFF;
                      LODWORD(VirtualAddress) = sub_180047A28(&DestinationString, v8 + v13, 16LL);
                      if ( (_DWORD)VirtualAddress )
                      {
                        VirtualAddress = sub_1800477B0((__int64)&DestinationString, v14, 0);
                        if ( VirtualAddress )
                        {
                          if ( *(int *)(VirtualAddress + 4) >= 0 )
                          {
                            LODWORD(VirtualAddress) = sub_180047A28(
                                                        &DestinationString,
                                                        v8 + *(unsigned int *)(VirtualAddress + 4),
                                                        16LL);
                            if ( (_DWORD)VirtualAddress )
                            {
                              if ( v15[1] >= 0x5C )
                              {
                                LODWORD(VirtualAddress) = -(int)sub_180047A28(
                                                                  &DestinationString,
                                                                  &BaseOfImage[*v15],
                                                                  92LL);
                                v18 = v16 & -(__int64)((_DWORD)VirtualAddress != 0);
                                if ( v18 )
                                {
                                  LODWORD(VirtualAddress) = sub_180047A28(
                                                              &DestinationString,
                                                              v16 & -(__int64)((_DWORD)VirtualAddress != 0),
                                                              v17);
                                  if ( (_DWORD)VirtualAddress )
                                  {
                                    LODWORD(VirtualAddress) = sub_180047A28(&DestinationString, v18 + 6, 32LL);
                                    if ( (_DWORD)VirtualAddress )
                                    {
                                      RtlInitUnicodeString(&DestinationString, L"VS_VERSION_INFO");
                                      LODWORD(VirtualAddress) = sub_180047ACC(v18 + 6, v19, &OutHeaders);
                                      if ( (int)VirtualAddress >= 0 )
                                      {
                                        LODWORD(VirtualAddress) = RtlCompareUnicodeStrings(
                                                                    DestinationString.Buffer,
                                                                    (unsigned __int64)DestinationString.Length >> 1,
                                                                    (PCWCH)(v18 + 6),
                                                                    (unsigned __int64)(unsigned __int16)OutHeaders >> 1,
                                                                    0);
                                        if ( !(_DWORD)VirtualAddress )
                                        {
                                          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v18 + 48);
                                          LODWORD(VirtualAddress) = *(_DWORD *)(v18 + 52);
                                          *(_DWORD *)(a2 + 12) = VirtualAddress;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return VirtualAddress;
}
