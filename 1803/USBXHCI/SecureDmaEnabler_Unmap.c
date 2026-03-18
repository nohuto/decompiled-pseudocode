/*
 * XREFs of SecureDmaEnabler_Unmap @ 0x1C003DEAC
 * Callers:
 *     SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback @ 0x1C005D7C0 (SecureDmaEnabler_WdfEvtCommonBufferPageCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void *__fastcall SecureDmaEnabler_Unmap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+28h] [rbp-50h]
  _QWORD v9[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = *(_QWORD *)(a1 + 8);
  v9[3] = *(_QWORD *)(a1 + 16);
  v9[5] = a2[2];
  LODWORD(v9[4]) = 5;
  SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (unsigned int)v9, 48, 0, 0);
  v5 = a2[3];
  if ( v5 )
  {
    v6 = VslDeleteSecureSection(v5);
    if ( v6 < 0 )
    {
      v8 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0x13u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v8);
    }
  }
  return memset(a2, 0, 0x20uLL);
}
