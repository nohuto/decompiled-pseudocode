/*
 * XREFs of MiDbgWriteCheck @ 0x140261220
 * Callers:
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiRealVaToFlushType @ 0x1400C0374 (MiRealVaToFlushType.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x140260BA0 (MiDbgMarkPfnModified.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2)
{
  __int64 *v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  int v8; // r9d
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  int PagePrivilege; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 LeafVa; // rax
  unsigned int v16; // eax
  __int128 v17[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
    v18 = v6;
    if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x10000) == 0 )
    {
LABEL_18:
      if ( (v6 & 0x800) != 0 && (v6 & 0x42) != 0 )
      {
LABEL_24:
        if ( (MiFlags & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1);
          v16 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v16);
        }
        return a1;
      }
      if ( (unsigned int)MiDbgMarkPfnModified(a1, v6) )
      {
        *a2 = v6;
        v18 = v6 | 0x862;
        _InterlockedIncrement(&dword_1403CBF94);
        *v5 = v6 | 0x862;
        if ( MiPteInShadowRange((unsigned __int64)v5) )
          MiWritePteShadow(v13, v12, v14);
        _InterlockedDecrement(&dword_1403CBF94);
        goto LABEL_24;
      }
      return 0LL;
    }
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL;
    if ( v8 )
    {
      if ( !MiIsPfnInline(v7) )
        return 0LL;
      v9 = 48 * v7 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        return 0LL;
      v10 = 0x8000000000000000uLL;
      if ( (MiFlags & 0x10000) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(48 * v7 - 0x58000000000LL, 1, (unsigned __int64 *)v17);
        if ( !PagePrivilege )
        {
          v6 = v18;
          goto LABEL_15;
        }
      }
      v6 = v18;
    }
    else
    {
      v10 = 0LL;
      v17[0] = a1;
      v9 = 0LL;
    }
    PagePrivilege = KeSetPagePrivilege(v7, v17, 12);
LABEL_15:
    if ( v10 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), ~v10);
      v6 = v18;
    }
    if ( PagePrivilege < 0 )
      return 0LL;
    goto LABEL_18;
  }
  return a1;
}
