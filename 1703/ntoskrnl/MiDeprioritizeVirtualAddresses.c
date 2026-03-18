/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x14007F294
 * Callers:
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MmTrimPagedPool @ 0x1404CCAF8 (MmTrimPagedPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdatePfnPriority @ 0x1401020F8 (MiUpdatePfnPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // r9
  unsigned __int8 v11; // r12
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rcx
  char v18; // bl
  __int64 v19; // r8
  __int64 v20; // rcx
  _DWORD *v21; // rax
  char v22; // [rsp+20h] [rbp-E0h]
  unsigned int v23; // [rsp+24h] [rbp-DCh]
  int v24; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+44h] [rbp-BCh]
  unsigned int v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  void *retaddr; // [rsp+148h] [rbp+48h]

  v29 = 0;
  v23 = a4 & 7;
  v30 = 0LL;
  v31 = 0LL;
  v26 = MiTbFlushType(a3, a2);
  v24 = dword_14036CA68;
  v27 = 4;
  v28 = 20;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v8 + 8 * v9;
  if ( (v10 & 0x10) != 0 )
  {
    v11 = 17;
    v22 = 17;
  }
  else
  {
    SharedVm = MiGetSharedVm(v7);
    v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v11 = v13;
    v22 = v13;
  }
  result = MiIsAddressValid(v8);
  if ( !(_BYTE)result )
    v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v8 < v25 )
  {
    do
    {
      if ( (v8 & 0xFFF) != 0 || (result = MiIsAddressValid(v8), (_BYTE)result) )
      {
        result = *(unsigned int *)v8;
        if ( (result & 1) != 0 )
        {
          v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
          result = MiGetWsleContents(v17, (__int64)(v8 << 25) >> 16);
          v18 = result & 0xF;
          if ( (result & 0xF) != 9 )
          {
            v19 = *(_QWORD *)(v16 + 8);
            if ( v19 >= 0 )
              result = MiDemoteCombinedPte(a3, v8, v19 | 0x8000000000000000uLL);
            if ( (a4 & 8) == 0 )
            {
              result = MiGetPfnPriority(v16);
              if ( v23 != (_DWORD)result )
              {
                MiLockPageAtDpcInline(v20);
                MiUpdatePfnPriority(v16, v23, 1LL);
                result = 0x7FFFFFFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
            if ( (a4 & 0x20) != 0 && v18 != 8 )
            {
              if ( v24 )
                MI_WSLE_LOG_ACCESS(a3, v8);
              MiInsertTbFlushEntry(&v26, (__int64)(v8 << 25) >> 16, 1LL, 0LL);
              result = v28;
              if ( v29 == v28 )
              {
                result = MiFreeWsleList(a3, &v26, 0LL);
                v29 = 0;
              }
            }
          }
        }
      }
      else
      {
        v8 += 4088LL;
      }
      v8 += 8LL;
    }
    while ( v8 < v25 );
    v11 = v22;
  }
  if ( v29 )
    result = MiFreeWsleList(a3, &v26, 0LL);
  if ( v11 != 17 )
  {
    LOBYTE(v15) = v11;
    MiPreUnlockWorkingSetExclusive(a3, v15);
    v21 = (_DWORD *)MiGetSharedVm(a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
    else
      *v21 = 0;
    result = v11;
    __writecr8(v11);
  }
  return result;
}
