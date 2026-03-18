/*
 * XREFs of MI_MAKE_PROTECT_WRITE_COPY @ 0x1400C3000
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14026AEC0 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_MAKE_PROTECT_WRITE_COPY(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x80u) != 0LL )
  {
    *v2 = result | 0x20;
    result = MiPteInShadowRange((unsigned __int64)v2);
    if ( (_DWORD)result )
      return (__int64)MiWritePteShadow(v4, v3, v5);
  }
  return result;
}
