/*
 * XREFs of ?GetVirtualSurroundEffectMode@SpatialAudioDevicePropertyReader@@UEAAJPEAW4VirtualSurroundEffectMode@@@Z @ 0x180028200
 * Callers:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelectionMode@@@Z @ 0x180028FF0 (-GetSpatialRendererSelectionMode@SpatialAudioDeviceStateReader@@UEAAJPEAW4SpatialRendererSelecti.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode(
        SpatialAudioDevicePropertyReader *this,
        enum VirtualSurroundEffectMode *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ebx
  SpatialAudioDeviceStateReader *v6; // rcx
  __int64 (__fastcall *v7)(SpatialAudioDeviceStateReader *__hidden, enum SpatialRendererSelectionMode *); // rax
  int SpatialRendererSelectionMode; // eax
  unsigned int v9; // edi
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  int v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h] BYREF
  int v19; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  int *v22; // [rsp+70h] [rbp+17h]
  __int64 v23; // [rsp+78h] [rbp+1Fh]
  int *v24; // [rsp+80h] [rbp+27h]
  __int64 v25; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 130) )
  {
    if ( a2 )
    {
      v6 = (SpatialAudioDeviceStateReader *)*((_QWORD *)this + 53);
      v7 = *(__int64 (__fastcall **)(SpatialAudioDeviceStateReader *__hidden, enum SpatialRendererSelectionMode *))(*(_QWORD *)v6 + 32LL);
      if ( v7 == SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode )
        SpatialRendererSelectionMode = SpatialAudioDeviceStateReader::GetSpatialRendererSelectionMode(
                                         v6,
                                         (enum SpatialRendererSelectionMode *)&v19);
      else
        SpatialRendererSelectionMode = v7(v6, (enum SpatialRendererSelectionMode *)&v19);
      v17 = SpatialRendererSelectionMode;
      v9 = SpatialRendererSelectionMode;
      if ( SpatialRendererSelectionMode < 0 )
      {
        if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode");
          v18 = 857;
          v22 = &v18;
          v24 = &v17;
          v23 = 4LL;
          v25 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v15, v16, 5u, &pData);
        }
      }
      else
      {
        if ( !v19 )
          v5 = *((_DWORD *)this + 127);
        *(_DWORD *)a2 = v5;
      }
    }
    else
    {
      v9 = -2147024809;
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode");
        v18 = 853;
        v22 = &v18;
        v24 = &v17;
        v23 = 4LL;
        v17 = -2147024809;
        v25 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v13, v14, 5u, &pData);
      }
    }
  }
  else
  {
    v9 = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode");
      v17 = 852;
      v22 = &v17;
      v24 = &v18;
      v23 = 4LL;
      v18 = -2147418113;
      v25 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v11, v12, 5u, &pData);
    }
  }
  return v9;
}
