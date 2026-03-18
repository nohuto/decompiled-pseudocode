/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0035860
 * Callers:
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 * Callees:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C00358C8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(size_t Size, __int16 a2, unsigned __int8 a3)
{
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  else
    return (void *)Win32AllocPoolZInit(Size);
}
