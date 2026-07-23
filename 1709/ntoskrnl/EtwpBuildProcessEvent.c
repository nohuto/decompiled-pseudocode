/*
 * XREFs of EtwpBuildProcessEvent @ 0x1404DBDC0
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     EtwpTraceProcessRundown @ 0x14074EF74 (EtwpTraceProcessRundown.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404DC228 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        PSIZE_T PackageSize,
        PANSI_STRING DestinationString,
        unsigned __int16 *a10,
        _QWORD *TokenInformation)
{
  _QWORD *v14; // r12
  int Next; // eax
  _DWORD *v16; // rbx
  unsigned __int64 DirectoryTableBase; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // ebp
  PACCESS_TOKEN v20; // rdi
  NTSTATUS InformationToken; // ebx
  PVOID v22; // rdx
  int v23; // ecx
  char *v24; // rbx
  __int64 Length; // rdi
  unsigned __int16 v26; // cx
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int v33; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v35; // rdx
  char *Buffer; // rax
  __int16 v37; // ax
  __int64 v38; // rcx

  RtlInitAnsiString(DestinationString, 0LL);
  v14 = TokenInformation;
  *(_QWORD *)a4 = Process;
  *(_DWORD *)(a4 + 8) = Process[1].Header.WaitListHead.Flink;
  Next = (int)Process[1].SwapListEntry.Next;
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = Next;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx((__int64)Process);
  v16 = (_DWORD *)(a4 + 32);
  *(_DWORD *)(a4 + 20) = HIDWORD(Process[2].Affinity.Bitmap[3]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  v18 = Process[1].ActiveProcessors.Bitmap[7];
  if ( v18 )
  {
    v37 = *(_WORD *)(v18 + 8);
    if ( v37 == 332 || v37 == 452 )
      *v16 = 2;
  }
  v19 = 4;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
    *v16 |= 4u;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)a6 = a4;
  *(_DWORD *)(a6 + 8) = 36;
  v20 = PsReferencePrimaryToken(Process);
  EtwpQueryTokenPackageInfo(v20, PackageSize);
  InformationToken = SeQueryInformationToken(v20, TokenUser, (PVOID *)&TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v20);
  if ( InformationToken < 0 )
  {
    v23 = 4;
    v22 = &EtwpNull;
  }
  else
  {
    v22 = TokenInformation;
    *v14 = TokenInformation;
    v23 = 4 * *(unsigned __int8 *)(*(_QWORD *)v22 + 1LL) + 24;
  }
  *(_QWORD *)(a6 + 16) = v22;
  *(_DWORD *)(a6 + 28) = 0;
  v24 = (char *)&Process[1].ActiveProcessors.Bitmap[12];
  Length = -1LL;
  *(_DWORD *)(a6 + 24) = v23;
  do
    ++Length;
  while ( v24[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v35 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    if ( v35 )
    {
      if ( v35->Length && RtlUnicodeStringToAnsiString(DestinationString, v35, 1u) >= 0 )
      {
        Length = DestinationString->Length;
        Buffer = DestinationString->Buffer;
        v24 = &Buffer[Length];
        while ( v24 != Buffer )
        {
          if ( *--v24 == 92 )
          {
            ++v24;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v24 + Length;
      }
    }
  }
  *(_DWORD *)(a6 + 40) = Length;
  *(_QWORD *)(a6 + 32) = v24;
  *(_DWORD *)(a6 + 44) = 0;
  *(_QWORD *)(a6 + 48) = &EtwpNull;
  *(_QWORD *)(a6 + 56) = 1LL;
  if ( a3 )
    EtwpQueryProcessOtherInfo(Process, a5);
  else
    *a5 = 0LL;
  *a10 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[1] )
  {
    if ( a3 )
    {
      EtwpQueryProcessCommandLine(Process, a10);
      v26 = *a10;
      if ( *a10 )
      {
        v19 = 5;
        *(_QWORD *)(a6 + 64) = *((_QWORD *)a10 + 1);
        *(_DWORD *)(a6 + 72) = v26;
        *(_DWORD *)(a6 + 76) = 0;
      }
    }
  }
  v27 = v19;
  v28 = v19 + 1;
  v27 *= 2LL;
  v29 = 2LL * v28;
  *(_QWORD *)(a6 + 8 * v27) = &EtwpNull;
  *(_QWORD *)(a6 + 8 * v27 + 8) = 2LL;
  v30 = *(_DWORD *)PackageSize;
  *(_QWORD *)(a6 + 8 * v29) = PackageSize + 2;
  *(_DWORD *)(a6 + 8 * v29 + 8) = v30;
  *(_DWORD *)(a6 + 8 * v29 + 12) = 0;
  v31 = *((_DWORD *)PackageSize + 2);
  v32 = v28 + 1;
  v33 = v28 + 2;
  v32 *= 2LL;
  *(_QWORD *)(a6 + 8 * v32) = PackageSize + 34;
  *(_QWORD *)(a6 + 8 * v32 + 8) = v31;
  if ( a2 == 807 )
  {
    v38 = 2LL * v33++;
    *(_QWORD *)(a6 + 8 * v38) = (char *)Process + 1680;
    *(_QWORD *)(a6 + 8 * v38 + 8) = 8LL;
  }
  result = a7;
  *a7 = v33;
  return result;
}
