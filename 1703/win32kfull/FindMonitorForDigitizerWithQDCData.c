/*
 * XREFs of FindMonitorForDigitizerWithQDCData @ 0x1C01A6BD0
 * Callers:
 *     FindMonitorForDigitizer @ 0x1C01A6B50 (FindMonitorForDigitizer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01A5A18 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 *     GetContainerId @ 0x1C01A71AC (GetContainerId.c)
 */

void __fastcall FindMonitorForDigitizerWithQDCData(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        unsigned int *a3,
        int *a4)
{
  __int64 v5; // rcx
  int *v6; // r13
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r8
  int v14; // ebx
  int v15; // edx
  int v16; // r11d
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned __int16 *v19; // rax
  int v20; // ecx
  int v21; // edx
  unsigned __int16 *v22; // rax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rbx
  unsigned int v34; // r14d
  __int64 v35; // r9
  int v36; // r12d
  unsigned __int64 v37; // r8
  __int64 v38; // r11
  unsigned __int64 v39; // r10
  _QWORD *v40; // r14
  unsigned int v41; // r13d
  int WDDMAdapterInfo; // eax
  struct tagQDC_DATA *v43; // r9
  int v44; // eax
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+20h] [rbp-E0h]
  __int64 v51; // [rsp+28h] [rbp-D8h] BYREF
  int v52; // [rsp+30h] [rbp-D0h]
  int v53; // [rsp+34h] [rbp-CCh]
  int v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h]
  int *v59; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  _QWORD v62[4]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h]
  _DWORD v65[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+C0h] [rbp-40h]
  _WORD v68[134]; // [rsp+154h] [rbp+54h] BYREF

  v59 = a4;
  v5 = 0LL;
  v56 = a2;
  v6 = a4;
  if ( !a3 )
    goto LABEL_80;
  v58 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v51 = 0LL;
  v13 = 0LL;
  v57 = 0LL;
  v14 = 0;
  v52 = 0;
  v15 = 0;
  v53 = 0;
  v16 = 0;
  v50 = 0;
  v61 = 0LL;
  v54 = 1;
  if ( !*a3 )
    goto LABEL_38;
  v17 = 0;
  do
  {
    v63 = 0LL;
    v64 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                *((_QWORD *)a3 + 1) + 20LL + 72LL * v17,
                *(unsigned int *)(*((_QWORD *)a3 + 1) + 72LL * v17 + 28),
                &Object,
                &v55) >= 0 )
    {
      GetContainerId(v55, &v63, 0LL);
      ObfDereferenceObject(Object);
    }
    v18 = *((_QWORD *)a3 + 1);
    v66 = *(_QWORD *)(v18 + 72LL * v17 + 20);
    v67 = *(_DWORD *)(v18 + 72LL * v17 + 28);
    v65[1] = 420;
    v65[0] = 2;
    if ( (int)DrvDisplayConfigGetDeviceInfo(v65) >= 0 && v68[0] )
    {
      v19 = v68;
      do
      {
        v20 = *(unsigned __int16 *)((char *)v19
                                  + (struct tagHID_POINTER_DEVICE_INFO *)((char *)a1 + 1136)
                                  - (struct tagHID_POINTER_DEVICE_INFO *)v68);
        v21 = *v19 - v20;
        if ( v21 )
          break;
        ++v19;
      }
      while ( v20 );
      if ( !v21 )
        v8 = *((_QWORD *)a3 + 1) + 72LL * v17;
      v22 = v68;
      do
      {
        v23 = *(unsigned __int16 *)((char *)v22
                                  + (struct tagHID_POINTER_DEVICE_INFO *)((char *)a1 + 880)
                                  - (struct tagHID_POINTER_DEVICE_INFO *)v68);
        v24 = *v22 - v23;
        if ( v24 )
          break;
        ++v22;
      }
      while ( v23 );
      if ( !v24 )
        v9 = *((_QWORD *)a3 + 1) + 72LL * v17;
    }
    v25 = *(_QWORD *)((char *)a1 + 268) - v63;
    if ( !v25 )
      v25 = *(_QWORD *)((char *)a1 + 276) - v64;
    if ( v25 )
    {
      v16 = v50;
LABEL_26:
      v13 = v57;
      goto LABEL_27;
    }
    v26 = v61 - *(_QWORD *)((char *)a1 + 268);
    if ( v61 == *(_QWORD *)((char *)a1 + 268) )
      v26 = v61 - *(_QWORD *)((char *)a1 + 276);
    v16 = v50;
    if ( !v26 )
      goto LABEL_26;
    v16 = ++v50;
    v13 = *((_QWORD *)a3 + 1) + 72LL * v17;
    v57 = v13;
