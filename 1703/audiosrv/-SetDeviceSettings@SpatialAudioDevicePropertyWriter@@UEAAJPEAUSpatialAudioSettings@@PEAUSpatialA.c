/*
 * XREFs of ?SetDeviceSettings@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800CA530
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     ?SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ @ 0x18003C0F0 (-SignalChange@SpatialAudioDevicePropertyWriter@@AEAAJXZ.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18003C32C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceSettings(
        SpatialAudioDevicePropertyWriter *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // ebx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
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
  int v28; // [rsp+30h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPROPVARIANT v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _tagpropertykey v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+84h] [rbp-7Ch]
  __int128 v34; // [rsp+94h] [rbp-6Ch]
  __int128 v35; // [rsp+A4h] [rbp-5Ch]
  __int128 v36; // [rsp+B4h] [rbp-4Ch]
  int v37; // [rsp+C4h] [rbp-3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  LPCRITICAL_SECTION *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]

  v5 = a4;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
  v8 = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  v9 = v5 / 0x342;
  if ( !a2 || v5 % 0x342 )
  {
    v14 = -2147024809;
    if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
      LODWORD(lpCriticalSection) = 374;
      p_lpCriticalSection = &lpCriticalSection;
      v42 = (LPCRITICAL_SECTION *)&v28;
      v41 = 4LL;
      v28 = -2147024809;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v25, v26, 5u, &pData);
    }
  }
  else
  {
    v10 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 1);
    v37 = *((_DWORD *)a2 + 16);
    v32 = 1509949441;
    v33 = v10;
    *(_OWORD *)&v30.vt = 0x41u;
    v12 = *((_OWORD *)a2 + 2);
    v30.bstrblobVal.pData = (BYTE *)&v32;
    v35 = v12;
    v30.lVal = 72;
    v31.pid = 2;
    v34 = v11;
    v13 = *((_OWORD *)a2 + 3);
    v31.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_Settings;
    v36 = v13;
    LODWORD(lpCriticalSection) = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
    v14 = (unsigned int)lpCriticalSection;
    if ( (int)lpCriticalSection >= 0 )
    {
      v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Count;
      v31.pid = 2;
      *(_QWORD *)&v30.vt = 2LL;
      *(_OWORD *)&v30.decVal.Lo32 = (unsigned __int16)v9;
      v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
      v14 = v28;
      if ( v28 >= 0 )
      {
        if ( (_DWORD)v9 )
        {
          if ( a3 )
          {
            while ( 1 )
            {
              *(_QWORD *)&v30.vt = 65LL;
              v31.fmtid = (GUID)PKEY_SpatialAudio_EncoderDescriptor_Array;
              v31.pid = v8 + 2;
              v30.hVal.QuadPart = 834LL;
              v30.bstrblobVal.pData = (BYTE *)a3 + 834 * v8;
              v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
              v14 = v28;
              if ( v28 < 0 )
                break;
              if ( ++v8 >= (unsigned int)v9 )
                goto LABEL_17;
            }
            if ( (unsigned int)dword_18012A260 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
              p_lpCriticalSection = &lpCriticalSection;
              v41 = 4LL;
              v43 = 4LL;
              LODWORD(lpCriticalSection) = 414;
              v42 = (LPCRITICAL_SECTION *)&v28;
              TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v23, v24, 5u, &pData);
            }
          }
          else
          {
            v14 = -2147024809;
            if ( (unsigned int)dword_18012A260 > 2 )
            {
              TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
              LODWORD(lpCriticalSection) = 401;
              p_lpCriticalSection = &lpCriticalSection;
              v42 = (LPCRITICAL_SECTION *)&v28;
              v41 = 4LL;
              v28 = -2147024809;
              v43 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v19, v20, 5u, &pData);
            }
          }
        }
        else
        {
LABEL_17:
          memset(&v30, 0, sizeof(v30));
          v30.iVal = *((_WORD *)a2 + 32);
          v31.pid = 1;
          v30.vt = 2;
          v31.fmtid = (GUID)PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode;
          v28 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v31, &v30);
          v14 = v28;
          if ( v28 >= 0 )
          {
            SpatialAudioDevicePropertyWriter::SignalChange(this);
          }
          else if ( (unsigned int)dword_18012A260 > 2 )
          {
            TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
            LODWORD(lpCriticalSection) = 423;
            p_lpCriticalSection = &lpCriticalSection;
            v42 = (LPCRITICAL_SECTION *)&v28;
            v41 = 4LL;
            v43 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v21, v22, 5u, &pData);
          }
        }
      }
      else if ( (unsigned int)dword_18012A260 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
        LODWORD(lpCriticalSection) = 397;
        p_lpCriticalSection = &lpCriticalSection;
        v42 = (LPCRITICAL_SECTION *)&v28;
        v41 = 4LL;
        v43 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v17, v18, 5u, &pData);
      }
    }
    else if ( (unsigned int)dword_18012A260 > 2 )
    {
      TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyWriter::SetDeviceSettings");
      v28 = 390;
      p_lpCriticalSection = (LPCRITICAL_SECTION *)&v28;
      v42 = &lpCriticalSection;
      v41 = 4LL;
      v43 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA44, v15, v16, 5u, &pData);
    }
  }
  return v14;
}
