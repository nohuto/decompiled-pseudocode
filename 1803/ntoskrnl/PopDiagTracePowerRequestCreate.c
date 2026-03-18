/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x1405243F0
 * Callers:
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140525380 (PopCreateKernelPowerRequest.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     PoStoreRequester @ 0x140075BAC (PoStoreRequester.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned __int16 v8; // di
  char *v9; // r14
  _WORD *v10; // rdx
  __int64 v11; // rcx
  __int16 v12; // ax
  wchar_t *v13; // rdx
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // r10
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  unsigned int v21; // r9d
  unsigned __int16 v22; // di
  unsigned __int16 v23; // dx
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG v32; // r9d
  __int64 v33; // rcx
  __int64 v34; // rcx
  _WORD *v35; // rdx
  __int16 v36; // dx
  __int64 v37; // rcx
  _WORD *v38; // r8
  __int16 v39; // ax
  unsigned __int16 v40; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v41; // [rsp+34h] [rbp-CCh] BYREF
  int v42; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+3Ch] [rbp-C4h] BYREF
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int SessionId; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h] BYREF
  int v51; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING NumberOfBytes; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  int *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  int *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h]
  int *p_SessionId; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  int *v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int *v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int *v65; // [rsp+E0h] [rbp-20h]
  __int64 v66; // [rsp+E8h] [rbp-18h]
  int *v67; // [rsp+F0h] [rbp-10h]
  __int64 v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  __int16 *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  __int16 *v77; // [rsp+140h] [rbp+40h]
  __int64 v78; // [rsp+148h] [rbp+48h]
  char *v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  wchar_t pszDest[24]; // [rsp+1D0h] [rbp+D0h] BYREF

  v52 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 80);
      *(_QWORD *)&NumberOfBytes.Length = 0LL;
      v42 = *v5;
      v45 = 0;
      SessionId = 0;
      v43 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v44 = 0;
      v51 = 0;
      v50 = 0;
      PoStoreRequester(*(_QWORD *)(a2 + 80), 0LL, (unsigned __int64 *)&NumberOfBytes.Length, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(SIZE_T *)&NumberOfBytes.Length, 0x50455654u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreRequester(
                    *(_QWORD *)(v52 + 80),
                    (__int64)PoolWithTag,
                    (unsigned __int64 *)&NumberOfBytes.Length,
                    0) >= 0 )
        {
          if ( v42 )
          {
            v45 = v7[6];
            SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v52 + 80) + 8LL));
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
            if ( v42 == 2 )
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
              v34 = 0x7FFFLL;
              v35 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 2));
              do
              {
                if ( !*v35 )
                  break;
                ++v35;
                --v34;
              }
              while ( v34 );
              v36 = v34 ? 0x7FFF - v34 : 0;
              if ( v34 )
              {
                v9 = (char *)v7 + *((_QWORD *)v7 + 2);
                v8 = 2 * v36;
              }
            }
            Length = 0;
            Buffer = 0LL;
            if ( (_DWORD *)((char *)v7 + *((_QWORD *)v7 + 3)) )
            {
              v37 = 0x7FFFLL;
              v38 = (_WORD *)((char *)v7 + *((_QWORD *)v7 + 3));
              do
              {
                if ( !*v38 )
                  break;
                ++v38;
                --v37;
              }
              while ( v37 );
              v39 = v37 ? 0x7FFF - v37 : 0;
              if ( v37 )
              {
                Buffer = (wchar_t *)((char *)v7 + *((_QWORD *)v7 + 3));
                Length = 2 * v39;
              }
            }
          }
          v16 = v52;
          v17 = v43;
          if ( !*(_QWORD *)(v52 + 80) )
            v17 = 1;
          v43 = v17;
          v18 = *(_DWORD *)(v52 + 20);
          if ( (v18 & 2) != 0 )
          {
            v47 = 1;
            v18 = *(_DWORD *)(v52 + 20);
          }
          if ( (v18 & 1) != 0 )
          {
            v48 = 1;
            v18 = *(_DWORD *)(v52 + 20);
          }
          if ( (v18 & 4) != 0 )
          {
            v49 = 1;
            v18 = *(_DWORD *)(v52 + 20);
          }
          if ( (v18 & 8) != 0 )
          {
            v50 = 1;
            v18 = *(_DWORD *)(v52 + 20);
          }
          if ( (v18 & 0x10) != 0 )
          {
            v51 = 1;
            v18 = *(_DWORD *)(v52 + 20);
          }
          v19 = (v18 & 0x20) == 0;
          *(_QWORD *)&UserData.Size = 8LL;
          v20 = v44;
          v21 = 13;
          if ( !v19 )
            v20 = 1;
          v56 = 4LL;
          v44 = v20;
          UserData.Ptr = (ULONGLONG)&v52;
          v55 = &v42;
          v57 = &v45;
          p_SessionId = &SessionId;
          v61 = &v43;
          v63 = &v47;
          v65 = &v48;
          v67 = &v49;
          v69 = v52 + 36;
          v71 = v52 + 32;
          v73 = v52 + 40;
          v22 = v8 >> 1;
          v23 = Length >> 1;
          v75 = (__int16 *)&v40;
          v77 = (__int16 *)&v41;
          v40 = v22;
          v41 = v23;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 4LL;
          v72 = 4LL;
          v74 = 4LL;
          v76 = 2LL;
          v78 = 2LL;
          if ( v22 )
          {
            v21 = 14;
            v79 = v9;
            v80 = 2 * v22;
            v81 = 0;
          }
          if ( v23 )
          {
            v33 = 2LL * v21++;
            *(&UserData.Ptr + v33) = (ULONGLONG)Buffer;
            *(&UserData.Size + 2 * v33) = 2 * v23;
            *(&UserData.Reserved + 2 * v33) = 0;
          }
          v24 = 2LL * v21;
          v25 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v24) = (ULONGLONG)&v50;
          *((_QWORD *)&UserData.Size + v24) = 4LL;
          v26 = v21 + 1;
          v27 = v21 + 2;
          v26 *= 2LL;
          *(&UserData.Ptr + v26) = (ULONGLONG)&v51;
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v28 = 2LL * v27;
          *(&UserData.Ptr + v28) = (ULONGLONG)&v44;
          *((_QWORD *)&UserData.Size + v28) = 4LL;
          v29 = v27 + 1;
          v27 += 2;
          v29 *= 2LL;
          *(&UserData.Ptr + v29) = v16 + 44;
          *((_QWORD *)&UserData.Size + v29) = 4LL;
          v30 = 2LL * v27;
          *(&UserData.Ptr + v30) = v16 + 48;
          *((_QWORD *)&UserData.Size + v30) = 4LL;
          v31 = v27 + 1;
          v32 = v27 + 2;
          v31 *= 2LL;
          *(&UserData.Ptr + v31) = v16 + 52;
          *((_QWORD *)&UserData.Size + v31) = 4LL;
          if ( !a1 )
            v25 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v25, 0LL, v32, &UserData);
        }
        ExFreePoolWithTag(v7, 0x50455654u);
      }
    }
  }
}
