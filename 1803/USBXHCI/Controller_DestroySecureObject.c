/*
 * XREFs of Controller_DestroySecureObject @ 0x1C0053D60
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C000B970 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Controller_DestroySecureObject(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 456);
  if ( v1 )
  {
    memset(v5, 0, sizeof(v5));
    v3 = *(_QWORD *)(a1 + 112);
    LODWORD(v5[4]) = 2;
    v5[3] = v1;
    result = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v5, 40, 0, 0);
    *(_QWORD *)(a1 + 456) = 0LL;
  }
  return result;
}
