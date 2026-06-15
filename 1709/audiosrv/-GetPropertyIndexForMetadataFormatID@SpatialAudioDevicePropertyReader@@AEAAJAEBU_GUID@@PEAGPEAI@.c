/*
 * XREFs of ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x1800D2608
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800D1660 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 *     ?IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARIANT@@@Z @ 0x1800D34A0 (-IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARI.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int16 v8; // si
  unsigned int v9; // ebx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  unsigned __int16 v14; // r15
  __int64 v15; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v21; // [rsp+30h] [rbp-79h] BYREF
  int v22; // [rsp+34h] [rbp-75h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-71h] BYREF
  __int64 v24; // [rsp+40h] [rbp-69h]
  __int64 v25; // [rsp+48h] [rbp-61h]
  unsigned int *v26; // [rsp+50h] [rbp-59h]
  __int128 v27; // [rsp+58h] [rbp-51h] BYREF
  int v28; // [rsp+68h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  int *v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  int *v33; // [rsp+B0h] [rbp+7h]
  __int64 v34; // [rsp+B8h] [rbp+Fh]

  v26 = a4;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  pvar = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v8 = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 52) + 40LL))(
          *((_QWORD *)this + 52),
          &PKEY_SpatialAudio_Metadata_Count,
          &pvar);
  v9 = v22;
  if ( v22 >= 0 )
  {
    if ( (_WORD)pvar == 2 )
    {
      v14 = v24;
      v27 = PKEY_SpatialAudio_Metadata_Id_Array;
      v28 = 2;
      PropVariantClear(&pvar);
      pvar = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      if ( v14 )
      {
        while ( 1 )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 52) + 40LL))(
                  *((_QWORD *)this + 52),
                  &v27,
                  &pvar);
          v9 = v21;
          if ( v21 < 0 )
            break;
          if ( (_WORD)pvar != 65 || (_DWORD)v24 != 18 )
          {
            v9 = -2147024809;
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID");
              v22 = 468;
              v31 = &v22;
              v33 = &v21;
              v32 = 4LL;
              v21 = -2147024809;
              v34 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v17, v18, 5u, &pData);
            }
            goto LABEL_18;
          }
          v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)v25;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)v25 )
            v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v25 + 8);
          if ( !v15 )
          {
            if ( a3 )
              *a3 = *(_WORD *)(v25 + 16);
            *v26 = v8;
            goto LABEL_18;
          }
          PropVariantClear(&pvar);
          ++v28;
          if ( ++v8 >= v14 )
            goto LABEL_17;
        }
        if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID");
          v22 = 466;
          v31 = &v22;
          v33 = &v21;
          v32 = 4LL;
          v34 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
        }
      }
      else
      {
LABEL_17:
        v9 = -2004286973;
      }
    }
    else
    {
      v9 = -2147024809;
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID");
        v22 = 455;
        v31 = &v22;
        v33 = &v21;
        v32 = 4LL;
        v21 = -2147024809;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v12, v13, 5u, &pData);
      }
    }
  }
  else if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID");
    v21 = 453;
    v31 = &v21;
    v33 = &v22;
    v32 = 4LL;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v10, v11, 5u, &pData);
  }
LABEL_18:
  PropVariantClear(&pvar);
  return v9;
}
