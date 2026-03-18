/*
 * XREFs of RIMComputeVirtualDesktopPhysicalSize @ 0x1C0107870
 * Callers:
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000BAA0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     ApiSetIsRemoteConnection @ 0x1C0051DB0 (ApiSetIsRemoteConnection.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0062D40 (GetMonitorPhysicalDimensions.c)
 */

unsigned __int64 __fastcall RIMComputeVirtualDesktopPhysicalSize(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // r13d
  int DeviceCaps; // eax
  CCursorClip *v8; // rcx
  int v9; // ecx
  unsigned __int64 result; // rax
  bool v11; // zf
  _QWORD *v12; // rdi
  bool v13; // sf
  _DWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // r9d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r11
  int v24; // ecx
  _DWORD *v25; // r9
  _DWORD *v26; // r10
  unsigned int v27; // ecx
  int v28; // r14d
  int v29; // esi
  unsigned int v30; // ecx
  int v31; // r11d
  int v32; // r10d
  __int64 v33; // [rsp+28h] [rbp-51h]
  int v34; // [rsp+50h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-25h] BYREF
  __int128 v36; // [rsp+58h] [rbp-21h]
  _DWORD v37[4]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v38[8]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+7h]
  unsigned int v40; // [rsp+84h] [rbp+Bh]
  int v41[18]; // [rsp+88h] [rbp+Fh] BYREF
  int v43; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = a3;
  v43 = 0;
  v34 = 0;
  v36 = 0uLL;
  v6 = 0;
  if ( (unsigned int)ApiSetIsRemoteConnection() )
  {
    DeviceCaps = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 4);
    v8 = gpDispInfo;
    *a1 = (DeviceCaps + 5) / 10;
    v9 = GreGetDeviceCaps(*((_QWORD *)v8 + 6), 6) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v9) >> 32) >> 31;
    *a2 = v9 / 10;
    if ( *a1 )
    {
      v11 = v9 / 10 == 0;
      goto LABEL_67;
    }
    goto LABEL_68;
  }
  result = (unsigned __int64)gpDispInfo;
  v12 = (_QWORD *)*((_QWORD *)gpDispInfo + 12);
  if ( !v12 )
    goto LABEL_68;
  while ( 1 )
  {
    result = v12[5];
    if ( (*(_DWORD *)(result + 24) & 1) == 0 )
      goto LABEL_62;
    v13 = (int)GetMonitorPhysicalDimensions(v12[15], &v43, &v34, &v35) < 0;
    v14 = *(_DWORD **)gpDispInfo;
    if ( v13 )
    {
      if ( *v14 == 1 && v12 == *((_QWORD **)gpDispInfo + 12) )
      {
        v15 = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 4);
        v16 = *((_QWORD *)gpDispInfo + 6);
        v17 = (v15 + 5) / 10;
        v43 = v17;
        v18 = (int)(GreGetDeviceCaps(v16, 6) + 5) / 10;
LABEL_31:
        v34 = v18;
        goto LABEL_32;
      }
      v17 = 20;
      v18 = 15;
LABEL_30:
      v43 = v17;
      goto LABEL_31;
    }
    if ( *v14 == 1 && v12 == *((_QWORD **)gpDispInfo + 12) )
    {
      v17 = v43;
      if ( !v43 || (v18 = v34) == 0 )
      {
        v19 = GreGetDeviceCaps(*((_QWORD *)gpDispInfo + 6), 4);
        v20 = *((_QWORD *)gpDispInfo + 6);
        v17 = (v19 + 5) / 10;
        v43 = v17;
        v18 = (int)(GreGetDeviceCaps(v20, 6) + 5) / 10;
        v34 = v18;
      }
    }
    else
    {
      v17 = v43;
      v18 = v34;
    }
    if ( v3 )
    {
      v21 = 0LL;
      v22 = 0LL;
      if ( *(_DWORD *)v3 )
      {
        v23 = *(_QWORD *)(v3 + 8);
        while ( *(_DWORD *)(v23 + 72 * v22 + 28) != v35 )
        {
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= *(_DWORD *)v3 )
            goto LABEL_24;
        }
        v21 = v23 + 72 * v22;
LABEL_24:
        v3 = a3;
      }
      if ( v21 )
      {
        v37[0] = 0;
        v37[1] = 0;
        v24 = *(_DWORD *)(v21 + 32);
        v37[2] = v17;
        v37[3] = v18;
        if ( (_WORD)v24 == 0xFFFF )
          v25 = 0LL;
        else
          v25 = (_DWORD *)(*(_QWORD *)(v3 + 16) + ((unsigned __int64)(unsigned __int16)v24 << 6));
        RIMUpdatePointerDeviceScalingInfo(
          (__int64)v37,
          (unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v21 + 14) << 6) + *(_QWORD *)(v3 + 16) + 16LL),
          *(_QWORD *)(v3 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v21 + 34) << 6),
          v25,
          v21 + 20,
          v33,
          0LL,
          v41,
          (__int64)v38);
        v18 = v40;
        v17 = v39;
        goto LABEL_30;
      }
    }
LABEL_32:
    if ( !v17 || !v18 )
    {
      v17 = 20;
      v43 = 20;
      v18 = 15;
      v34 = 15;
    }
    if ( !v6 )
    {
      result = v12[5];
      v6 = 1;
      *a1 = v17;
      *a2 = v18;
      v36 = *(_OWORD *)(result + 28);
      goto LABEL_62;
    }
    v26 = (_DWORD *)v12[5];
    v27 = 0;
    v28 = v26[7];
    if ( v28 < (int)v36 )
      v27 = v36 - v28;
    v29 = v26[9];
    if ( v29 > SDWORD2(v36) )
      v27 += v29 - DWORD2(v36);
    if ( v27 && v29 > v28 )
    {
      result = (unsigned int)*a1 + v17 * (unsigned __int64)v27 / (v29 - v28);
      if ( result > 0xFFFFFFFF )
      {
        *a1 = -1;
        goto LABEL_68;
      }
      *a1 = result;
    }
    v30 = 0;
    v31 = v26[8];
    result = DWORD1(v36);
    if ( v31 < SDWORD1(v36) )
      v30 = DWORD1(v36) - v31;
    v32 = v26[10];
    if ( v32 > SHIDWORD(v36) )
    {
      result = (unsigned int)(v32 - HIDWORD(v36));
      v30 += result;
    }
    if ( v30 && v32 > v31 )
      break;
LABEL_53:
    if ( (int)v36 < v28 )
      v28 = v36;
    LODWORD(v36) = v28;
    if ( SDWORD1(v36) < v31 )
      v31 = DWORD1(v36);
    DWORD1(v36) = v31;
    if ( SDWORD2(v36) > v29 )
      v29 = DWORD2(v36);
    DWORD2(v36) = v29;
    if ( SHIDWORD(v36) > v32 )
      v32 = HIDWORD(v36);
    HIDWORD(v36) = v32;
LABEL_62:
    v12 = (_QWORD *)v12[7];
    if ( !v12 )
      goto LABEL_66;
    v3 = a3;
  }
  result = (unsigned int)*a2 + v18 * (unsigned __int64)v30 / (v32 - v31);
  if ( result <= 0xFFFFFFFF )
  {
    *a2 = result;
    goto LABEL_53;
  }
  *a2 = -1;
  v6 = 0;
LABEL_66:
  v11 = v6 == 0;
LABEL_67:
  if ( v11 )
  {
LABEL_68:
    *a1 = 20;
    *a2 = 15;
  }
  return result;
}
