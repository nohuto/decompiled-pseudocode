/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x1800C9878
 * Callers:
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x1800C9080 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800C92F0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[160]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+100h] [rbp+0h] BYREF
  int *v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]
  int *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]

  v13[0] = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 24LL))(*((_QWORD *)this + 75));
  v4 = v13[0];
  if ( v13[0] >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v14);
    v4 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 75) + 40LL))(*((_QWORD *)this + 75), v14);
      v4 = v12;
      if ( v12 < 0 && (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder");
        v19 = 0;
        v22 = 0;
        v17 = v13;
        v18 = 4;
        v21 = 4;
        v13[0] = 255;
        v20 = &v12;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v9, v10, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder");
      v19 = 0;
      v22 = 0;
      v17 = v13;
      v18 = 4;
      v21 = 4;
      v13[0] = 252;
      v20 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v7, v8, 5u, &pData);
    }
  }
  else if ( (unsigned int)dword_18012A260 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder");
    v19 = 0;
    v22 = 0;
    v17 = &v12;
    v18 = 4;
    v21 = 4;
    v12 = 249;
    v20 = v13;
    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v5, v6, 5u, &pData);
  }
  return v4;
}
