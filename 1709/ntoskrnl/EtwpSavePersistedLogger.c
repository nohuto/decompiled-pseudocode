/*
 * XREFs of EtwpSavePersistedLogger @ 0x140753024
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x1407533E0 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140150450 (MmUnmapReservedMapping.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14017D9C0 (ZwWriteFile.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017DDA0 (ZwSetInformationFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpDelayCreate @ 0x14057836C (EtwpDelayCreate.c)
 *     MmFreeMappingAddress @ 0x1405832F0 (MmFreeMappingAddress.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 *     EtwpQueryPersistedMemory @ 0x140752F4C (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x140753738 (EtwpTraceSavePersistedLoggerStop.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(_DWORD *a1, __int64 a2)
{
  HANDLE v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r15
  void *v7; // rdi
  unsigned __int64 v8; // r8
  __int64 Length; // rsi
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // r9
  unsigned int v15; // r11d
  unsigned int v16; // r12d
  unsigned int v17; // edi
  _QWORD *p_Next; // r9
  __int64 v19; // r10
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  char *v22; // rax
  char *Buffer; // rdi
  __int64 v24; // rax
  _BYTE v26[4]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-75h]
  int v28; // [rsp+58h] [rbp-71h]
  unsigned int v29; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v30; // [rsp+60h] [rbp-69h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-51h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+80h] [rbp-49h] BYREF
  PVOID MappingAddress; // [rsp+88h] [rbp-41h]
  __int64 v36; // [rsp+90h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD FileInformation[10]; // [rsp+B8h] [rbp-11h] BYREF

  v36 = a2;
  FileHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  v28 = 0;
  P = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = (unsigned int)a1[2];
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_37;
  }
  MappingAddress = MmAllocateMappingAddress((unsigned int)Length, 0x4B777445u);
  v7 = MappingAddress;
  if ( !MappingAddress )
  {
    v10 = -1073741670;
    goto LABEL_45;
  }
  Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    Mdl->MdlFlags |= 2u;
    v10 = EtwpQueryPersistedMemory(v12, a2, &P, &v33);
    if ( v10 < 0 )
      goto LABEL_39;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)a1 + (unsigned int)a1[3]));
    v13 = 0LL;
    for ( i = 0LL; (unsigned int)i < v33; v13 += v8 )
    {
      v8 = *((_QWORD *)P + i);
      if ( v8 < 0x10000000000LL )
        goto LABEL_24;
      v8 >>= 40;
      i = (unsigned int)(i + 1);
    }
    if ( v13 << 12 != (_DWORD)Length * a1[1] )
    {
LABEL_24:
      v10 = -1072103376;
      goto LABEL_39;
    }
    LOBYTE(i) = 1;
    v26[0] = 0;
    v10 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v26, i, 0, 1);
    if ( v10 < 0 )
    {
      v4 = FileHandle;
    }
    else
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 0x2000;
      v4 = FileHandle;
      ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      v15 = 0;
      v27 = 0;
      v29 = 0;
      v30 = 0;
      if ( a1[1] )
      {
        v16 = (unsigned int)Length >> 12;
        do
        {
          if ( v16 )
          {
            v17 = v27;
            p_Next = &v6[1].Next;
            v19 = v16;
            do
            {
              v20 = P;
              v21 = v17++ + (*((_QWORD *)P + v15) & 0xFFFFFFFFFFLL);
              *p_Next = v21;
              if ( v17 == v20[v15] >> 40 )
              {
                ++v15;
                v17 = 0;
              }
              ++p_Next;
              --v19;
            }
            while ( v19 );
            v27 = v17;
            v7 = MappingAddress;
            v30 = v15;
          }
          v22 = (char *)MmMapLockedPagesWithReservedMapping(v7, 0x4B777445u, v6, MmCached);
          Buffer = v22;
          if ( *(_DWORD *)v22 == (_DWORD)Length )
          {
            if ( *((_DWORD *)v22 + 2) <= *(_DWORD *)v22 )
              *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 2);
            else
              *((_DWORD *)v22 + 12) = *((_DWORD *)v22 + 1);
            v24 = *((unsigned int *)v22 + 12);
            if ( (unsigned int)v24 > (unsigned int)Length || (unsigned int)v24 <= 0x48 )
            {
              v4 = FileHandle;
            }
            else
            {
              if ( (_DWORD)Length != (_DWORD)v24 )
                memset(&Buffer[v24], 255, (unsigned int)(Length - v24));
              v4 = FileHandle;
              v10 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
              if ( v10 >= 0 )
              {
                ++v28;
                ByteOffset.QuadPart += Length;
              }
            }
          }
          MmUnmapReservedMapping(Buffer, 0x4B777445u, v6);
          v7 = MappingAddress;
          v15 = v30;
          ++v29;
        }
        while ( v29 < a1[1] );
        v5 = v28;
      }
    }
LABEL_37:
    if ( v4 )
      ZwClose(v4);
    goto LABEL_39;
  }
  v10 = -1073741670;
LABEL_39:
  if ( v7 )
    MmFreeMappingAddress(v7, 0x4B777445u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_45:
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v36, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, a1[1], v5, v10);
  return (unsigned int)v10;
}
