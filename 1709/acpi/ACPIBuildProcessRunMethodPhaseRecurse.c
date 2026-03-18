/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001D720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  _QWORD *v2; // rbp
  int v4; // edi
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // r14
  _QWORD **v7; // rsi
  int v8; // r12d
  int v9; // r13d
  PSLIST_ENTRY v10; // rdi
  PSLIST_ENTRY *v11; // rax
  const char *v12; // rax
  char v13; // cl
  const char *v14; // r8
  __int64 v15; // rdx
  signed __int32 v16; // ecx
  KIRQL v17; // bl
  int v18; // edx
  KIRQL v20; // [rsp+90h] [rbp+8h]
  _QWORD *v21; // [rsp+98h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  v4 = 0;
  if ( (v1 & 4) != 0 )
  {
    v20 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = (_QWORD *)v2[94];
    while ( 1 )
    {
      v6 = (volatile signed __int32 *)(v5 - 96);
      v7 = (_QWORD **)v5;
      v21 = (_QWORD *)*v5;
      if ( v5 == v2 + 94 || v4 < 0 )
        break;
      v8 = *(_DWORD *)(a1 + 84);
      v9 = *(_DWORD *)(a1 + 80);
      ++dword_1C0079A54;
      v10 = ExpInterlockedPopEntrySList(&BuildRequestLookAsideList);
      if ( v10
        || (++dword_1C0079A58,
            (v10 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0079A70)(
                                   (unsigned int)dword_1C0079A64,
                                   (unsigned int)dword_1C0079A6C,
                                   (unsigned int)dword_1C0079A68)) != 0LL) )
      {
        if ( *((_DWORD *)v6 + 171) )
        {
          _InterlockedIncrement(v6 + 171);
          memset(v10, 0, 0x88uLL);
          LODWORD(v10[1].Next) = 1599293264;
          v10[8].Next = (_SLIST_ENTRY *)&AcpiBuildRunMethodList;
          *((_DWORD *)&v10[1].Next + 2) = 3;
          LODWORD(v10[3].Next) = 0;
          *((_QWORD *)&v10[2].Next + 1) = v6;
          LODWORD(v10[5].Next) = v9;
          HIDWORD(v10[5].Next) = v8;
          HIDWORD(v10[1].Next) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v11 = (PSLIST_ENTRY *)qword_1C0079378;
          if ( *(__int64 **)qword_1C0079378 != &AcpiBuildQueueList )
            __fastfail(3u);
          v10->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v10->Next + 1) = v11;
          *v11 = v10;
          qword_1C0079378 = (__int64)v10;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v4 = 259;
        }
        else
        {
          ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&BuildRequestLookAsideList, v10);
          v4 = -1073741130;
        }
      }
      else
      {
        v4 = -1073741670;
      }
      v5 = *v7;
      if ( (_QWORD *)*v5 == v5 )
        v5 = v21;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
  }
  v12 = (const char *)&unk_1C0067B08;
  v13 = 0;
  v14 = (const char *)&unk_1C0067B08;
  if ( v2 )
  {
    v15 = v2[1];
    v13 = (char)v2;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v12 = (const char *)v2[70];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)v2[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x41u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v4,
    v13,
    v12,
    v14);
  v16 = *(_DWORD *)(a1 + 32);
  if ( v4 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v4;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v16, 1);
  v17 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v18 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v18;
  if ( (v18 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v18 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v17);
  return (unsigned int)v4;
}
