/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x140184940
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400042E0 (MiSetTrimWhileAgingState.c)
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  int v4; // r15d
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 6768);
  if ( v1 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA60uLL, 0x64576D4Du);
    v1 = result;
    if ( !result )
      return result;
    memset((void *)result, 0, 0xA60uLL);
    *(_WORD *)v1 = 0;
    *(_BYTE *)(v1 + 2) = 6;
    v4 = 1;
    *(_DWORD *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 16) = v1 + 8;
    *(_QWORD *)(v1 + 8) = v1 + 8;
    *(_DWORD *)(v1 + 36) = 256;
    *(_DWORD *)(v1 + 144) = 256;
    *(_BYTE *)(a1 + 7352) = *(_BYTE *)(a1 + 7352) & 0xF8 | 2;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 6864);
  v7 = v5;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  __writecr8(v7);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && v6 < 0x21000 )
    v6 = 135168LL;
  v8 = v6 >> 5;
  if ( v6 > 0x200000 )
    v9 = ((v6 - 0x200000) >> 7) + 0x10000;
  else
    v9 = v6 >> 5;
  if ( v9 < 0x480 )
    v9 = 1152LL;
  *(_QWORD *)(v1 + 2392) = v9;
  if ( v6 > 0x80000 )
    v8 = ((v6 - 0x80000) >> 8) + 0x4000;
  if ( v8 < 0x121 )
    v8 = 289LL;
  v10 = v9 >> 2;
  *(_QWORD *)(v1 + 2400) = v8;
  *(_QWORD *)(v1 + 2408) = v8;
  if ( v10 < 0x121 )
    v10 = 289LL;
  *(_QWORD *)(v1 + 2384) = v10;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 6768) = v1;
  MiSetTrimWhileAgingState(a1, 3);
  if ( v6 < 0x18A88 )
    v11 = 100LL;
  else
    v11 = v6 / 0x3E8;
  if ( v11 > v6 )
  {
    v11 = v6 >> 1;
    if ( !(v6 >> 1) )
      v11 = 1LL;
  }
  *(_QWORD *)(v1 + 64) = v11;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v1 + 108) = 0;
    *(_WORD *)(v1 + 104) = 1;
    *(_BYTE *)(v1 + 106) = 6;
    *(_QWORD *)(v1 + 120) = v1 + 112;
    *(_QWORD *)(v1 + 112) = v1 + 112;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_27;
    LOWORD(stru_1403CC4D0.Header.Lock) = 0;
    stru_1403CC4D0.Header.WaitListHead.Blink = &stru_1403CC4D0.Header.WaitListHead;
    stru_1403CC4D0.Header.WaitListHead.Flink = &stru_1403CC4D0.Header.WaitListHead;
    stru_1403CC4D0.Header.Size = 6;
    stru_1403CC4D0.Header.SignalState = 1;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_14044B1B8 || (v13 = qword_14044B1B8 << 8) == 0 )
  {
LABEL_27:
    v12 = *(_QWORD *)(v1 + 2392);
    if ( 2 * v12 > v6 )
    {
      if ( v6 && (v6 - v12) >> 1 )
        v13 = ((v6 - v12) >> 1) + v12;
      else
        v13 = 1LL;
    }
    else
    {
      v13 = 2 * v12;
    }
  }
  v15[0] = v13;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_14044B1C0 || (v14 = qword_14044B1C0 << 8) == 0 )
  {
    v14 = v13;
    if ( v13 <= v6 )
    {
      v14 = 2 * v13;
      if ( 2 * v13 > v6 )
        v14 = v13 + ((v6 - v13) >> 1);
    }
  }
  v15[1] = v14;
  v15[2] = a1;
  KeGenericCallDpc((__int64)MiUpdatePageThresholdsDpc, (__int64)v15);
  return 1LL;
}
