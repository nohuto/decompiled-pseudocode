/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x1404C633C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PoStoreRequester @ 0x1400718B4 (PoStoreRequester.c)
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned __int16 v8; // di
  char *v9; // rsi
  _WORD *v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // ax
  wchar_t *v13; // rdx
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // r8
  __int64 v16; // r10
  int v17; // eax
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int16 v25; // di
  unsigned __int16 v26; // dx
  __int64 v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  ULONG v35; // r9d
  __int64 v36; // rcx
  _WORD *v37; // rdx
  __int16 v38; // dx
  __int64 v39; // rcx
  _WORD *v40; // r9
  __int16 v41; // ax
  __int64 v42; // rcx
  unsigned __int16 v43; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v44; // [rsp+34h] [rbp-CCh] BYREF
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+3Ch] [rbp-C4h] BYREF
  int v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+44h] [rbp-BCh] BYREF
  int v49; // [rsp+48h] [rbp-B8h] BYREF
  int v50; // [rsp+4Ch] [rbp-B4h] BYREF
  int v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+54h] [rbp-ACh] BYREF
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v58; // [rsp+90h] [rbp-70h]
  __int64 v59; // [rsp+98h] [rbp-68h]
  int *v60; // [rsp+A0h] [rbp-60h]
  __int64 v61; // [rsp+A8h] [rbp-58h]
  int *p_SessionId; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h]
  int *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  int *v66; // [rsp+D0h] [rbp-30h]
  __int64 v67; // [rsp+D8h] [rbp-28h]
  int *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  __int64 v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  __int16 *v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int16 *v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  char *v82; // [rsp+150h] [rbp+50h]
  int v83; // [rsp+158h] [rbp+58h]
  int v84; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v55 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      *(_QWORD *)&NumberOfBytes.Length = 0LL;
      v45 = *v5;
      v53 = 0;
      SessionId = 0;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v52 = 0;
      v51 = 0;
      v50 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v55 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          if ( v45 )
          {
            v53 = v7[6];
            SessionId = MmGetSessionIdEx(*(struct _KPROCESS **)(*(_QWORD *)(v55 + 80) + 8LL));
            v8 = 0;
            v9 = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v10 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              v11 = 0x7FFFLL;
              do
              {
                if ( !*v10 )
                  break;
                ++v10;
                --v11;
              }
              while ( v11 );
              v12 = v11 ? 0x7FFF - v11 : 0;
              if ( v11 )
              {
                v8 = 2 * v12;
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
              }
            }
            if ( v45 == 2 )
            {
              RtlStringCbPrintfW(pszDest, 0x2CuLL, L"%d", (unsigned int)v7[7]);
              v13 = pszDest;
            }
            else
            {
              v13 = 0LL;
            }
            RtlInitUnicodeString(&NumberOfBytes, v13);
            Length = NumberOfBytes.Length;
            Buffer = NumberOfBytes.Buffer;
          }
          else
          {
            v8 = 0;
            v9 = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 2)) )
            {
              v36 = 0x7FFFLL;
              v37 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              do
              {
                if ( !*v37 )
                  break;
                ++v37;
                --v36;
              }
              while ( v36 );
              v38 = v36 ? 0x7FFF - v36 : 0;
              if ( v36 )
              {
                v8 = 2 * v38;
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
              }
            }
            Length = 0;
            Buffer = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 3)) )
            {
              v39 = 0x7FFFLL;
              v40 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 3));
              do
              {
                if ( !*v40 )
                  break;
                ++v40;
                --v39;
              }
              while ( v39 );
              v41 = v39 ? 0x7FFF - v39 : 0;
              if ( v39 )
              {
                Length = 2 * v41;
                Buffer = (wchar_t *)((char *)v7 + *((_QWORD *)v7 + 3));
              }
            }
          }
          v16 = v55;
          v17 = v46;
          v18 = 13;
          if ( !*(_QWORD *)(v55 + 80) )
            v17 = 1;
          v46 = v17;
          v19 = v47;
          if ( (*(_BYTE *)(v55 + 20) & 2) != 0 )
            v19 = 1;
          v47 = v19;
          v20 = v48;
          if ( (*(_BYTE *)(v55 + 20) & 1) != 0 )
            v20 = 1;
          v48 = v20;
          v21 = v49;
          if ( (*(_BYTE *)(v55 + 20) & 4) != 0 )
            v21 = 1;
          v49 = v21;
          v22 = v50;
          if ( (*(_BYTE *)(v55 + 20) & 8) != 0 )
            v22 = 1;
          v50 = v22;
          v23 = v51;
          if ( (*(_BYTE *)(v55 + 20) & 0x10) != 0 )
            v23 = 1;
          v51 = v23;
          v24 = v52;
          if ( (*(_BYTE *)(v55 + 20) & 0x20) != 0 )
            v24 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v52 = v24;
          UserData.Ptr = (ULONGLONG)&v55;
          v58 = &v45;
          v60 = &v53;
          p_SessionId = &SessionId;
          v64 = &v46;
          v66 = &v47;
          v68 = &v48;
          v70 = &v49;
          v72 = v55 + 36;
          v74 = v55 + 32;
          v76 = v55 + 40;
          v25 = v8 >> 1;
          v26 = Length >> 1;
          v78 = (__int16 *)&v43;
          v80 = (__int16 *)&v44;
          v43 = v25;
          v44 = v26;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 2LL;
          v81 = 2LL;
          if ( v25 )
          {
            v18 = 14;
            v82 = v9;
            v83 = 2 * v25;
            v84 = 0;
          }
          if ( v26 )
          {
            v42 = 2LL * v18++;
            *(&UserData.Ptr + v42) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v42) = 2 * v26;
            *(&UserData.Reserved + 2 * v42) = 0;
          }
          v27 = 2LL * v18;
          v28 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v27) = (ULONGLONG)&v50;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          v29 = v18 + 1;
          v30 = v18 + 2;
          v29 *= 2LL;
          *(&UserData.Ptr + v29) = (ULONGLONG)&v51;
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          v31 = 2LL * v30;
          *(&UserData.Ptr + v31) = (ULONGLONG)&v52;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          v32 = v30 + 1;
          v30 += 2;
          v32 *= 2LL;
          *(&UserData.Ptr + v32) = v16 + 44;
          *((_QWORD *)&UserData.Size + v32) = 4LL;
          v33 = 2LL * v30;
          *(&UserData.Ptr + v33) = v16 + 48;
          *((_QWORD *)&UserData.Size + v33) = 4LL;
          v34 = v30 + 1;
          v35 = v30 + 2;
          v34 *= 2LL;
          *(&UserData.Ptr + v34) = v16 + 52;
          *((_QWORD *)&UserData.Size + v34) = 4LL;
          if ( !a1 )
            v28 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v28, 0LL, v35, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
