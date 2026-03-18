/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC
 * Callers:
 *     RIMFindMonitorForDigitizer @ 0x1C0008644 (RIMFindMonitorForDigitizer.c)
 *     RIMOnMonitorNotification @ 0x1C0009AF0 (RIMOnMonitorNotification.c)
 * Callees:
 *     UserLogError @ 0x1C0008700 (UserLogError.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x1C000B2E0 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetContainerId @ 0x1C000B2FC (RIMGetContainerId.c)
 *     rimSetPointerDeviceDisplayConfig @ 0x1C000B8E4 (rimSetPointerDeviceDisplayConfig.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C000BC30 (DrvGetWDDMAdapterInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  _DWORD *v5; // r12
  unsigned int v6; // r13d
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r8
  int v16; // ecx
  int v17; // r11d
  int v18; // r12d
  __int64 v19; // rcx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  int v22; // edx
  unsigned __int16 *v23; // rax
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rbx
  unsigned int v32; // r14d
  __int64 v33; // r10
  int v34; // r13d
  unsigned __int64 v35; // r8
  __int64 v36; // r11
  unsigned __int64 v37; // r9
  _QWORD *v38; // r14
  unsigned int v39; // r12d
  __int64 result; // rax
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  int v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+44h] [rbp-BCh]
  int v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  struct _DEVICE_OBJECT *v57; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h]
  __int64 v59; // [rsp+88h] [rbp-78h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  _QWORD v61[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h]
  __int64 v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  _DWORD v65[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+E0h] [rbp-20h]
  _WORD v68[134]; // [rsp+174h] [rbp+74h] BYREF

  v5 = a5;
  v6 = 0;
  v53 = a3;
  v60 = a1;
  v8 = a2;
  v56 = (__int64)a5;
  if ( !a4 )
    goto LABEL_84;
  v55 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v52 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v48 = 0LL;
  v15 = 0LL;
  v54 = 0LL;
  v16 = 0;
  v49 = 0;
  v17 = 0;
  v47 = 0;
  v59 = 0LL;
  v51 = 1;
  if ( !*(_DWORD *)a4 )
    goto LABEL_33;
  v18 = 0;
  do
  {
    v63 = 0LL;
    v64 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject() >= 0 )
    {
      RIMGetContainerId(v57, &v63, 0LL);
      ObfDereferenceObject(Object);
    }
    v19 = *(_QWORD *)(a4 + 8);
    v66 = *(_QWORD *)(v19 + 72LL * v6 + 20);
    v67 = *(_DWORD *)(v19 + 72LL * v6 + 28);
    v65[1] = 420;
    v65[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo(v65) < 0 || !v68[0] )
      goto LABEL_17;
    v20 = v68;
    do
    {
      v21 = *(unsigned __int16 *)((char *)v20 + v8 + 1136 - (_QWORD)v68);
      v22 = *v20 - v21;
      if ( v22 )
        break;
      ++v20;
    }
    while ( v21 );
    if ( !v22 )
      v11 = *(_QWORD *)(a4 + 8) + 72LL * v6;
    v23 = v68;
    do
    {
      v24 = *(unsigned __int16 *)((char *)v23 + v8 + 880 - (_QWORD)v68);
      v25 = *v23 - v24;
      if ( v25 )
        break;
      ++v23;
    }
    while ( v24 );
    if ( !v25 )
    {
      v9 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v52 = v9;
    }
    else
    {
LABEL_17:
      v9 = v52;
    }
    v26 = *(_QWORD *)(v8 + 268) - v63;
    if ( !v26 )
      v26 = *(_QWORD *)(v8 + 276) - v64;
    if ( v26 )
    {
      v17 = v47;
    }
    else
    {
      v45 = v59 - *(_QWORD *)(v8 + 268);
      if ( v59 == *(_QWORD *)(v8 + 268) )
        v45 = v59 - *(_QWORD *)(v8 + 276);
      v17 = v47;
      if ( v45 )
      {
        v17 = ++v47;
        v15 = *(_QWORD *)(a4 + 8) + 72LL * v6;
        v54 = v15;
        goto LABEL_23;
      }
    }
    v15 = v54;
LABEL_23:
    v27 = *(_QWORD *)(a4 + 8) + 72LL * v6;
    v28 = *(_DWORD *)(v27 + 36);
    if ( v28 == 0x80000000 || v28 == 11 || v28 == 13 )
    {
      v13 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v14 = v48;
      v10 = ++v49;
      v55 = v27;
    }
    else
    {
      v10 = v49;
      ++v18;
      v13 = v55;
      v14 = *(_QWORD *)(a4 + 8) + 72LL * v6;
      v48 = v14;
    }
    if ( !v12 )
    {
      v29 = *(_QWORD *)(a4 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v27 + 14) << 6);
      if ( !*(_DWORD *)(v29 + 28) && !*(_DWORD *)(v29 + 32) )
        v12 = v27;
    }
    ++v6;
  }
  while ( v6 < *(_DWORD *)a4 );
  v50 = v18;
  v16 = v18;
  v5 = (_DWORD *)v56;
