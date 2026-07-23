/*
 * XREFs of SbSelectProcedure @ 0x180039270
 * Callers:
 *     sub_18000FAB4 @ 0x18000FAB4 (sub_18000FAB4.c)
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 *     SbExecuteProcedure @ 0x1801064B0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     sub_180039480 @ 0x180039480 (sub_180039480.c)
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 *     sub_1800768AC @ 0x1800768AC (sub_1800768AC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1801063D4 @ 0x1801063D4 (sub_1801063D4.c)
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
  REGHANDLE v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  REGHANDLE v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int16 v31; // r13
  unsigned __int16 v32; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v34; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v35; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v36; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v38; // [rsp+50h] [rbp-B0h]
  ULONGLONG v39; // [rsp+58h] [rbp-A8h]
  _QWORD v40[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v41[16]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 1496) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    sub_180039480(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 1496) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)sub_1800768AC(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v40, 0, sizeof(v40));
    v15 = -1LL;
    v32 = 0;
    v33 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v36 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 1496) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      memset(v41, 0, sizeof(v41));
      v34 = 0;
      v35 = 0;
      if ( *((_DWORD *)v18 + 10) )
      {
        RegHandle = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 1496;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v27 = *((_QWORD *)v20 + 2);
              if ( v27 )
                goto LABEL_48;
              if ( !EtwEventRegister(&stru_180113EE0, 0LL, 0LL, &RegHandle) )
              {
                v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, RegHandle, 0LL);
                if ( v27 )
                {
                  EtwNotificationUnregister(RegHandle, 0LL);
                }
                else
                {
                  v39 = RegHandle;
                  sub_1801063D4(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                  v27 = v39;
                }
                if ( v27 )
                {
LABEL_48:
                  v28 = *v18;
                  v41[0] = v18 + 14;
                  v29 = -1LL;
                  v41[1] = 16LL;
                  do
                    ++v29;
                  while ( *(_WORD *)(v28 + 2 * v29) );
                  v41[3] = 2LL;
                  v41[4] = v28;
                  v34 = 2 * (v29 + 1);
                  v41[5] = v34;
                  v30 = v18[3];
                  v41[2] = &v34;
                  do
                    ++v15;
                  while ( *(_WORD *)(v30 + 2 * v15) );
                  v41[8] = v30;
                  v31 = 2 * (v15 + 1);
                  v41[7] = 2LL;
                  v41[6] = &v35;
                  v41[9] = v31;
                  v35 = v31;
                  EtwEventWrite(v27, &stru_180119170, 5u, (PEVENT_DATA_DESCRIPTOR)v41);
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
      v38 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( EtwEventRegister(&stru_180113EE0, 0LL, 0LL, &v36) )
      {
LABEL_41:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v36, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v36, 0LL);
        v38 = v22;
      }
      else
      {
        v38 = v36;
        sub_1801063D4(v36, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
        v22 = v38;
      }
    }
    if ( v22 )
    {
      v23 = *v14;
      v40[0] = (char *)v14 + 52;
      v24 = -1LL;
      v40[1] = 16LL;
      do
        ++v24;
      while ( *(_WORD *)(v23 + 2 * v24) );
      v40[4] = v23;
      v25 = v14[1];
      v40[2] = &v32;
      v32 = 2 * (v24 + 1);
      v40[5] = v32;
      v26 = -1LL;
      v40[3] = 2LL;
      do
        ++v26;
      while ( *(_WORD *)(v25 + 2 * v26) );
      v40[8] = v25;
      v40[7] = 2LL;
      v33 = 2 * (v26 + 1);
      v40[6] = &v33;
      v40[9] = v33;
      EtwEventWrite(v22, &EventDescriptor, 5u, (PEVENT_DATA_DESCRIPTOR)v40);
    }
    goto LABEL_41;
  }
  return 0LL;
}
