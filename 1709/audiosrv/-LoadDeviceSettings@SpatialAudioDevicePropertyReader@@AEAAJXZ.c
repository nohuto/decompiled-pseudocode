/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x1800282CC
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800286D0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  int v3; // edi
  bool v4; // zf
  _OWORD *v5; // rax
  unsigned int v6; // eax
  SIZE_T v7; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  int v31; // [rsp+38h] [rbp-59h] BYREF
  int v32; // [rsp+3Ch] [rbp-55h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-51h] BYREF
  __int64 v34; // [rsp+48h] [rbp-49h]
  _OWORD *v35; // [rsp+50h] [rbp-41h]
  __int128 v36; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  int *v40; // [rsp+A8h] [rbp+17h]
  __int64 v41; // [rsp+B0h] [rbp+1Fh]
  int *v42; // [rsp+B8h] [rbp+27h]
  __int64 v43; // [rsp+C0h] [rbp+2Fh]

  pvar = 0LL;
  v34 = 0LL;
  v2 = *((_QWORD *)this + 52);
  v35 = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
          v2,
          &PKEY_SpatialAudio_Endpoint_Settings,
          &pvar);
  v3 = v32;
  if ( v32 < 0 )
  {
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
      v31 = 356;
      v40 = &v31;
      v42 = &v32;
      v41 = 4LL;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v17, v18, 5u, &pData);
    }
  }
  else
  {
    v4 = (_WORD)pvar == 65;
    v3 = -2004286463;
    *((_DWORD *)this + 130) = 0;
    if ( v4 && (_DWORD)v34 == 76 )
    {
      v5 = v35;
      *(_OWORD *)((char *)this + 436) = *v35;
      *(_OWORD *)((char *)this + 452) = v5[1];
      *(_OWORD *)((char *)this + 468) = v5[2];
      *(_OWORD *)((char *)this + 484) = v5[3];
      *(_QWORD *)((char *)this + 500) = *((_QWORD *)v5 + 8);
      *((_DWORD *)this + 127) = *((_DWORD *)v5 + 18);
      if ( *((_DWORD *)this + 109) == 1509949441 )
      {
        *((_DWORD *)this + 130) = 1;
        v3 = 0;
      }
    }
    v31 = v3;
    if ( v3 < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
        v32 = 371;
        v40 = &v32;
        v42 = &v31;
        v41 = 4LL;
        v43 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v19, v20, 5u, &pData);
      }
    }
    else
    {
      PropVariantClear(&pvar);
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 52) + 40LL))(
              *((_QWORD *)this + 52),
              &PKEY_SpatialAudio_EncoderDescriptor_Count,
              &pvar);
      v3 = v31;
      if ( v31 < 0 )
      {
        if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
          v32 = 376;
          v40 = &v32;
          v42 = &v31;
          v41 = 4LL;
          v43 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v21, v22, 5u, &pData);
        }
      }
      else if ( (_WORD)pvar == 2 )
      {
        v6 = (__int16)v34;
        if ( (unsigned int)(__int16)v34 > 8 )
        {
          v3 = -2147024809;
          if ( (unsigned int)dword_18014A3B0 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
            v32 = 379;
            v40 = &v32;
            v42 = &v31;
            v41 = 4LL;
            v31 = -2147024809;
            v43 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v25, v26, 5u, &pData);
          }
        }
        else
        {
          *((_DWORD *)this + 108) = (__int16)v34;
          v7 = 834LL * v6;
          if ( !is_mul_ok(v6, 0x342uLL) )
            v7 = -1LL;
          ProcessHeap = GetProcessHeap();
          v9 = HeapAlloc(ProcessHeap, 0, v7);
          v10 = 0;
          *((_QWORD *)this + 64) = v9;
          if ( *((_DWORD *)this + 108) )
          {
            while ( 1 )
            {
              v11 = *((_QWORD *)this + 52);
              v37 = v10 + 2;
              v36 = PKEY_SpatialAudio_EncoderDescriptor_Array;
              v31 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                      v11,
                      &v36,
                      &pvar);
              v3 = v31;
              if ( v31 < 0 )
                break;
              if ( (_WORD)pvar != 65 )
              {
                v3 = -2147024809;
                if ( (unsigned int)dword_18014A3B0 > 2 )
                {
                  TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
                  v32 = 394;
                  v40 = &v32;
                  v42 = &v31;
                  v41 = 4LL;
                  v31 = -2147024809;
                  v43 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v27, v28, 5u, &pData);
                }
                goto LABEL_18;
              }
              v12 = 6LL;
              v13 = v35;
              v14 = *((_QWORD *)this + 64) + 834LL * v10;
              do
              {
                v15 = *v13;
                v13 += 8;
                *(_OWORD *)v14 = v15;
                v14 += 128LL;
                *(_OWORD *)(v14 - 112) = *(v13 - 7);
                *(_OWORD *)(v14 - 96) = *(v13 - 6);
                *(_OWORD *)(v14 - 80) = *(v13 - 5);
                *(_OWORD *)(v14 - 64) = *(v13 - 4);
                *(_OWORD *)(v14 - 48) = *(v13 - 3);
                *(_OWORD *)(v14 - 32) = *(v13 - 2);
                *(_OWORD *)(v14 - 16) = *(v13 - 1);
                --v12;
              }
              while ( v12 );
              *(_OWORD *)v14 = *v13;
              *(_OWORD *)(v14 + 16) = v13[1];
              *(_OWORD *)(v14 + 32) = v13[2];
              *(_OWORD *)(v14 + 48) = v13[3];
              *(_WORD *)(v14 + 64) = *((_WORD *)v13 + 32);
              PropVariantClear(&pvar);
              if ( ++v10 >= *((_DWORD *)this + 108) )
                goto LABEL_18;
            }
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
              v32 = 392;
              v40 = &v32;
              v42 = &v31;
              v41 = 4LL;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v29, v30, 5u, &pData);
            }
          }
        }
      }
      else
      {
        v3 = -2147024809;
        if ( (unsigned int)dword_18014A3B0 > 2 )
        {
          TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::LoadDeviceSettings");
          v32 = 378;
          v40 = &v32;
          v42 = &v31;
          v41 = 4LL;
          v31 = -2147024809;
          v43 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v23, v24, 5u, &pData);
        }
      }
    }
  }
LABEL_18:
  PropVariantClear(&pvar);
  return (unsigned int)v3;
}
