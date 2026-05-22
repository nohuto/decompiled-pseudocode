/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180051428
 * Callers:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800509F4 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        const int *a3,
        const int *a4)
{
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const bool *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  const int *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  const int *v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v7 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v9 = a2;
    v10 = 1LL;
    v11 = a3;
    v12 = 4LL;
    v13 = a4;
    v14 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18010E016, 0LL, 0LL, 5u, &pData);
  }
}
