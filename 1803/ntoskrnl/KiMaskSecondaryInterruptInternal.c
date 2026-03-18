/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140244E88
 * Callers:
 *     KeMaskInterrupt @ 0x1401688E4 (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 *v8; // rcx
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT), &v9);
  if ( *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) || (v7 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    KxReleaseSpinLock(v4);
    __writecr8(v9);
    return 0LL;
  }
  else
  {
    v8 = (__int64 *)(v7 + 8);
    while ( (v8[12] & 1) != 0 )
    {
      v8 = (__int64 *)*v8;
      if ( v8 == (__int64 *)(v7 + 8) )
      {
        *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 1;
        goto LABEL_9;
      }
    }
    v5 = 296;
LABEL_9:
    KxReleaseSpinLock(v4);
    __writecr8(v9);
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_140398850[0])(a2, 0LL);
    return v5;
  }
}
