/*
 * XREFs of RtlpHpFixedVsFree @ 0x14025C410
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpHpFixedVsFree(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v8; // r13
  int v10; // r14d
  unsigned __int64 v11; // r11
  unsigned __int8 v12; // al
  __int64 v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  bool i; // zf

  v4 = (unsigned __int64)a3 >> 12;
  v5 = (a2 - a1) >> 12;
  v6 = a4;
  v8 = a3;
  v10 = a4 & 1;
  if ( (a4 & 1) == 0 )
    ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
  v11 = v5 + v4 - 1;
  if ( v11 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_9;
  if ( v4 <= 1 )
  {
    if ( v4 != 1 )
      goto LABEL_9;
    v12 = _bittest64(*(const signed __int64 **)(a1 + 56), v5);
    goto LABEL_16;
  }
  v13 = *(_QWORD *)(a1 + 56);
  v14 = (_QWORD *)(v13 + 8 * (v5 >> 6));
  v15 = (_QWORD *)(v13 + 8 * (v11 >> 6));
  if ( v14 == v15 )
  {
    if ( (*v14 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5)) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v5 )
      goto LABEL_17;
    goto LABEL_9;
  }
  for ( i = (*v14 & (-1LL << v5)) == -1LL << v5; ; i = *v14 == -1LL )
  {
    if ( !i )
      goto LABEL_9;
    if ( ++v14 == v15 )
      break;
  }
  if ( (*v14 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11)) != 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11 )
  {
    v12 = 0;
LABEL_16:
    if ( v12 )
      goto LABEL_17;
LABEL_9:
    RtlpLogHeapFailure(8, a1, a2, v8, v6);
    __fastfail(0x32u);
  }
LABEL_17:
  RtlClearBitsEx(a1 + 48, v5, v4);
  if ( !v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
    KeAbPostRelease(a1 + 24);
  }
}
