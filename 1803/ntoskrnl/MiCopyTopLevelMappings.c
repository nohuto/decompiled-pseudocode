/*
 * XREFs of MiCopyTopLevelMappings @ 0x140070BCC
 * Callers:
 *     MiCreateNewProcessTopLevelMappings @ 0x140070A20 (MiCreateNewProcessTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x14025191C (MiUpdateSystemPdes.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     MiShadowTopLevelPxes @ 0x140070E64 (MiShadowTopLevelPxes.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  __int64 TopPteAddress; // rdi
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx

  TopPteAddress = MiGetTopPteAddress(0LL);
  memmove(
    (void *)(a2 + 2048),
    (const void *)(TopPteAddress + 2048),
    8 * ((((unsigned __int64)qword_1403CD100 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, TopPteAddress + 2048, 256LL);
  v5 = (((unsigned __int64)qword_1403CBB70 >> 39) & 0x1FF) + 1;
  memmove((void *)(a2 + 8LL * (unsigned int)v5), (const void *)(TopPteAddress + 8 * v5), 8LL * (unsigned int)(512 - v5));
  result = 0LL;
  v7 = *(_QWORD *)(a1 + 1024);
  if ( v7 )
    result = *(_QWORD *)(v7 + 8008);
  *(_QWORD *)(a2 + 8 * (((unsigned __int64)qword_1403CB638 >> 39) & 0x1FF)) = result;
  return result;
}
