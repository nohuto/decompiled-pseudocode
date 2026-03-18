/*
 * XREFs of MiValidateImagePfn @ 0x140509814
 * Callers:
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeValidateImageData @ 0x140509A44 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x140509A84 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1406EC490 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, __int64 a7)
{
  _QWORD *v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  ULONG_PTR v12; // r14
  __int64 v13; // r12
  int ProtectionPfnCompatible; // eax
  void *v15; // rdi
  int v16; // eax
  int v17; // ebx
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  char v21; // dl
  int v22; // [rsp+78h] [rbp+10h]

  v22 = a2;
  v8 = *(_QWORD **)(a1 + 96);
  v9 = 48 * a7 - 0x58000000000LL;
  v10 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) == 0
    || v8[2]
    || (result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3), (int)result >= 0) )
  {
    v12 = MiReservePtes((__int64)&qword_140389360, 1uLL, a3);
    if ( !v12 )
      return 3221225626LL;
    v13 = (__int64)(v12 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v9);
    *(_QWORD *)v12 = MiMakeValidPte(v12, a7, ProtectionPfnCompatible | 0x20000000u);
    if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    v15 = 0LL;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
    {
      v16 = a6 & 2;
      if ( a4 != -1 && *v8 )
        v16 = a6 & 2 | 1;
    }
    else
    {
      v16 = a6 & 2;
      if ( a4 != -1 )
      {
        v19 = MiRevertRelocatedImagePfn((__int64)(v12 << 25) >> 16, a1);
        v15 = (void *)v19;
        if ( v19 == -1 )
        {
          v15 = 0LL;
        }
        else
        {
          if ( !v19 )
          {
            MiReleasePtes((__int64)&qword_140389360, v12, 1u, v20);
            return 3221225626LL;
          }
          LODWORD(v13) = v19;
        }
        v16 = a6 & 2;
      }
    }
    v17 = SeValidateImageData(v10, v13, 4096, v22, v16, a3);
    if ( v17 >= 0 )
    {
      v21 = 0;
      if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v9 + 16) >> 5) & 2) != 0 )
        v21 = 3;
      if ( (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v9, v21);
    }
    else
    {
      _InterlockedIncrement(&dword_140388344);
    }
    MiReleasePtes((__int64)&qword_140389360, v12, 1u, v18);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    return (unsigned int)v17;
  }
  return result;
}
