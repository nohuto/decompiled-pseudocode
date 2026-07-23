/*
 * XREFs of sub_1800DEAD4 @ 0x1800DEAD4
 * Callers:
 *     WerReportSQMEvent @ 0x1800DEE50 (WerReportSQMEvent.c)
 * Callees:
 *     sub_1800108D8 @ 0x1800108D8 (sub_1800108D8.c)
 *     RtlLengthSidAsUnicodeString @ 0x180044000 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x1800A7690 (ZwOpenProcessToken.c)
 *     sub_1800DE988 @ 0x1800DE988 (sub_1800DE988.c)
 *     sub_1800DE9E4 @ 0x1800DE9E4 (sub_1800DE9E4.c)
 *     sub_1800DEEF4 @ 0x1800DEEF4 (sub_1800DEEF4.c)
 *     sub_1800DEFA0 @ 0x1800DEFA0 (sub_1800DEFA0.c)
 */

__int64 sub_1800DEAD4()
{
  __int64 v0; // rax
  NTSTATUS appended; // ebx
  signed __int64 v2; // rdi
  char *v4; // r15
  char *v5; // rsi
  unsigned int v6; // r12d
  PWCH Buffer; // r14
  int v8; // eax
  WCHAR *i; // rcx
  char *v10; // r14
  unsigned int v11; // eax
  USHORT v12; // bx
  _WORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  HANDLE TokenHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-18h]
  int v22; // [rsp+58h] [rbp-10h]
  int v23; // [rsp+5Ch] [rbp-Ch]
  ULONG ReturnLength; // [rsp+B0h] [rbp+48h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+50h] BYREF
  ULONG StringLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+60h] BYREF

  v0 = qword_18015C4A0;
  TokenHandle = 0LL;
  appended = -1073741823;
  BaseAddress = 0LL;
  v2 = 0LL;
  if ( qword_18015C4A0 && qword_180158DF8 != -1 )
    return 0LL;
  if ( !dword_18015C498 )
  {
    dword_18015C498 = sub_1800DEEF4();
    v0 = qword_18015C4A0;
  }
  if ( v0 )
    goto LABEL_34;
  RegionSize = 568LL;
  BaseAddress = 0LL;
  appended = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( appended >= 0 )
  {
    v2 = (signed __int64)BaseAddress;
    v4 = (char *)BaseAddress + RegionSize;
    v5 = (char *)BaseAddress + 568;
    if ( (char *)BaseAddress + 568 > (char *)BaseAddress + RegionSize )
      goto LABEL_9;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v8 = sub_1800DE9E4(BaseAddress, 260LL, (__int64)Buffer);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147024774 )
      goto LABEL_36;
    for ( i = &Buffer[v6 - 1]; i > Buffer; --i )
    {
      if ( *i == 92 || *i == 47 )
      {
        ++i;
        break;
      }
    }
    *(_DWORD *)(v2 + 520) = sub_1800DE988(i, v6 - (unsigned int)(i - Buffer));
    sub_1800108D8(NtCurrentPeb()->ImageBaseAddress, 0);
    *(_DWORD *)(v2 + 532) = v21;
    *(_DWORD *)(v2 + 524) = v22;
    *(_DWORD *)(v2 + 528) = v23;
    appended = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &TokenHandle);
    if ( appended < 0 )
      goto LABEL_36;
    ReturnLength = (_DWORD)v4 - (_DWORD)v5;
    appended = ZwQueryInformationToken(TokenHandle, 1u, v5, (_DWORD)v4 - (_DWORD)v5, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_36;
    v10 = &v5[8 * (((unsigned __int64)ReturnLength + 7) >> 3)];
    if ( v10 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( ZwQueryInformationToken(TokenHandle, 0x12u, &TokenInformation, 4u, &ReturnLength) >= 0 )
    {
      if ( TokenInformation == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( TokenInformation == 1 )
      {
        v11 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v11 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v11;
      }
    }
    appended = RtlLengthSidAsUnicodeString(*(PSID *)(v2 + 536), &StringLength);
    if ( appended < 0 )
      goto LABEL_36;
    v12 = StringLength;
    v13 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v10;
    v14 = (unsigned __int16)(v12 + 90);
    *(_WORD *)(v2 + 546) = v14;
    if ( &v10[v14] > v4 )
    {
LABEL_9:
      appended = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\REGISTRY\\USER\\");
      v15 = *(_QWORD *)(v2 + 552);
      v16 = *(void **)(v2 + 536);
      v17 = (unsigned __int64)(unsigned __int16)*v13 >> 1;
      UnicodeString.MaximumLength = v12;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (PWCH)(v15 + 2 * v17);
      appended = RtlConvertSidToUnicodeString(&UnicodeString, v16, 0);
      if ( appended >= 0 )
      {
        *v13 += UnicodeString.Length;
        appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( appended >= 0 )
        {
          *(_DWORD *)(v2 + 564) = sub_1800DEFA0();
          v2 &= -(__int64)(_InterlockedCompareExchange64(&qword_18015C4A0, v2, 0LL) != 0);
LABEL_34:
          if ( qword_180158DF8 != -1 )
            appended = 0;
        }
      }
    }
LABEL_36:
    if ( v2 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return (unsigned int)appended;
}
