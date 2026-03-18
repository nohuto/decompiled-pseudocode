/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x140026814
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x1400266C0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x14001DE1C (MiCapturePageFileInfoInline.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 */

void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // bp
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rcx

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  while ( (unsigned __int64)v1 < v2 )
  {
    v3 = 48LL * *v1 - 0x58000000000LL;
    v4 = MiLockPageInline(v3);
    v5 = MiCapturePageFileInfoInline((_QWORD *)(v3 + 16), 1, 0);
    v6 = *(_BYTE *)(v3 + 34);
    if ( (v6 & 0x10) == 0 )
      *(_BYTE *)(v3 + 34) = v6 | 0x10;
    v7 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    if ( v5 )
      MiReleasePageFileInfo(v7, v5, 0LL);
    ++v1;
  }
}
