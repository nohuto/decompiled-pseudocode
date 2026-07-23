/*
 * XREFs of MiLogFailedDriverLoad @ 0x14074C6D0
 * Callers:
 *     MiCreateSectionForDriver @ 0x1405F98FC (MiCreateSectionForDriver.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     MiIsRetryIoStatus @ 0x140135210 (MiIsRetryIoStatus.c)
 *     IoWriteErrorLogEntry @ 0x140163CC0 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1402365A8 (IoAllocateGenericErrorLogEntry.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // esi
  __int128 v5; // xmm0
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r15
  NTSTATUS v9; // ebx
  int v10; // r14d
  NTSTATUS v11; // r12d
  __int64 v12; // rcx
  int v13; // ecx
  __int128 v14; // xmm0
  int v15; // eax
  BOOL IsRetryIoStatus; // eax
  int v17; // edi
  unsigned int v18; // esi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v20; // rdi
  char *v21; // rsi
  const void **v22; // r14
  size_t v23; // rbx
  char *v24; // rsi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v27; // [rsp+40h] [rbp-29h] BYREF
  __int16 v28; // [rsp+50h] [rbp-19h]
  const wchar_t *v29; // [rsp+58h] [rbp-11h]
  __int128 v30; // [rsp+60h] [rbp-9h]
  UNICODE_STRING v31; // [rsp+70h] [rbp+7h]

  v4 = *a1;
  v5 = *(_OWORD *)a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = v4 + 2;
  UnicodeString.Buffer = 0LL;
  v7 = -1LL;
  LODWORD(v8) = 1;
  v9 = a4;
  v10 = 0;
  v11 = 0;
  v27 = v5;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
    goto LABEL_14;
  v12 = -1LL;
  v29 = L"cannot find";
  do
    ++v12;
  while ( aCannotFind[v12] );
  v13 = 2 * v12;
  v14 = *(_OWORD *)a2;
  v15 = v13 + *a2;
  v28 = v13;
  v8 = 3LL;
  v6 += v15 + 4;
  v30 = v14;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitAnsiString(&DestinationString, a3);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0 )
        v10 = 1;
      v6 += UnicodeString.Length + 2;
      v8 = 4LL;
      v31 = UnicodeString;
    }
    else
    {
      v11 = (int)a3;
    }
    if ( v10 == 1 )
    {
LABEL_14:
      v11 = v9;
      IsRetryIoStatus = MiIsRetryIoStatus(v9, 0x1000uLL);
      v29 = L"failed to load";
      v9 = IsRetryIoStatus ? -1073741670 : -1073741204;
      do
        ++v7;
      while ( aFailedToLoad[v7] );
      v17 = 2 * v7;
      v6 += v17 + 2;
      v28 = v17;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  v18 = v6 + 48;
  if ( v18 < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v18);
    v20 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *((_DWORD *)GenericErrorLogEntry + 3) = 1073741850;
      v21 = (char *)(GenericErrorLogEntry + 24);
      *((_DWORD *)GenericErrorLogEntry + 5) = v9;
      *((_DWORD *)GenericErrorLogEntry + 4) = v11;
      GenericErrorLogEntry[3] = 48;
      if ( (_DWORD)v8 )
      {
        v22 = (const void **)&v27 + 1;
        do
        {
          v23 = *((unsigned __int16 *)v22 - 4);
          memmove(v21, *v22, v23);
          v22 += 2;
          v24 = &v21[2 * (v23 >> 1)];
          *(_WORD *)v24 = 32;
          v21 = v24 + 2;
          --v8;
        }
        while ( v8 );
      }
      *((_WORD *)v21 - 1) = 0;
      v20[2] = 1;
      IoWriteErrorLogEntry(v20);
    }
  }
  RtlFreeAnsiString(&UnicodeString);
}
