/*
 * XREFs of MiCopyTopLevelMappings @ 0x1400B7AC8
 * Callers:
 *     MiUpdateSystemPdes @ 0x140213694 (MiUpdateSystemPdes.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiGetTopPteAddress @ 0x1400B7D00 (MiGetTopPteAddress.c)
 *     MiShadowTopLevelPxes @ 0x14017C4E4 (MiShadowTopLevelPxes.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  __int64 TopPteAddress; // rdi
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rcx

  TopPteAddress = MiGetTopPteAddress(0LL);
  memmove(
    (void *)(a2 + 2048),
    (const void *)(TopPteAddress + 2048),
    8 * ((((unsigned __int64)qword_140389B40 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, TopPteAddress + 2048, 256LL);
  v5 = (((unsigned __int64)qword_140388958 >> 39) & 0x1FF) + 1;
  memmove((void *)(a2 + 8LL * (unsigned int)v5), (const void *)(TopPteAddress + 8 * v5), 8LL * (unsigned int)(512 - v5));
  result = *(_QWORD *)(a1 + 1024);
  v7 = ((unsigned __int64)qword_1403884B0 >> 39) & 0x1FF;
  if ( result )
  {
    result = *(_QWORD *)(result + 7880);
    *(_QWORD *)(a2 + 8 * v7) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 8 * v7) = 0LL;
  }
  return result;
}
