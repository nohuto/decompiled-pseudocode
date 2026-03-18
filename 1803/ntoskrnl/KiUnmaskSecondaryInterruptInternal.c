/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140245058
 * Callers:
 *     KeUnmaskInterrupt @ 0x140155330 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x140168E80 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  int v9; // edi
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT), &v11);
  if ( !*(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) )
  {
    v5 = 296;
LABEL_4:
    KxReleaseSpinLock(v4);
    __writecr8(v11);
    return v5;
  }
  v6 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40);
  if ( !v6 )
    goto LABEL_4;
  v7 = (__int64 *)(v6 + 8);
  v8 = (__int64 *)(v6 + 8);
  while ( 1 )
  {
    v9 = -(v8[12] & 1);
    if ( (v8[12] & 1) == 0 )
      break;
    v8 = (__int64 *)*v8;
    if ( v8 == v7 )
      goto LABEL_10;
  }
  *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_10:
  KxReleaseSpinLock(v4);
  __writecr8(v11);
  if ( !v9 )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))off_140398858[0])(a2, 0LL);
  return v5;
}