LABEL_27:
    v27 = *((_QWORD *)a3 + 1) + 72LL * v17;
    v28 = *(_DWORD *)(v27 + 36);
    if ( v28 == 0x80000000 || v28 == 11 || v28 == 13 )
    {
      v11 = *((_QWORD *)a3 + 1) + 72LL * v17;
      v12 = v51;
      v14 = v52 + 1;
      v15 = v53;
      ++v52;
      v58 = v27;
    }
    else
    {
      v12 = *((_QWORD *)a3 + 1) + 72LL * v17;
      v11 = v58;
      v15 = v53 + 1;
      v14 = v52;
      ++v53;
      v51 = v27;
    }
    if ( !v10 )
    {
      v29 = *((_QWORD *)a3 + 2) + ((unsigned __int64)*(unsigned __int16 *)(v27 + 14) << 6);
      if ( !*(_DWORD *)(v29 + 28) && !*(_DWORD *)(v29 + 32) )
        v10 = v27;
    }
    ++v17;
  }
  while ( v17 < *a3 );
  v6 = v59;
  v5 = 0LL;
LABEL_38:
  if ( v6 )
  {
    v30 = 0;
    if ( v15 )
      v30 = v54;
    *v6 = v30;
  }
  if ( v8 )
  {
    *((_DWORD *)a1 + 219) = 5;
    goto LABEL_61;
  }
  if ( v9 )
  {
    v8 = v9;
    *((_DWORD *)a1 + 219) = 1;
    goto LABEL_61;
  }
  if ( v13 && v16 == 1 )
  {
    v8 = v13;
    goto LABEL_57;
  }
  v31 = *((_DWORD *)a1 + 66);
  if ( !v31 && v11 && v14 == 1 )
  {
    v8 = v11;
    goto LABEL_57;
  }
  if ( v31 != 1 || !v12 || v15 != 1 )
  {
    if ( v10 )
    {
      *((_DWORD *)a1 + 219) = 3;
      v8 = v10;
      if ( v6 )
        UserLogError(2147483911LL);
      goto LABEL_61;
    }
    goto LABEL_80;
  }
  v8 = v12;
LABEL_57:
  *((_DWORD *)a1 + 219) = 2;
LABEL_61:
  v32 = 0;
  v33 = *(_QWORD *)v8;
  v34 = *a3;
  v35 = *((_QWORD *)a3 + 2);
  v36 = *(_DWORD *)(v8 + 8);
  v37 = (unsigned __int64)*(unsigned __int16 *)(v8 + 14) << 6;
  v51 = *(_QWORD *)v8;
  if ( v34 )
  {
    v38 = *((_QWORD *)a3 + 1);
    while ( 1 )
    {
      v39 = (unsigned __int64)*(unsigned __int16 *)(v38 + 72LL * v32 + 14) << 6;
      if ( *(_DWORD *)(v39 + v35 + 28) == *(_DWORD *)(v37 + v35 + 28)
        && *(_DWORD *)(v39 + v35 + 32) == *(_DWORD *)(v37 + v35 + 32) )
      {
        break;
      }
      if ( ++v32 >= v34 )
        goto LABEL_68;
    }
    v33 = *(_QWORD *)(v38 + 72LL * v32);
    v36 = *(_DWORD *)(v38 + 72LL * v32 + 8);
    v51 = v33;
  }
LABEL_68:
  v40 = *(_QWORD **)(gpDispInfo + 96LL);
  v5 = 0LL;
  if ( !v40 )
  {
LABEL_80:
    if ( v59 )
      UserLogError(2147483911LL);
    v49 = *(_QWORD *)(GetDispInfo(v5) + 88);
    *((_QWORD *)a1 + 36) = v49;
    if ( v49 )
      *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(*(_QWORD *)(v49 + 40) + 28LL);
    *((_DWORD *)a1 + 219) = 4;
    return;
  }
  v41 = HIDWORD(v51);
  while ( 1 )
  {
    WDDMAdapterInfo = DrvGetWDDMAdapterInfo(v40[16], 1LL, &v51, &v54);
    v5 = 0LL;
    if ( WDDMAdapterInfo )
    {
      if ( v54 == v36 && v51 == __PAIR64__(v41, v33) )
        break;
    }
    v40 = (_QWORD *)v40[7];
    if ( !v40 )
      goto LABEL_80;
  }
  *((_QWORD *)a1 + 36) = v40;
  v44 = *((_DWORD *)a1 + 65);
  *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(v40[5] + 28LL);
  if ( (v44 & 0x20) == 0 )
  {
    v45 = *((_QWORD *)a3 + 2);
    v46 = *(_DWORD *)(v8 + 32);
    v47 = v45 + ((unsigned __int64)*(unsigned __int16 *)(v8 + 14) << 6);
    v62[0] = v8;
    v62[1] = v47;
    v62[2] = v45 + ((unsigned __int64)*(unsigned __int16 *)(v8 + 34) << 6);
    if ( (_WORD)v46 == 0xFFFF )
      v48 = 0LL;
    else
      v48 = v45 + ((unsigned __int64)(unsigned __int16)v46 << 6);
    v62[3] = v48;
    SetPointerDeviceDisplayConfig(a1, v56, (struct tagDISPLAY_PATH_INFO *)v62, v43);
  }
}
