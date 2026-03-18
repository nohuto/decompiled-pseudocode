/*
 * XREFs of PspGetProperty @ 0x140037DA0
 * Callers:
 *     PsGetThreadProperty @ 0x140038890 (PsGetThreadProperty.c)
 *     PspGetJobProperty @ 0x140038B64 (PspGetJobProperty.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetProperty(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rcx
  _QWORD *v8; // rdi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(a1 + 2);
  v7 = (_QWORD *)*a1;
  v8 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( v7[2] != a2 )
    {
      v7 = (_QWORD *)*v7;
      if ( v7 == a1 )
        goto LABEL_2;
    }
    v8 = v7;
    if ( v7 )
      ObfReferenceObjectWithTag((PVOID)v7[3], 0x72507350u);
  }
LABEL_2:
  KxReleaseSpinLock(a1 + 2);
  __writecr8(CurrentIrql);
  if ( !v8 )
    return 3221226021LL;
  result = 0LL;
  *a3 = v8[3];
  return result;
}
