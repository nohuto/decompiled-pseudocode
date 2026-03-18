/*
 * XREFs of PfSnPopulateReadList @ 0x14053DA20
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtCreateEvent @ 0x14050D940 (NtCreateEvent.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     PsSetCurrentThreadPrefetching @ 0x14053DF00 (PsSetCurrentThreadPrefetching.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14053DF48 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14053E4A0 (PfSnCleanupPrefetchSectionInfo.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // r14
  _KPROCESS *v5; // rcx
  _DWORD *PoolWithTag; // r15
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  unsigned int *v9; // rax
  int v10; // esi
  int v11; // ebx
  char *v12; // rcx
  char *v13; // rdx
  char *v14; // r8
  unsigned int v15; // ebx
  char *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // r12d
  int v20; // r12d
  wchar_t *v21; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  bool v23; // r10
  unsigned int v24; // r9d
  BOOL v25; // r11d
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edi
  __int64 v29; // r8
  char *v30; // rax
  __int64 i; // r8
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v35; // ecx
  int v36; // eax
  char v37; // [rsp+58h] [rbp-B0h] BYREF
  bool v38; // [rsp+59h] [rbp-AFh]
  int v39[2]; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-78h]
  int v46; // [rsp+98h] [rbp-70h]
  char *v47; // [rsp+A0h] [rbp-68h]
  __int64 v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  char *v50; // [rsp+B8h] [rbp-50h]
  char *v51; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  $5BC46E0569261879018906DEC3127961 v54; // [rsp+108h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 8);
  v49 = a1;
  v5 = *(_KPROCESS **)(v1 + 16);
  PoolWithTag = 0LL;
  v43 = v4;
  v41 = v1;
  v37 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v5, 0, (__int64)&v54);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 >= 0 )
  {
    v9 = *(unsigned int **)v4;
    v10 = *(_DWORD *)(v2 + 40);
    v42 = 0LL;
    v11 = *(_DWORD *)(v4 + 100) & 7;
    v12 = (char *)v9 + v9[21];
    v13 = (char *)v9 + v9[23];
    v14 = (char *)v9 + v9[25];
    v50 = v12;
    v48 = *(_QWORD *)(v4 + 64);
    v45 = *(_QWORD *)(v4 + 72);
    v15 = *(_DWORD *)(v4 + 96) & 7 | (8 * (v11 | 8));
    v47 = v13;
    v51 = v14;
    v39[0] = v10;
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v3 >= *(_DWORD *)(v1 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v16 = &v12[32 * v3];
      v17 = v3;
      v40 = v3;
      v18 = *((_DWORD *)v16 + 5);
      if ( (v18 & 1) == 0 )
      {
        v19 = *(_DWORD *)(v2 + 44);
        v38 = 0;
        v20 = v19 & 1;
        if ( !v20 )
        {
          if ( !_BitScanForward((unsigned int *)&v35, (v18 >> 8) & 0x7F) )
            v35 = 7;
          v36 = v10 & (1 << v35);
          v46 = v35;
          v38 = v36 != 0;
          if ( ((unsigned __int8)v10 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 || (v38 = v36 != 0, v36) )
          {
LABEL_9:
            v21 = (wchar_t *)&v14[*((unsigned int *)v16 + 3)];
            PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v21);
            if ( PrefetchVolumeInfoInList )
            {
              PoolWithTag = ExAllocatePoolWithTag(
                              NonPagedPoolNx,
                              (unsigned int)(8 * *((_DWORD *)v16 + 2) + 24),
                              0x4C506343u);
              if ( !PoolWithTag )
              {
                v1 = v41;
                v8 = -1073741670;
                v4 = v43;
                break;
              }
              PoolWithTag[3] = v20;
              *(_QWORD *)PoolWithTag = 0LL;
              PoolWithTag[2] = 0;
              RtlInitUnicodeString(&DestinationString, &v21[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
              v10 = v39[0];
              v4 = v43;
              if ( (int)PfSnGetSectionObject(v43, v39[0], v3, v20, (__int64)EventHandle, (__int64)&v42, (__int64)&v37) >= 0 )
              {
                v23 = v38;
                v24 = 0;
                v25 = 1;
                if ( v38 )
                {
                  v24 = 1;
                  *(_QWORD *)&PoolWithTag[2 * PoolWithTag[2]++ + 4] = 0LL;
                  v25 = *(_QWORD *)(*(_QWORD *)(v42 + 40) + 16LL) != 0LL;
                }
                v26 = *(int *)v16;
                v27 = *((_DWORD *)v16 + 1);
                v28 = 0;
                v29 = (int)v26 + v27;
                if ( v26 < v29 )
                {
                  v30 = &v47[8 * v26 + 4];
                  for ( i = v29 - v26; i; --i )
                  {
                    v32 = *(_DWORD *)v30;
                    if ( (*(_DWORD *)v30 & 1) == 0 )
                    {
                      if ( (v32 & 8) != 0 && !v25 )
                      {
LABEL_23:
                        if ( *((_DWORD *)v30 - 1) || !v23 )
                        {
                          *(_QWORD *)&PoolWithTag[2 * PoolWithTag[2]++ + 4] = (unsigned __int64)*((unsigned int *)v30 - 1) << 9;
                          ++v24;
                        }
                        else
                        {
                          v28 = 1;
                        }
                        goto LABEL_25;
                      }
                      if ( _bittest(&v10, (v32 >> 4) & 7) )
                      {
                        if ( v20 )
                        {
                          if ( (v32 & 2) != 0 )
                            goto LABEL_23;
                        }
                        else if ( (v32 & 4) != 0 )
                        {
                          goto LABEL_23;
                        }
                      }
                    }
LABEL_25:
                    v30 += 8;
                  }
                }
                if ( PoolWithTag[2] != 1 || !v23 || !v25 || v28 )
                {
                  v1 = v41;
                  *((_QWORD *)PoolWithTag + 2) |= v15;
                  *(_QWORD *)PoolWithTag = v42;
                  v33 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
                  *(_QWORD *)(v48 + 8 * v33) = PoolWithTag;
                  PoolWithTag = 0LL;
                  _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v24);
                  if ( v37 )
                  {
                    *(_DWORD *)(v45 + 4 * v33) = v3;
                    v37 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(v45 + 4 * v33) = -1;
                  }
                  goto LABEL_38;
                }
              }
            }
            else
            {
              v10 = v39[0];
              v4 = v43;
            }
          }
          v17 = v40;
          goto LABEL_33;
        }
        if ( ((unsigned __int8)v10 & BYTE1(v18) & 0x7F) != 0 )
          goto LABEL_9;
      }
LABEL_33:
      if ( v37 )
      {
        PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v4 + 56) + 56 * v17));
        v37 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v1 = v41;
LABEL_38:
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      if ( v3 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_49;
      v2 = v49;
      v12 = v50;
      v14 = v51;
    }
  }
  *(_DWORD *)(v1 + 40) = v8;
LABEL_49:
  if ( v37 )
    PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(v4 + 56) + 56LL * v3));
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess(&v54, 0LL);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
