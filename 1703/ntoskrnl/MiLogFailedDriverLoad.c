/*
 * XREFs of MiLogFailedDriverLoad @ 0x1406B5708
 * Callers:
 *     MiCreateSectionForDriver @ 0x14045044C (MiCreateSectionForDriver.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140015264 (MiIsRetryIoStatus.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     IoWriteErrorLogEntry @ 0x140149FE0 (IoWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1401F37C8 (IoAllocateGenericErrorLogEntry.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall MiLogFailedDriverLoad(unsigned __int16 *a1, unsigned __int16 *a2, const CHAR *a3, NTSTATUS a4)
{
  int v4; // edi
  __int128 v5; // xmm0
  int v6; // edi
  NTSTATUS v7; // ebx
  __int64 v8; // r14
  int v9; // r15d
  NTSTATUS v10; // esi
  __int128 v11; // xmm0
  BOOL IsRetryIoStatus; // eax
  unsigned int v13; // edi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v15; // rdi
  char *v16; // rsi
  const void **v17; // r15
  size_t v18; // rbx
  char *v19; // rsi
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int16 v23; // [rsp+50h] [rbp-19h]
  const wchar_t *v24; // [rsp+58h] [rbp-11h]
  __int128 v25; // [rsp+60h] [rbp-9h]
  UNICODE_STRING v26; // [rsp+70h] [rbp+7h]

  v4 = *a1;
  v5 = *(_OWORD *)a1;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = v4 + 2;
  UnicodeString.Buffer = 0LL;
  v7 = a4;
  LODWORD(v8) = 1;
  v9 = 0;
  v10 = 0;
  v22 = v5;
  if ( !a2 || a4 != -1073741702 && a4 != -1073741772 && (unsigned int)(a4 + 1073741214) > 1 )
    goto LABEL_12;
  v11 = *(_OWORD *)a2;
  v8 = 3LL;
  v24 = L"cannot find";
  v23 = 22;
  v6 += *a2 + 26;
  v25 = v11;
  if ( a3 )
  {
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitAnsiString(&DestinationString, a3);
      v8 = 4LL;
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) < 0 )
        v9 = 1;
      v6 += UnicodeString.Length + 2;
      v26 = UnicodeString;
    }
    else
    {
      v10 = (int)a3;
    }
    if ( v9 == 1 )
    {
LABEL_12:
      v10 = v7;
      IsRetryIoStatus = MiIsRetryIoStatus(v7, 0x1000uLL);
      v24 = L"failed to load";
      v7 = IsRetryIoStatus ? -1073741670 : -1073741204;
      v23 = 28;
      v6 += 30;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  v13 = v6 + 48;
  if ( v13 < 0xFF )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(v13);
    v15 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      *((_DWORD *)GenericErrorLogEntry + 4) = v10;
      v16 = (char *)(GenericErrorLogEntry + 24);
      *((_DWORD *)GenericErrorLogEntry + 3) = 1073741850;
      *((_DWORD *)GenericErrorLogEntry + 5) = v7;
      GenericErrorLogEntry[3] = 48;
      if ( (_DWORD)v8 )
      {
        v17 = (const void **)&v22 + 1;
        do
        {
          v18 = *((unsigned __int16 *)v17 - 4);
          memmove(v16, *v17, v18);
          v17 += 2;
          v19 = &v16[2 * (v18 >> 1)];
          *(_WORD *)v19 = 32;
          v16 = v19 + 2;
          --v8;
        }
        while ( v8 );
      }
      *((_WORD *)v16 - 1) = 0;
      v15[2] = 1;
      IoWriteErrorLogEntry(v15);
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
}
