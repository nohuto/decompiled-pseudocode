/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x140142210
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 */

struct _KTHREAD *__fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 DemandZeroPte; // rax
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  signed __int64 v15; // r8
  __int64 PrototypePteDirect; // rax
  __int64 *v17; // r11
  struct _KTHREAD *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8

  v5 = *(_QWORD *)(a3 + 24);
  v6 = a3;
  if ( v5 )
  {
    v15 = 1LL;
    ++*(_QWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v5 + 1;
    ++*a5;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte(*(_QWORD *)(a3 + 16) >> 59);
    *v9 = DemandZeroPte;
    if ( MiPteInShadowRange((unsigned __int64)v9) )
      MiWritePteShadow(v11, v10, v12);
    v13 = *(_QWORD *)(v6 + 16);
    *(_QWORD *)(v6 + 24) = 1LL;
    *(_QWORD *)(v6 + 16) = v13 & 0xF800000000000000uLL | 1;
    v14 = *(unsigned __int16 *)(a1 + 1454);
    ++a5[1];
    a2 = *(_QWORD *)(qword_1403CBD88 + 8 * v14);
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 7560), 1uLL);
  }
  PrototypePteDirect = MiMakePrototypePteDirect(v6, a2, v15, a4);
  *v17 = PrototypePteDirect | 8;
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v17);
  if ( (_DWORD)result )
    return MiWritePteShadow(v20, v19, v21);
  return result;
}
