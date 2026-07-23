/*
 * XREFs of ObCreateObjectTypeEx @ 0x14062189C
 * Callers:
 *     CmpInitializeLightWeightTransactionType @ 0x140620AD0 (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 *     TtmInit @ 0x140627A80 (TtmInit.c)
 *     AlpcpInitSystem @ 0x14064F384 (AlpcpInitSystem.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x140654CA4 (EtwpInitializePrivateSessionDemuxObject.c)
 *     IoCreateObjectTypes @ 0x1408A0A1C (IoCreateObjectTypes.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 *     ObpInsertDirectoryEntry @ 0x140564D6C (ObpInsertDirectoryEntry.c)
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 *     ObpInitObjectTypeSD @ 0x140621E9C (ObpInitObjectTypeSD.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407817D0 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING UnicodeString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        _QWORD *a5)
{
  __int16 *v5; // r13
  unsigned __int16 Length; // cx
  unsigned __int8 v10; // r12
  char v11; // al
  wchar_t *Buffer; // rdx
  int v13; // ecx
  wchar_t v14; // ax
  _OWORD *v15; // rbx
  UNICODE_STRING v16; // xmm6
  int inited; // r14d
  __int64 v18; // rax
  _QWORD *v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int16 v23; // r15
  char *PoolWithTag; // rax
  char *v25; // r15
  char *v26; // r8
  unsigned int v27; // ecx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  PVOID *v34; // rdx
  unsigned int v35; // edi
  PVOID v36; // rdx
  unsigned int v37; // eax
  int v38; // ecx
  __int64 v39; // rdx
  unsigned int MaximumLength; // r9d
  char *v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  int v50; // [rsp+48h] [rbp-C0h]
  _STRING Size; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h] BYREF
  char *DestinationString; // [rsp+70h] [rbp-98h]
  UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v57; // [rsp+A6h] [rbp-62h]
  int v58; // [rsp+A8h] [rbp-60h]
  _QWORD *v59; // [rsp+B0h] [rbp-58h]
  int v60[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v61[14]; // [rsp+F8h] [rbp-10h] BYREF

  v5 = a4;
  v59 = a5;
  if ( !UnicodeString
    || (Length = UnicodeString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && ((unsigned __int8)a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = UnicodeString->Buffer;
  v13 = Length >> 1;
  v50 = *((_DWORD *)a2 + 9);
  if ( !v13 )
  {
LABEL_13:
    v57 = 0;
    v58 = -60876;
    *(_OWORD *)v56 = 0LL;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v56, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &UnicodeString->Length, 64, 0LL, 0, (__int64)v56)) )
    {
      v35 = -1073741771;
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
          memset(v61, 0, 0xD8uLL);
          v43 = *a2;
          BYTE8(v61[2]) = 2;
          v15 = v61;
          v44 = a2[1];
          LODWORD(v61[12]) = 1416258127;
          v61[4] = v43;
          v45 = a2[2];
          v61[5] = v44;
          v46 = a2[3];
          v61[6] = v45;
          v47 = a2[4];
          v61[7] = v46;
          v48 = a2[5];
          v61[8] = v47;
          v49 = a2[6];
          v61[9] = v48;
          *(_QWORD *)&v48 = *((_QWORD *)a2 + 14);
          v61[10] = v49;
          *(_QWORD *)&v61[11] = v48;
          v61[1] = DestinationString_8;
        }
        memset(v60, 0, sizeof(v60));
        v60[0] = 16;
        v60[5] = *((_DWORD *)v15 + 26);
        v60[6] = *((_DWORD *)v15 + 27);
        v60[7] = 2048;
        inited = ObpAllocateObject(v60, 0, (__int64)v15, &DestinationString_8, 216, &v53, 0LL);
        if ( inited < 0 )
        {
          ObpReleaseLookupContext((__int64)v56);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = v53;
          *(_QWORD *)(v53 + 32) = 0LL;
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
                goto LABEL_78;
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
                  v42 = &Size.Buffer[v27];
                  do
                  {
                    if ( v27 < MaximumLength )
                      *v42 = 32;
                    ++v27;
                    ++v42;
                  }
                  while ( v27 < 4 );
                }
                v21 = 0;
                *((_DWORD *)v19 + 48) = *(_DWORD *)v26;
              }
              ExFreePoolWithTag(v25, 0);
              if ( v21 )
              {
LABEL_78:
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
            *((_DWORD *)v19 + 25) = v50;
            if ( (NtGlobalFlag & 0x4000) != 0 )
              *((_BYTE *)v19 + 66) |= 0x20u;
            v28 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
            if ( (v50 & 1) != 0 )
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
              v5 = &ObpDefaultObject;
            }
            v19[4] = v5;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)ObpTypeObjectType + 184, 0LL);
            if ( (*(_BYTE *)(v53 + 26) & 1) != 0 )
              v32 = (_QWORD *)(v53 - 32);
            else
              v32 = 0LL;
            v33 = ObpTypeObjectType;
            v34 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
            if ( *v34 != ObpTypeObjectType )
              __fastfail(3u);
            *v32 = ObpTypeObjectType;
            v32[1] = v34;
            *v34 = v32;
            v35 = -1073741670;
            v33[1] = v32;
            v36 = ObpTypeObjectType;
            v37 = *((_DWORD *)ObpTypeObjectType + 11);
            if ( v37 >= 0x100 )
              inited = -1073741670;
            else
              ObpObjectTypes[v37 - 1] = (__int64)v19;
            ExReleasePushLockEx((ULONG_PTR)v36 + 184, 0LL, v30, v31);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v19 != ObpTypeObjectType )
            {
              if ( inited < 0 )
              {
LABEL_71:
                v35 = inited;
LABEL_72:
                ObpReleaseLookupContext((__int64)v56);
                ObfDereferenceObject(v19);
                return v35;
              }
              v38 = 3;
              v39 = 3LL;
              while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v39], 1LL, 0LL) )
              {
                v39 = ++v38;
                if ( (unsigned __int64)v38 >= 0x100 )
                {
                  inited = -1073741823;
                  goto LABEL_71;
                }
              }
              v10 = v38;
            }
            ObTypeIndexTable[v10] = (__int64)v19;
            *((_BYTE *)v19 + 40) = v10;
            if ( !ObpTypeDirectoryObject
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)v56) )
            {
              ObpReleaseLookupContext((__int64)v56);
              *v59 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_72;
          }
          ObpReleaseLookupContext((__int64)v56);
          ObfDereferenceObject(v19);
        }
        return (unsigned int)inited;
      }
      v35 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v56);
    return v35;
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
