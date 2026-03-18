/*
 * XREFs of IopErrorLogThread @ 0x1405812A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyNW @ 0x14006DBC0 (RtlStringCchCopyNW.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IopErrorLogGetEntry @ 0x140147F64 (IopErrorLogGetEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     IopErrorLogRequeueEntry @ 0x1401F656C (IopErrorLogRequeueEntry.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401F65E4 (IopVerifierExAllocatePool_3.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x140467800 (EtwQueryTraceHandleByLoggerName.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     EtwWriteErrorLogEntry @ 0x140581570 (EtwWriteErrorLogEntry.c)
 *     IopErrorLogQueueRequest @ 0x140690160 (IopErrorLogQueueRequest.c)
 */

__int64 IopErrorLogThread()
{
  __int64 v0; // rbx
  int v1; // eax
  unsigned __int16 Length; // di
  wchar_t *Buffer; // rbx
  __int16 v4; // ax
  char v5; // r12
  UNICODE_STRING *p_P; // r15
  unsigned int v7; // r8d
  int v8; // ecx
  void *v9; // rcx
  __int64 result; // rax
  __int64 v11; // r14
  int v12; // eax
  const WCHAR *v13; // rdx
  __int16 v14; // r9
  unsigned int v15; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+4Ch] [rbp-BCh]
  UNICODE_STRING v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  UNICODE_STRING v21; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v23; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+1A8h] [rbp+A0h] BYREF
  wchar_t v25[256]; // [rsp+3A8h] [rbp+2A0h] BYREF
  char P; // [rsp+5A8h] [rbp+4A0h] BYREF

  v16 = 0;
  v19 = 0LL;
  if ( ErrorLogSessionOpened )
  {
    while ( 1 )
    {
LABEL_29:
      v15 = 0;
      result = IopErrorLogGetEntry();
      v11 = result;
      if ( !result )
        return result;
      v0 = *(_QWORD *)(result + 24);
      v1 = *(unsigned __int16 *)(result - 6) - 48;
      v20 = v0;
      LODWORD(v18) = v1;
      if ( v0 )
      {
        RtlInitUnicodeString(&v17, 0LL);
        if ( *(_QWORD *)(v0 + 64) )
          v17 = *(UNICODE_STRING *)(v0 + 56);
        Length = v17.Length;
        if ( v17.Length )
        {
LABEL_8:
          Buffer = &v17.Buffer[((unsigned __int64)Length >> 1) - 1];
          if ( *Buffer == 92 )
            goto LABEL_12;
          do
          {
            if ( Buffer == v17.Buffer )
              break;
            --Buffer;
          }
          while ( *Buffer != 92 );
          if ( *Buffer == 92 )
LABEL_12:
            ++Buffer;
          v4 = LOWORD(v17.Buffer) - (_WORD)Buffer;
          v17.Buffer = Buffer;
          Length += v4;
          v17.Length = Length;
          goto LABEL_14;
        }
        v15 = 0;
        if ( (int)ObQueryNameStringMode((char *)v0, (__int64)&v23, 0x110u, &v15, 0) >= 0 && v15 )
        {
          v17 = v23;
          goto LABEL_41;
        }
        v13 = (const WCHAR *)&cchOriginalDestLength;
      }
      else
      {
        v13 = L"Application Popup";
      }
      RtlInitUnicodeString(&v17, v13);
LABEL_41:
      Length = v17.Length;
      if ( v17.Length )
        goto LABEL_8;
      Buffer = v17.Buffer;
LABEL_14:
      v15 = 0;
      v5 = 0;
      p_P = (UNICODE_STRING *)&P;
      v7 = 272;
      if ( !*(_QWORD *)(v11 + 16) )
        goto LABEL_15;
      while ( 1 )
      {
        v12 = ObQueryNameStringMode(*(char **)(v11 + 16), (__int64)p_P, v7, &v15, 0);
        if ( v12 != -1073741820 )
          break;
        if ( v5 )
          goto LABEL_15;
        p_P = (UNICODE_STRING *)IopVerifierExAllocatePool_3(PagedPool, v15);
        if ( !p_P )
          goto LABEL_15;
        v7 = v15;
        v5 = 1;
      }
      v8 = 0;
      if ( v12 >= 0 && v15 )
      {
        v21 = *p_P;
      }
      else
      {
LABEL_15:
        RtlInitUnicodeString(&v21, (PCWSTR)&cchOriginalDestLength);
        v8 = 0;
      }
      pszDest[0] = 0;
      v25[0] = 0;
      if ( Buffer )
        RtlStringCchCopyNW(pszDest, 0x100uLL, Buffer, (unsigned __int64)Length >> 1);
      if ( v21.Buffer )
        RtlStringCchCopyNW(v25, 0x100uLL, v21.Buffer, (unsigned __int64)v21.Length >> 1);
      if ( v5 == 1 )
        ExFreePoolWithTag(p_P, 0);
      if ( (unsigned int)(*(_DWORD *)(v11 + 52) - 1074004004) <= 1 && !wcsicmp(pszDest, L"NTFS") )
      {
        v19 = v11 + 120;
        v14 = *(_WORD *)(v11 + 84);
        *(_WORD *)(v11 + 42) -= v14;
        v16 = v14;
      }
      if ( (int)EtwWriteErrorLogEntry(v8, (int)v11 + 40, v18, (int)v11 + 32, (__int64)pszDest, (__int64)v25, v16, v19) < 0 )
      {
        IopErrorLogRequeueEntry((_QWORD *)v11);
        return IopErrorLogQueueRequest();
      }
      _InterlockedExchangeAdd(&IopErrorLogAllocation, -*(unsigned __int16 *)(v11 - 6));
      v9 = *(void **)(v11 + 16);
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v20 )
        ObfDereferenceObject(*(PVOID *)(v11 + 24));
      ExFreePoolWithTag((PVOID)(v11 - 8), 0);
    }
  }
  RtlInitUnicodeString(&DestinationString, L"Eventlog-System");
  if ( (int)EtwQueryTraceHandleByLoggerName((__int64)&DestinationString, &IopErrorLogSession) >= 0 )
  {
    ErrorLogSessionOpened = 1;
    goto LABEL_29;
  }
  return IopErrorLogQueueRequest();
}
