/*
 * XREFs of ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1800D1B90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     AudioEncoderIdToRenderingMode @ 0x1800D11CC (AudioEncoderIdToRenderingMode.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  int *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 53) + 48LL))(*((_QWORD *)this + 53), v14);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v10 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v14[0];
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == v14[0] )
        v10 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - v14[1];
      if ( v10 )
        *a2 = AudioEncoderIdToRenderingMode(v14);
      else
        return (*(unsigned int (__fastcall **)(SpatialAudioDevicePropertyReader *, unsigned int *))(*(_QWORD *)this
                                                                                                  + 192LL))(
                 this,
                 a2);
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode");
      v19 = 0;
      v22 = 0;
      v17 = &v13;
      v18 = 4;
      v21 = 4;
      v13 = 787;
      v20 = &v12;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioRenderingMode");
      v19 = 0;
      v22 = 0;
      v17 = &v12;
      v18 = 4;
      v21 = 4;
      v12 = 781;
      v13 = -2147024809;
      v20 = &v13;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v6, v7, 5u, &pData);
    }
  }
  return v5;
}
