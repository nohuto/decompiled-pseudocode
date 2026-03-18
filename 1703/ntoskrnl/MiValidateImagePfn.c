/*
 * XREFs of MiValidateImagePfn @ 0x1404234F4
 * Callers:
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeValidateImageData @ 0x140423710 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x140423750 (MiRevertRelocatedImagePfn.c)
 *     SeGetStrongImageReference @ 0x1406F04D4 (SeGetStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(__int64 a1, int a2, unsigned __int64 a3, int a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v7; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // r12
  int ProtectionPfnCompatible; // eax
  void *v16; // rdi
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rax
  char v20; // dl

  v7 = a7;
  v9 = *(_QWORD **)(a1 + 96);
  v10 = 48 * a7 - 0x58000000000LL;
  v11 = v9[1] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v9[2] )
  {
    result = SeGetStrongImageReference(v9[1] & 0xFFFFFFFFFFFFFFF8uLL, &a7);
    if ( (int)result < 0 )
      return result;
    v9[2] = a7;
  }
  v13 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, a3);
  if ( !v13 )
    return 3221225626LL;
  v14 = (__int64)(v13 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v10);
  *(_QWORD *)v13 = MiMakeValidPte(v13, v7, ProtectionPfnCompatible | 0x20000000u);
  if ( MiPteInShadowRange(v13) )
    MiWritePteShadow();
  v16 = 0LL;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v17 = a6 & 2;
    if ( a4 != -1 && *v9 )
      v17 = a6 & 2 | 1;
  }
  else
  {
    v17 = a6 & 2;
    if ( a4 != -1 )
    {
      v19 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1);
      v16 = (void *)v19;
      if ( v19 == -1 )
      {
        v16 = 0LL;
      }
      else
      {
        if ( !v19 )
        {
          MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v13, 1u);
          return 3221225626LL;
        }
        LODWORD(v14) = v19;
      }
      v17 = a6 & 2;
    }
  }
  v18 = SeValidateImageData(v11, v14, 4096, a2, v17, a3);
  if ( v18 >= 0 )
  {
    v20 = 0;
    if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
      v20 = 3;
    MiMarkPfnVerified(v10, v20);
  }
  else
  {
    _InterlockedIncrement(&dword_14036C024);
  }
  MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v13, 1u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  return (unsigned int)v18;
}
