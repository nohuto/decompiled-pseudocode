/*
 * XREFs of MiMakeProtoReadOnly @ 0x140258CD0
 * Callers:
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MiMakeProtoReadOnly(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 *v2; // r10
  __int64 v3; // r9
  char v4; // r8
  __int64 v5; // rdx
  struct _KTHREAD *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = *(_BYTE *)(v3 + 34) >> 6;
  v5 = 1LL;
  if ( v4 != 1 )
  {
    if ( v4 )
    {
      if ( v4 == 2 )
        v5 = 25LL;
    }
    else
    {
      v5 = 9LL;
    }
  }
  *v2 = v1 & 0xFFFFFFFFFFFFFC1FuLL | (32 * v5);
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v2);
  if ( (_DWORD)result )
    return MiWritePteShadow(v8, v7, v9);
  return result;
}
