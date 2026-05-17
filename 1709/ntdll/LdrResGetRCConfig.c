/*
 * XREFs of LdrResGetRCConfig @ 0x18001F860
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     RtlpResUltimateFallbackInfo @ 0x18001F734 (RtlpResUltimateFallbackInfo.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18007DAD8 (LdrpVerifyAlternateResourceModule.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007F19C (LdrpResReportResourceAccessInternal.c)
 * Callees:
 *     CheckOneBitValidFlag @ 0x18001C0EC (CheckOneBitValidFlag.c)
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     LdrpGetFromMUIMemCache @ 0x180029A0C (LdrpGetFromMUIMemCache.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074F58 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResGetRCConfig(__int64 a1, __int64 a2, _QWORD *a3, int a4, char a5)
{
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // r14
  int v19; // eax
  _DWORD *v20; // r8
  int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // r9d
  unsigned int v27; // r9d
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // [rsp+50h] [rbp-B8h]
  _DWORD *v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp-98h]
  __int64 v38[2]; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v40; // [rsp+90h] [rbp-78h]
  int v41; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v42; // [rsp+A0h] [rbp-68h]
  _QWORD v43[3]; // [rsp+A8h] [rbp-60h] BYREF

  v37 = a3;
  v35 = a1;
  v38[1] = a1;
  v43[0] = L"MUI";
  v43[1] = 1LL;
  v43[2] = 0LL;
  v36 = a2;
  v34 = 0LL;
  v39 = 3145774;
  v40 = L"LdrResGetRCConfig Enter";
  v41 = 3014700;
  v42 = L"LdrResGetRCConfig Exit";
  v7 = a4 & 0x2000;
  v9 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    v11 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10, v8) )
      v32 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v32 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v39, *(unsigned __int8 *)v32);
  }
  else
  {
    v11 = 2147353476LL;
  }
  v12 = v35;
  if ( !v35 )
  {
    v14 = -1073741811;
    goto LABEL_9;
  }
  if ( !a5 )
  {
LABEL_16:
    if ( !a2 && !v7 )
    {
      result = LdrpResGetMappingSize(v12, (unsigned __int64 *)&v36, a4, 0);
      if ( (int)result < 0 )
        return result;
    }
    v18 = v35;
    v19 = LdrpResSearchResourceMappedFile(
            v35,
            v36,
            (v7 != 0 ? 8240 : 4144) | 0x200000u,
            (__int64)v43,
            3u,
            (__int64 *)&v34,
            v38,
            0LL,
            0LL);
    v12 = (unsigned int)v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741701 )
        v12 = 3221225610LL;
      v14 = v12;
      v33 = v12;
      goto LABEL_21;
    }
    v20 = v34;
    if ( !v7 )
    {
      v8 = (unsigned int)v34[1];
      v12 = v36 + (v18 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (unsigned __int64)v34 + v8 > v12 )
      {
        v14 = -1073741701;
        v33 = -1073741701;
LABEL_21:
        v20 = 0LL;
LABEL_22:
        if ( a5 )
        {
          v21 = -1;
          if ( v20 )
            v21 = (int)v20;
          LdrpSetAlternateResourceModuleHandle(v18, 0, 0, v21, -1, 0, 2, v14, 0LL);
        }
        goto LABEL_10;
      }
      v14 = -1073020925;
      v33 = -1073020925;
      v12 = (unsigned int)v34[17];
      v22 = v12 + v34[18];
      if ( v22 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v22 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[19];
      v23 = v12 + v34[20];
      if ( v23 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v23 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[21];
      v24 = v12 + v34[22];
      if ( v24 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v24 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[23];
      v25 = v12 + v34[24];
      if ( v25 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v25 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[25];
      v26 = v12 + v34[26];
      if ( v26 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v26 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[27];
      v27 = v12 + v34[28];
      if ( v27 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v27 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[29];
      v28 = v12 + v34[30];
      if ( v28 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v28 < (unsigned int)v12 )
        goto LABEL_21;
      v12 = (unsigned int)v34[31];
      v29 = v12 + v34[32];
      if ( v29 > (unsigned int)v8 )
        goto LABEL_21;
      if ( v29 < (unsigned int)v12 )
        goto LABEL_21;
      if ( *v34 != -20054323 )
        goto LABEL_21;
      if ( v8 != v38[0] )
        goto LABEL_21;
      if ( v34[2] != 0x10000 )
        goto LABEL_21;
      v30 = v34[3];
      if ( v30 )
      {
        if ( !CheckOneBitValidFlag(v30, 7) )
          goto LABEL_21;
      }
      if ( !CheckOneBitValidFlag(v20[4] & 0xFFFFFFCF, 3) )
        goto LABEL_21;
      if ( !CheckOneBitValidFlag(*(_DWORD *)(v31 + 16) & 0xFFFFFFFC, 48) )
        goto LABEL_21;
      if ( (v20[4] & 1) != 0 )
      {
        if ( !CheckOneBitValidFlag(v20[6], 3) )
          goto LABEL_21;
        v12 = (unsigned int)v20[5];
        if ( (_DWORD)v12 )
        {
          if ( !CheckOneBitValidFlag(v12, 256) )
            goto LABEL_21;
        }
      }
    }
    if ( v37 )
      *v37 = v20;
    v14 = 0;
    v33 = 0;
    goto LABEL_22;
  }
  v13 = (_DWORD *)LdrpGetFromMUIMemCache(v35, 0LL, 0LL, 8LL);
  v34 = v13;
  if ( v13 != (_DWORD *)-1LL )
  {
    if ( v13 )
    {
      v14 = 0;
      v33 = 0;
      v12 = (unsigned __int64)v37;
      if ( v37 )
        *v37 = v13;
      goto LABEL_10;
    }
    v12 = v35;
    goto LABEL_16;
  }
  v14 = -1073741686;
LABEL_9:
  v33 = v14;
LABEL_10:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v8) )
  {
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    v14 = v33;
  }
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15) )
    {
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
      v14 = v33;
    }
    LdrpTraceLoadMUIDll(&v41, *(unsigned __int8 *)v11);
  }
  return v14;
}
