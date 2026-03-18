/*
 * XREFs of MiDeleteSystemPte @ 0x140221900
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 * Callees:
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiDeleteSystemPte @ 0x140221900 (MiDeleteSystemPte.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiDeleteSystemPte(__int64 a1, unsigned __int64 a2, int *a3, _QWORD *a4, _DWORD *a5)
{
  int v7; // ebp
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // r10d
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r9
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r9
  _DWORD *v24; // rbx
  struct _KEVENT *v25; // [rsp+30h] [rbp-38h]
  ULONG_PTR v27; // [rsp+78h] [rbp+10h] BYREF
  int *v28; // [rsp+80h] [rbp+18h]
  _QWORD *v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v7 = 0;
  v8 = 1LL;
  v25 = *(struct _KEVENT **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v9 = 0xFFFFF6FB7DBED000uLL;
  while ( 1 )
  {
    PteShadow = *(_QWORD *)a2;
    v11 = 0xFFFFF6FB7DBED000uLL;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v27 = PteShadow;
    if ( !PteShadow )
      goto LABEL_19;
    if ( ((unsigned __int8)PteShadow & (unsigned __int8)v8) != 0 )
      break;
    if ( (PteShadow & 0x800) == 0 )
    {
      MiReleasePageFileSpace(v25, PteShadow);
      v9 = 0xFFFFF6FB7DBED000uLL;
      *(_QWORD *)a2 = 0LL;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        MiWritePteShadow();
        v9 = 0xFFFFF6FB7DBED000uLL;
      }
      v8 = 1LL;
      goto LABEL_15;
    }
    v12 = MiTryDeleteTransitionPte((ULONG_PTR *)a2);
    v8 = 1LL;
    v9 = 0xFFFFF6FB7DBED000uLL;
    if ( v12 != 1 )
    {
      if ( v12 == 3 )
        ++a4[1];
LABEL_15:
      ++a4[3];
      v7 = 1;
      goto LABEL_19;
    }
  }
  if ( MI_GET_PFN_FROM_PTE(&v27, v11, a3, v9) != qword_140389180 )
    v7 = v13;
  MiDeleteValidSystemPage(a1, (ULONG_PTR *)a2, 0LL, (__int64)a4);
  MiInsertTbFlushEntry(v28, (__int64)(a2 << 25) >> 16, 1LL, 0);
  v8 = 1LL;
  v9 = 0xFFFFF6FB7DBED000uLL;
LABEL_19:
  v14 = 0x7FFFFFFFF8LL;
  if ( a2 >= (((unsigned __int64)qword_140388468 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && a2 < (((unsigned __int64)qword_140388460 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v7 = 0;
  }
  if ( v7 == (_DWORD)v8 )
    *a4 += v8;
  v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 0xFFFFF68000000000uLL;
  if ( v15 != ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v17 = *(_QWORD *)v15;
    if ( v15 >= v9 && v15 <= 0xFFFFF6FB7DBED7F8uLL )
      v17 = MiReadPteShadow();
    v27 = v17;
    v18 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(&v27, v14, a3, v9) + 24);
    result = 0x3FFFFFFFFFFFFFFFLL;
    if ( (v18 & 0x3FFFFFFFFFFFFFFFLL) == v19 )
    {
      v21 = (v15 << 25) - (v20 << 25);
      v22 = 0xFFFFF6FB7DBED000uLL;
      v23 = v21 >> 16;
      do
      {
        result = *(_QWORD *)v23;
        if ( v23 >= v22 && v23 <= 0xFFFFF6FB7DBED7F8uLL )
          result = MiReadPteShadow();
        if ( result && ((unsigned __int8)result & (unsigned __int8)v19) == 0 )
          break;
        v23 += 8LL;
      }
      while ( (v23 & 0xFFF) != 0 );
      if ( (v23 & 0xFFF) == 0 )
      {
        v24 = a5;
        result = MiDeleteSystemPte(a1, v15, (_DWORD)v28, (_DWORD)v29, (__int64)a5);
        *v24 = 1;
      }
    }
  }
  return result;
}
