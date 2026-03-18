/*
 * XREFs of MiDeleteSystemPte @ 0x14013E694
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiDeleteSystemPte @ 0x14013E694 (MiDeleteSystemPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteSystemPte(__int64 a1, ULONG_PTR a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  struct _KEVENT *v7; // rbp
  __int64 v8; // rax
  int v9; // r9d
  int v10; // eax
  int v11; // ebp
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r10
  _DWORD *v21; // rbx
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+60h] [rbp+18h]

  v26 = a3;
  v7 = *(struct _KEVENT **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v8 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = 1;
  while ( 1 )
  {
    v25 = v8;
    if ( !v8 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    if ( ((unsigned __int8)v8 & (unsigned __int8)v9) != 0 )
      break;
    if ( (v8 & 0x800) == 0 )
    {
      MiReleasePageFileSpace(v7, v8, v9);
      *(_QWORD *)a2 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(a2) )
        MiWritePteShadow(v22);
      goto LABEL_26;
    }
    v10 = MiTryDeleteTransitionPte(a2);
    if ( v10 != 1 )
    {
      if ( v10 == 3 )
        ++a4[1];
LABEL_26:
      ++a4[3];
      v11 = 1;
      goto LABEL_8;
    }
    v8 = MI_READ_PTE_LOCK_FREE(a2);
  }
  v11 = 0;
  if ( 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v25) - 0x58000000000LL != qword_14036CEC0 )
    v11 = v23;
  MiDeleteValidSystemPage(a1, (_QWORD *)a2, 0, (__int64)a4);
  MiInsertTbFlushEntry(v26, (__int64)(a2 << 25) >> 16, 1LL, 0);
LABEL_8:
  if ( a2 >= (((unsigned __int64)qword_14036C128 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a2 < (((unsigned __int64)qword_14036C120 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v11 = 0;
  }
  if ( v11 == 1 )
    ++*a4;
  v12 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 0xFFFFF68000000000uLL;
  if ( v12 != 0xFFFFF6FB7DBEDF68uLL )
  {
    v25 = MI_READ_PTE_LOCK_FREE(v12);
    v17 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(&v25, v14, v15, v16) + 24);
    result = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v17 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      v19 = ((v12 << 25) - (v18 << 25)) >> 16;
      do
      {
        result = MI_READ_PTE_LOCK_FREE(v19);
        if ( result && (result & 1) == 0 )
          break;
        v19 += 8LL;
      }
      while ( (v19 & v20) != 0 );
      if ( (v19 & v20) == 0 )
      {
        v21 = a5;
        result = MiDeleteSystemPte(a1, v12, v26, (_DWORD)a4, (__int64)a5);
        *v21 = 1;
      }
    }
  }
  return result;
}
