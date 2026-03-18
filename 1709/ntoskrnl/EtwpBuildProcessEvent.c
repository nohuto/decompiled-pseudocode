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
        int *a8,
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
  PACCESS_TOKEN v20; // rax
  __int64 v21; // r8
  void *v22; // rdi
  NTSTATUS InformationToken; // ebx
  PVOID v24; // rdx
  int v25; // ecx
  char *v26; // rbx
  __int64 Length; // rdi
  unsigned __int16 v28; // cx
  __int64 v29; // rax
  unsigned int v30; // ebp
  __int64 v31; // rdx
  int v32; // ecx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  unsigned int v35; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v37; // rdx
  char *Buffer; // rax
  __int16 v39; // ax
  __int64 v40; // rcx

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
    v39 = *(_WORD *)(v18 + 8);
    if ( v39 == 332 || v39 == 452 )
      *v16 = 2;
  }
  v19 = 4;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x70000) != 0 )
    *v16 |= 4u;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)a6 = a4;
  *(_DWORD *)(a6 + 8) = 36;
  v20 = PsReferencePrimaryToken(Process);
  v21 = a4 + 32;
  v22 = v20;
  EtwpQueryTokenPackageInfo(v20, a8, v21);
  InformationToken = SeQueryInformationToken(v22, TokenUser, (PVOID *)&TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v22);
  if ( InformationToken < 0 )
  {
    v25 = 4;
    v24 = &EtwpNull;
  }
  else
  {
    v24 = TokenInformation;
    *v14 = TokenInformation;
    v25 = 4 * *(unsigned __int8 *)(*(_QWORD *)v24 + 1LL) + 24;
  }
  *(_QWORD *)(a6 + 16) = v24;
  *(_DWORD *)(a6 + 28) = 0;
  v26 = (char *)&Process[1].ActiveProcessors.Bitmap[12];
  Length = -1LL;
  *(_DWORD *)(a6 + 24) = v25;
  do
    ++Length;
  while ( v26[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v37 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    if ( v37 )
    {
      if ( v37->Length && RtlUnicodeStringToAnsiString(DestinationString, v37, 1u) >= 0 )
      {
        Length = DestinationString->Length;
        Buffer = DestinationString->Buffer;
        v26 = &Buffer[Length];
        while ( v26 != Buffer )
        {
          if ( *--v26 == 92 )
          {
            ++v26;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v26 + Length;
      }
    }
  }
  *(_DWORD *)(a6 + 40) = Length;
  *(_QWORD *)(a6 + 32) = v26;
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
      v28 = *a10;
      if ( *a10 )
      {
        v19 = 5;
        *(_QWORD *)(a6 + 64) = *((_QWORD *)a10 + 1);
        *(_DWORD *)(a6 + 72) = v28;
        *(_DWORD *)(a6 + 76) = 0;
      }
    }
  }
  v29 = v19;
  v30 = v19 + 1;
  v29 *= 2LL;
  v31 = 2LL * v30;
  *(_QWORD *)(a6 + 8 * v29) = &EtwpNull;
  *(_QWORD *)(a6 + 8 * v29 + 8) = 2LL;
  v32 = *a8;
  *(_QWORD *)(a6 + 8 * v31) = a8 + 4;
  *(_DWORD *)(a6 + 8 * v31 + 8) = v32;
  *(_DWORD *)(a6 + 8 * v31 + 12) = 0;
  v33 = a8[2];
  v34 = v30 + 1;
  v35 = v30 + 2;
  v34 *= 2LL;
  *(_QWORD *)(a6 + 8 * v34) = a8 + 68;
  *(_QWORD *)(a6 + 8 * v34 + 8) = v33;
  if ( a2 == 807 )
  {
    v40 = 2LL * v35++;
    *(_QWORD *)(a6 + 8 * v40) = (char *)Process + 1680;
    *(_QWORD *)(a6 + 8 * v40 + 8) = 8LL;
  }
  result = a7;
  *a7 = v35;
  return result;
}
