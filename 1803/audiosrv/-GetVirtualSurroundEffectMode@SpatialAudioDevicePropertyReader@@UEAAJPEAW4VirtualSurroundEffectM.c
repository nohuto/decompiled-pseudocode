/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x18004C4B0
 * Callers:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x1800509E4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x18004D5B0 (-GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelecti.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // ebx
  SpatialAudioDeviceStateReader *v8; // rcx
  __int64 (__fastcall *v9)(SpatialAudioDeviceStateReader *__hidden, enum SpatialRendererSelectionMode *); // rax
  int SpatialRendererSelectionMode; // eax
  const GUID *v11; // r8
  const GUID *v12; // r9
  unsigned int v13; // edi
  int v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+34h] [rbp-25h] BYREF
  int v17; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v19; // [rsp+60h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+Fh]
  int *v21; // [rsp+70h] [rbp+17h]
  __int64 v22; // [rsp+78h] [rbp+1Fh]
  int *v23; // [rsp+80h] [rbp+27h]
  __int64 v24; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v7 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      v8 = (SpatialAudioDeviceStateReader *)*((_QWORD *)this + 52);
      v9 = *(__int64 (__fastcall **)(SpatialAudioDeviceStateReader *__hidden, enum SpatialRendererSelectionMode *))(*(_QWORD *)v8 + 32LL);
      if ( v9 == SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode )
        SpatialRendererSelectionMode = SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode(
                                         v8,
                                         (enum SpatialRendererSelectionMode *)&v17);
      else
        SpatialRendererSelectionMode = v9(v8, (enum SpatialRendererSelectionMode *)&v17);
      v15 = SpatialRendererSelectionMode;
      v13 = SpatialRendererSelectionMode;
      if ( SpatialRendererSelectionMode < 0 )
      {
        if ( (unsigned int)dword_1801883B0 > 2 )
        {
          v20 = 63LL;
          v19 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
          v16 = 857;
          v21 = &v16;
          v22 = 4LL;
          v23 = &v15;
          v24 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v11, v12, 5u, &pData);
        }
      }
      else
      {
        if ( !v17 )
          v7 = *((_DWORD *)this + 125);
        *(_DWORD *)a2 = v7;
      }
    }
    else
    {
      v13 = -2147024809;
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v20 = 63LL;
        v19 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
        v16 = 853;
        v21 = &v16;
        v22 = 4LL;
        v15 = -2147024809;
        v23 = &v15;
        v24 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v5, v6, 5u, &pData);
      }
    }
  }
  else
  {
    v13 = -2147418113;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v20 = 63LL;
      v19 = "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      v15 = 852;
      v21 = &v15;
      v22 = 4LL;
      v16 = -2147418113;
      v23 = &v16;
      v24 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v5, v6, 5u, &pData);
    }
  }
  return v13;
}
