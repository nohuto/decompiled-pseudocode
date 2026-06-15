/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800D0BB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800D1010 (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // ebx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  unsigned int v22; // r15d
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  struct tagPROPVARIANT v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _tagpropertykey v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+74h] [rbp-8Ch]
  __int128 v34; // [rsp+84h] [rbp-7Ch]
  __int128 v35; // [rsp+94h] [rbp-6Ch]
  __int128 v36; // [rsp+A4h] [rbp-5Ch]
  __int64 v37; // [rsp+B4h] [rbp-4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  int *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = v5;
  v10 = v5 / 0x342;
  v11 = v9 - 834 * v10;
  if ( !a2 || v11 )
  {
    v15 = -2147024809;
    if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
      v42 = 0;
      v45 = 0;
      v40 = &v29;
      v41 = 4;
      v44 = 4;
      v29 = 456;
      v28 = -2147024809;
      v43 = &v28;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v25, v26, 5u, &pData);
    }
  }
  else
  {
    v12 = *((_OWORD *)a2 + 1);
    v33 = *(_OWORD *)a2;
    *(_OWORD *)&v30.vt = 0x41u;
    v13 = *((_OWORD *)a2 + 2);
    v30.bstrblobVal.pData = (BYTE *)&v32;
    v35 = v13;
    v32 = 1509949441;
    v37 = *((_QWORD *)a2 + 8);
    v30.lVal = 76;
    v34 = v12;
    v31.pid = 2;
    v14 = *((_OWORD *)a2 + 3);
    v31.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
    v36 = v14;
    v29 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
    v15 = v29;
    if ( v29 >= 0 )
    {
      v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
      v31.pid = 2;
      *(_QWORD *)&v30.vt = 2LL;
      *(_OWORD *)&v30.decVal.Lo32 = (unsigned __int16)v10;
      v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
      v15 = v28;
      if ( v28 >= 0 )
      {
        if ( (_DWORD)v10 )
        {
          if ( a3 )
          {
            v22 = 0;
            while ( 1 )
            {
              *(_QWORD *)&v30.vt = 65LL;
              v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
              v31.pid = v22 + 2;
              v30.hVal.QuadPart = 834LL;
              v30.bstrblobVal.pData = (BYTE *)a3 + 834 * v22;
              v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
              v15 = v28;
              if ( v28 < 0 )
                break;
              if ( ++v22 >= (unsigned int)v10 )
                goto LABEL_18;
            }
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
              v42 = 0;
              v45 = 0;
              v40 = &v29;
              v41 = 4;
              v44 = 4;
              v29 = 496;
              v43 = &v28;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v23, v24, 5u, &pData);
            }
          }
          else
          {
            v15 = -2147024809;
            if ( (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
              v42 = 0;
              v45 = 0;
              v40 = &v29;
              v41 = 4;
              v44 = 4;
              v29 = 483;
              v28 = -2147024809;
              v43 = &v28;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v20, v21, 5u, &pData);
            }
          }
        }
        else
        {
LABEL_18:
          if ( !*((_DWORD *)this + 26) )
            (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
        }
      }
      else if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
        v42 = 0;
        v45 = 0;
        v40 = &v29;
        v41 = 4;
        v44 = 4;
        v29 = 479;
        v43 = &v28;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v18, v19, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18014A3B0 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
      v42 = 0;
      v45 = 0;
      v40 = &v28;
      v41 = 4;
      v44 = 4;
      v28 = 472;
      v43 = &v29;
      TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v16, v17, 5u, &pData);
    }
  }
  return v15;
}
