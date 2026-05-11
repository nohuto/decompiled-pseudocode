/*
 * XREFs of USBType1AsyncEndpointAbortFeedback @ 0x1C0003C10
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004BC0 (USBType1StateChangePin.c)
 *     USBType1HandleUrbError @ 0x1C0024FB4 (USBType1HandleUrbError.c)
 * Callees:
 *     <none>
 */

void __fastcall USBType1AsyncEndpointAbortFeedback(__int64 a1)
{
  __int64 v1; // rax
  KSPIN_LOCK *v2; // rsi
  __int64 v3; // rdi
  KIRQL v4; // al
  KIRQL v5; // bp
  void *v6; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (KSPIN_LOCK *)(v1 + 112);
  v3 = *(_QWORD *)(v1 + 152) + 864LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 112));
  v5 = v4;
  if ( *(_BYTE *)(v3 + 52) )
  {
    if ( *(_BYTE *)(v3 + 53) )
    {
      KeResetEvent((PRKEVENT)(v3 + 56));
      KeReleaseSpinLock(v2, v5);
      IoCancelIrp(*(PIRP *)(v3 + 8));
      v6 = (void *)(v3 + 56);
    }
    else
    {
      KeResetEvent((PRKEVENT)(v3 + 80));
      KeReleaseSpinLock(v2, v5);
      v6 = (void *)(v3 + 80);
    }
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
  }
  else
  {
    KeReleaseSpinLock(v2, v4);
  }
}
