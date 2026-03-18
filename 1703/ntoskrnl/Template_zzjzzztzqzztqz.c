/*
 * XREFs of Template_zzjzzztzqzztqz @ 0x14015013C
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zzjzzztzqzztqz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5,
        __int64 a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        char a10,
        const wchar_t *a11,
        char a12,
        const wchar_t *a13,
        const wchar_t *a14,
        char a15,
        char a16,
        const wchar_t *a17)
{
  __int64 v17; // rcx
  int v19; // edx
  __int64 v20; // rax
  ULONG v21; // r8d
  const wchar_t *v22; // rax
  __int64 v23; // r8
  int v24; // r9d
  const wchar_t *v25; // rax
  __int64 v26; // r8
  int v27; // r9d
  const wchar_t *v28; // rax
  __int64 v29; // r8
  int v30; // r9d
  const wchar_t *v31; // r8
  __int64 v32; // rax
  int v33; // r9d
  const wchar_t *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const wchar_t *v37; // rax
  __int64 v38; // r8
  int v39; // r9d
  const wchar_t *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  const wchar_t *v43; // rax
  bool v44; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v47; // [rsp+50h] [rbp-B0h]
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+5Ch] [rbp-A4h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  __int64 v51; // [rsp+68h] [rbp-98h]
  const wchar_t *v52; // [rsp+70h] [rbp-90h]
  int v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+7Ch] [rbp-84h]
  const wchar_t *v55; // [rsp+80h] [rbp-80h]
  int v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+8Ch] [rbp-74h]
  const wchar_t *v58; // [rsp+90h] [rbp-70h]
  int v59; // [rsp+98h] [rbp-68h]
  int v60; // [rsp+9Ch] [rbp-64h]
  char *v61; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h]
  const wchar_t *v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B8h] [rbp-48h]
  int v65; // [rsp+BCh] [rbp-44h]
  char *v66; // [rsp+C0h] [rbp-40h]
  __int64 v67; // [rsp+C8h] [rbp-38h]
  const wchar_t *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  const wchar_t *v71; // [rsp+E0h] [rbp-20h]
  int v72; // [rsp+E8h] [rbp-18h]
  int v73; // [rsp+ECh] [rbp-14h]
  char *v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  char *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  const wchar_t *v78; // [rsp+110h] [rbp+10h]
  int v79; // [rsp+118h] [rbp+18h]
  int v80; // [rsp+11Ch] [rbp+1Ch]

  v17 = -1LL;
  v19 = 10;
  if ( a4 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a4[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v22 = a5;
  UserData.Size = v21;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  UserData.Ptr = (ULONGLONG)a4;
  if ( a5 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a5[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v48 = v24;
  v49 = 0;
  if ( !a5 )
    v22 = L"NULL";
  v51 = 16LL;
  v47 = v22;
  v50 = a6;
  v25 = a7;
  if ( a7 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a7[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v53 = v27;
  v54 = 0;
  if ( !a7 )
    v25 = L"NULL";
  v52 = v25;
  v28 = a8;
  if ( a8 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a8[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v30 = 10;
  }
  v31 = a9;
  v56 = v30;
  if ( !a8 )
    v28 = L"NULL";
  v57 = 0;
  v55 = v28;
  if ( a9 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a9[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v59 = v33;
  v60 = 0;
  if ( !a9 )
    v31 = L"NULL";
  v61 = &a10;
  v58 = v31;
  v34 = a11;
  v62 = 4LL;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v64 = v36;
  v66 = &a12;
  v37 = a13;
  if ( !a11 )
    v34 = L"NULL";
  v65 = 0;
  v63 = v34;
  v67 = 4LL;
  if ( a13 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a13[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v39 = 10;
  }
  v40 = a14;
  v69 = v39;
  if ( !a13 )
    v37 = L"NULL";
  v70 = 0;
  v68 = v37;
  if ( a14 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( a14[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v42 = 10;
  }
  v72 = v42;
  v74 = &a15;
  v73 = 0;
  if ( !a14 )
    v40 = L"NULL";
  v76 = &a16;
  v43 = a17;
  v71 = v40;
  v75 = 4LL;
  v77 = 4LL;
  v44 = a17 == 0LL;
  if ( a17 )
  {
    do
      ++v17;
    while ( a17[v17] );
    v19 = 2 * v17 + 2;
    v44 = a17 == 0LL;
  }
  if ( v44 )
    v43 = L"NULL";
  v79 = v19;
  v78 = v43;
  v80 = 0;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, a2, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
}
