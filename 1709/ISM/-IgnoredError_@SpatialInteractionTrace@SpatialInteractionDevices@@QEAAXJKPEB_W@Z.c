/*
 * XREFs of ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800C367C
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        const wchar_t *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  const wchar_t *v7; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+60h] [rbp+1Fh]
  int *v11; // [rsp+68h] [rbp+27h]
  __int64 v12; // [rsp+70h] [rbp+2Fh]
  const wchar_t *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  int v16; // [rsp+B0h] [rbp+6Fh] BYREF
  int v17; // [rsp+B8h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v10 = 4LL;
    v9 = &v17;
    v12 = 4LL;
    v11 = &v16;
    LODWORD(v6) = 0;
    v7 = &word_1800DF514;
    if ( a4 )
    {
      v7 = a4;
      v6 = -1LL;
      do
        ++v6;
      while ( a4[v6] );
    }
    v13 = v7;
    v14 = 2 * v6 + 2;
    v15 = 0;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1800F2590, 0LL, 0LL, 5u, &pData);
  }
}
