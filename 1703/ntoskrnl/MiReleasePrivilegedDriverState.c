/*
 * XREFs of MiReleasePrivilegedDriverState @ 0x140585D78
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePrivilegedPtes @ 0x1406B5CE8 (MiReleasePrivilegedPtes.c)
 */

void __fastcall MiReleasePrivilegedDriverState(unsigned __int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 i; // r10
  _QWORD *v8; // r10
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  v5 = a1;
  if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v6 = a1 + 8 * (a2 + ((dword_1403E3168 & 0xFFF) != 0) + ((unsigned int)dword_1403E3168 >> 12) - 1LL);
    if ( dword_1403E3168 )
    {
      for ( i = a1 + 8LL * a2; i <= v6; i = v9 + 8 )
      {
        v12 = MI_READ_PTE_LOCK_FREE(i);
        if ( (v12 & 1) == 0 )
          break;
        *v8 = 0LL;
        if ( MiPteInShadowRange((unsigned __int64)v8) )
          MiWritePteShadow();
      }
    }
    MiReleasePrivilegedPtes(v5, (__int64)(v6 - v5 + 8) >> 3);
    if ( a3 && v4 )
    {
      do
      {
        v12 = MI_READ_PTE_LOCK_FREE(v5);
        if ( (v12 & 1) != 0 )
        {
          v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12) - 0x58000000000LL;
          v11 = *(_QWORD *)(v10 + 40);
          if ( (v11 & 0x200000000000000LL) == 0 && ((v11 >> 54) & 7) == 3 )
            MiClearPfnImageVerified(v10, 0);
        }
        v5 += 8LL;
        --v4;
      }
      while ( v4 );
    }
  }
}
