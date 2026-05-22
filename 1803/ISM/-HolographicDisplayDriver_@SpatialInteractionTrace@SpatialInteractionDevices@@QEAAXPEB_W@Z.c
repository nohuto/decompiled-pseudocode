/*
 * XREFs of ?HolographicDisplayDriver_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800A45F0
 * Callers:
 *     _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800A7930 (_lambda_df3ea2b2c6b3ab40825ce20637938084_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::HolographicDisplayDriver_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
  {
    LODWORD(v4) = 0;
    if ( a2 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a2[v4] );
    }
    v8 = 0;
    if ( !a2 )
      a2 = &sourceString;
    v6 = a2;
    v7 = 2 * v4 + 2;
    TlgWrite((TraceLoggingHProvider)v3, &unk_1801104B3, 0LL, 0LL, 3u, &pData);
  }
}
