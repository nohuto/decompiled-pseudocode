/*
 * XREFs of PsTransferProcessQuotaToSharedQuota @ 0x14013DF38
 * Callers:
 *     AlpcpTransferQuotaMessage @ 0x1404301C0 (AlpcpTransferQuotaMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTransferProcessQuotaToSharedQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  result = *(_QWORD *)(a1 + 1040);
  if ( a2 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 792), -a2);
  _InterlockedIncrement((volatile signed __int32 *)(result + 512));
  return result;
}
