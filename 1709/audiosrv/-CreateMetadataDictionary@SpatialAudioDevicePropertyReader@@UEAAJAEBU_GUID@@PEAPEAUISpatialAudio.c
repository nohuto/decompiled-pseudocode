/*
 * XREFs of ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800D1660
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x1800D2608 (-GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@.c)
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x1800D92D0 (Create_SpatialAudioMetadataDictionaryFromData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::CreateMetadataDictionary(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        struct ISpatialAudioMetadataDictionaryData **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  signed int PropertyIndexForMetadataFormatID; // ebx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // rdi
  unsigned int v17; // ebx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  unsigned int v23; // [rsp+38h] [rbp-79h] BYREF
  int v24; // [rsp+3Ch] [rbp-75h] BYREF
  unsigned __int16 v25[4]; // [rsp+40h] [rbp-71h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, struct ISpatialAudioMetadataDictionaryData **); // [rsp+48h] [rbp-69h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-61h] BYREF
  __int64 v28; // [rsp+58h] [rbp-59h]
  __int64 v29; // [rsp+60h] [rbp-51h]
  __int64 v30; // [rsp+68h] [rbp-49h]
  __int128 v31; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+80h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-9h] BYREF
  unsigned int *v35; // [rsp+B8h] [rbp+7h]
  __int64 v36; // [rsp+C0h] [rbp+Fh]
  int *v37; // [rsp+C8h] [rbp+17h]
  __int64 v38; // [rsp+D0h] [rbp+1Fh]

  v30 = -2LL;
  v23 = 0;
  v25[0] = 0;
  v26 = 0LL;
  pvar = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( a3 )
  {
    PropertyIndexForMetadataFormatID = SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
                                         this,
                                         a2,
                                         v25,
                                         &v23);
    v24 = PropertyIndexForMetadataFormatID;
    if ( PropertyIndexForMetadataFormatID >= 0 )
    {
      v31 = PKEY_SpatialAudio_Metadata_Dictionary_Array;
      v32 = v23 + 2;
      PropertyIndexForMetadataFormatID = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 52) + 40LL))(
                                           *((_QWORD *)this + 52),
                                           &v31,
                                           &pvar);
      v23 = PropertyIndexForMetadataFormatID;
      if ( PropertyIndexForMetadataFormatID >= 0 )
      {
        if ( (_WORD)pvar == 65 )
        {
          v16 = v29;
          v17 = v28;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
          PropertyIndexForMetadataFormatID = Create_SpatialAudioMetadataDictionaryFromData(v25[0], v16, v17, &v26);
          v23 = PropertyIndexForMetadataFormatID;
          if ( PropertyIndexForMetadataFormatID >= 0 )
          {
            PropertyIndexForMetadataFormatID = (**v26)(v26, &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf, a3);
            v23 = PropertyIndexForMetadataFormatID;
            if ( PropertyIndexForMetadataFormatID < 0 && (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
              v24 = 564;
              v35 = (unsigned int *)&v24;
              v36 = 4LL;
              v37 = (int *)&v23;
              v38 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v20, v21, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
            v24 = 561;
            v35 = (unsigned int *)&v24;
            v36 = 4LL;
            v37 = (int *)&v23;
            v38 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v18, v19, 5u, &pData);
          }
        }
        else
        {
          PropertyIndexForMetadataFormatID = -2147418113;
          if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
            v24 = 555;
            v35 = (unsigned int *)&v24;
            v36 = 4LL;
            v23 = -2147418113;
            v37 = (int *)&v23;
            v38 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v14, v15, 5u, &pData);
          }
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
        v24 = 553;
        v35 = (unsigned int *)&v24;
        v36 = 4LL;
        v37 = (int *)&v23;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
      v23 = 547;
      v35 = &v23;
      v36 = 4LL;
      v37 = &v24;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v10, v11, 5u, &pData);
    }
  }
  else
  {
    PropertyIndexForMetadataFormatID = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::CreateMetadataDictionary");
      v23 = 544;
      v35 = &v23;
      v36 = 4LL;
      *(_DWORD *)v25 = -2147024809;
      v37 = (int *)v25;
      v38 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v8, v9, 5u, &pData);
    }
  }
  PropVariantClear(&pvar);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
  return (unsigned int)PropertyIndexForMetadataFormatID;
}
