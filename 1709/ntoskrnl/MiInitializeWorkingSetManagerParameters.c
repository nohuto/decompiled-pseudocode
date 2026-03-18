/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x140159EF4
 * Callers:
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetTrimWhileAgingState @ 0x140131FC4 (MiSetTrimWhileAgingState.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax

  v1 = *(_QWORD *)(a1 + 5680);
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
    *(_BYTE *)(a1 + 6272) = *(_BYTE *)(a1 + 6272) & 0xF8 | 2;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 5776);
  v7 = v5;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  __writecr8(v7);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && v6 < 0x21000 )
    v6 = 135168LL;
  if ( v6 <= 0x200000 )
  {
    v8 = v6 >> 5;
    if ( !(v6 >> 5) )
      v8 = 1LL;
  }
  else
  {
    v8 = ((v6 - 0x200000) >> 7) + 0x10000;
  }
  *(_QWORD *)(v1 + 2392) = v8;
  if ( v6 <= 0x80000 )
  {
    v9 = v6 >> 5;
    if ( !(v6 >> 5) )
      v9 = 1LL;
  }
  else
  {
    v9 = ((v6 - 0x80000) >> 8) + 0x4000;
  }
  *(_QWORD *)(v1 + 2400) = v9;
  *(_QWORD *)(v1 + 2408) = v9;
  v10 = *(_QWORD *)(v1 + 2392) >> 2;
  if ( !v10 )
    v10 = 1LL;
  *(_QWORD *)(v1 + 2384) = v10;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 5680) = v1;
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
      goto LABEL_23;
    LOWORD(stru_140389250.Header.Lock) = 0;
    stru_140389250.Header.WaitListHead.Blink = &stru_140389250.Header.WaitListHead;
    stru_140389250.Header.WaitListHead.Flink = &stru_140389250.Header.WaitListHead;
    stru_140389250.Header.Size = 6;
    stru_140389250.Header.SignalState = 1;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_140400158 || (v13 = qword_140400158 << 8) == 0 )
  {
LABEL_23:
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
  *(_QWORD *)(a1 + 4968) = v13;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_140400160 || (v14 = qword_140400160 << 8) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 4968);
    if ( v14 <= v6 )
    {
      if ( 2 * v14 > v6 )
        v14 += (v6 - v14) >> 1;
      else
        v14 *= 2LL;
    }
  }
  *(_QWORD *)(a1 + 4976) = v14;
  return 1LL;
}
