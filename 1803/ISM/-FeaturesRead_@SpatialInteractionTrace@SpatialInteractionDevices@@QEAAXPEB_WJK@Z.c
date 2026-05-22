/*
 * XREFs of ?FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x1800D3FB4
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D6470 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::FeaturesRead_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const wchar_t *v8; // [rsp+58h] [rbp+17h]
  int v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+64h] [rbp+23h]
  int *v11; // [rsp+68h] [rbp+27h]
  __int64 v12; // [rsp+70h] [rbp+2Fh]
  int *v13; // [rsp+78h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+B8h] [rbp+77h] BYREF
  int v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x200000000000LL) == *((_QWORD *)v5 + 3) )
  {
    LODWORD(v6) = 0;
    if ( a2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
    }
    v10 = 0;
    v9 = 2 * v6 + 2;
    v12 = 4LL;
    v11 = &v15;
    v14 = 4LL;
    if ( !a2 )
      a2 = &sourceString;
    v13 = &v16;
    v8 = a2;
    TlgWrite(v5, &unk_18011285D, 0LL, 0LL, 5u, &pData);
  }
}
