/*
 * XREFs of MiAccessCheck @ 0x14001F4F0
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x1400B5494 (MiAllowGuardFault.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiAccessCheck(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int64 v23[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v7 = BugCheckParameter2;
  if ( a3 == 1 )
  {
    a2 = 0xFFFFF68000000000uLL;
    BugCheckParameter2 = 0x3FFFFFFF78LL;
    if ( v7 > 0xFFFFF6BFFFFFFF78uLL || v7 < 0xFFFFF68000000000uLL )
      return 3221225477LL;
  }
  v9 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(BugCheckParameter2, a2, v9, a4)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8 * ((v7 >> 3) & 0x1FF));
      v12 = v9 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v9;
      v9 = v12;
      if ( (v11 & 0x42) != 0 )
        v9 = v12 | 0x42;
    }
  }
  v23[0] = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( v6 && (v9 & 0x800) == 0 && (v9 & 0x200) == 0 )
      return 3221225477LL;
    return 0LL;
  }
  else
  {
    v13 = a4;
    v14 = (unsigned int)(MiReadWrite[a4 & 7] - (v6 != 0));
    if ( (int)v14 < 10 )
      return 3221225477LL;
    if ( (a4 & 0xFFFFFFF8) != 0x10 || (a5 & 1) != 0 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      return 0LL;
    if ( !(unsigned int)MiAllowGuardFault(a5, v14, v9) )
      return 3221225477LL;
    if ( (v15 & 0x800) == 0 || (v15 & 0x400) != 0 )
    {
      v21 = v15 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v13 & 0xF));
      v23[0] = v21;
      *(_QWORD *)v7 = v21;
      if ( MiPteInShadowRange(v7) )
        MiWritePteShadow(v22, v21);
    }
    else
    {
      if ( a6 == 1 )
      {
        MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v23);
      }
      else
      {
        MiLockTransitionLeafPage(v7);
        v16 = MI_READ_PTE_LOCK_FREE(v7);
        if ( v17 )
          *(_QWORD *)(v17 + 16) = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v13 & 0xF));
      }
      v18 = v16 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v13 & 0xF));
      v23[0] = v18;
      *(_QWORD *)v7 = v18;
      if ( MiPteInShadowRange(v7) )
        MiWritePteShadow(v19, v18);
      if ( !a6 && v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 2147483649LL;
      }
    }
    return 2147483649LL;
  }
}
