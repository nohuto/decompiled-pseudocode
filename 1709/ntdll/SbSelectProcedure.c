/*
 * XREFs of SbSelectProcedure @ 0x180021390
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180007A78 (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x18010B5B0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventWrite @ 0x180019EF0 (EtwEventWrite.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x1800215B0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 *     SbpUpdateCache @ 0x180074288 (SbpUpdateCache.c)
 *     EtwEventRegister @ 0x180075710 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     SbpTraceContextUpdate @ 0x18010B4D8 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rsi
  _DWORD *pShimData; // rcx
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r13
  char *v15; // rcx
  char *v16; // r15
  __int64 v17; // rdi
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rsi
  REGHANDLE v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  REGHANDLE v26; // r15
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int16 v30; // r13
  unsigned __int16 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v32; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v34; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v35; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  REGHANDLE v37; // [rsp+50h] [rbp-B0h]
  ULONGLONG v38; // [rsp+58h] [rbp-A8h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v40[8]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(a3 + 8);
  v7 = a4;
  pShimData = NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = (char *)(pShimData + 374), pShimData == (_DWORD *)-1496LL) || !pShimData[386] )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 1496) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v4;
    _mm_lfence();
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(UserData, 0, sizeof(UserData));
    v14 = -1LL;
    v31 = 0;
    v32 = 0;
    if ( !*(_DWORD *)(v13 + 44)
      || (v35 = 0LL, (v15 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v16 = v15 + 1496, v15 == (char *)-1496LL)
      || !*((_DWORD *)v15 + 386)
      || !*((_DWORD *)v15 + 377) )
    {
LABEL_16:
      v17 = *(_QWORD *)(v5 + 8 * v7 + 16);
      memset(v40, 0, sizeof(v40));
      v33 = 0;
      v34 = 0;
      if ( *(_DWORD *)(v17 + 40) )
      {
        RegHandle = 0LL;
        v18 = NtCurrentPeb()->pShimData;
        if ( v18 )
        {
          v19 = v18 + 187;
          if ( v18 != (_QWORD *)-1496LL && *((_DWORD *)v18 + 386) && *((_DWORD *)v18 + 377) )
          {
            v26 = v18[189];
            if ( v26 )
              goto LABEL_48;
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
            {
              v26 = _InterlockedCompareExchange64(v19 + 2, RegHandle, 0LL);
              if ( v26 )
              {
                EtwNotificationUnregister(RegHandle, 0LL);
              }
              else
              {
                v38 = RegHandle;
                SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                v26 = v38;
              }
              if ( v26 )
              {
LABEL_48:
                v27 = *(_QWORD *)v17;
                v40[0].Ptr = v17 + 112;
                v28 = -1LL;
                *(_QWORD *)&v40[0].Size = 16LL;
                do
                  ++v28;
                while ( *(_WORD *)(v27 + 2 * v28) );
                *(_QWORD *)&v40[1].Size = 2LL;
                v40[2].Ptr = v27;
                v33 = 2 * (v28 + 1);
                v40[2].Size = v33;
                v29 = *(_QWORD *)(v17 + 24);
                v40[1].Ptr = (unsigned __int64)&v33;
                v40[2].Reserved = 0;
                do
                  ++v14;
                while ( *(_WORD *)(v29 + 2 * v14) );
                v40[4].Ptr = v29;
                v30 = 2 * (v14 + 1);
                *(_QWORD *)&v40[3].Size = 2LL;
                v40[3].Ptr = (unsigned __int64)&v34;
                v40[4].Size = v30;
                v34 = v30;
                v40[4].Reserved = 0;
                EtwEventWrite(v26, &AeSbImplEvent, 5u, v40);
              }
            }
          }
        }
      }
      return *(_QWORD *)(v17 + 8);
    }
    v21 = *((_QWORD *)v15 + 189);
    if ( v21 )
    {
      v37 = *((_QWORD *)v16 + 2);
    }
    else
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v35) )
        goto LABEL_16;
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 2, v35, 0LL);
      if ( v37 )
      {
        EtwNotificationUnregister(v35, 0LL);
      }
      else
      {
        v37 = v35;
        SbpTraceContextUpdate(v35, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
      }
      v21 = v37;
    }
    if ( v21 )
    {
      v22 = *(_QWORD *)v13;
      UserData[0].Ptr = v13 + 52;
      v23 = -1LL;
      *(_QWORD *)&UserData[0].Size = 16LL;
      do
        ++v23;
      while ( *(_WORD *)(v22 + 2 * v23) );
      UserData[2].Ptr = v22;
      v24 = *(_QWORD *)(v13 + 8);
      UserData[1].Ptr = (unsigned __int64)&v31;
      v31 = 2 * (v23 + 1);
      UserData[2].Size = v31;
      v25 = -1LL;
      *(_QWORD *)&UserData[1].Size = 2LL;
      UserData[2].Reserved = 0;
      do
        ++v25;
      while ( *(_WORD *)(v24 + 2 * v25) );
      UserData[4].Ptr = v24;
      *(_QWORD *)&UserData[3].Size = 2LL;
      v32 = 2 * (v25 + 1);
      UserData[3].Ptr = (unsigned __int64)&v32;
      UserData[4].Size = v32;
      UserData[4].Reserved = 0;
      EtwEventWrite(v21, &AeSbCallEvent, 5u, UserData);
    }
    goto LABEL_16;
  }
  return 0LL;
}
