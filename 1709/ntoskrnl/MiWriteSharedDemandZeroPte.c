/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x14012C2A4
 * Callers:
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 DemandZeroPte; // rax
  __int64 *v9; // r8
  __int64 v10; // rax
  signed __int64 v11; // r8
  __int64 result; // rax
  __int64 *v13; // r11

  v5 = *(_QWORD *)(a3 + 24);
  v6 = a3;
  if ( v5 )
  {
    v11 = 1LL;
    ++*(_QWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v5 + 1;
    ++*a5;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(*(_QWORD *)(a3 + 16) >> 59);
    *v9 = DemandZeroPte;
    if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v9, DemandZeroPte);
    v10 = *(_QWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 24) = 1LL;
    *(_QWORD *)(v6 + 16) = v10 & 0xF800000000000000uLL | 1;
    ++a5[1];
    a2 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 1452));
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 6472), 1uLL);
  }
  result = MiMakePrototypePteDirect(v6, a2, v11, a4) | 8;
  *v13 = result;
  if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
    return MiWritePteShadow(v13, result);
  return result;
}
