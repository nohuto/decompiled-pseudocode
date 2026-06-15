/*
 * XREFs of ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800C71D8
 * Callers:
 *     s_midiOpenPort @ 0x1800C7410 (s_midiOpenPort.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall GetKsMidiDeviceInfo(const unsigned __int16 *a1, unsigned __int16 **a2, unsigned int *a3)
{
  unsigned __int16 *v5; // rdi
  int ObjectProperties; // ebx
  __int64 Property; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const unsigned __int16 *v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // ecx
  unsigned __int16 *v18; // rax
  __int64 v20; // [rsp+20h] [rbp-79h]
  __int64 v21; // [rsp+28h] [rbp-71h]
  __int64 v22; // [rsp+28h] [rbp-71h]
  __int64 v23; // [rsp+30h] [rbp-69h]
  __int64 v24; // [rsp+30h] [rbp-69h]
  unsigned int v25; // [rsp+40h] [rbp-59h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int16 *v27; // [rsp+50h] [rbp-49h] BYREF
  DEVPROPKEY v28; // [rsp+60h] [rbp-39h]
  int v29; // [rsp+74h] [rbp-25h]
  __int64 v30; // [rsp+78h] [rbp-21h]
  __int128 v31; // [rsp+80h] [rbp-19h]
  int v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+94h] [rbp-5h]
  __int64 v34; // [rsp+98h] [rbp-1h]
  __int128 v35; // [rsp+A0h] [rbp+7h]
  int v36; // [rsp+B0h] [rbp+17h]
  int v37; // [rsp+B4h] [rbp+1Bh]
  __int64 v38; // [rsp+B8h] [rbp+1Fh]

  v28 = DEVPKEY_DeviceInterface_ClassGuid;
  v32 = 1;
  v36 = 2;
  v25 = 0;
  v5 = 0LL;
  v31 = DEVPKEY_KsMidiPort_KsFilterInterfaceId;
  v26 = 0LL;
  v35 = DEVPKEY_KsMidiPort_KsPinId;
  v27 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v33 = 0;
  v34 = 0LL;
  v37 = 0;
  v38 = 0LL;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
  {
    Property = DevFindProperty(&DEVPKEY_DeviceInterface_ClassGuid, 0LL, 0LL, v25, v26, &v25, &v26);
    if ( !Property || *(_DWORD *)(Property + 32) != 13 )
      goto LABEL_20;
    v8 = *(_QWORD **)(Property + 40);
    v9 = *v8 - DEVINTERFACE_MIDI_OUTPUT;
    if ( *v8 == DEVINTERFACE_MIDI_OUTPUT )
      v9 = v8[1] - 0x1428BFEBB3BBD480LL;
    if ( v9 )
    {
      v10 = *v8 - DEVINTERFACE_MIDI_INPUT;
      if ( *v8 == DEVINTERFACE_MIDI_INPUT )
        v10 = v8[1] - 0x2BE247378B6F3FB7LL;
      if ( v10 )
      {
        ObjectProperties = -2147024809;
        goto LABEL_21;
      }
    }
    v11 = DevFindProperty(&DEVPKEY_KsMidiPort_KsFilterInterfaceId, 0LL, 0LL, v25, v26, v21, v23);
    if ( !v11 || *(_DWORD *)(v11 + 32) != 18 )
    {
LABEL_20:
      ObjectProperties = -2147023728;
      goto LABEL_21;
    }
    v14 = *(const unsigned __int16 **)(v11 + 40);
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    ObjectProperties = _AllocStringWorker<CTCoAllocPolicy>(v13, v12, v14, v15, v20, &v27);
    if ( ObjectProperties >= 0 )
    {
      v16 = DevFindProperty(&DEVPKEY_KsMidiPort_KsPinId, 0LL, 0LL, v25, v26, v22, v24);
      if ( v16 && *(_DWORD *)(v16 + 32) == 7 )
      {
        ObjectProperties = 0;
        v17 = **(_DWORD **)(v16 + 40);
        v18 = v27;
        *a3 = v17;
        *a2 = v18;
        goto LABEL_21;
      }
      v5 = v27;
      goto LABEL_20;
    }
    v5 = v27;
  }
LABEL_21:
  CoTaskMemFree(v5);
  DevFreeObjectProperties(v25);
  if ( ObjectProperties < 0 )
    AudSrvTraceLoggingErrorHelper("GetKsMidiDeviceInfo", 92, ObjectProperties);
  return (unsigned int)ObjectProperties;
}
