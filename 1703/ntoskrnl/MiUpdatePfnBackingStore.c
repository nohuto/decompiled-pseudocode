/*
 * XREFs of MiUpdatePfnBackingStore @ 0x140057400
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x140056D98 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned __int8 v12; // r10

  if ( !a4 )
    MiLockPageInline(a1);
  v8 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3);
  *v9 = v8;
  result = MiPteInShadowRange(v9);
  if ( (_DWORD)result )
    result = MiWritePteShadow(v11);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v12;
    __writecr8(v12);
  }
  return result;
}
