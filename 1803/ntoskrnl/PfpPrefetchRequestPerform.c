/*
 * XREFs of PfpPrefetchRequestPerform @ 0x140491840
 * Callers:
 *     PfpPrefetchRequest @ 0x14049284C (PfpPrefetchRequest.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400466E0 (PfpCheckPrefetchAbort.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x1404766BC (PfpScenCtxPrefetchAbortSet.c)
 *     PfpPrefetchSharedStart @ 0x140490DA4 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x140490EF0 (PfpPrefetchSharedInitialize.c)
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpVolumeOpenAndVerify @ 0x140492250 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedDeref @ 0x1404925AC (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1404925DC (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchVolumesCleanup @ 0x1404926DC (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x140492788 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 *     PfpPrefetchFilesTrickle @ 0x1404BB614 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchPrivatePages @ 0x1405E85E4 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x14075B918 (PfpPrefetchFiles.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  PVOID PoolWithTag; // rax
  int v4; // ebx
  unsigned int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID v8; // rax
  unsigned int i; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  bool v13; // cf
  int v14; // ecx
  unsigned int v15; // r14d
  int v16; // eax
  bool v17; // zf
  int v19; // eax
  struct _KEVENT *p_Event; // r8
  int v21; // eax
  unsigned int j; // edi
  _QWORD *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int k; // edi
  __int64 v28; // rcx
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v30[28]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v30, 0, sizeof(v30));
  v30[0] = a1;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v30[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  PfpPrefetchSharedInitialize((__int64)PoolWithTag);
  *(_QWORD *)(v30[5] + 24LL) = v30;
  if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v30[5] + 60LL) = 60000;
    *(_DWORD *)(v30[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v30[5] + 60LL) = 250;
    *(_DWORD *)(v30[5] + 56LL) = 15;
  }
  v4 = PfpPrefetchSharedStart(v30[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v30[0] + 81LL);
    if ( *(_BYTE *)(v30[0] + 81LL) )
    {
      _InterlockedAdd(&dword_1403E27D8, 1u);
      p_Event = &Event;
      if ( *(_QWORD *)(v30[0] + 72LL) )
        p_Event = *(struct _KEVENT **)(v30[0] + 72LL);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_1403CD6E0, v5, (__int64)p_Event, 0LL, 0);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v30[0] + 72LL) )
        *(_QWORD *)(v30[0] + 72LL) = &Event;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x48566650u);
      v30[2] = v8;
      if ( !v8 )
        goto LABEL_46;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v10 = (unsigned __int64)i << 6;
        v11 = v10 + v30[2];
        memset((void *)(v10 + v30[2]), 0, 0x20uLL);
        *(_QWORD *)(v11 + 24) |= 0x200000000uLL;
        v12 = v30[2];
        memset((void *)(v10 + v30[2] + 32LL), 0, 0x20uLL);
        *(_QWORD *)(v12 + v10 + 56) |= 0x200000000uLL;
      }
    }
    v13 = (*(_DWORD *)(v30[0] + 80LL) & 4) != 0;
    LODWORD(v30[4]) = v13 ? 16 : 768;
    v30[3] = ExAllocatePoolWithTag(PagedPool, (-(__int64)v13 & 0xFFFFFFFFFFFFE880uLL) + 6160, 0x504D6650u);
    if ( v30[3] )
    {
      if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 || (v21 = *(_DWORD *)(v30[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) )
        {
          v14 = *(_DWORD *)(a1 + 28);
          if ( (_WORD)v14 )
            *(_WORD *)(a1 + 30) = v14 - 1;
        }
        if ( *(_DWORD *)(a1 + 20) )
        {
          v19 = PfpPrefetchPrivatePages(v30);
          v4 = v19;
          if ( v19 == -1073741248 || v19 == -1073741670 || v19 == -1073741801 )
            goto LABEL_26;
        }
        v15 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v30[5],
                        v30[2] + ((unsigned __int64)v15 << 6),
                        *(_QWORD *)(a1 + 32) + 40LL * v15) >= 0 )
            {
              v4 = PfpVolumePrefetchMetadata(v30, v15);
              if ( v4 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v15 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
        {
          v16 = PfpPrefetchFilesTrickle(v30);
          v17 = v16 == -1073741248;
LABEL_22:
          v4 = v16;
          if ( !v17 && v16 != -1073741670 && v16 != -1073741801 )
            v4 = 0;
          goto LABEL_26;
        }
        v24 = PfpPrefetchFiles(v30, 0LL);
        v4 = v24;
        if ( v24 != -1073741248 && v24 != -1073741670 && v24 != -1073741801 )
        {
          if ( !PfpCheckPrefetchAbort(v30) )
          {
            LOBYTE(v25) = 1;
            v16 = PfpPrefetchFiles(v30, v25);
            v17 = v16 == -1073741248;
            goto LABEL_22;
          }
          v4 = -1073741248;
        }
LABEL_26:
        if ( v5 )
        {
          _InterlockedDecrement(&dword_1403E27D8);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_1403CD6E0, v5, 0LL, 1LL, 0);
        }
        goto LABEL_28;
      }
      v30[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v21), 0x68466650u);
      if ( v30[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v30[0] + 12LL); ++j )
        {
          v23 = (_QWORD *)(v30[1] + 32LL * j);
          memset(v23, 0, 0x20uLL);
          v23[3] |= 0x200000000uLL;
        }
        goto LABEL_12;
      }
    }
LABEL_46:
    v4 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v30[1] )
  {
    v26 = v30[0];
    for ( k = 0; k < *(_DWORD *)(v26 + 12); ++k )
    {
      v28 = v30[1] + 32LL * k;
      if ( (*(_QWORD *)(v28 + 24) & 0x400000000LL) != 0 )
      {
        PfpOpenHandleClose(v28, v30[5]);
        v26 = v30[0];
      }
    }
    ExFreePoolWithTag((PVOID)v30[1], 0);
  }
  PfpPrefetchVolumesCleanup(v30);
  if ( v30[3] )
    ExFreePoolWithTag((PVOID)v30[3], 0);
  if ( v30[5] )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(v30[5]);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
