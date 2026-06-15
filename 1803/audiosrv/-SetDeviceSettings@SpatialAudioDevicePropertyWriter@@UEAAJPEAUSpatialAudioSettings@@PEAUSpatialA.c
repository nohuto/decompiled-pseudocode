/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800FFD90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1801001F8 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // rsi
  const GUID *v9; // r8
  const GUID *v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned int v19; // ebx
  const GUID *v20; // r8
  const GUID *v21; // r9
  unsigned int v22; // r15d
  const GUID *v23; // r8
  const GUID *v24; // r9
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+34h] [rbp-CCh] BYREF
  struct tagPROPVARIANT v28; // [rsp+38h] [rbp-C8h] BYREF
  struct _tagpropertykey v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+74h] [rbp-8Ch]
  __int128 v32; // [rsp+84h] [rbp-7Ch]
  __int128 v33; // [rsp+94h] [rbp-6Ch]
  __int128 v34; // [rsp+A4h] [rbp-5Ch]
  __int64 v35; // [rsp+B4h] [rbp-4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  const char *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v11 = v5;
  v12 = v5 / 0x342;
  v13 = v11 - 834 * v12;
  if ( !a2 || v13 )
  {
    v19 = -2147024809;
    if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v38 = 52LL;
      v37 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      v27 = 456;
      v39 = &v27;
      v40 = 4LL;
      v26 = -2147024809;
      v41 = &v26;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v9, v10, 5u, &pData);
    }
  }
  else
  {
    v14 = *((_OWORD *)a2 + 1);
    v31 = *(_OWORD *)a2;
    *(_OWORD *)&v28.vt = 0x41u;
    v15 = *((_OWORD *)a2 + 2);
    v28.bstrblobVal.pData = (BYTE *)&v30;
    v33 = v15;
    v30 = 1509949441;
    v35 = *((_QWORD *)a2 + 8);
    v28.lVal = 76;
    v32 = v14;
    v29.pid = 2;
    v16 = *((_OWORD *)a2 + 3);
    v29.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
    v34 = v16;
    v27 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v29, &v28);
    v19 = v27;
    if ( v27 >= 0 )
    {
      v29.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
      v29.pid = 2;
      *(_QWORD *)&v28.vt = 2LL;
      *(_OWORD *)&v28.decVal.Lo32 = (unsigned __int16)v12;
      v26 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v29, &v28);
      v19 = v26;
      if ( v26 >= 0 )
      {
        if ( (_DWORD)v12 )
        {
          if ( a3 )
          {
            v22 = 0;
            while ( 1 )
            {
              *(_QWORD *)&v28.vt = 65LL;
              v29.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
              v29.pid = v22 + 2;
              v28.hVal.QuadPart = 834LL;
              v28.bstrblobVal.pData = (BYTE *)a3 + 834 * v22;
              v26 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v29, &v28);
              v19 = v26;
              if ( v26 < 0 )
                break;
              if ( ++v22 >= (unsigned int)v12 )
                goto LABEL_18;
            }
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = 52LL;
              v37 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
              v27 = 496;
              v39 = &v27;
              v40 = 4LL;
              v41 = &v26;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v23, v24, 5u, &pData);
            }
          }
          else
          {
            v19 = -2147024809;
            if ( (unsigned int)dword_1801883B0 > 2 )
            {
              v38 = 52LL;
              v37 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
              v27 = 483;
              v39 = &v27;
              v40 = 4LL;
              v26 = -2147024809;
              v41 = &v26;
              v42 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_18014946E, v20, v21, 5u, &pData);
            }
          }
        }
        else
        {
LABEL_18:
          if ( !*((_DWORD *)this + 24) )
            (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
        }
      }
      else if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v38 = 52LL;
        v37 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
        v27 = 479;
        v39 = &v27;
        v40 = 4LL;
        v41 = &v26;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v20, v21, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_1801883B0 > 2 )
    {
      v38 = 52LL;
      v37 = "SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      v26 = 472;
      v39 = &v26;
      v40 = 4LL;
      v41 = &v27;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v17, v18, 5u, &pData);
    }
  }
  return v19;
}
