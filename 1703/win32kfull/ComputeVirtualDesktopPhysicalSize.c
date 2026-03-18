/*
 * XREFs of ComputeVirtualDesktopPhysicalSize @ 0x1C01B9668
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01B99AC (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     UpdatePointerDeviceScalingInfo @ 0x1C01A7810 (UpdatePointerDeviceScalingInfo.c)
 */

unsigned __int64 __fastcall ComputeVirtualDesktopPhysicalSize(int *a1, _DWORD *a2, __int64 a3)
{
  int v6; // r12d
  unsigned __int64 result; // rax
  int v8; // ecx
  bool v9; // zf
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r10
  int v14; // ecx
  _DWORD *v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r9d
  _DWORD *v18; // r10
  unsigned int v19; // edx
  int v20; // esi
  int v21; // edi
  unsigned int v22; // ecx
  int v23; // r11d
  int v24; // r10d
  __int64 v25; // [rsp+30h] [rbp-41h]
  int v26; // [rsp+58h] [rbp-19h] BYREF
  int v27; // [rsp+5Ch] [rbp-15h] BYREF
  __int128 v28; // [rsp+60h] [rbp-11h]
  __int64 v29; // [rsp+70h] [rbp-1h] BYREF
  unsigned int v30; // [rsp+78h] [rbp+7h]
  int v31; // [rsp+7Ch] [rbp+Bh]
  _BYTE v32[8]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v33; // [rsp+88h] [rbp+17h]
  unsigned int v34; // [rsp+8Ch] [rbp+1Bh]
  int v35[6]; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v36; // [rsp+F0h] [rbp+7Fh] BYREF

  v28 = 0uLL;
  v36 = 0;
  v6 = 0;
  v26 = 0;
  result = gpDispInfo;
  if ( gProtocolType )
  {
    *a1 = (int)(GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 48LL), 4LL) + 5) / 10;
    v8 = GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 48LL), 6LL) + 5;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v8) >> 32) >> 31;
    *a2 = v8 / 10;
    if ( *a1 )
    {
      v9 = v8 / 10 == 0;
      goto LABEL_55;
    }
    goto LABEL_56;
  }
  v10 = *(_QWORD **)(gpDispInfo + 96LL);
  if ( !v10 )
    goto LABEL_56;
  while ( 1 )
  {
    result = v10[5];
    if ( (*(_DWORD *)(result + 24) & 1) != 0 )
      break;
LABEL_50:
    v10 = (_QWORD *)v10[7];
    if ( !v10 )
      goto LABEL_54;
  }
  if ( (int)GetMonitorPhysicalDimensions(v10[15], &v36, &v26, &v27) < 0 )
    goto LABEL_22;
  if ( !a3 )
    goto LABEL_19;
  v11 = 0LL;
  v12 = 0;
  if ( *(_DWORD *)a3 )
  {
    v13 = *(_QWORD *)(a3 + 8);
    while ( *(_DWORD *)(v13 + 72LL * v12 + 28) != v27 )
    {
      if ( ++v12 >= *(_DWORD *)a3 )
        goto LABEL_14;
    }
    v11 = v13 + 72LL * v12;
  }
LABEL_14:
  if ( v11 )
  {
    v29 = 0LL;
    v14 = *(_DWORD *)(v11 + 32);
    v30 = v36;
    v31 = v26;
    v15 = (_WORD)v14 == 0xFFFF ? 0LL : (_DWORD *)(*(_QWORD *)(a3 + 16) + ((unsigned __int64)(unsigned __int16)v14 << 6));
    UpdatePointerDeviceScalingInfo(
      (__int64)&v29,
      (unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v11 + 14) << 6) + *(_QWORD *)(a3 + 16) + 16LL),
      *(_QWORD *)(a3 + 16) + ((unsigned __int64)*(unsigned __int16 *)(v11 + 34) << 6),
      v15,
      v11 + 20,
      v25,
      0LL,
      v35,
      (__int64)v32);
    v16 = v33;
    v17 = v34;
    v36 = v33;
    v26 = v34;
  }
  else
  {
LABEL_19:
    v16 = v36;
    v17 = v26;
  }
  if ( !(_DWORD)v16 || !v17 )
  {
LABEL_22:
    v17 = 15;
    v16 = 20LL;
    v26 = 15;
    v36 = 20;
  }
  if ( !v6 )
  {
    result = v10[5];
    v6 = 1;
    *a1 = v16;
    *a2 = v17;
    v28 = *(_OWORD *)(result + 28);
    goto LABEL_50;
  }
  v18 = (_DWORD *)v10[5];
  v19 = 0;
  v20 = v18[7];
  if ( v20 < (int)v28 )
    v19 = v28 - v20;
  v21 = v18[9];
  if ( v21 > SDWORD2(v28) )
    v19 += v21 - DWORD2(v28);
  if ( v19 && v21 > v20 )
  {
    result = (unsigned int)*a1 + v16 * (unsigned __int64)v19 / (v21 - v20);
    if ( result > 0xFFFFFFFF )
    {
      *a1 = -1;
      goto LABEL_56;
    }
    *a1 = result;
  }
  v22 = 0;
  v23 = v18[8];
  result = DWORD1(v28);
  if ( v23 < SDWORD1(v28) )
    v22 = DWORD1(v28) - v23;
  v24 = v18[10];
  if ( v24 > SHIDWORD(v28) )
  {
    result = (unsigned int)(v24 - HIDWORD(v28));
    v22 += result;
  }
  if ( !v22 || v24 <= v23 )
    goto LABEL_41;
  result = (unsigned int)*a2 + v17 * (unsigned __int64)v22 / (v24 - v23);
  if ( result <= 0xFFFFFFFF )
  {
    *a2 = result;
LABEL_41:
    if ( (int)v28 < v20 )
      v20 = v28;
    LODWORD(v28) = v20;
    if ( SDWORD1(v28) < v23 )
      v23 = DWORD1(v28);
    DWORD1(v28) = v23;
    if ( SDWORD2(v28) > v21 )
      v21 = DWORD2(v28);
    DWORD2(v28) = v21;
    if ( SHIDWORD(v28) > v24 )
      v24 = HIDWORD(v28);
    HIDWORD(v28) = v24;
    goto LABEL_50;
  }
  *a2 = -1;
  v6 = 0;
LABEL_54:
  v9 = v6 == 0;
LABEL_55:
  if ( v9 )
  {
LABEL_56:
    *a1 = 20;
    *a2 = 15;
  }
  return result;
}
