/*
 * XREFs of MiMakeProtoReadOnly @ 0x140214A0C
 * Callers:
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

struct _KTHREAD *__fastcall MiMakeProtoReadOnly(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 *v3; // r10
  __int64 v4; // rdx
  char v5; // cl
  struct _KTHREAD *result; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = 1LL;
  v5 = *(_BYTE *)(v2 + 34) >> 6;
  if ( v5 != 1 )
  {
    if ( *(_BYTE *)(v2 + 34) >= 0x40u )
    {
      if ( v5 == 2 )
        v4 = 25LL;
    }
    else
    {
      v4 = 9LL;
    }
  }
  *v3 = v1 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v4);
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v3);
  if ( (_DWORD)result )
    return MiWritePteShadow();
  return result;
}
