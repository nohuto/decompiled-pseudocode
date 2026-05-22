/*
 * XREFs of ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800C328C
 * Callers:
 *     _lambda_69257da0bcd1689e03b316a9b6592b56_::operator() @ 0x1800C657C (_lambda_69257da0bcd1689e03b316a9b6592b56_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        __int64 a7)
{
  struct SpatialInteractionDevices::SpatialInteractionTrace *v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-71h] BYREF
  int v12; // [rsp+3Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  int *v14; // [rsp+68h] [rbp-41h]
  __int64 v15; // [rsp+70h] [rbp-39h]
  int *v16; // [rsp+78h] [rbp-31h]
  __int64 v17; // [rsp+80h] [rbp-29h]
  char *v18; // [rsp+88h] [rbp-21h]
  __int64 v19; // [rsp+90h] [rbp-19h]
  int *v20; // [rsp+98h] [rbp-11h]
  __int64 v21; // [rsp+A0h] [rbp-9h]
  int *v22; // [rsp+A8h] [rbp-1h]
  __int64 v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 v25; // [rsp+C0h] [rbp+17h]
  char *v26; // [rsp+C8h] [rbp+1Fh]
  __int64 v27; // [rsp+D0h] [rbp+27h]
  int v28; // [rsp+100h] [rbp+57h] BYREF
  int v29; // [rsp+108h] [rbp+5Fh] BYREF

  v29 = a3;
  v28 = a2;
  v8 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 4u && (*((_QWORD *)v9 + 2) & 0x400000000000LL) != 0 )
  {
    v8 = (struct SpatialInteractionDevices::SpatialInteractionTrace *)(*((_QWORD *)v9 + 3) & 0x400000000000LL);
    if ( v8 == *((struct SpatialInteractionDevices::SpatialInteractionTrace **)v9 + 3) )
    {
      v14 = &v28;
      v16 = &v29;
      v18 = &a5;
      v20 = &v11;
      v12 = *(_DWORD *)(a7 + 16);
      v22 = &v12;
      v26 = &a6;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 1LL;
      v11 = a4;
      v21 = 4LL;
      v23 = 4LL;
      v24 = a7;
      v25 = 16LL;
      v27 = 4LL;
      LODWORD(v8) = TlgWrite(v9, &unk_1800F2895, 0LL, 0LL, 9u, &pData);
    }
  }
  return (int)v8;
}
