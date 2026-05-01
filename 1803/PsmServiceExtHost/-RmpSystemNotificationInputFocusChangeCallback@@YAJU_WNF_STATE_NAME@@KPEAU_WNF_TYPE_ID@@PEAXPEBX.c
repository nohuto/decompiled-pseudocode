/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180010280
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        int *a5)
{
  DWORD v7; // edi
  int v8; // eax
  char v9; // cl
  char v10; // cl
  int v11; // r14d
  char v12; // cl
  unsigned int v13; // ebx
  bool v15; // al
  void *v16; // r14
  char v17; // al
  char v18; // al
  __int64 v19; // rcx
  DWORD v20; // ebx
  bool v22; // cl
  char v23; // dl
  int v24; // eax
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h] BYREF
  void *v30; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  void *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]
  unsigned int *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  int *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  int *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  int *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]

  v30 = 0LL;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 154);
  a4[168] = GetCurrentThreadId();
  if ( a1 == WNF_SHEL_FOCUS_CHANGE )
  {
    if ( a5 )
      v8 = *a5;
    else
      v8 = 0;
    if ( v8 != a4[162] )
    {
      a4[162] = v8;
LABEL_10:
      *((_BYTE *)a4 + 668) |= 1u;
    }
  }
  else if ( a1 == WNF_HOLO_SYSTEM_DISPLAY_CONTEXT_CHANGE )
  {
    v22 = a5 && *a5 == 1;
    v23 = *((_BYTE *)a4 + 668);
    if ( v22 != ((v23 & 4) != 0) )
      *((_BYTE *)a4 + 668) = (4 * v22) | v23 & 0xFB | 1;
  }
  else
  {
    if ( a5 )
      v24 = a5[4];
    else
      v24 = 0;
    if ( v24 != a4[163] )
    {
      a4[163] = v24;
      goto LABEL_10;
    }
  }
  v9 = *((_BYTE *)a4 + 668);
  if ( (v9 & 3) == 1 )
  {
    v10 = v9 | 2;
    for ( *((_BYTE *)a4 + 668) = v10; (v10 & 1) != 0; v10 = *((_BYTE *)a4 + 668) )
    {
      v11 = a4[166];
      v12 = v10 & 0xFE;
      *((_BYTE *)a4 + 668) = v12;
      if ( (v12 & 4) != 0 )
        v13 = a4[163];
      else
        v13 = a4[162];
      if ( v13 != v11 )
      {
        if ( v13 && (int)RmpSystemOpenProcess(&v30, 0x2000u, v13) < 0 )
          v13 = 0;
        if ( v13 != v11 )
        {
          if ( hProvider > 5u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
          {
            v26 = v13;
            v37 = &v26;
            v27 = a4[166];
            v39 = &v27;
            v28 = a4[162];
            v41 = &v28;
            LODWORD(v29) = a4[163];
            v43 = &v29;
            v15 = (a4[167] & 4) != 0;
            v38 = 4LL;
            LOBYTE(v25) = v15;
            v45 = &v25;
            v40 = 4LL;
            v42 = 4LL;
            v44 = 4LL;
            v46 = 1LL;
            *(_DWORD *)&EventDescriptor.Level = 5;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007E9F1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            UserData.Ptr = (ULONGLONG)off_1800920B8;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800920B8;
            UserData.Reserved = 2;
            v34 = &unk_18007E9FC;
            v35 = 104;
            v36 = 1;
            EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
          }
          v16 = (void *)*((_QWORD *)a4 + 82);
          *((_QWORD *)a4 + 82) = v30;
          a4[166] = v13;
          a4[168] = 0;
          v30 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 154);
          if ( v16 )
            NtClose(v16);
          RtlAcquireSRWLockExclusive(a4 + 308);
          a4[310] = GetCurrentThreadId();
          v17 = *((_BYTE *)a4 + 1308);
          if ( (v17 & 4) == 0 )
          {
            v18 = v17 | 1;
            *((_BYTE *)a4 + 1308) = v18;
            if ( (v18 & 2) == 0 )
            {
              v19 = *((_QWORD *)a4 + 153);
              *((_BYTE *)a4 + 1308) = v18 | 2;
              TpPostWork(v19);
            }
          }
          a4[310] = 0;
          RtlReleaseSRWLockExclusive(a4 + 308);
          RtlAcquireSRWLockExclusive(a4 + 154);
          a4[168] = GetCurrentThreadId();
        }
      }
    }
    *((_BYTE *)a4 + 668) = v10 & 0xFD;
  }
  a4[168] = 0;
  RtlReleaseSRWLockExclusive(a4 + 154);
  v20 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v20, 0LL);
  }
  return 0LL;
}
