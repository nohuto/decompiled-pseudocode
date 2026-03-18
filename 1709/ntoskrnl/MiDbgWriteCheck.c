/*
 * XREFs of MiDbgWriteCheck @ 0x140228014
 * Callers:
 *     MiDbgCopyMemory @ 0x1402276C0 (MiDbgCopyMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 *     MiGetLeafVa @ 0x1400D131C (MiGetLeafVa.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiRealVaToFlushType @ 0x14017C880 (MiRealVaToFlushType.c)
 *     MiDbgMarkPfnModified @ 0x1402279A0 (MiDbgMarkPfnModified.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2, int a3)
{
  __int64 *v7; // rdi
  __int64 PteShadow; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  int v11; // r9d
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  NTSTATUS v14; // eax
  unsigned __int64 LeafVa; // rax
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-D0h] BYREF
  char v19[8]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-B0h]
  __int128 v21; // [rsp+50h] [rbp-A8h]

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v7;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    v17 = PteShadow;
    if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x10000) == 0 )
    {
LABEL_21:
      if ( (PteShadow & 0x800) != 0 && (PteShadow & 0x42) != 0 )
      {
LABEL_29:
        if ( (MiFlags & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1);
          v16 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v16);
        }
        return a1;
      }
      if ( a3 && (unsigned int)MiDbgMarkPfnModified(a1, PteShadow) )
      {
        *a2 = PteShadow;
        v17 = PteShadow | 0x862;
        _InterlockedIncrement(&dword_140388CD4);
        *v7 = PteShadow | 0x862;
        if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
        _InterlockedDecrement(&dword_140388CD4);
        goto LABEL_29;
      }
      return 0LL;
    }
    v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v17);
    v10 = v9;
    if ( v11 )
    {
      if ( !MiIsPfnInline(v9) )
        return 0LL;
      v12 = 48 * v10 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        return 0LL;
      v13 = 0x8000000000000000uLL;
      if ( (MiFlags & 0x10000) != 0
        && !(unsigned int)MiGetPagePrivilege(48 * v10 - 0x58000000000LL, 1, (unsigned __int64 *)&v18) )
      {
        goto LABEL_14;
      }
    }
    else
    {
      v13 = 0LL;
      v18 = a1;
      v12 = 0LL;
    }
    if ( HvlpVsmVtlCallVa )
    {
      v20 = v10;
      v21 = v18;
      v14 = VslpEnterIumSecureMode(2u, 230LL, 0, (__int64)v19);
LABEL_18:
      if ( v13 )
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), ~v13);
      if ( v14 < 0 )
        return 0LL;
      goto LABEL_21;
    }
LABEL_14:
    v14 = 0;
    goto LABEL_18;
  }
  return a1;
}
