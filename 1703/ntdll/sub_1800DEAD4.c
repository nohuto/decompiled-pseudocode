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
  int VirtualMemory; // ebx
  signed __int64 v2; // rdi
  _WORD *v4; // r15
  _WORD *v5; // rsi
  unsigned int v6; // r12d
  wchar_t *Buffer; // r14
  int v8; // eax
  unsigned __int16 *i; // rcx
  _WORD *v10; // r14
  unsigned int v11; // eax
  unsigned __int16 v12; // bx
  _WORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v21[6]; // [rsp+50h] [rbp-18h] BYREF
  int v22; // [rsp+B8h] [rbp+50h]
  int v23; // [rsp+C0h] [rbp+58h] BYREF
  _WORD *v24; // [rsp+C8h] [rbp+60h]

  v0 = qword_18015C4A0;
  VirtualMemory = -1073741823;
  v24 = 0LL;
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
  v24 = 0LL;
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    v2 = (signed __int64)v24;
    v4 = v24 + 284;
    v5 = v24 + 284;
    v6 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length >> 1;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    v8 = sub_1800DE9E4(v24, 260LL, (__int64)Buffer);
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
    sub_1800108D8((__int64)NtCurrentPeb()->ImageBaseAddress, 0, (__int64)v21);
    *(_DWORD *)(v2 + 532) = v21[0];
    *(_DWORD *)(v2 + 524) = v21[2];
    *(_DWORD *)(v2 + 528) = v21[3];
    VirtualMemory = ZwOpenProcessToken();
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    VirtualMemory = ZwQueryInformationToken();
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    v10 = &v5[4 * (((unsigned __int64)(unsigned int)((_DWORD)v4 - (_DWORD)v5) + 7) >> 3)];
    if ( v10 > v4 )
      goto LABEL_9;
    *(_QWORD *)(v2 + 536) = *(_QWORD *)v5;
    *(_DWORD *)(v2 + 560) = 0x40000000;
    if ( (int)ZwQueryInformationToken() >= 0 )
    {
      if ( v22 == 2 )
      {
        *(_DWORD *)(v2 + 560) = -1073741824;
      }
      else if ( v22 == 1 )
      {
        v11 = 0;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)v5 + 1LL) - 1) + 8) == 500 )
          v11 = 0x80000000;
        *(_DWORD *)(v2 + 560) = v11;
      }
    }
    VirtualMemory = RtlLengthSidAsUnicodeString(*(unsigned __int8 **)(v2 + 536), &v23);
    if ( VirtualMemory < 0 )
      goto LABEL_36;
    v12 = v23;
    v13 = (_WORD *)(v2 + 544);
    *(_WORD *)(v2 + 544) = 0;
    *(_QWORD *)(v2 + 552) = v10;
    v14 = (unsigned __int16)(v12 + 90);
    *(_WORD *)(v2 + 546) = v14;
    if ( (_WORD *)((char *)v10 + v14) > v4 )
    {
LABEL_9:
      VirtualMemory = -1073741789;
    }
    else
    {
      RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\REGISTRY\\USER\\");
      v15 = *(_QWORD *)(v2 + 552);
      v16 = *(void **)(v2 + 536);
      v17 = (unsigned __int64)(unsigned __int16)*v13 >> 1;
      UnicodeString.MaximumLength = v12;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v15 + 2 * v17);
      VirtualMemory = RtlConvertSidToUnicodeString(&UnicodeString, v16, 0);
      if ( VirtualMemory >= 0 )
      {
        *v13 += UnicodeString.Length;
        VirtualMemory = RtlAppendUnicodeToString((unsigned __int16 *)(v2 + 544), L"\\Software\\Microsoft\\Windows");
        if ( VirtualMemory >= 0 )
        {
          *(_DWORD *)(v2 + 564) = sub_1800DEFA0(v19, v18);
          v2 &= -(__int64)(_InterlockedCompareExchange64(&qword_18015C4A0, v2, 0LL) != 0);
LABEL_34:
          if ( qword_180158DF8 != -1 )
            VirtualMemory = 0;
        }
      }
    }
LABEL_36:
    if ( v2 )
      ZwFreeVirtualMemory();
  }
  return (unsigned int)VirtualMemory;
}
