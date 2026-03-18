/*
 * XREFs of NtQueryDirectoryObject @ 0x1404D2500
 * Callers:
 *     <none>
 * Callees:
 *     ObpLockDirectoryShared @ 0x140060DB0 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  ULONG v10; // r12d
  const void **PoolWithQuotaTag; // rax
  const void **v12; // r14
  int v13; // ebx
  ULONG v14; // r15d
  ULONG v15; // edi
  NTSTATUS v16; // esi
  unsigned int v17; // ecx
  _QWORD *v18; // r13
  _QWORD *v19; // rbx
  ULONG v20; // esi
  ULONG v21; // r14d
  ULONG v22; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r11
  unsigned __int16 Length; // r9
  char *v27; // r14
  int v28; // eax
  char *v29; // rbx
  int v30; // r12d
  const void **v31; // r14
  const void **v32; // rsi
  char *v33; // rbx
  char *v34; // rbx
  PVOID v35; // rbx
  ULONG v36; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // [rsp+30h] [rbp-A8h]
  int v41; // [rsp+34h] [rbp-A4h]
  int v42; // [rsp+38h] [rbp-A0h]
  __int64 v43; // [rsp+38h] [rbp-A0h]
  unsigned int v44; // [rsp+40h] [rbp-98h]
  const void **v45; // [rsp+48h] [rbp-90h]
  const void **Src; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v49; // [rsp+78h] [rbp-60h] BYREF
  __int16 v50; // [rsp+96h] [rbp-42h]
  int v51; // [rsp+98h] [rbp-40h]

  v7 = BufferLength;
  v49 = 0LL;
  v50 = 0;
  v51 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v38 = (__int64)Context;
    if ( (unsigned __int64)Context >= 0x7FFFFFFF0000LL )
      v38 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v38 = *(_DWORD *)v38;
    if ( ReturnLength )
    {
      v39 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v39 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v39 = *(_DWORD *)v39;
    }
    if ( RestartScan )
      v10 = 0;
    else
      v10 = *Context;
  }
  else if ( RestartScan )
  {
    v10 = 0;
  }
  else
  {
    v10 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v12 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v13 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return v13;
  }
  else
  {
    v45 = v12;
    v14 = 32;
    v42 = 32;
    v15 = 0;
    v41 = 0;
    v16 = -2147483622;
    v40 = -2147483622;
    ObpLockDirectoryShared((__int64)&v49, Object);
    v17 = 0;
    v44 = 0;
    v18 = Object;
    do
    {
      v19 = (_QWORD *)*v18;
      if ( *v18 )
      {
        while ( 1 )
        {
          v20 = v14;
          v21 = v15;
          v22 = v15++;
          if ( v10 == v22 )
          {
            v23 = v19[1] - 48LL;
            v43 = v23;
            if ( (*(_BYTE *)(v23 + 26) & 2) == 0 || (v24 = ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 3], v23 == v24) )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
              v23 = v43;
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)(v23 - v24 + 8);
            }
            v25 = (unsigned __int8)ObHeaderCookie;
            Length = DestinationString.Length;
            v14 += DestinationString.Length
                 + 36
                 + *(unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned __int64)BYTE1(v23)]
                                       + 16);
            v42 = v14;
            if ( v14 > BufferLength )
            {
              v15 = v21;
              v28 = -1073741789;
              if ( !ReturnSingleEntry )
                v28 = 261;
              v40 = v28;
              if ( !ReturnSingleEntry )
                v14 = v20;
              v42 = v14;
              v16 = v28;
              goto LABEL_25;
            }
            *(_WORD *)v45 = DestinationString.Length;
            *((_WORD *)v45 + 1) = Length + 2;
            v45[1] = DestinationString.Buffer;
            *((_WORD *)v45 + 8) = *(_WORD *)(ObTypeIndexTable[v25 ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned __int64)BYTE1(v23)]
                                           + 16);
            *((_WORD *)v45 + 9) = *(_WORD *)(ObTypeIndexTable[v25 ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned __int64)BYTE1(v23)]
                                           + 16)
                                + 2;
            v45[3] = *(const void **)(ObTypeIndexTable[v25 ^ *(unsigned __int8 *)(v23 + 24) ^ (unsigned __int64)BYTE1(v23)]
                                    + 24);
            v16 = 0;
            v40 = 0;
            v27 = (char *)(v45 + 4);
            v45 += 4;
            ++v41;
            if ( ReturnSingleEntry )
              goto LABEL_26;
            ++v10;
          }
          v19 = (_QWORD *)*v19;
          if ( !v19 )
          {
            v17 = v44;
            v16 = v40;
            break;
          }
        }
      }
      v44 = ++v17;
      ++v18;
    }
    while ( v17 < 0x25 );
LABEL_25:
    v27 = (char *)v45;
LABEL_26:
    if ( v16 < 0 )
    {
      v31 = Src;
    }
    else
    {
      memset(v27, 0, 0x20uLL);
      v29 = v27 + 32;
      v30 = v41;
      v31 = Src;
      if ( v41 )
      {
        v32 = Src + 3;
        do
        {
          memmove(v29, *(v32 - 2), *((unsigned __int16 *)v32 - 12));
          *(v32 - 2) = (char *)Buffer + v29 - (char *)Src;
          v33 = &v29[*((unsigned __int16 *)v32 - 12)];
          *(_WORD *)v33 = 0;
          v33 += 2;
          memmove(v33, *v32, *((unsigned __int16 *)v32 - 4));
          *v32 = (char *)Buffer + v33 - (char *)Src;
          v34 = &v33[*((unsigned __int16 *)v32 - 4)];
          *(_WORD *)v34 = 0;
          v29 = v34 + 2;
          v32 += 4;
          --v30;
        }
        while ( v30 );
        v14 = v42;
        v16 = v40;
      }
    }
    v35 = Object;
    ObpUnlockDirectory((__int64)Object, (__int64)&v49);
    v36 = BufferLength;
    if ( v14 <= BufferLength )
      v36 = v14;
    memmove(Buffer, v31, v36);
    if ( ReturnLength )
      *ReturnLength = v14;
    if ( v16 >= 0 )
      *Context = v15;
    ObfDereferenceObject(v35);
    ExFreePoolWithTag(v31, 0);
    return v16;
  }
}
