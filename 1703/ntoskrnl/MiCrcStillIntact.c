/*
 * XREFs of MiCrcStillIntact @ 0x1400FF430
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCombineCandidate @ 0x1400A33A0 (MiCombineCandidate.c)
 *     MiRecheckVaVm @ 0x1400A5790 (MiRecheckVaVm.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiClearPteAccessed @ 0x1400FAFE0 (MiClearPteAccessed.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiMakeCombineCandidateClean @ 0x140100A60 (MiMakeCombineCandidateClean.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCrcStillIntact(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 Address; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-108h] BYREF
  int v18; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v19; // [rsp+44h] [rbp-F4h]
  __int64 v20; // [rsp+48h] [rbp-F0h]
  __int64 v21; // [rsp+50h] [rbp-E8h]
  __int64 v22; // [rsp+58h] [rbp-E0h]

  v4 = *(_QWORD *)(a3 + 8);
  v8 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiRecheckVaVm(a2, v4) )
    return 0LL;
  v17 = MI_READ_PTE_LOCK_FREE(v8);
  if ( (v17 & 1) == 0 )
    return 0LL;
  v10 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v10);
  if ( (unsigned int)MiCombineCandidate(a1, v10) && (*(_BYTE *)(v10 + 34) & 7) == 6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 == (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) )
    {
      v11 = *(_QWORD *)(v10 + 40);
      if ( (v11 & 0x200000000000000LL) == 0 && (*(_BYTE *)(v10 + 35) & 8) == 0 )
      {
        v12 = v11 & 0xFFFFFFFFFLL;
        if ( v12 != 0xFFFFFFFFDLL && (MiGetWsleContents(v12, v4) & 0xF) != 8 && *(_WORD *)(v10 + 32) == 1 )
        {
          Address = 0LL;
          if ( v13 != 1 || (Address = MiLocateAddress(v4)) != 0 && ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x55) != 0 )
          {
            if ( a4 == 2 )
            {
              if ( (v17 & 0x42) != 0 )
              {
                MiMakeCombineCandidateClean(v8, Address);
                return 1LL;
              }
            }
            else
            {
              if ( a4 != 3 )
                return 1LL;
              v20 = 20LL;
              v18 = MiTbFlushType(a2);
              v19 = v15;
              v21 = v15;
              v22 = v15;
              if ( (unsigned int)MiClearPteAccessed(v16, v10, v8, (__int64)&v18, dword_14036CA68) )
                return 1LL;
            }
          }
        }
      }
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
