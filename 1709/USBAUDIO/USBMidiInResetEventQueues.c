/*
 * XREFs of USBMidiInResetEventQueues @ 0x1C00062E0
 * Callers:
 *     USBMidiInStateChangePin @ 0x1C00063A0 (USBMidiInStateChangePin.c)
 * Callees:
 *     memset @ 0x1C0008440 (memset.c)
 */

void __fastcall USBMidiInResetEventQueues(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  KSPIN_LOCK *v3; // rbp
  KIRQL v4; // al
  __int64 v5; // rdi
  KIRQL v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 136);
  v3 = (KSPIN_LOCK *)(v1 + 96);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_BYTE *)(v2 + 32) = 0;
  v5 = v2 + 64;
  v6 = v4;
  while ( *(_QWORD *)v5 != v5 )
  {
    v7 = *(_QWORD **)v5;
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *(_QWORD *)v5 = v8;
    *(_QWORD *)(v8 + 8) = v5;
    memset(v7, 0, 0x20uLL);
    v9 = *(_QWORD **)(v2 + 88);
    if ( *v9 != v2 + 80 )
      __fastfail(3u);
    *v7 = v2 + 80;
    v7[1] = v9;
    *v9 = v7;
    *(_QWORD *)(v2 + 88) = v7;
  }
  KeReleaseSpinLock(v3, v6);
}
