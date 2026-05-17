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
  __int64 *v13; // r14
  __int64 v14; // r13
  _DWORD *v15; // rcx
  char *v16; // r15
  __int64 *v17; // rdi
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rsi
  signed __int64 v21; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  signed __int64 v27; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int16 v32; // r13
  unsigned __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v34; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v36; // [rsp+3Ch] [rbp-C4h] BYREF
  signed __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v39; // [rsp+50h] [rbp-B0h]
  signed __int64 v40; // [rsp+58h] [rbp-A8h]
  _QWORD v41[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v42[16]; // [rsp+E0h] [rbp-20h] BYREF

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
    v13 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v41, 0, sizeof(v41));
    v14 = -1LL;
    v33 = 0;
    v34 = 0;
    if ( !*((_DWORD *)v13 + 11)
      || (v37 = 0LL, (v15 = NtCurrentPeb()->pShimData) == 0LL)
      || (v16 = (char *)(v15 + 374), v15 == (_DWORD *)-1496LL)
      || !v15[386]
      || !v15[377] )
    {
LABEL_16:
      v17 = *(__int64 **)(v5 + 8 * v7 + 16);
      memset(v42, 0, sizeof(v42));
      v35 = 0;
      v36 = 0;
      if ( *((_DWORD *)v17 + 10) )
      {
        v38 = 0LL;
        v18 = NtCurrentPeb()->pShimData;
        if ( v18 )
        {
          v19 = v18 + 187;
          if ( v18 != (_QWORD *)-1496LL && *((_DWORD *)v18 + 386) && *((_DWORD *)v18 + 377) )
          {
            v27 = v18[189];
            if ( v27 )
              goto LABEL_48;
            if ( !(unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v38) )
            {
              v27 = _InterlockedCompareExchange64(v19 + 2, v38, 0LL);
              if ( v27 )
              {
                EtwNotificationUnregister(v38, 0LL);
              }
              else
              {
                v40 = v38;
                ProcessParameters = NtCurrentPeb()->ProcessParameters;
                SbpTraceContextUpdate(
                  v38,
                  (_DWORD)v19 + 48,
                  0,
                  ProcessParameters->ImagePathName.Length,
                  (__int64)ProcessParameters->ImagePathName.Buffer);
                v27 = v40;
              }
              if ( v27 )
              {
LABEL_48:
                v29 = *v17;
                v42[0] = v17 + 14;
                v30 = -1LL;
                v42[1] = 16LL;
                do
                  ++v30;
                while ( *(_WORD *)(v29 + 2 * v30) );
                v42[3] = 2LL;
                v42[4] = v29;
                v35 = 2 * (v30 + 1);
                v42[5] = v35;
                v31 = v17[3];
                v42[2] = &v35;
                do
                  ++v14;
                while ( *(_WORD *)(v31 + 2 * v14) );
                v42[8] = v31;
                v32 = 2 * (v14 + 1);
                v42[7] = 2LL;
                v42[6] = &v36;
                v42[9] = v32;
                v36 = v32;
                EtwEventWrite(v27, (int)&AeSbImplEvent, 5, (__int64)v42);
              }
            }
          }
        }
      }
      return v17[1];
    }
    v21 = *((_QWORD *)v15 + 189);
    if ( v21 )
    {
      v39 = *((_QWORD *)v16 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v37) )
        goto LABEL_16;
      v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 2, v37, 0LL);
      if ( v39 )
      {
        EtwNotificationUnregister(v37, 0LL);
      }
      else
      {
        v39 = v37;
        v22 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v37, (_DWORD)v16 + 48, 0, v22->ImagePathName.Length, (__int64)v22->ImagePathName.Buffer);
      }
      v21 = v39;
    }
    if ( v21 )
    {
      v23 = *v13;
      v41[0] = (char *)v13 + 52;
      v24 = -1LL;
      v41[1] = 16LL;
      do
        ++v24;
      while ( *(_WORD *)(v23 + 2 * v24) );
      v41[4] = v23;
      v25 = v13[1];
      v41[2] = &v33;
      v33 = 2 * (v24 + 1);
      v41[5] = v33;
      v26 = -1LL;
      v41[3] = 2LL;
      do
        ++v26;
      while ( *(_WORD *)(v25 + 2 * v26) );
      v41[8] = v25;
      v41[7] = 2LL;
      v34 = 2 * (v26 + 1);
      v41[6] = &v34;
      v41[9] = v34;
      EtwEventWrite(v21, (int)&AeSbCallEvent, 5, (__int64)v41);
    }
    goto LABEL_16;
  }
  return 0LL;
}
