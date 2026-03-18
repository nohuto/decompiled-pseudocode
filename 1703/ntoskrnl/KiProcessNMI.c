/*
 * XREFs of KiProcessNMI @ 0x1401FDD10
 * Callers:
 *     KxNmiInterrupt @ 0x14018C400 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140031B1C (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiCheckForFreezeExecution @ 0x1401FDC10 (KiCheckForFreezeExecution.c)
 */

char __fastcall KiProcessNMI(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 Number; // r15
  unsigned __int64 v4; // rdx
  char v5; // cl
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(_QWORD, __int64); // rdi
  char v9; // si
  char v10; // al

  ((void (__fastcall *)(_QWORD))off_14033B688)(0LL);
  LOBYTE(v2) = KiCheckForFreezeExecution(a1);
  if ( !(_BYTE)v2 )
  {
    Number = KeGetCurrentPrcb()->Number;
    v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[Number];
    v5 = v4 & 0x3F;
    v4 >>= 6;
    v6 = 1LL << v5;
    _m_prefetchw(&qword_140340818[v4]);
    v2 = _InterlockedOr64(&qword_140340818[v4], 1LL << v5);
    if ( (v6 & v2) == 0 )
    {
      ((void (__fastcall *)(__int64))off_14033B688)(1LL);
      v8 = (__int64 (__fastcall *)(_QWORD, __int64))KiNmiCallbackListHead;
      v9 = 0;
      if ( !KiNmiCallbackListHead )
        goto LABEL_6;
      do
      {
        LOBYTE(v7) = v9;
        v10 = (*((__int64 (__fastcall **)(_QWORD, __int64))v8 + 1))(*((_QWORD *)v8 + 2), v7);
        v8 = *(__int64 (__fastcall **)(_QWORD, __int64))v8;
        v9 |= v10;
      }
      while ( v8 );
      if ( !v9 )
      {
LABEL_6:
        while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&KiNMILock) )
        {
          do
            KiCheckForFreezeExecution(a1);
          while ( KiNMILock );
        }
        _InterlockedCompareExchange(&KiBugCheckActive, 1, 0);
        HalHandleNMI(0LL);
        _InterlockedCompareExchange(&KiBugCheckActive, 0, 1);
        KxReleaseSpinLock(&KiNMILock);
      }
      v2 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      _InterlockedAnd64(&qword_140340818[v2], ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
    }
  }
  return v2;
}
