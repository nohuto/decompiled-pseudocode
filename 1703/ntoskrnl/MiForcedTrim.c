/*
 * XREFs of MiForcedTrim @ 0x140214F8C
 * Callers:
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140108570 (MiGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiComputeTrimAmount @ 0x140214C68 (MiComputeTrimAmount.c)
 *     MiForceAgeWorkingSet @ 0x140214F58 (MiForceAgeWorkingSet.c)
 */

__int64 __fastcall MiForcedTrim(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  unsigned __int64 AvailablePagesBelowPriority; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _BYTE v14[64]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15; // [rsp+78h] [rbp-11h]
  unsigned __int64 v16; // [rsp+80h] [rbp-9h]
  unsigned __int64 v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]

  v3 = *(unsigned __int16 *)(a1 + 172);
  v18 = 0LL;
  v5 = -1LL;
  v6 = *(_QWORD **)(qword_14036C8F8 + 8 * v3);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v6, 6u);
  v8 = *(_QWORD *)(v6[693] + 2408LL);
  if ( AvailablePagesBelowPriority < v8 )
  {
    v9 = v8 - AvailablePagesBelowPriority;
    if ( v9 < 0x10 )
      v9 = 16LL;
    v10 = v6[720];
    v16 = v9;
    v18 = 0LL;
    v19 = 0LL;
    v15 = v9 + v10;
    memset(v14, 0, sizeof(v14));
    v17 = v9;
    v11 = *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 96);
    if ( v11 )
    {
      v12 = v11 & -(__int64)(AvailablePagesBelowPriority < v6[605] >> 1);
      if ( v12 )
      {
        if ( v12 > v16 )
          v12 = v16;
        v5 = MiTrimWorkingSet(a1, v12, a2, 6u, 9);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 0x3FFF) == 0 )
    MiForceAgeWorkingSet(a1, a2);
  return v5;
}