LABEL_33:
  if ( v5 )
  {
    v44 = 0;
    if ( v16 )
      v44 = v51;
    *v5 = v44;
  }
  if ( v11 )
  {
    *(_DWORD *)(v8 + 876) = 5;
    goto LABEL_43;
  }
  if ( v9 )
  {
    v11 = v9;
    *(_DWORD *)(v8 + 876) = 1;
    goto LABEL_43;
  }
  LODWORD(a2) = 1;
  if ( v15 && v17 == 1 )
  {
    v11 = v15;
    goto LABEL_77;
  }
  v30 = *(_DWORD *)(v8 + 264);
  if ( !v30 && v13 && v10 == 1 )
  {
    v11 = v13;
    goto LABEL_77;
  }
  if ( v30 != 1 || !v14 || v16 != 1 )
  {
    if ( v12 )
    {
      *(_DWORD *)(v8 + 876) = 3;
      v11 = v12;
      if ( v5 )
        UserLogError(-2147483385);
      goto LABEL_43;
    }
    goto LABEL_84;
  }
  v11 = v14;
LABEL_77:
  *(_DWORD *)(v8 + 876) = 2;
LABEL_43:
  v31 = *(_QWORD *)v11;
  LODWORD(a2) = 0;
  v32 = *(_DWORD *)a4;
  v33 = *(_QWORD *)(a4 + 16);
  v34 = *(_DWORD *)(v11 + 8);
  v35 = (unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6;
  v48 = *(_QWORD *)v11;
  if ( v32 )
  {
    v36 = *(_QWORD *)(a4 + 8);
    while ( 1 )
    {
      v37 = (unsigned __int64)*(unsigned __int16 *)(v36 + 72LL * (unsigned int)a2 + 14) << 6;
      if ( *(_DWORD *)(v37 + v33 + 28) == *(_DWORD *)(v35 + v33 + 28)
        && *(_DWORD *)(v37 + v33 + 32) == *(_DWORD *)(v35 + v33 + 32) )
      {
        break;
      }
      LODWORD(a2) = a2 + 1;
      if ( (unsigned int)a2 >= v32 )
        goto LABEL_48;
    }
    v31 = *(_QWORD *)(v36 + 72LL * (unsigned int)a2);
    v34 = *(_DWORD *)(v36 + 72LL * (unsigned int)a2 + 8);
    v48 = v31;
  }
LABEL_48:
  v38 = (_QWORD *)*((_QWORD *)gpDispInfo + 12);
  if ( !v38 )
  {
LABEL_84:
    if ( v56 )
      UserLogError(-2147483385);
    v46 = *((_QWORD *)gpDispInfo + 11);
    *(_QWORD *)(v8 + 288) = v46;
    if ( v46 )
      *(_OWORD *)(v8 + 124) = *(_OWORD *)(*(_QWORD *)(v46 + 40) + 28LL);
    LOBYTE(a2) = 3;
    result = WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               18,
               11,
               (__int64)&WPP_2af9596112663d0feb47807a2bcd069c_Traceguids);
    *(_DWORD *)(v8 + 876) = 4;
    return result;
  }
  v39 = HIDWORD(v48);
  while ( !(unsigned int)DrvGetWDDMAdapterInfo(v38[16], 1LL, &v48, &v51) || v51 != v34 || v48 != __PAIR64__(v39, v31) )
  {
    v38 = (_QWORD *)v38[7];
    if ( !v38 )
      goto LABEL_84;
  }
  *(_QWORD *)(v8 + 288) = v38;
  result = *(unsigned int *)(v8 + 260);
  *(_OWORD *)(v8 + 124) = *(_OWORD *)(v38[5] + 28LL);
  if ( (result & 0x20) == 0 || (result & 0x10000) != 0 )
  {
    v41 = *(_QWORD *)(a4 + 16);
    v42 = *(_DWORD *)(v11 + 32);
    v43 = v41 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6);
    v61[0] = v11;
    v61[1] = v43;
    v61[2] = v41 + ((unsigned __int64)*(unsigned __int16 *)(v11 + 34) << 6);
    if ( (_WORD)v42 == 0xFFFF )
      v62 = 0LL;
    else
      v62 = v41 + ((unsigned __int64)(unsigned __int16)v42 << 6);
    return rimSetPointerDeviceDisplayConfig(v60, v8, v53, v61);
  }
  return result;
}
