/*
 * XREFs of CcZeroDataOnDisk @ 0x14002FEC0
 * Callers:
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MmZeroPageWrite @ 0x14002FF48 (MmZeroPageWrite.c)
 */

__int64 __fastcall CcZeroDataOnDisk(__int64 a1, __int64 *a2, _QWORD *a3)
{
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *a3 - *a2;
  v8 = *a2;
  v7 = v4;
  if ( v4 >= (unsigned int)CcMaxZeroTransferSize )
  {
    if ( _InterlockedIncrement(&CcAggressiveZeroCount) <= CcAggressiveZeroThreshold )
    {
      v5 = (unsigned int)CcMaxZeroTransferSize;
      v3 = 1;
    }
    else
    {
      _InterlockedDecrement(&CcAggressiveZeroCount);
      v5 = 0x10000LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  result = MmZeroPageWrite(a1, &v8, &v7, v5);
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  if ( v3 )
    _InterlockedDecrement(&CcAggressiveZeroCount);
  return result;
}
