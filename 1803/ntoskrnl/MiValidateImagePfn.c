/*
 * XREFs of MiValidateImagePfn @ 0x1405BA580
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeValidateImageData @ 0x1405BA74C (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x1405BA78C (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x140755FAC (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiValidateImagePfn(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, __int64 a7)
{
  _QWORD *v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  ULONG_PTR v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r12
  int ProtectionPfnCompatible; // eax
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  int v22; // ebx
  char v23; // dl
  __int64 result; // rax
  int v25; // [rsp+78h] [rbp+10h]

  v25 = a2;
  v8 = *(_QWORD **)(a1 + 96);
  v9 = 48 * a7 - 0x58000000000LL;
  v10 = v8[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v8[6] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96), a2, a3);
    if ( (int)result < 0 )
      return result;
  }
  v11 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
  v12 = (_QWORD *)v11;
  if ( !v11 )
    return 3221225626LL;
  v13 = (__int64)(v11 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v9);
  *v12 = MiMakeValidPte((unsigned __int64)v12, a7, ProtectionPfnCompatible | 0x20000000u, v15);
  if ( MiPteInShadowRange((unsigned __int64)v12) )
    MiWritePteShadow(v17, v16, v18);
  v19 = 0LL;
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
  {
    v20 = a6 & 2;
    if ( a4 != -1 && v8[4] )
      v20 = a6 & 2 | 1;
    goto LABEL_10;
  }
  v20 = a6 & 2;
  if ( a4 != -1 )
  {
    v21 = MiRevertRelocatedImagePfn(v13, a1);
    v19 = (void *)v21;
    if ( v21 == -1 )
    {
      v19 = 0LL;
LABEL_9:
      v20 = a6 & 2;
      goto LABEL_10;
    }
    if ( v21 )
    {
      LODWORD(v13) = v21;
      goto LABEL_9;
    }
    MiReleasePtes((__int64)&qword_1403CC5E0, (unsigned __int64)v12, 1uLL);
    return 3221225626LL;
  }
LABEL_10:
  v22 = SeValidateImageData(v10, v13, 4096, v25, v20, a3);
  if ( v22 < 0 )
  {
    _InterlockedIncrement(&dword_1403CB4E4);
  }
  else
  {
    v23 = 0;
    if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v9 + 16) >> 5) & 2) != 0 )
      v23 = 3;
    if ( (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 )
      MiMarkPfnVerified(v9, v23);
  }
  MiReleasePtes((__int64)&qword_1403CC5E0, (unsigned __int64)v12, 1uLL);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v22;
}
