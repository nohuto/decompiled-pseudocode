/*
 * XREFs of PfSnPopulateReadList @ 0x140442210
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404426E0 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140442728 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140442AE4 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140442C74 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtCreateEvent @ 0x1404BB5A0 (NtCreateEvent.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v3; // rbx
  _QWORD *PoolWithTag; // r13
  __int64 v5; // r15
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  unsigned int *v9; // rax
  __int64 v10; // r9
  int v11; // esi
  char *v12; // rcx
  char *v13; // r12
  char *v14; // r8
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // ebx
  __int64 v18; // rax
  char *v19; // rdi
  unsigned int v20; // edx
  int v21; // r15d
  int v22; // r15d
  wchar_t *v23; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  bool v25; // r10
  __int64 v26; // r14
  unsigned int v27; // r9d
  BOOL v28; // r11d
  __int64 v29; // rcx
  int v30; // eax
  int v31; // edi
  __int64 v32; // rdx
  __int64 i; // r8
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v37; // ecx
  int v38; // eax
  char v39; // [rsp+58h] [rbp-B0h] BYREF
  bool v40; // [rsp+59h] [rbp-AFh]
  int v41; // [rsp+5Ch] [rbp-ACh]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  int v43; // [rsp+68h] [rbp-A0h]
  int v44; // [rsp+6Ch] [rbp-9Ch]
  __int64 v45; // [rsp+70h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-90h]
  HANDLE EventHandle; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h]
  int v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  char *v53; // [rsp+B0h] [rbp-58h]
  char *v54; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v57; // [rsp+100h] [rbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(v1 + 8);
  PoolWithTag = 0LL;
  v5 = a1;
  v52 = a1;
  v6 = *(_KPROCESS **)(v1 + 16);
  v45 = v1;
  v42 = v3;
  v39 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)&v57);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 < 0 )
    goto LABEL_55;
  v9 = *(unsigned int **)v3;
  v10 = v3;
  v48 = 0LL;
  v11 = *(_DWORD *)(v5 + 40);
  v44 = v11;
  v12 = (char *)v9 + v9[21];
  v13 = (char *)v9 + v9[23];
  v14 = (char *)v9 + v9[25];
  v53 = v12;
  v51 = *(_QWORD *)(v3 + 64);
  v15 = *(_QWORD *)(v3 + 72);
  v16 = *(_DWORD *)(v3 + 100) & 7;
  v49 = v15;
  v17 = *(_DWORD *)(v10 + 96) & 7 | (8 * (v16 | 8));
  v54 = v14;
  v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
  v41 = v2;
  if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v18 = (unsigned int)v2;
    v19 = &v12[32 * v2];
    v46 = v18;
    v20 = *((_DWORD *)v19 + 5);
    if ( (v20 & 1) != 0 )
      goto LABEL_35;
    v21 = *(_DWORD *)(v5 + 44);
    v40 = 0;
    v22 = v21 & 1;
    if ( !v22 )
      break;
    if ( ((unsigned __int8)v11 & BYTE1(v20) & 0x7F) != 0 )
      goto LABEL_9;
LABEL_35:
    if ( v39 )
    {
      PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v10 + 56) + 56 * v18));
      v39 = 0;
    }
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
LABEL_28:
    v2 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v41 = v2;
    if ( (unsigned int)v2 >= *(_DWORD *)(v1 + 32) )
    {
      v3 = v42;
      goto LABEL_49;
    }
    v10 = v42;
    v5 = v52;
    v12 = v53;
    v14 = v54;
  }
  if ( !_BitScanForward((unsigned int *)&v37, (v20 >> 8) & 0x7F) )
    v37 = 7;
  v38 = v11 & (1 << v37);
  v50 = v37;
  v40 = v38 != 0;
  if ( ((unsigned __int8)v11 & (unsigned __int8)(v20 >> 1) & 0x7F) == 0 )
  {
    v40 = v38 != 0;
    if ( !v38 )
      goto LABEL_34;
  }
LABEL_9:
  v23 = (wchar_t *)&v14[*((unsigned int *)v19 + 3)];
  PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v23);
  if ( !PrefetchVolumeInfoInList )
  {
    v11 = v44;
LABEL_33:
    v10 = v42;
    v1 = v45;
LABEL_34:
    v18 = v46;
    goto LABEL_35;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v19 + 2) + 24), 0x4C506343u);
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 3) = v22;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v23[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v11 = v44;
    if ( (int)PfSnGetSectionObject(v42, v44, v41, v22, (__int64)EventHandle, (__int64)&v48, (__int64)&v39) >= 0 )
    {
      v25 = v40;
      v26 = v48;
      v27 = 0;
      v28 = 1;
      if ( v40 )
      {
        v27 = 1;
        PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
        v28 = *(_QWORD *)(*(_QWORD *)(v26 + 40) + 16LL) != 0LL;
      }
      v29 = *(int *)v19;
      v30 = v29 + *((_DWORD *)v19 + 1);
      v43 = 0;
      v31 = 0;
      v32 = v29;
      for ( i = v30; v32 < i; ++v32 )
      {
        v34 = *(_DWORD *)&v13[8 * v32 + 4];
        if ( (v34 & 1) == 0 )
        {
          if ( (v34 & 8) != 0 && !v28 )
          {
LABEL_22:
            if ( *(_DWORD *)&v13[8 * v32] || !v25 )
            {
              PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v13[8 * v32] << 9;
              ++v27;
            }
            else
            {
              v31 = 1;
            }
            continue;
          }
          if ( _bittest(&v11, (v34 >> 4) & 7) )
          {
            if ( v22 )
            {
              if ( (v34 & 2) != 0 )
                goto LABEL_22;
            }
            else if ( (v34 & 4) != 0 )
            {
              goto LABEL_22;
            }
          }
        }
      }
      if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v25 || !v28 || v31 )
      {
        PoolWithTag[2] |= v17;
        *PoolWithTag = v26;
        v1 = v45;
        v35 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 24), 1u);
        *(_QWORD *)(v51 + 8 * v35) = PoolWithTag;
        PoolWithTag = 0LL;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v27);
        if ( v39 )
        {
          v39 = 0;
          *(_DWORD *)(v49 + 4 * v35) = v41;
        }
        else
        {
          *(_DWORD *)(v49 + 4 * v35) = -1;
        }
        goto LABEL_28;
      }
    }
    goto LABEL_33;
  }
  LODWORD(v2) = v41;
  v8 = -1073741670;
  v1 = v45;
  v3 = v42;
LABEL_55:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_49:
  if ( v39 )
    PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v3 + 56) + 56LL * (unsigned int)v2));
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess(&v57, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
