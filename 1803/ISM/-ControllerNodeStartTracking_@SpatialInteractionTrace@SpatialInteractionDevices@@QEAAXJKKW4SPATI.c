/*
 * XREFs of ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800D3AC0
 * Callers:
 *     _lambda_b140be1596bfe507958c2c38a65a7737_::operator() @ 0x1800D83A8 (_lambda_b140be1596bfe507958c2c38a65a7737_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8)
{
  struct SpatialInteractionDevices::SpatialInteractionTrace *v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-89h] BYREF
  int v12; // [rsp+3Ch] [rbp-85h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-79h] BYREF
  int *v14; // [rsp+68h] [rbp-59h]
  __int64 v15; // [rsp+70h] [rbp-51h]
  int *v16; // [rsp+78h] [rbp-49h]
  __int64 v17; // [rsp+80h] [rbp-41h]
  int *v18; // [rsp+88h] [rbp-39h]
  __int64 v19; // [rsp+90h] [rbp-31h]
  char *v20; // [rsp+98h] [rbp-29h]
  __int64 v21; // [rsp+A0h] [rbp-21h]
  int *v22; // [rsp+A8h] [rbp-19h]
  __int64 v23; // [rsp+B0h] [rbp-11h]
  int *v24; // [rsp+B8h] [rbp-9h]
  __int64 v25; // [rsp+C0h] [rbp-1h]
  __int64 v26; // [rsp+C8h] [rbp+7h]
  __int64 v27; // [rsp+D0h] [rbp+Fh]
  char *v28; // [rsp+D8h] [rbp+17h]
  __int64 v29; // [rsp+E0h] [rbp+1Fh]
  int v30; // [rsp+110h] [rbp+4Fh] BYREF
  int v31; // [rsp+118h] [rbp+57h] BYREF
  int v32; // [rsp+120h] [rbp+5Fh] BYREF

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v8 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 4u && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0 )
  {
    v8 = (struct SpatialInteractionDevices::SpatialInteractionTrace *)(*((_QWORD *)v9 + 3) & 0x400000000000LL);
    if ( v8 == *((struct SpatialInteractionDevices::SpatialInteractionTrace **)v9 + 3) )
    {
      v14 = &v30;
      v16 = &v31;
      v18 = &v32;
      v20 = &a6;
      v11 = a5;
      v22 = &v11;
      v12 = *(_DWORD *)(a8 + 16);
      v24 = &v12;
      v28 = &a7;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 1LL;
      v23 = 4LL;
      v25 = 4LL;
      v26 = a8;
      v27 = 16LL;
      v29 = 4LL;
      LODWORD(v8) = TlgWrite(v9, &unk_180112E2A, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return (int)v8;
}
