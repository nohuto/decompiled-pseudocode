/*
 * XREFs of ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x1800C73B8
 * Callers:
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800C3930 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180073DF8 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  struct SpatialInteractionDevices::SpatialInteractionTrace *v8; // rax
  _DWORD *v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  __int64 v13; // [rsp+58h] [rbp-41h]
  int v14; // [rsp+60h] [rbp-39h]
  int v15; // [rsp+64h] [rbp-35h]
  __int16 *v16; // [rsp+68h] [rbp-31h]
  int v17; // [rsp+70h] [rbp-29h]
  int v18; // [rsp+74h] [rbp-25h]
  __int16 *v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+80h] [rbp-19h]
  int v21; // [rsp+84h] [rbp-15h]
  __int16 *v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+90h] [rbp-9h]
  int v24; // [rsp+94h] [rbp-5h]
  char *v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+A0h] [rbp+7h]
  int v27; // [rsp+A4h] [rbp+Bh]
  void *v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+B0h] [rbp+17h]
  int v30; // [rsp+B4h] [rbp+1Bh]
  __int64 v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+C0h] [rbp+27h]
  int v33; // [rsp+C4h] [rbp+2Bh]
  __int16 v34; // [rsp+F0h] [rbp+57h] BYREF
  __int16 v35; // [rsp+F8h] [rbp+5Fh] BYREF
  __int16 v36; // [rsp+100h] [rbp+67h] BYREF

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v8 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
  v9 = (_DWORD *)*((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( *v9 )
    {
      v8 = SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      v10 = (const struct _TlgProvider_t *)*((_QWORD *)v8 + 1);
      if ( *(_DWORD *)v10 > 5u && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0 )
      {
        v8 = (struct SpatialInteractionDevices::SpatialInteractionTrace *)(*((_QWORD *)v10 + 3) & 0x200000000000LL);
        if ( v8 == *((struct SpatialInteractionDevices::SpatialInteractionTrace **)v10 + 3) )
        {
          v15 = 0;
          v18 = 0;
          v21 = 0;
          v24 = 0;
          v27 = 0;
          v30 = 0;
          v33 = 0;
          v16 = &v34;
          v19 = &v35;
          v22 = &v36;
          v25 = &a5;
          v28 = &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest;
          v17 = 2;
          v20 = 2;
          v23 = 2;
          v31 = a7;
          v13 = a1;
          v14 = 16;
          v26 = 4;
          v29 = 28;
          v32 = 28;
          LODWORD(v8) = TlgWrite(v10, &unk_1800F2648, 0LL, 0LL, 9u, &pData);
        }
      }
    }
  }
  return (int)v8;
}
