/*
 * XREFs of SbSelectProcedure @ 0x18002D680
 * Callers:
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     SbExecuteProcedure @ 0x1801094B0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     sub_18002D890 @ 0x18002D890 (sub_18002D890.c)
 *     sub_180070DBC @ 0x180070DBC (sub_180070DBC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1801093D4 @ 0x1801093D4 (sub_1801093D4.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 *v14; // r12
  __int64 v15; // r13
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  signed __int64 v22; // r13
  struct _RTL_USER_PROCESS_PARAMETERS *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // eax
  signed __int64 v30; // r15
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int16 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  _QWORD v44[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v45[16]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 1496) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    sub_18002D890(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 1496) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)sub_180070DBC(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v44, 0, sizeof(v44));
    v15 = -1LL;
    v36 = 0;
    v37 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v40 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 1496) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      memset(v45, 0, sizeof(v45));
      v38 = 0;
      v39 = 0;
      if ( *((_DWORD *)v18 + 10) )
      {
        v41 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 1496;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v30 = *((_QWORD *)v20 + 2);
              if ( v30 )
                goto LABEL_48;
              if ( !(unsigned int)EtwEventRegister(qword_180114070, 0LL, 0LL, &v41) )
              {
                v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v41, 0LL);
                if ( v30 )
                {
                  EtwNotificationUnregister(v41, 0LL);
                }
                else
                {
                  v43 = v41;
                  ProcessParameters = NtCurrentPeb()->ProcessParameters;
                  sub_1801093D4(
                    v41,
                    (_DWORD)v20 + 48,
                    0,
                    ProcessParameters->ImagePathName.Length,
                    (__int64)ProcessParameters->ImagePathName.Buffer);
                  v30 = v43;
                }
                if ( v30 )
                {
LABEL_48:
                  v32 = *v18;
                  v45[0] = v18 + 14;
                  v33 = -1LL;
                  v45[1] = 16LL;
                  do
                    ++v33;
                  while ( *(_WORD *)(v32 + 2 * v33) );
                  v45[4] = v32;
                  v34 = v18[3];
                  v45[2] = &v38;
                  v35 = (unsigned __int16)(2 * (v33 + 1));
                  v38 = v35;
                  v45[5] = v35;
                  v45[3] = 2LL;
                  do
                    ++v15;
                  while ( *(_WORD *)(v34 + 2 * v15) );
                  v45[8] = v34;
                  v45[7] = 2LL;
                  v45[6] = &v39;
                  v39 = 2 * (v15 + 1);
                  v45[9] = v39;
                  EtwEventWrite(v30, (int)&unk_180118370, 5, (__int64)v45);
                }
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v42 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister(qword_180114070, 0LL, 0LL, &v40) )
      {
LABEL_41:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v40, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v40, 0LL);
        v42 = v22;
      }
      else
      {
        v42 = v40;
        v23 = NtCurrentPeb()->ProcessParameters;
        sub_1801093D4(v40, (_DWORD)v17 + 48, 0, v23->ImagePathName.Length, (__int64)v23->ImagePathName.Buffer);
        v22 = v42;
      }
    }
    if ( v22 )
    {
      v24 = *v14;
      v44[0] = (char *)v14 + 52;
      v25 = -1LL;
      v44[1] = 16LL;
      do
        ++v25;
      while ( *(_WORD *)(v24 + 2 * v25) );
      v44[4] = v24;
      v26 = v14[1];
      v44[2] = &v36;
      v27 = (unsigned __int16)(2 * (v25 + 1));
      v36 = v27;
      v44[5] = v27;
      v28 = -1LL;
      v44[3] = 2LL;
      do
        ++v28;
      while ( *(_WORD *)(v26 + 2 * v28) );
      v44[8] = v26;
      v44[7] = 2LL;
      v29 = (unsigned __int16)(2 * (v28 + 1));
      v44[6] = &v37;
      v37 = v29;
      v44[9] = v29;
      EtwEventWrite(v22, (int)&unk_180118360, 5, (__int64)v44);
    }
    goto LABEL_41;
  }
  return 0LL;
}
