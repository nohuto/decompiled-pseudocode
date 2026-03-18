/*
 * XREFs of Controller_DestroySecureObject @ 0x1C0056E88
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C0014220 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_DestroySecureObject(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 448);
  if ( v1 )
  {
    memset(v5, 0, sizeof(v5));
    v3 = *(_QWORD *)(a1 + 112);
    LODWORD(v5[4]) = 2;
    v5[3] = v1;
    result = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v5, 40, 0, 0);
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  return result;
}
