/*
 * XREFs of NtQueryValueKey @ 0x14059DE50
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x1408C91B8 (IopProtectSystemPartition.c)
 *     InitSafeBoot @ 0x1408DD13C (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpIsBufferGloballyVisible @ 0x1404A17C8 (CmpIsBufferGloballyVisible.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  KEY_VALUE_INFORMATION_CLASS v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // bl
  unsigned __int8 v12; // r15
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v17; // rdx
  ULONG v18; // esi
  unsigned __int16 v19; // bx
  const void *v20; // rdi
  __int64 v21; // rdi
  struct _KTHREAD *v22; // rax
  int v23; // r9d
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  ULONG v29; // eax
  struct _KTHREAD *v30; // rcx
  bool v31; // zf
  struct _KTHREAD *v32; // rcx
  PSLIST_ENTRY v34; // rdi
  PVOID TransientPoolWithQuotaTag; // rax
  void *v36; // rdi
  unsigned int v37; // edx
  char v38; // cl
  int ValueKey; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  NTSTATUS v41; // [rsp+40h] [rbp-2B8h]
  char v42; // [rsp+44h] [rbp-2B4h]
  char v43; // [rsp+45h] [rbp-2B3h]
  char v45; // [rsp+4Ch] [rbp-2ACh] BYREF
  BOOLEAN v46; // [rsp+4Dh] [rbp-2ABh]
  __int64 v47; // [rsp+50h] [rbp-2A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-298h] BYREF
  PVOID v49; // [rsp+70h] [rbp-288h] BYREF
  size_t Size; // [rsp+78h] [rbp-280h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-278h]
  KEY_VALUE_INFORMATION_CLASS v52; // [rsp+88h] [rbp-270h]
  __int64 v53; // [rsp+90h] [rbp-268h]
  PVOID v54; // [rsp+98h] [rbp-260h] BYREF
  _QWORD v55[2]; // [rsp+A0h] [rbp-258h] BYREF
  PVOID v56; // [rsp+B0h] [rbp-248h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-240h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-238h] BYREF
  _QWORD v59[3]; // [rsp+C8h] [rbp-230h] BYREF
  UNICODE_STRING v60; // [rsp+E0h] [rbp-218h]
  _QWORD v61[8]; // [rsp+F0h] [rbp-208h] BYREF
  UNICODE_STRING v62; // [rsp+130h] [rbp-1C8h] BYREF
  UNICODE_STRING v63; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v64[10]; // [rsp+150h] [rbp-1A8h] BYREF
  void *v65; // [rsp+1A0h] [rbp-158h]
  void *Src; // [rsp+1A8h] [rbp-150h]
  char v67; // [rsp+1B0h] [rbp-148h]
  _BYTE v68[79]; // [rsp+1B1h] [rbp-147h] BYREF
  LARGE_INTEGER v69[4]; // [rsp+200h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+220h] [rbp-D8h] BYREF
  __int64 *v71; // [rsp+240h] [rbp-B8h]
  __int64 v72; // [rsp+248h] [rbp-B0h]
  char *v73; // [rsp+250h] [rbp-A8h]
  __int64 v74; // [rsp+258h] [rbp-A0h]
  _QWORD *v75; // [rsp+260h] [rbp-98h]
  __int64 v76; // [rsp+268h] [rbp-90h]
  _BYTE v77[64]; // [rsp+270h] [rbp-88h] BYREF

  v7 = KeyValueInformationClass;
  v52 = KeyValueInformationClass;
  memset(v69, 0, sizeof(v69));
  v47 = 0LL;
  v53 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v69, 0x20000u);
  v42 = 0;
  v43 = 0;
  v49 = 0LL;
  LODWORD(Size) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v64, 0, 0x48uLL);
  v65 = 0LL;
  Src = 0LL;
  v67 = 0;
  v55[1] = v55;
  v55[0] = v55;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v11 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v46 = v11;
  if ( !v11 )
  {
    v13 = -1073741431;
    v41 = -1073741431;
    v21 = 0LL;
    goto LABEL_76;
  }
  if ( (unsigned int)v7 > KeyValuePartialInformationAlign64 )
  {
    if ( CmpTraceRoutine
      && KeyHandle
      && ObReferenceObjectByHandle(
           KeyHandle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v56,
           0LL) >= 0 )
    {
      v21 = *((_QWORD *)v56 + 1);
      ObfDereferenceObject(v56);
    }
    else
    {
      v21 = 0LL;
    }
    v13 = -1073741811;
    v41 = -1073741811;
    goto LABEL_76;
  }
  v12 = KeGetCurrentThread()->gap0[10];
  v13 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v12, &Object, 0LL);
  v14 = (__int64)Object;
  v49 = Object;
  if ( v13 >= 0 && *(_DWORD *)Object != 1803104306 )
  {
    v13 = -1073741816;
    ObfDereferenceObject(Object);
    v49 = 0LL;
  }
  v41 = v13;
  if ( v13 < 0 )
  {
    v7 = KeyValueInformationClass;
    v21 = 0LL;
    goto LABEL_76;
  }
  if ( CmpTraceRoutine )
  {
    v14 = (__int64)v49;
    if ( v49 )
    {
      v47 = *((_QWORD *)v49 + 1);
      v53 = v47;
    }
  }
  if ( v12 == 1 )
  {
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v15 = *(_DWORD *)&ValueName->Length;
    *(_DWORD *)&v60.Length = v15;
    Buffer = ValueName->Buffer;
    v60.Buffer = Buffer;
    DestinationString = v60;
    if ( (_WORD)v15 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)Buffer + (unsigned __int16)v15;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v18 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v14 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    DestinationString = *ValueName;
    v18 = Length;
  }
  v19 = DestinationString.Length;
  DestinationString.MaximumLength = DestinationString.Length;
  v20 = DestinationString.Buffer;
  if ( v12 || qword_1403CA2E8 && !CmpIsBufferGloballyVisible((unsigned __int64)DestinationString.Buffer) )
  {
    if ( v19 )
    {
      if ( v19 > 0x40u )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v14, v19, 0x6E764D43u);
        if ( !Privileges )
        {
          v13 = -1073741670;
          v41 = -1073741670;
          v7 = KeyValueInformationClass;
          v21 = v47;
          goto LABEL_76;
        }
        v20 = DestinationString.Buffer;
        v19 = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v77;
      }
      if ( Privileges )
      {
        memmove(Privileges, v20, v19);
        v19 = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    v20 = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (DestinationString.Length & 1) != 0 )
  {
    v13 = -1073741811;
    v41 = -1073741811;
    v7 = KeyValueInformationClass;
    v21 = v47;
    goto LABEL_76;
  }
  while ( v19 && !*((_WORD *)v20 + ((unsigned __int64)v19 >> 1) - 1) )
  {
    v19 -= 2;
    DestinationString.Length = v19;
  }
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v43 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
LABEL_55:
    v13 = CmKeyBodyRemapToVirtualForEnum(&v49, v12, 1LL, &v54);
    v41 = v13;
    if ( v13 < 0 )
      goto LABEL_143;
    v65 = KeyValueInformation;
    if ( v18 )
    {
      if ( qword_1403CA2E8 && (v12 || !CmpIsBufferGloballyVisible((unsigned __int64)KeyValueInformation)) )
      {
        if ( stru_140397090.LevelPlus1 > 5
          && (stru_140397090.KeywordAny & 4) != 0
          && (stru_140397090.KeywordAll & 4) == stru_140397090.KeywordAll )
        {
          v58 = 1LL;
          v45 = 3;
          v37 = v18;
          if ( ((v18 - 1) & v18) != 0 )
          {
            v38 = -1;
            do
            {
              ++v38;
              v37 >>= 1;
            }
            while ( v37 );
            v37 = 1 << (v38 + 1);
          }
          v59[0] = v37;
          v71 = &v58;
          v72 = 8LL;
          v73 = &v45;
          v74 = 1LL;
          v75 = v59;
          v76 = 8LL;
          TlgWriteAgg((__int64)&stru_140397090, (unsigned __int8 *)dword_140308515, v26, v27, 5u, &v70);
        }
        if ( v18 > 0x40uLL )
        {
          if ( v18 > 0x1000uLL )
            goto LABEL_113;
          ++dword_1403D1E14;
          v34 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
          if ( !v34 )
          {
            ++dword_1403D1E18;
            v34 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_1403D1E30)(
                                  (unsigned int)dword_1403D1E24,
                                  (unsigned int)dword_1403D1E2C,
                                  (unsigned int)dword_1403D1E28,
                                  &CmpBounceBufferLookaside);
          }
          if ( v34 )
          {
            memset(v34, 0, v18);
            v67 |= 1u;
            Src = v34;
          }
          else
          {
LABEL_113:
            TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v25, v18, 0x42424D43u);
            v36 = TransientPoolWithQuotaTag;
            if ( !TransientPoolWithQuotaTag )
            {
              v13 = -1073741670;
LABEL_64:
              v41 = v13;
              if ( v13 >= 0 )
              {
                v7 = KeyValueInformationClass;
                if ( !v54 )
                  goto LABEL_66;
                v62 = DestinationString;
                ValueKey = CmQueryValueKey(
                             (_DWORD)v54,
                             (unsigned int)&v62,
                             KeyValueInformationClass,
                             (_DWORD)Src,
                             v18,
                             (__int64)&Size);
                v13 = ValueKey;
                v41 = ValueKey;
                if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
                {
LABEL_70:
                  v29 = Size;
                  *ResultLength = Size;
                  if ( v13 != -1073741789 )
                  {
                    if ( v29 < v18 )
                      v18 = v29;
                    if ( v65 != Src )
                      memmove(v65, Src, v18);
                  }
                  v21 = v47;
                  goto LABEL_76;
                }
                if ( ValueKey == -1073741772 )
                {
LABEL_66:
                  v63 = DestinationString;
                  v28 = CmQueryValueKey(
                          (_DWORD)v49,
                          (unsigned int)&v63,
                          KeyValueInformationClass,
                          (_DWORD)Src,
                          v18,
                          (__int64)&Size);
                  v13 = v28;
                  v41 = v28;
                  if ( v28 < 0 && v28 != -2147483643 && v28 != -1073741789 )
                    goto LABEL_69;
                  goto LABEL_70;
                }
LABEL_69:
                v21 = v47;
                goto LABEL_76;
              }
LABEL_143:
              v7 = KeyValueInformationClass;
              goto LABEL_69;
            }
            memset(TransientPoolWithQuotaTag, 0, v18);
            Src = v36;
          }
        }
        else
        {
          memset(v68, 0, v18);
          Src = v68;
        }
      }
      else
      {
        Src = KeyValueInformation;
      }
    }
    else
    {
      Src = 0LL;
    }
    v13 = 0;
    goto LABEL_64;
  }
  v64[0] = v49;
  v64[1] = &DestinationString;
  LODWORD(v64[2]) = KeyValueInformationClass;
  v64[3] = KeyValueInformation;
  LODWORD(v64[4]) = v18;
  v64[5] = ResultLength;
  LOBYTE(v23) = 1;
  v24 = CmpCallCallBacksEx(8, (unsigned int)v64, 0, v23, 23, (__int64)v49, (__int64)v55);
  v13 = v24;
  v41 = v24;
  if ( v24 >= 0 )
  {
    v42 = 1;
    goto LABEL_55;
  }
  v7 = KeyValueInformationClass;
  v21 = v47;
  if ( v24 == -1073740541 )
  {
    v13 = 0;
    v41 = 0;
  }
LABEL_76:
  if ( v54 )
    ObfDereferenceObject(v54);
  if ( v42 )
  {
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v55[0] != v55 )
    {
      memset(v61, 0, 0x38uLL);
      v61[0] = v49;
      LODWORD(v61[1]) = v13;
      LODWORD(v61[3]) = v13;
      v61[2] = v64;
      v59[1] = v61;
      v59[2] = 0LL;
      CmpCallCallBacksEx(23, (unsigned int)v61, 0, 0, 23, (__int64)v49, (__int64)v55);
      v13 = v61[3];
    }
    v41 = v13;
  }
  if ( v43 )
  {
    v30 = KeGetCurrentThread();
    v31 = v30->KernelApcDisable++ == -1;
    if ( v31
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
      && !v30->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v13 = v41;
  }
  if ( v49 )
    ObfDereferenceObject(v49);
  if ( Src && Src != v65 && Src != v68 )
  {
    if ( (v67 & 1) != 0 )
    {
      ++dword_1403D1E1C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_1403D1E10 )
      {
        ++dword_1403D1E20;
        ((void (__fastcall *)(void *, _SLIST_HEADER *))qword_1403D1E38)(Src, &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src);
    }
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    CmpTraceRoutine(p_DestinationString, v69, (unsigned int)v13, (unsigned int)v7, v21, &DestinationString);
  }
  if ( Privileges && Privileges != (PPRIVILEGE_SET)v77 )
    CmSiFreeMemory(Privileges);
  if ( v46 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v32 = KeGetCurrentThread();
    v31 = v32->KernelApcDisable++ == -1;
    if ( v31
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v41;
  }
  return v13;
}
