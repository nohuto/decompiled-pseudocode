/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0083428
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0083650 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C008A654 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(UNICODE_STRING *a1, __int64 a2)
{
  wchar_t *v3; // r8
  int v4; // ecx
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  _DWORD *v9; // rax
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rsi
  wchar_t *i; // rdi
  unsigned int v14; // ebp
  unsigned __int16 v15; // ax
  unsigned int v16; // r8d
  int v17; // edx
  unsigned int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  BOOL v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  int v28; // eax
  unsigned int v29; // eax
  wchar_t **v30; // rcx
  unsigned int *v31; // r14
  __int64 v32; // r15
  unsigned int v33; // [rsp+20h] [rbp-48h] BYREF
  void *v34; // [rsp+28h] [rbp-40h]
  unsigned int v35; // [rsp+80h] [rbp+18h] BYREF
  int v36; // [rsp+88h] [rbp+20h]

  v35 = 0;
  v3 = gpGraphicsDeviceList;
  v4 = 0;
  v36 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    v9 = v3 + 80;
    v3 = (wchar_t *)*((_QWORD *)v3 + 16);
    v10 = (*v9 & 0x20800000) == 0;
    v11 = v4 + 1;
    if ( v10 )
      v11 = v4;
    v4 = v11;
  }
  while ( v3 );
  if ( !v11 )
    return 0LL;
  v34 = PALLOCMEM2((unsigned int)(16 * v11), 1936876615LL, 1);
  v12 = (__int64)v34;
  if ( !v34 )
    return 3LL;
  i = gpGraphicsDeviceList;
  v14 = 0;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v15 = -1;
      if ( !gForceDisconnect )
        v15 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v15, &v33, &v35) )
      {
        v24 = 3;
        goto LABEL_40;
      }
      v16 = v35;
      v17 = 0;
      if ( v35 )
        v8 = 0;
      if ( a2 )
      {
        v18 = *(_DWORD *)(a2 + 20);
        if ( v18 )
        {
          v19 = (__int64 *)(a2 + 32);
          v20 = v18;
          do
          {
            v21 = *v19;
            v19 += 5;
            if ( *(wchar_t **)(v21 + 2592) == i )
              v17 = 1;
            --v20;
          }
          while ( v20 );
          v16 = v35;
        }
        v22 = v16 && !v17;
        v36 |= v22;
      }
      if ( (*((_DWORD *)i + 40) & 0x2800008) == 0x800000 )
      {
        v23 = 2LL * v14;
        *(_QWORD *)(v12 + 8 * v23) = i;
        *(_DWORD *)(v12 + 8 * v23 + 12) = v35 != 0;
        ++v14;
        *(_DWORD *)(v12 + 8 * v23 + 8) = v17 != 0;
      }
      i = (wchar_t *)*((_QWORD *)i + 16);
    }
    while ( i );
    if ( v8 )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        v28 = *((_DWORD *)i + 40);
        if ( (v28 & 0x2000008) == 0 )
        {
          if ( (v28 & 0x800000) == 0 )
            break;
          v24 = 1;
          *(_DWORD *)(v12 + 12) = 1;
          goto LABEL_28;
        }
      }
    }
  }
  v24 = 1;
LABEL_28:
  if ( a1 )
  {
    i = DrvGetDeviceFromName(a1, 0);
    if ( !i )
      goto LABEL_35;
    v29 = 0;
    if ( !v14 )
      goto LABEL_35;
    v30 = (wchar_t **)v12;
    while ( i != *v30 )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= v14 )
        goto LABEL_35;
    }
    if ( *(_DWORD *)(v12 + 16LL * v29 + 8) == *(_DWORD *)(v12 + 16LL * v29 + 12) && a2 )
      goto LABEL_35;
    v6 = 1;
    v7 = 1;
  }
  else
  {
    if ( !v14 )
    {
LABEL_35:
      v24 = 0;
      goto LABEL_36;
    }
    v25 = (_DWORD *)(v12 + 8);
    v26 = v14;
    do
    {
      if ( *v25 != v25[1] || !a2 )
        v6 = 1;
      v25 += 4;
      --v26;
    }
    while ( v26 );
  }
  if ( !v6 )
    goto LABEL_35;
  if ( v7 )
  {
    v24 = 3;
    if ( a2 )
    {
      v31 = (unsigned int *)(v12 + 8);
      v32 = v14;
      do
      {
        DrvUpdateAttachFlag((struct tagGRAPHICS_DEVICE *)i, *v31);
        v31 += 4;
        --v32;
      }
      while ( v32 );
      v12 = (__int64)v34;
    }
  }
LABEL_36:
  if ( v14 )
  {
    if ( v6 || v36 )
      v24 = 1;
    else
      v24 = 2;
  }
LABEL_40:
  Win32FreePool(v12);
  return v24;
}
