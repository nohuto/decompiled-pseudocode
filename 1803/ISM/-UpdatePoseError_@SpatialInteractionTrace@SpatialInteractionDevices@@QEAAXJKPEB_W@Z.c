/*
 * XREFs of ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x1800D3664
 * Callers:
 *     ?TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_JPEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2@Z @ 0x1800D7234 (-TryUpdatePose@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAA_N_J.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::UpdatePoseError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        const wchar_t *a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  int *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  const wchar_t *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  int v15; // [rsp+B0h] [rbp+6Fh] BYREF
  int v16; // [rsp+B8h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  v5 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( *(_DWORD *)v5 > 2u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
  {
    v9 = 4LL;
    v8 = &v15;
    v11 = 4LL;
    v10 = &v16;
    LODWORD(v6) = 0;
    if ( a4 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a4[v6] );
    }
    v14 = 0;
    if ( !a4 )
      a4 = &sourceString;
    v12 = a4;
    v13 = 2 * v6 + 2;
    TlgWrite((TraceLoggingHProvider)v5, &unk_1801128A5, 0LL, 0LL, 5u, &pData);
  }
}
