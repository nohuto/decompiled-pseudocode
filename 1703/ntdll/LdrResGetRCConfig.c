/*
 * XREFs of LdrResGetRCConfig @ 0x18005C640
 * Callers:
 *     sub_180038554 @ 0x180038554 (sub_180038554.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     sub_18005C510 @ 0x18005C510 (sub_18005C510.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     sub_18005D0C0 @ 0x18005D0C0 (sub_18005D0C0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 */

__int64 __fastcall LdrResGetRCConfig(void *a1, __int64 a2, ULONG **a3, int a4, char a5)
{
  int v7; // edi
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rsi
  PVOID v11; // rcx
  ULONG *v12; // rax
  unsigned int v13; // edi
  __int64 result; // rax
  unsigned __int64 v15; // r14
  int v16; // ecx
  ULONG *v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  ULONG v20; // ecx
  unsigned int v21; // r9d
  ULONG v22; // ecx
  unsigned int v23; // r9d
  ULONG v24; // ecx
  unsigned int v25; // r9d
  ULONG v26; // ecx
  unsigned int v27; // r9d
  ULONG v28; // ecx
  unsigned int v29; // r9d
  ULONG v30; // ecx
  unsigned int v31; // r9d
  ULONG v32; // ecx
  unsigned int v33; // r9d
  ULONG v34; // ecx
  unsigned int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // [rsp+50h] [rbp-B8h]
  ULONG *v41; // [rsp+58h] [rbp-B0h] BYREF
  PVOID DllHandle; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  ULONG **v44; // [rsp+70h] [rbp-98h]
  __int64 v45[2]; // [rsp+78h] [rbp-90h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  const wchar_t *v47; // [rsp+90h] [rbp-78h]
  int v48; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v49; // [rsp+A0h] [rbp-68h]
  _QWORD v50[3]; // [rsp+A8h] [rbp-60h] BYREF

  v44 = a3;
  DllHandle = a1;
  v45[1] = (__int64)a1;
  v50[0] = L"MUI";
  v50[1] = 1LL;
  v50[2] = 0LL;
  v43 = a2;
  v41 = 0LL;
  v46 = 3145774;
  v47 = L"LdrResGetRCConfig Enter";
  v48 = 3014700;
  v49 = L"LdrResGetRCConfig Exit";
  v7 = a4 & 0x2000;
  v8 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v9 = 2147353477LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    v10 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v39 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v39 = 2147353476LL;
    sub_1800E2008(&v46, *(unsigned __int8 *)v39);
  }
  else
  {
    v10 = 2147353476LL;
  }
  v11 = DllHandle;
  if ( !DllHandle )
  {
    v13 = -1073741811;
    goto LABEL_9;
  }
  if ( !a5 )
  {
LABEL_16:
    if ( !a2 && !v7 )
    {
      result = LdrpResGetMappingSize((__int64)v11, (unsigned __int64 *)&v43, a4, 0);
      if ( (int)result < 0 )
        return result;
    }
    v15 = (unsigned __int64)DllHandle;
    v16 = sub_18005A0E4(DllHandle, v43, (v7 != 0 ? 8240 : 4144) | 0x200000u, (__int64)v50, 3, &v41, v45, 0LL, 0LL);
    if ( v16 < 0 )
    {
      if ( v16 != -1073741701 )
        v16 = -1073741686;
      v13 = v16;
      v40 = v16;
      goto LABEL_21;
    }
    v17 = v41;
    if ( !v7 )
    {
      v19 = v41[1];
      if ( (unsigned __int64)v41 + v19 > v43 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        v13 = -1073741701;
        v40 = -1073741701;
LABEL_21:
        v17 = 0LL;
LABEL_22:
        if ( a5 )
        {
          v18 = -1;
          if ( v17 )
            v18 = (int)v17;
          sub_18005CB40(v15, 0, 0, v18, -1, 0, 2, v13, 0LL);
        }
        goto LABEL_10;
      }
      v13 = -1073020925;
      v40 = -1073020925;
      v20 = v41[17];
      v21 = v20 + v41[18];
      if ( v21 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v21 < v20 )
        goto LABEL_21;
      v22 = v41[19];
      v23 = v22 + v41[20];
      if ( v23 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v23 < v22 )
        goto LABEL_21;
      v24 = v41[21];
      v25 = v24 + v41[22];
      if ( v25 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v25 < v24 )
        goto LABEL_21;
      v26 = v41[23];
      v27 = v26 + v41[24];
      if ( v27 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v27 < v26 )
        goto LABEL_21;
      v28 = v41[25];
      v29 = v28 + v41[26];
      if ( v29 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v29 < v28 )
        goto LABEL_21;
      v30 = v41[27];
      v31 = v30 + v41[28];
      if ( v31 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v31 < v30 )
        goto LABEL_21;
      v32 = v41[29];
      v33 = v32 + v41[30];
      if ( v33 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v33 < v32 )
        goto LABEL_21;
      v34 = v41[31];
      v35 = v34 + v41[32];
      if ( v35 > (unsigned int)v19 )
        goto LABEL_21;
      if ( v35 < v34 )
        goto LABEL_21;
      if ( *v41 != -20054323 )
        goto LABEL_21;
      if ( v19 != v45[0] )
        goto LABEL_21;
      if ( v41[2] != 0x10000 )
        goto LABEL_21;
      v36 = v41[3];
      if ( (_DWORD)v36 )
      {
        if ( !(unsigned __int8)sub_18005D0C0(v36, 7LL, v41) )
          goto LABEL_21;
      }
      if ( !(unsigned __int8)sub_18005D0C0(v17[4] & 0xFFFFFFCF, 3LL, v17) )
        goto LABEL_21;
      if ( !(unsigned __int8)sub_18005D0C0(*(_DWORD *)(v37 + 16) & 0xFFFFFFFC, 48LL, v37) )
        goto LABEL_21;
      if ( (v17[4] & 1) != 0 )
      {
        if ( !(unsigned __int8)sub_18005D0C0(v17[6], 3LL, v17) )
          goto LABEL_21;
        v38 = v17[5];
        if ( (_DWORD)v38 )
        {
          if ( !(unsigned __int8)sub_18005D0C0(v38, 256LL, v17) )
            goto LABEL_21;
        }
      }
    }
    if ( v44 )
      *v44 = v17;
    v13 = 0;
    v40 = 0;
    goto LABEL_22;
  }
  v12 = sub_18002FF94((unsigned __int64)DllHandle, 0, 0LL, 8);
  v41 = v12;
  if ( v12 != (ULONG *)-1LL )
  {
    if ( v12 )
    {
      v13 = 0;
      v40 = 0;
      if ( v44 )
        *v44 = v12;
      goto LABEL_10;
    }
    v11 = DllHandle;
    goto LABEL_16;
  }
  v13 = -1073741686;
LABEL_9:
  v40 = v13;
LABEL_10:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    v13 = v40;
  }
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      v13 = v40;
    }
    sub_1800E2008(&v48, *(unsigned __int8 *)v10);
  }
  return v13;
}
