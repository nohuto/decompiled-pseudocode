/*
 * XREFs of ?StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800D4234
 * Callers:
 *     ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D8C50 (-StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::StopHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3)
{
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v5; // [rsp+50h] [rbp-38h]
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]
  int v11; // [rsp+98h] [rbp+10h] BYREF
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v3 = *((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
  {
    v7 = 0;
    v10 = 0;
    v5 = &v11;
    v8 = &v12;
    v6 = 4;
    v9 = 4;
    TlgWrite((TraceLoggingHProvider)v3, &unk_180112ECD, 0LL, 0LL, 4u, &pData);
  }
}
