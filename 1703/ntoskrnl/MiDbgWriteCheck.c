/*
 * XREFs of MiDbgWriteCheck @ 0x14021B75C
 * Callers:
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x14017CE14 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x14017CFE0 (MiRealVaToFlushType.c)
 *     MiDbgMarkPfnModified @ 0x14021B0FC (MiDbgMarkPfnModified.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2, int a3)
{
  int v3; // esi
  __int64 *v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  int v11; // r9d
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  int PagePrivilege; // eax
  unsigned __int64 LeafVa; // rax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-79h] BYREF
  int v18; // [rsp+28h] [rbp-71h]
  __int128 v19; // [rsp+30h] [rbp-69h] BYREF
  char v20[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-51h]
  __int128 v22; // [rsp+50h] [rbp-49h]

  *a2 = 0LL;
  v3 = a3;
  v18 = a3;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = MI_READ_PTE_LOCK_FREE(v7);
    v17 = v8;
    if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x10000) == 0 )
    {
LABEL_21:
      if ( (v8 & 0x800) != 0 && (v8 & 0x42) != 0 )
      {
LABEL_28:
        if ( (MiFlags & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1);
          v16 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v16);
        }
        return a1;
      }
      if ( v3 && (unsigned int)MiDbgMarkPfnModified(a1, v8) )
      {
        *a2 = v8;
        v17 = v8 | 0x862;
        _InterlockedIncrement(&dword_14036CAD4);
        *v7 = v8 | 0x862;
        if ( MiPteInShadowRange((unsigned __int64)v7) )
          MiWritePteShadow();
        _InterlockedDecrement(&dword_14036CAD4);
        goto LABEL_28;
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
      if ( (MiFlags & 0x10000) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(48 * v10 - 0x58000000000LL, 1, (unsigned __int64 *)&v19);
        if ( !PagePrivilege )
        {
          v8 = v17;
LABEL_17:
          if ( v13 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), ~v13);
            v8 = v17;
          }
          if ( PagePrivilege < 0 )
            return 0LL;
          v3 = v18;
          goto LABEL_21;
        }
      }
      v8 = v17;
    }
    else
    {
      v13 = 0LL;
      v19 = a1;
      v12 = 0LL;
    }
    if ( HvlpVsmVtlCallVa )
    {
      v21 = v10;
      v22 = v19;
      PagePrivilege = VslpEnterIumSecureMode(1, 230LL, 0LL, (__int64)v20);
    }
    else
    {
      PagePrivilege = 0;
    }
    goto LABEL_17;
  }
  return a1;
}
