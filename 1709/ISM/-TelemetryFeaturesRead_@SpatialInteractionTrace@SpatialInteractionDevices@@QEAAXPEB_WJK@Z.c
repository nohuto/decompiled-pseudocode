/*
 * XREFs of ?TelemetryFeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x1800C383C
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::TelemetryFeaturesRead_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const wchar_t *v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+60h] [rbp+1Fh]
  int v11; // [rsp+64h] [rbp+23h]
  int *v12; // [rsp+68h] [rbp+27h]
  __int64 v13; // [rsp+70h] [rbp+2Fh]
  int *v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+B8h] [rbp+77h] BYREF
  int v17; // [rsp+C0h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a3;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v6 = &word_1800DF514;
    LODWORD(v7) = 0;
    if ( a2 )
    {
      v6 = a2;
      v7 = -1LL;
      do
        ++v7;
      while ( a2[v7] );
    }
    v9 = v6;
    v10 = 2 * v7 + 2;
    v12 = &v16;
    v14 = &v17;
    v11 = 0;
    v13 = 4LL;
    v15 = 4LL;
    TlgWrite(v5, &unk_1800F24C6, 0LL, 0LL, 5u, &pData);
  }
}
