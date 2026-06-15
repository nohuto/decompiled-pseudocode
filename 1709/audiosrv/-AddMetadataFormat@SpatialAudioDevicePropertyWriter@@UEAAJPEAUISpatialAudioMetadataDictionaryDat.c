/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x1800CFB10
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D1010 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v5; // r15
  unsigned int v6; // edi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  int v22; // r14d
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v33[9]; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _tagpropertykey v34; // [rsp+60h] [rbp-A0h] BYREF
  GUID v35; // [rsp+80h] [rbp-80h] BYREF
  __int16 v36; // [rsp+90h] [rbp-70h]
  GUID v37; // [rsp+98h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v32[0] = 0;
  v33[0] = 0;
  v37 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = 0LL;
  v35 = GUID_00000000_0000_0000_0000_000000000000;
  v36 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    v30 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
            a2,
            &v37);
    v6 = v30;
    if ( v30 >= 0 )
    {
      v30 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
              a2,
              v32);
      v6 = v30;
      if ( v30 >= 0 )
      {
        v30 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
                a2,
                v33);
        v6 = v30;
        if ( v30 >= 0 )
        {
          v5 = operator new(v33[0]);
          v30 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, void *, _QWORD))(*(_QWORD *)a2 + 48LL))(
                  a2,
                  v5,
                  v33[0]);
          v6 = v30;
          if ( v30 >= 0 )
          {
            v17 = *((_QWORD *)this + 12);
            memset(&v33[1], 0, 24);
            v30 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v17 + 40LL))(
                    v17,
                    &PKEY_SpatialAudio_Metadata_Count,
                    &v33[1]);
            v6 = v30;
            if ( v30 >= 0 )
            {
              if ( LOWORD(v33[1]) == 2 )
              {
                v22 = SLOWORD(v33[3]);
                v36 = v32[0];
                *(_QWORD *)&v33[1] = 65LL;
                *(_QWORD *)&v33[3] = 18LL;
                v35 = v37;
                *(_QWORD *)&v33[5] = &v35;
                v34.pid = v22 + 2;
                v34.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
                v30 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v34, (struct tagPROPVARIANT *)&v33[1]);
                v6 = v30;
                if ( v30 >= 0 )
                {
                  *(_QWORD *)&v33[5] = v5;
                  v34.pid = v22 + 2;
                  *(_QWORD *)&v33[1] = 65LL;
                  *(_QWORD *)&v33[3] = v33[0];
                  v34.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
                  v30 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v34, (struct tagPROPVARIANT *)&v33[1]);
                  v6 = v30;
                  if ( v30 >= 0 )
                  {
                    v34.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
                    v34.pid = 2;
                    *(_QWORD *)&v33[1] = 2LL;
                    *(_OWORD *)&v33[3] = (unsigned __int16)(v22 + 1);
                    v30 = SpatialAudioDevicePropertyWriter::SetPropertyValue(
                            this,
                            &v34,
                            (struct tagPROPVARIANT *)&v33[1]);
                    v6 = v30;
                    if ( v30 < 0 && (unsigned int)dword_18014A3B0 > 2 )
                    {
                      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                      v31 = 309;
                      v40 = &v31;
                      v42 = &v30;
                      v41 = 4LL;
                      v43 = 4LL;
                      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v27, v28, 5u, &pData);
                    }
                  }
                  else if ( (unsigned int)dword_18014A3B0 > 2 )
                  {
                    TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                    v31 = 302;
                    v40 = &v31;
                    v42 = &v30;
                    v41 = 4LL;
                    v43 = 4LL;
                    TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v25, v26, 5u, &pData);
                  }
                }
                else if ( (unsigned int)dword_18014A3B0 > 2 )
                {
                  TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                  v31 = 292;
                  v40 = &v31;
                  v42 = &v30;
                  v41 = 4LL;
                  v43 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v23, v24, 5u, &pData);
                }
              }
              else
              {
                v6 = -2147418113;
                if ( (unsigned int)dword_18014A3B0 > 2 )
                {
                  TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
                  v31 = 279;
                  v40 = &v31;
                  v42 = &v30;
                  v41 = 4LL;
                  v30 = -2147418113;
                  v43 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v20, v21, 5u, &pData);
                }
              }
            }
            else if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
              v31 = 278;
              v40 = &v31;
              v42 = &v30;
              v41 = 4LL;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v18, v19, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
            v31 = 272;
            v40 = &v31;
            v42 = &v30;
            v41 = 4LL;
            v43 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v15, v16, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
          v31 = 267;
          v40 = &v31;
          v42 = &v30;
          v41 = 4LL;
          v43 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v13, v14, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
        v31 = 264;
        v40 = &v31;
        v42 = &v30;
        v41 = 4LL;
        v43 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v11, v12, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
      v31 = 261;
      v40 = &v31;
      v42 = &v30;
      v41 = 4LL;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v6 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::AddMetadataFormat");
      v30 = 257;
      v40 = &v30;
      v42 = &v31;
      v41 = 4LL;
      v31 = -2147024809;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v7, v8, 5u, &pData);
    }
  }
  operator delete(v5);
  return v6;
}
