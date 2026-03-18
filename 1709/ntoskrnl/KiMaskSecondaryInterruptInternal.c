/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140207268
 * Callers:
 *     KeMaskInterrupt @ 0x140129578 (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140206E6C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rax
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  unsigned __int8 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)(v3 + KiGlobalSecondaryIDT), &v10);
  if ( *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) || (v7 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    KxReleaseSpinLock(v4);
    __writecr8(v10);
    return 0LL;
  }
  else
  {
    v8 = (_QWORD *)(v7 + 8);
    v9 = (_QWORD *)(v7 + 8);
    while ( (v9[12] & 1) != 0 )
    {
      v9 = (_QWORD *)*v9;
      if ( v9 == v8 )
      {
        *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 1;
        goto LABEL_9;
      }
    }
    v5 = 296;
LABEL_9:
    KxReleaseSpinLock(v4);
    __writecr8(v10);
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_1403534B0[0])(a2, 0LL);
    return v5;
  }
}
