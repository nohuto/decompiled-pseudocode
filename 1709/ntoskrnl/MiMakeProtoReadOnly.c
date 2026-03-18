/*
 * XREFs of MiMakeProtoReadOnly @ 0x14021CB54
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MiMakeProtoReadOnly(__int64 *a1, __int64 a2)
{
  __int64 PteShadow; // rax
  __int64 v3; // r10
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // r11
  unsigned int v6; // ecx
  char v7; // dl
  struct _KTHREAD *result; // rax

  PteShadow = *a1;
  v3 = a2;
  v4 = (unsigned __int64 *)a1;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v6 = 1;
  v7 = *(_BYTE *)(v3 + 34) >> 6;
  if ( v7 != 1 )
  {
    if ( v7 )
    {
      if ( v7 == 2 )
        v6 = 25;
    }
    else
    {
      v6 = 9;
    }
  }
  *v4 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | (32LL * v6);
  result = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    result = (struct _KTHREAD *)v5;
    if ( (unsigned __int64)v4 <= v5 )
      return MiWritePteShadow();
  }
  return result;
}
