/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800C9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18003C32C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  void *v4; // r15
  unsigned int v5; // edi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  int v21; // r14d
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v32[7]; // [rsp+44h] [rbp-BCh] BYREF
  struct _tagpropertykey v33; // [rsp+60h] [rbp-A0h] BYREF
  GUID v34; // [rsp+80h] [rbp-80h] BYREF
  __int16 v35; // [rsp+90h] [rbp-70h]
  GUID v36; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  LPCRITICAL_SECTION *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v31[0] = 0;
  v32[0] = 0;
  v35 = 0;
  v36 = GUID_00000000_0000_0000_0000_000000000000;
  v4 = 0LL;
  v34 = GUID_00000000_0000_0000_0000_000000000000;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( a2 )
  {
    v29 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v36);
    v5 = v29;
    if ( v29 >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
              a2,
              v31);
      v5 = v29;
      if ( v29 >= 0 )
      {
        v29 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
                a2,
                v32);
        v5 = v29;
        if ( v29 >= 0 )
        {
          v4 = operator new(v32[0]);
          v29 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, void *, _QWORD))(*(_QWORD *)a2 + 48LL))(
                  a2,
                  v4,
                  v32[0]);
          v5 = v29;
          if ( v29 >= 0 )
          {
            v16 = *((_QWORD *)this + 10);
            memset(&v32[1], 0, 24);
            v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v16 + 40LL))(
                    v16,
                    &PKEY_SpatialAudio_Metadata_Count,
                    &v32[1]);
            v5 = v29;
            if ( v29 >= 0 )
            {
              if ( LOWORD(v32[1]) == 2 )
              {
                v21 = SLOWORD(v32[3]);
                v35 = v31[0];
                *(_QWORD *)&v32[1] = 65LL;
                *(_QWORD *)&v32[3] = 18LL;
                v34 = v36;
                *(_QWORD *)&v32[5] = &v34;
                v33.pid = v21 + 2;
                v33.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
                v29 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v33, (struct tagPROPVARIANT *)&v32[1]);
                v5 = v29;
                if ( v29 >= 0 )
                {
                  *(_QWORD *)&v32[5] = v4;
                  v33.pid = v21 + 2;
                  *(_QWORD *)&v32[1] = 65LL;
                  *(_QWORD *)&v32[3] = v32[0];
                  v33.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
                  v29 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v33, (struct tagPROPVARIANT *)&v32[1]);
                  v5 = v29;
                  if ( v29 >= 0 )
                  {
                    v33.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
                    v33.pid = 2;
                    *(_QWORD *)&v32[1] = 2LL;
                    *(_OWORD *)&v32[3] = (unsigned __int16)(v21 + 1);
                    v29 = SpatialAudioDevicePropertyWriter::SetPropertyValue(
                            this,
                            &v33,
                            (struct tagPROPVARIANT *)&v32[1]);
                    v5 = v29;
                    if ( v29 < 0 && (unsigned int)dword_18012A260 > 2 )
                    {
                      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                      LODWORD(lpCriticalSection) = 295;
                      p_lpCriticalSection = &lpCriticalSection;
                      v41 = (LPCRITICAL_SECTION *)&v29;
                      v40 = 4LL;
                      v42 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v26, v27, 5u, &pData);
                    }
                  }
                  else if ( (unsigned int)dword_18012A260 > 2 )
                  {
                    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                    LODWORD(lpCriticalSection) = 288;
                    p_lpCriticalSection = &lpCriticalSection;
                    v41 = (LPCRITICAL_SECTION *)&v29;
                    v40 = 4LL;
                    v42 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v24, v25, 5u, &pData);
                  }
                }
                else if ( (unsigned int)dword_18012A260 > 2 )
                {
                  TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                  LODWORD(lpCriticalSection) = 278;
                  p_lpCriticalSection = &lpCriticalSection;
                  v41 = (LPCRITICAL_SECTION *)&v29;
                  v40 = 4LL;
                  v42 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v22, v23, 5u, &pData);
                }
              }
              else
              {
                v5 = -2147418113;
                if ( (unsigned int)dword_18012A260 > 2 )
                {
                  TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                  LODWORD(lpCriticalSection) = 265;
                  p_lpCriticalSection = &lpCriticalSection;
                  v41 = (LPCRITICAL_SECTION *)&v29;
                  v40 = 4LL;
                  v29 = -2147418113;
                  v42 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v19, v20, 5u, &pData);
                }
              }
            }
            else if ( (unsigned int)dword_18012A260 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
              LODWORD(lpCriticalSection) = 264;
              p_lpCriticalSection = &lpCriticalSection;
              v41 = (LPCRITICAL_SECTION *)&v29;
              v40 = 4LL;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v17, v18, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18012A260 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
            LODWORD(lpCriticalSection) = 258;
            p_lpCriticalSection = &lpCriticalSection;
            v41 = (LPCRITICAL_SECTION *)&v29;
            v40 = 4LL;
            v42 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v14, v15, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_18012A260 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
          LODWORD(lpCriticalSection) = 253;
          p_lpCriticalSection = &lpCriticalSection;
          v41 = (LPCRITICAL_SECTION *)&v29;
          v40 = 4LL;
          v42 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v12, v13, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
        LODWORD(lpCriticalSection) = 250;
        p_lpCriticalSection = &lpCriticalSection;
        v41 = (LPCRITICAL_SECTION *)&v29;
        v40 = 4LL;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v10, v11, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
      LODWORD(lpCriticalSection) = 247;
      p_lpCriticalSection = &lpCriticalSection;
      v41 = (LPCRITICAL_SECTION *)&v29;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v8, v9, 5u, &pData);
    }
  }
  else
  {
    v5 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
      v29 = 243;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v29;
      v41 = &lpCriticalSection;
      v40 = 4LL;
      LODWORD(lpCriticalSection) = -2147024809;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v6, v7, 5u, &pData);
    }
  }
  operator delete(v4);
  return v5;
}
