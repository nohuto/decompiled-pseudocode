/*
 * XREFs of PfSnPopulateReadList @ 0x1404A1900
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsSetCurrentThreadPrefetching @ 0x1404A1E30 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1404A2224 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404A23B8 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  _DWORD *PoolWithTag; // r12
  __int64 v4; // r13
  _KPROCESS *v5; // rcx
  unsigned __int32 v6; // r14d
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  unsigned int *v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  char *v12; // rdx
  char *v13; // rdi
  char *v14; // r10
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // ebx
  char *v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // r13d
  int v22; // r13d
  wchar_t *v23; // r14
  __int64 PrefetchVolumeInfoInList; // r15
  int v25; // r14d
  bool v26; // r15
  unsigned int v27; // r9d
  BOOL v28; // r11d
  int v29; // r10d
  __int64 v30; // rax
  int v31; // ecx
  int v32; // r10d
  unsigned int v33; // edx
  __int64 v34; // rcx
  char v35; // al
  _DWORD *v36; // rsi
  _DWORD *v37; // rax
  int v39; // ecx
  int v40; // eax
  char v41; // [rsp+58h] [rbp-B0h] BYREF
  bool v42; // [rsp+59h] [rbp-AFh]
  int v43; // [rsp+5Ch] [rbp-ACh]
  __int64 v44; // [rsp+60h] [rbp-A8h]
  __int64 v45; // [rsp+68h] [rbp-A0h]
  __int64 v46; // [rsp+70h] [rbp-98h]
  __int64 v47; // [rsp+78h] [rbp-90h]
  __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+98h] [rbp-70h]
  __int64 v52; // [rsp+A0h] [rbp-68h]
  char *v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  char *v55; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v58[48]; // [rsp+100h] [rbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(v1 + 8);
  PoolWithTag = 0LL;
  v4 = a1;
  v54 = a1;
  v5 = *(_KPROCESS **)(v1 + 16);
  v6 = 0;
  v44 = v2;
  v47 = v1;
  v41 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v5, 0, (__int64)v58);
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
    goto LABEL_60;
  v9 = *(unsigned int **)v2;
  v10 = v2;
  v11 = *(_DWORD *)(v4 + 40);
  v48 = 0LL;
  LODWORD(v45) = v11;
  v12 = (char *)v9 + v9[21];
  v13 = (char *)v9 + v9[23];
  v14 = (char *)v9 + v9[25];
  v53 = v12;
  v52 = *(_QWORD *)(v2 + 64);
  v15 = *(_QWORD *)(v2 + 72);
  v16 = *(_DWORD *)(v2 + 100) & 7;
  v50 = v15;
  v17 = *(_DWORD *)(v10 + 96) & 7 | (8 * (v16 | 8));
  v55 = v14;
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
  v43 = v6;
  if ( v6 >= *(_DWORD *)(v1 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v18 = &v12[32 * v6];
    v19 = v6;
    v46 = v6;
    v20 = *((_DWORD *)v18 + 5);
    if ( (v20 & 1) != 0 )
      goto LABEL_39;
    v21 = *(_DWORD *)(v4 + 44);
    v42 = 0;
    v22 = v21 & 1;
    if ( v22 )
    {
      if ( ((unsigned __int8)v11 & BYTE1(v20) & 0x7F) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( !_BitScanForward((unsigned int *)&v39, (v20 >> 8) & 0x7F) )
        v39 = 7;
      v40 = v11 & (1 << v39);
      v51 = v39;
      v42 = v40 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)(v20 >> 1) & 0x7F) == 0 )
      {
        v42 = v40 != 0;
        if ( !v40 )
          goto LABEL_38;
      }
    }
    v23 = (wchar_t *)&v14[*((unsigned int *)v18 + 3)];
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v23);
    if ( !PrefetchVolumeInfoInList )
      goto LABEL_37;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v18 + 2) + 24), 0x4C506343u);
    if ( !PoolWithTag )
      break;
    PoolWithTag[3] = v22;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0;
    RtlInitUnicodeString(&DestinationString, &v23[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v25 = v43;
    if ( (int)PfSnGetSectionObject(v44, v45, v43, v22, (__int64)EventHandle, (__int64)&v48, (__int64)&v41) < 0 )
      goto LABEL_37;
    v26 = v42;
    v27 = 0;
    v28 = 1;
    if ( v42 )
    {
      *(_QWORD *)&PoolWithTag[2 * PoolWithTag[2] + 4] = 0LL;
      v27 = 1;
      ++PoolWithTag[2];
      v28 = *(_QWORD *)(*(_QWORD *)(v48 + 40) + 16LL) != 0LL;
    }
    v29 = 0;
    v30 = *(int *)v18;
    v31 = v30 + *((_DWORD *)v18 + 1);
    v43 = 0;
    if ( v30 < v31 )
    {
      v32 = v45;
      while ( 1 )
      {
        v33 = *(_DWORD *)&v13[8 * v30 + 4];
        if ( (v33 & 1) == 0 )
        {
          if ( (v33 & 8) != 0 && !v28 )
          {
LABEL_21:
            if ( *(_DWORD *)&v13[8 * v30] || !v26 )
            {
              *(_QWORD *)&PoolWithTag[2 * PoolWithTag[2]++ + 4] = (unsigned __int64)*(unsigned int *)&v13[8 * v30] << 9;
              ++v27;
            }
            else
            {
              v43 = 1;
            }
            goto LABEL_23;
          }
          if ( _bittest(&v32, (v33 >> 4) & 7) )
          {
            if ( v22 )
            {
              if ( (v33 & 2) != 0 )
                goto LABEL_21;
            }
            else if ( (v33 & 4) != 0 )
            {
              goto LABEL_21;
            }
          }
        }
LABEL_23:
        if ( ++v30 >= v31 )
        {
          v29 = v43;
          break;
        }
      }
    }
    if ( PoolWithTag[2] == 1 && v26 && v28 && !v29 )
    {
LABEL_37:
      v10 = v44;
      v1 = v47;
LABEL_38:
      v19 = v46;
LABEL_39:
      v35 = v41;
      goto LABEL_40;
    }
    v1 = v47;
    *((_QWORD *)PoolWithTag + 2) |= v17;
    *(_QWORD *)PoolWithTag = v48;
    v34 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
    *(_QWORD *)(v52 + 8 * v34) = PoolWithTag;
    PoolWithTag = 0LL;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v27);
    v35 = v41;
    if ( v41 )
    {
      v36 = 0LL;
      v41 = 0;
      *(_DWORD *)(v50 + 4 * v34) = v25;
      goto LABEL_28;
    }
    v10 = v44;
    *(_DWORD *)(v50 + 4 * v34) = -1;
    v19 = v46;
LABEL_40:
    v36 = PoolWithTag;
    if ( v35 )
    {
      PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v10 + 56) + 56 * v19));
      v41 = 0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_28:
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v37 = 0LL;
    v43 = v6;
    if ( !PoolWithTag )
      v37 = v36;
    PoolWithTag = v37;
    if ( v6 >= *(_DWORD *)(v1 + 32) )
    {
      v2 = v44;
      goto LABEL_54;
    }
    v11 = v45;
    v10 = v44;
    v12 = v53;
    v4 = v54;
    v14 = v55;
  }
  v6 = v43;
  v8 = -1073741670;
  v1 = v47;
  v2 = v44;
LABEL_60:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_54:
  if ( v41 )
    PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v2 + 56) + 56LL * v6));
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v58, 0LL);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
