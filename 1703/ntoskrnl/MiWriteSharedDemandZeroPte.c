/*
 * XREFs of MiWriteSharedDemandZeroPte @ 0x1400028AC
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 */

__int64 __fastcall MiWriteSharedDemandZeroPte(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 DemandZeroPte; // rax
  __int64 *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx

  v4 = *(_QWORD *)(a2 + 24);
  v6 = a2;
  if ( v4 )
  {
    ++*(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v4 + 1;
    ++*a4;
  }
  else
  {
    DemandZeroPte = MiMakeDemandZeroPte((unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 16)) >> 3);
    *v8 = DemandZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v8) )
      MiWritePteShadow(v9);
    v11 = *(_QWORD *)(v6 + 16) & 0xF800000000000001uLL;
    *(_QWORD *)(v6 + 24) = 1LL;
    *(_QWORD *)(v6 + 16) = v11 | 1;
    ++*(_QWORD *)(v10 + 8);
  }
  *a3 = MiMakePrototypePteDirect(v6) | 8;
  result = MiPteInShadowRange(a3);
  if ( (_DWORD)result )
    return MiWritePteShadow(v13);
  return result;
}
