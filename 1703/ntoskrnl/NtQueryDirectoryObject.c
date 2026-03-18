/*
 * XREFs of NtQueryDirectoryObject @ 0x14047C040
 * Callers:
 *     <none>
 * Callees:
 *     ObpUnlockDirectory @ 0x140041474 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140044324 (ObpLockDirectoryShared.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  size_t v7; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  ULONG v10; // r14d
  unsigned int v11; // r12d
  PVOID PoolWithQuotaTag; // rax
  void *v13; // r15
  int v14; // ebx
  ULONG v15; // edi
  NTSTATUS v16; // esi
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  ULONG v19; // esi
  ULONG v20; // eax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int16 Length; // dx
  int v25; // r11d
  unsigned __int16 *v26; // r11
  char *v27; // rbx
  int v28; // r15d
  const void **v29; // r14
  PVOID v30; // r12
  const void **v31; // rsi
  char *v32; // rbx
  char *v33; // rbx
  PVOID v34; // r15
  ULONG v35; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // [rsp+30h] [rbp-A8h]
  ULONG v40; // [rsp+34h] [rbp-A4h]
  int v41; // [rsp+38h] [rbp-A0h]
  unsigned __int16 *v42; // [rsp+40h] [rbp-98h]
  const void **Src; // [rsp+48h] [rbp-90h]
  unsigned __int8 v44; // [rsp+54h] [rbp-84h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  __int128 v47; // [rsp+70h] [rbp-68h] BYREF
  __int16 v48; // [rsp+8Eh] [rbp-4Ah]
  int v49; // [rsp+90h] [rbp-48h]

  v7 = BufferLength;
  v47 = 0LL;
  v48 = 0;
  v49 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v37 = (__int64)Context;
    if ( (unsigned __int64)Context >= 0x7FFFFFFF0000LL )
      v37 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v37 = *(_DWORD *)v37;
    if ( ReturnLength )
    {
      v38 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v38 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v38 = *(_DWORD *)v38;
    }
    if ( RestartScan )
      v10 = 0;
    else
      v10 = *Context;
    goto LABEL_4;
  }
  if ( !RestartScan )
  {
    v10 = *Context;
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  v11 = 0;
  v10 = 0;
LABEL_5:
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v13 = PoolWithQuotaTag;
  Src = (const void **)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v14 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    return v14;
  }
  else
  {
    v42 = (unsigned __int16 *)v13;
    v40 = 32;
    v15 = 0;
    v41 = 0;
    v16 = -2147483622;
    v39 = -2147483622;
    ObpLockDirectoryShared((__int64)&v47, (__int64)Object);
    v17 = Object;
    v44 = ObHeaderCookie;
    do
    {
      v18 = (_QWORD *)*v17;
      if ( *v17 )
      {
        while ( 1 )
        {
          v19 = v15;
          v20 = v15++;
          if ( v10 == v20 )
          {
            v21 = v18[1];
            if ( (*(_BYTE *)(v21 - 22) & 2) == 0
              || (v22 = ObpInfoMaskToOffset[*(_BYTE *)(v21 - 22) & 3], v21 - 48 == v22) )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)(v21 - 48 - v22 + 8);
            }
            v23 = (unsigned __int8)((unsigned __int16)(v21 - 48) >> 8);
            Length = DestinationString.Length;
            v25 = *(unsigned __int16 *)(ObTypeIndexTable[v44 ^ v23 ^ *(unsigned __int8 *)(v21 - 24)] + 16)
                + DestinationString.Length
                + 36;
            if ( v25 + v40 > BufferLength )
            {
              if ( ReturnSingleEntry )
              {
                v40 += v25;
                v39 = -1073741789;
              }
              else
              {
                v39 = 261;
              }
              v15 = v19;
              v16 = v39;
              goto LABEL_24;
            }
            *v42 = DestinationString.Length;
            v42[1] = Length + 2;
            *((_QWORD *)v42 + 1) = DestinationString.Buffer;
            v42[8] = *(_WORD *)(ObTypeIndexTable[v44 ^ v23 ^ *(unsigned __int8 *)(v21 - 24)] + 16);
            v42[9] = *(_WORD *)(ObTypeIndexTable[v44 ^ v23 ^ *(unsigned __int8 *)(v21 - 24)] + 16) + 2;
            *((_QWORD *)v42 + 3) = *(_QWORD *)(ObTypeIndexTable[v44 ^ v23 ^ *(unsigned __int8 *)(v21 - 24)] + 24);
            v16 = 0;
            v39 = 0;
            v40 += v25;
            v26 = v42 + 16;
            v42 += 16;
            ++v41;
            if ( ReturnSingleEntry )
              goto LABEL_25;
            ++v10;
          }
          v18 = (_QWORD *)*v18;
          if ( !v18 )
          {
            v16 = v39;
            break;
          }
        }
      }
      ++v11;
      ++v17;
    }
    while ( v11 < 0x25 );
LABEL_24:
    v26 = v42;
LABEL_25:
    if ( v16 < 0 )
    {
      v29 = Src;
      v30 = Buffer;
    }
    else
    {
      memset(v26, 0, 0x20uLL);
      v27 = (char *)(v42 + 16);
      v28 = v41;
      v29 = Src;
      v30 = Buffer;
      if ( v41 )
      {
        v31 = Src + 3;
        do
        {
          memmove(v27, *(v31 - 2), *((unsigned __int16 *)v31 - 12));
          *(v31 - 2) = (char *)Buffer + v27 - (char *)Src;
          v32 = &v27[*((unsigned __int16 *)v31 - 12)];
          *(_WORD *)v32 = 0;
          v32 += 2;
          memmove(v32, *v31, *((unsigned __int16 *)v31 - 4));
          *v31 = (char *)Buffer + v32 - (char *)Src;
          v33 = &v32[*((unsigned __int16 *)v31 - 4)];
          *(_WORD *)v33 = 0;
          v27 = v33 + 2;
          v31 += 4;
          --v28;
        }
        while ( v28 );
        v16 = v39;
      }
    }
    v34 = Object;
    ObpUnlockDirectory((__int64)Object, (__int64)&v47);
    v35 = BufferLength;
    if ( v40 <= BufferLength )
      v35 = v40;
    memmove(v30, v29, v35);
    if ( ReturnLength )
      *ReturnLength = v40;
    if ( v16 >= 0 )
      *Context = v15;
    ObfDereferenceObject(v34);
    ExFreePoolWithTag(v29, 0);
    return v16;
  }
}
