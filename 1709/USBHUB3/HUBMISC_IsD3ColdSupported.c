/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C002B170
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C000F630 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0026548 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v8; // [rsp+20h] [rbp-38h]

  v5 = 3005;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(a1 + 1432),
    (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) >> 12) & 1,
    *(_DWORD *)(a1 + 204) & 1,
    a4,
    v8);
  v6 = *(_QWORD *)(a1 + 1328);
  if ( (*(_DWORD *)(v6 + 1632) & 0x8000) != 0
    && (*(_DWORD *)(v6 + 1636) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 204) & 1) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 2) != 0 )
    {
      if ( *(_DWORD *)(v6 + 2692) == 4 )
      {
        _InterlockedOr((volatile signed __int32 *)(v6 + 1636), 0x20u);
LABEL_8:
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 1432),
          4u,
          5u,
          0x72u,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
        return 3089;
      }
    }
    else if ( *(_DWORD *)(v6 + 2460) == 4 )
    {
      goto LABEL_8;
    }
  }
  return v5;
}
