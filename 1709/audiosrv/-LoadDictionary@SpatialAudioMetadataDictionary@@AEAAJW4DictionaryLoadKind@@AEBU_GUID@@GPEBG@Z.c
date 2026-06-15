/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBG@Z @ 0x1800D8C6C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GPEBGPEAEI@Z @ 0x1800D90FC (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJW4DictionaryLoadKind@@AEBU_GUID@@GP.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180031604 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x1800D3704 (Create_SpatialAudioDevicePropertyReader.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int SpatialAudioDevicePropertyReader; // ebx
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 v14; // rbx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  unsigned __int64 v21; // rcx
  LPVOID v22; // rax
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v26; // [rsp+38h] [rbp-61h] BYREF
  int v27; // [rsp+3Ch] [rbp-5Dh] BYREF
  unsigned int v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h] BYREF
  __int64 v30[3]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-11h] BYREF
  int *v33; // [rsp+98h] [rbp-1h]
  __int64 v34; // [rsp+A0h] [rbp+7h]
  int *v35; // [rsp+A8h] [rbp+Fh]
  __int64 v36; // [rsp+B0h] [rbp+17h]

  v30[1] = -2LL;
  v29 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v8 )
    LeaveCriticalSection(v8);
  v30[0] = 0LL;
  if ( a2 )
  {
    SpatialAudioDevicePropertyReader = -2147418113;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
      v26 = 194;
      v33 = &v26;
      v34 = 4LL;
      v27 = -2147418113;
      v35 = &v27;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v10, v11, 5u, &pData);
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v30);
    SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(a5, 0LL, v30);
    v26 = SpatialAudioDevicePropertyReader;
    if ( SpatialAudioDevicePropertyReader >= 0 )
    {
      v14 = v30[0];
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
      SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 40LL))(
                                           v14,
                                           a3,
                                           &v29);
      v26 = SpatialAudioDevicePropertyReader;
      if ( SpatialAudioDevicePropertyReader >= 0 )
      {
        SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(
                                             v29,
                                             a1 + 128);
        v26 = SpatialAudioDevicePropertyReader;
        if ( SpatialAudioDevicePropertyReader >= 0 )
        {
          v28 = 0;
          SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 40LL))(
                                               v29,
                                               &v28);
          v26 = SpatialAudioDevicePropertyReader;
          if ( SpatialAudioDevicePropertyReader >= 0 )
          {
            v21 = v28 >> 1;
            *(_DWORD *)(a1 + 132) = v21;
            v22 = operator new(saturated_mul(v21, 2uLL));
            *(_QWORD *)(a1 + 136) = v22;
            SpatialAudioDevicePropertyReader = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD))(*(_QWORD *)v29 + 48LL))(
                                                 v29,
                                                 v22,
                                                 v28);
            v26 = SpatialAudioDevicePropertyReader;
            if ( SpatialAudioDevicePropertyReader < 0 && (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
              v27 = 215;
              v33 = &v27;
              v34 = 4LL;
              v35 = &v26;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v23, v24, 5u, &pData);
            }
          }
          else if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
            v27 = 209;
            v33 = &v27;
            v34 = 4LL;
            v35 = &v26;
            v36 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
          }
        }
        else if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
          v27 = 205;
          v33 = &v27;
          v34 = 4LL;
          v35 = &v26;
          v36 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v17, v18, 5u, &pData);
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
        v27 = 200;
        v33 = &v27;
        v34 = 4LL;
        v35 = &v26;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v15, v16, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioMetadataDictionary::LoadDictionary");
      v27 = 197;
      v33 = &v27;
      v34 = 4LL;
      v35 = &v26;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v12, v13, 5u, &pData);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v30);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  return (unsigned int)SpatialAudioDevicePropertyReader;
}
