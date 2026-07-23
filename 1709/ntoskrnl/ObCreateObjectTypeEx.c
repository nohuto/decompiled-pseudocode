/*
 * XREFs of ObCreateObjectTypeEx @ 0x1405C6D8C
 * Callers:
 *     CmpInitializeLightWeightTransactionType @ 0x1405BFB38 (CmpInitializeLightWeightTransactionType.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 *     TtmInit @ 0x1405F0520 (TtmInit.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x1405F1934 (EtwpInitializePrivateSessionDemuxObject.c)
 *     IoCreateObjectTypes @ 0x140841088 (IoCreateObjectTypes.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpAllocateObject @ 0x1404AA4C0 (ObpAllocateObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     ObpInsertDirectoryEntry @ 0x140577208 (ObpInsertDirectoryEntry.c)
 *     ObpInitObjectTypeSD @ 0x1405C7398 (ObpInitObjectTypeSD.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING UnicodeString,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r13
  unsigned __int16 Length; // cx
  unsigned __int8 v10; // r12
  char v11; // al
  wchar_t *Buffer; // rdx
  int v13; // ecx
  wchar_t v14; // ax
  _OWORD *v15; // rbx
  UNICODE_STRING v16; // xmm6
  int inited; // r15d
  __int64 v18; // rax
  _QWORD *v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int16 v23; // r14
  char *PoolWithTag; // rax
  char *v25; // r14
  char *v26; // r8
  unsigned int v27; // ecx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  PVOID *v32; // rdx
  unsigned int v33; // edi
  PVOID v34; // rdx
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // rdx
  unsigned int MaximumLength; // r9d
  char *v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  int v48; // [rsp+48h] [rbp-C0h]
  _STRING Size; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  char *DestinationString; // [rsp+70h] [rbp-98h]
  UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v55; // [rsp+A6h] [rbp-62h]
  int v56; // [rsp+A8h] [rbp-60h]
  _QWORD *v57; // [rsp+B0h] [rbp-58h]
  _DWORD v58[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v59[14]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a4;
  v57 = a5;
  if ( !UnicodeString
    || (Length = UnicodeString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && (a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = UnicodeString->Buffer;
  v13 = Length >> 1;
  v48 = *((_DWORD *)a2 + 9);
  if ( !v13 )
  {
LABEL_13:
    v55 = 0;
    v56 = -60876;
    *(_OWORD *)v54 = 0LL;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v54, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &UnicodeString->Length, 64, 0LL, 0, (__int64)v54)) )
    {
      v33 = -1073741771;
    }
    else
    {
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                                PagedPool,
                                                UnicodeString->MaximumLength,
                                                0x6D4E624Fu);
      if ( DestinationString_8.Buffer )
      {
        DestinationString_8.MaximumLength = UnicodeString->MaximumLength;
        RtlCopyUnicodeString(&DestinationString_8, UnicodeString);
        v15 = ObpTypeObjectType;
        v16 = DestinationString_8;
        if ( !ObpTypeObjectType )
        {
          memset(v59, 0, 0xD8uLL);
          v41 = *a2;
          BYTE8(v59[2]) = 2;
          v15 = v59;
          v42 = a2[1];
          LODWORD(v59[12]) = 1416258127;
          v59[4] = v41;
          v43 = a2[2];
          v59[5] = v42;
          v44 = a2[3];
          v59[6] = v43;
          v45 = a2[4];
          v59[7] = v44;
          v46 = a2[5];
          v59[8] = v45;
          v47 = a2[6];
          v59[9] = v46;
          *(_QWORD *)&v46 = *((_QWORD *)a2 + 14);
          v59[10] = v47;
          *(_QWORD *)&v59[11] = v46;
          v59[1] = DestinationString_8;
        }
        memset(v58, 0, sizeof(v58));
        v58[0] = 16;
        v58[5] = *((_DWORD *)v15 + 26);
        v58[6] = *((_DWORD *)v15 + 27);
        v58[7] = 2048;
        inited = ObpAllocateObject(v58, 0, (__int64)v15, &DestinationString_8, 216, &v51, 0LL);
        if ( inited < 0 )
        {
          ObpReleaseLookupContext((__int64)v54);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = v51;
          *(_QWORD *)(v51 + 32) = 0LL;
          v19 = (_QWORD *)(v18 + 48);
          v20 = (_DWORD)InitializationPhase == 0;
          *(UNICODE_STRING *)(v18 + 64) = v16;
          if ( v20 || (inited = ObpInitObjectTypeSD(v18 + 48, a3), inited >= 0) )
          {
            *(_QWORD *)((char *)v19 + 44) = 0LL;
            *(_QWORD *)((char *)v19 + 52) = 0LL;
            *((_DWORD *)v19 + 15) = 0;
            if ( ObpTypeObjectType )
            {
              v21 = 1;
              if ( (_BYTE)NlsMbCodePageTag )
                LOWORD(v22) = RtlxUnicodeStringToOemSize(UnicodeString);
              else
                v22 = ((unsigned __int64)UnicodeString->Length + 2) >> 1;
              v23 = ((v22 + 2) & 0xFFFC) + 1;
              *(_QWORD *)&Size.Length = v23;
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v23, 0x6E54624Fu);
              DestinationString = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_79;
              memset(PoolWithTag, 0, *(size_t *)&Size.Length);
              Size.MaximumLength = v23;
              v25 = DestinationString;
              Size.Buffer = DestinationString;
              if ( RtlUnicodeStringToAnsiString(&Size, UnicodeString, 0) >= 0 )
              {
                v26 = Size.Buffer;
                v27 = UnicodeString->Length >> 1;
                if ( v27 < 4 )
                {
                  MaximumLength = Size.MaximumLength;
                  v40 = &Size.Buffer[v27];
                  do
                  {
                    if ( v27 < MaximumLength )
                      *v40 = 32;
                    ++v27;
                    ++v40;
                  }
                  while ( v27 < 4 );
                }
                v21 = 0;
                *((_DWORD *)v19 + 48) = *(_DWORD *)v26;
              }
              ExFreePoolWithTag(v25, 0);
              if ( v21 )
              {
LABEL_79:
                v5 = a4;
                if ( UnicodeString->Length < 4u )
                  *((_DWORD *)v19 + 48) = 1063936591;
                else
                  *((_DWORD *)v19 + 48) = *(_DWORD *)UnicodeString->Buffer;
              }
              else
              {
                v5 = a4;
              }
            }
            else
            {
              ObpTypeObjectType = v19;
              *((_DWORD *)v19 + 11) = 1;
              *((_DWORD *)v19 + 48) = 1416258127;
            }
            *((_OWORD *)v19 + 4) = *a2;
            *((_OWORD *)v19 + 5) = a2[1];
            *((_OWORD *)v19 + 6) = a2[2];
            *((_OWORD *)v19 + 7) = a2[3];
            *((_OWORD *)v19 + 8) = a2[4];
            *((_OWORD *)v19 + 9) = a2[5];
            *((_OWORD *)v19 + 10) = a2[6];
            v19[22] = *((_QWORD *)a2 + 14);
            *((_DWORD *)v19 + 25) = v48;
            if ( (NtGlobalFlag & 0x4000) != 0 )
              *((_BYTE *)v19 + 66) |= 0x20u;
            v28 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
            if ( (v48 & 1) != 0 )
              *((_DWORD *)v19 + 26) += v28;
            else
              *((_DWORD *)v19 + 27) += v28;
            if ( !*((_QWORD *)a2 + 11) )
              v19[19] = SeDefaultObjectMethod;
            v19[23] = 0LL;
            v19[1] = v19;
            *v19 = v19;
            v19[26] = v19 + 25;
            v19[25] = v19 + 25;
            if ( (*((_BYTE *)v19 + 66) & 4) != 0 )
            {
              *((_DWORD *)v19 + 23) |= 0x100000u;
              v19[4] = &ObpDefaultObject;
            }
            else
            {
              v19[4] = v5;
            }
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)ObpTypeObjectType + 184, 0LL);
            if ( (*(_BYTE *)(v51 + 26) & 1) != 0 )
              v30 = (_QWORD *)(v51 - 32);
            else
              v30 = 0LL;
            v31 = ObpTypeObjectType;
            v32 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
            if ( *v32 != ObpTypeObjectType )
              __fastfail(3u);
            *v30 = ObpTypeObjectType;
            v30[1] = v32;
            *v32 = v30;
            v33 = -1073741670;
            v31[1] = v30;
            v34 = ObpTypeObjectType;
            v35 = *((_DWORD *)ObpTypeObjectType + 11);
            if ( v35 >= 0x100 )
              inited = -1073741670;
            else
              ObpObjectTypes[v35 - 1] = (__int64)v19;
            ExReleasePushLockEx((ULONG_PTR)v34 + 184, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v19 != ObpTypeObjectType )
            {
              if ( inited < 0 )
              {
LABEL_72:
                v33 = inited;
LABEL_73:
                ObpReleaseLookupContext((__int64)v54);
                ObfDereferenceObject(v19);
                return v33;
              }
              v36 = 3;
              v37 = 3LL;
              while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v37], 1LL, 0LL) )
              {
                v37 = ++v36;
                if ( (unsigned __int64)v36 >= 0x100 )
                {
                  inited = -1073741823;
                  goto LABEL_72;
                }
              }
              v10 = v36;
            }
            ObTypeIndexTable[v10] = (__int64)v19;
            *((_BYTE *)v19 + 40) = v10;
            if ( !ObpTypeDirectoryObject
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)v54) )
            {
              ObpReleaseLookupContext((__int64)v54);
              *v57 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_73;
          }
          ObpReleaseLookupContext((__int64)v54);
          ObfDereferenceObject(v19);
        }
        return (unsigned int)inited;
      }
      v33 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v54);
    return v33;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v13;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v13 )
      goto LABEL_13;
  }
}
