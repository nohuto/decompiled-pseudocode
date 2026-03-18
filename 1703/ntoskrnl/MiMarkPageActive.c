/*
 * XREFs of MiMarkPageActive @ 0x14010A760
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14041D49C (MiInitializeShadowPageTable.c)
 *     MiMapNewSession @ 0x14057EF68 (MiMapNewSession.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 */

__int64 __fastcall MiMarkPageActive(__int64 a1)
{
  unsigned __int8 v2; // cl
  __int64 result; // rax

  v2 = MiLockPageInline(a1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v2 != 17 )
  {
    result = v2;
    __writecr8(v2);
  }
  return result;
}
