/*
 * XREFs of CmpAddProcessorConfigurationEntry @ 0x1405C0234
 * Callers:
 *     CmInitializeProcessor @ 0x1406947A8 (CmInitializeProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 *     strcpy_s @ 0x1401647F0 (strcpy_s.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     memset @ 0x140192F40 (memset.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x1405C0658 (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmpAddProcessorConfigurationEntry(__int64 a1, int a2, int a3)
{
  char v6; // al
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  void *v13; // rsi
  NTSTATUS v14; // edi
  const CHAR *v16; // r15
  _DWORD *v21; // r8
  unsigned int v22; // r9d
  __int64 v28; // rcx
  _QWORD *v29; // r14
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B0h] BYREF
  _STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[9]; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Handle; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v35[64]; // [rsp+D0h] [rbp-30h] BYREF
  char DstBuf[128]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&SourceString.Length = -1LL;
  memset(v33, 0, sizeof(v33));
  WORD2(v33[5]) = *(unsigned __int8 *)(a1 + 208);
  HIWORD(v33[5]) = *(unsigned __int8 *)(a1 + 209);
  v33[7] = DstBuf;
  v6 = *(_BYTE *)(a1 + 141);
  v33[3] = 0x100000001LL;
  LODWORD(v33[5]) = a2;
  switch ( v6 )
  {
    case 1:
      v7 = "AMD64 Family %u Model %u Stepping %u";
      break;
    case 2:
      v7 = "Intel64 Family %u Model %u Stepping %u";
      break;
    case 3:
      v7 = "VIA64 Family %u Model %u Stepping %u";
      break;
    default:
      KeBugCheck(0x5Du);
  }
  sprintf_s(
    DstBuf,
    0x80uLL,
    v7,
    (unsigned int)*(char *)(a1 + 64),
    HIBYTE(*(unsigned __int16 *)(a1 + 66)),
    (unsigned __int8)*(_WORD *)(a1 + 66));
  v8 = -1LL;
  do
    ++v8;
  while ( DstBuf[v8] );
  HIDWORD(v33[6]) = v8 + 1;
  result = CmpInitializeRegistryNode(
             (unsigned int)v33,
             a3,
             (unsigned int)&SourceString,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
  if ( (int)result >= 0 )
  {
    memset(v33, 0, sizeof(v33));
    v10 = *(_BYTE *)(a1 + 64) == 3;
    WORD2(v33[5]) = *(unsigned __int8 *)(a1 + 208);
    HIWORD(v33[5]) = *(unsigned __int8 *)(a1 + 209);
    v33[7] = DstBuf;
    v33[3] = 0x200000001LL;
    LODWORD(v33[5]) = a2;
    if ( v10 )
      strcpy_s(DstBuf, 0x80uLL, "80387");
    v11 = -1LL;
    do
      ++v11;
    while ( DstBuf[v11] );
    HIDWORD(v33[6]) = v11 + 1;
    v12 = CmpInitializeRegistryNode((unsigned int)v33, a3, (unsigned int)&Handle, -1, -1, (__int64)&CmpDeviceIndexTable);
    v13 = *(void **)&SourceString.Length;
    v14 = v12;
    if ( v12 >= 0 )
    {
      NtClose(*(HANDLE *)&Handle.Length);
      _RAX = 0x80000000LL;
      v16 = (const CHAR *)((a1 + 25232) & -(__int64)(*(_BYTE *)(a1 + 65) != 0));
      __asm { cpuid }
      *(_DWORD *)(&Handle.MaximumLength + 1) = _RBX;
      Handle.Buffer = (wchar_t *)__PAIR64__(_RDX, _RCX);
      if ( (unsigned int)_RAX < 0x80000004 )
        goto LABEL_39;
      v21 = v35;
      v22 = -2147483646;
      do
      {
        _RAX = v22;
        __asm { cpuid }
        *v21 = _RAX;
        ++v22;
        v21[1] = _RBX;
        v21[2] = _RCX;
        v21[3] = _RDX;
        v21 += 4;
      }
      while ( v22 <= 0x80000004 );
      v35[48] = 0;
      if ( !v21 )
        goto LABEL_39;
      RtlInitUnicodeString(&DestinationString, L"ProcessorNameString");
      LODWORD(v28) = 0;
      if ( v35[0] == 32 )
      {
        do
          v28 = (unsigned int)(v28 + 1);
        while ( v35[v28] == 32 );
      }
      RtlInitAnsiString(&SourceString, &v35[(unsigned int)v28]);
      v14 = RtlAnsiStringToUnicodeString(&Handle, &SourceString, 1u);
      if ( v14 >= 0 )
      {
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, Handle.Buffer, Handle.Length + 2);
        RtlFreeUnicodeString(&Handle);
        if ( v14 >= 0 )
        {
LABEL_39:
          if ( !v16
            || (RtlInitUnicodeString(&DestinationString, L"VendorIdentifier"),
                RtlInitAnsiString(&SourceString, v16),
                v14 = RtlAnsiStringToUnicodeString(&Handle, &SourceString, 1u),
                v14 >= 0)
            && (v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, Handle.Buffer, Handle.Length + 2),
                RtlFreeUnicodeString(&Handle),
                v14 >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 25248)
              || (Data = *(_DWORD *)(a1 + 25248),
                  RtlInitUnicodeString(&DestinationString, L"FeatureSet"),
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u),
                  v14 >= 0) )
            {
              if ( !*(_DWORD *)(a1 + 68)
                || (RtlInitUnicodeString(&DestinationString, L"~MHz"),
                    v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, (PVOID)(a1 + 68), 4u),
                    v14 >= 0) )
              {
                v29 = (_QWORD *)(a1 + 25256);
                if ( *v29 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Update Revision");
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 3u, v29, 8u);
                }
              }
            }
          }
        }
      }
    }
    if ( v13 != (void *)-1LL )
      NtClose(v13);
    return (unsigned int)v14;
  }
  return result;
}
