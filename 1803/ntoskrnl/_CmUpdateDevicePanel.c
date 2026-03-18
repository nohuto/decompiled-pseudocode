/*
 * XREFs of _CmUpdateDevicePanel @ 0x1405CB46C
 * Callers:
 *     PiUpdateDevicePanel @ 0x1405CB3B0 (PiUpdateDevicePanel.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x1405865D0 (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x140586738 (_CmIsRootDevice.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1405CBEC8 (_CmQueryDevicePanelPldProperty.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _CmBuildDevicePanelId @ 0x140653F64 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140655128 (_CmGetDevicePanelGroup.c)
 *     _CmAddPanelDevice @ 0x1407EBFD0 (_CmAddPanelDevice.c)
 *     _CmCreateDevicePanel @ 0x1407EC2C8 (_CmCreateDevicePanel.c)
 *     _CmRemovePanelDevice @ 0x1407ED330 (_CmRemovePanelDevice.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int64 v3; // rdi
  _BYTE *v4; // r13
  wchar_t *v5; // rsi
  void *v6; // r12
  int DevicePanelPldProperty; // eax
  int DeviceParent; // ebx
  PVOID v11; // rax
  int ObjectProperty; // eax
  const wchar_t *v13; // rbx
  SIZE_T v14; // rdx
  int v15; // eax
  char v17; // al
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  __int64 v20; // rcx
  POOL_TYPE v21; // r9d
  wchar_t *v22; // rax
  int v23; // ebx
  SIZE_T i; // rdx
  _BYTE *v25; // rax
  void *v26; // rax
  int v27; // eax
  PVOID v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r8d
  int DevicePanel; // eax
  PVOID v34; // rax
  unsigned int v35; // ebx
  _DWORD *v36; // rbx
  PVOID v37; // r9
  PVOID v38; // rax
  __int64 v39; // rax
  int v40; // edx
  _DWORD *v41; // rbx
  int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  void *v45; // rax
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  char v47; // [rsp+64h] [rbp-9Ch] BYREF
  char v48; // [rsp+65h] [rbp-9Bh]
  unsigned int v49; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v50[4]; // [rsp+6Ch] [rbp-94h] BYREF
  int v51; // [rsp+70h] [rbp-90h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h]
  PVOID v54; // [rsp+88h] [rbp-78h]
  unsigned int v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned int DevicePanelGroup; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v57; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+9Ch] [rbp-64h]
  unsigned int v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A4h] [rbp-5Ch] BYREF
  PVOID v61; // [rsp+B0h] [rbp-50h]
  PVOID v62; // [rsp+B8h] [rbp-48h]
  void *v63; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v64; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v65[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v66[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+F8h] [rbp-8h] BYREF
  int v69; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  v64 = 0LL;
  v4 = 0LL;
  NumberOfBytes = 0LL;
  v5 = 0LL;
  v60 = 0LL;
  v6 = 0LL;
  v54 = 0LL;
  v58 = 0;
  v61 = 0LL;
  v55 = 0;
  DevicePanelGroup = 0;
  v57 = 0;
  P = 0LL;
  v62 = 0LL;
  v48 = 0;
  v63 = 0LL;
  v47 = 0;
  v46 = 0;
  v50[0] = 0;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             v3,
                             (int)a2,
                             a3,
                             (int)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v64,
                             (__int64)&v60 + 4,
                             (SIZE_T)&NumberOfBytes,
                             (__int64)&v60);
  DeviceParent = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
  {
    NumberOfBytes = 0LL;
    goto LABEL_4;
  }
  if ( DevicePanelPldProperty >= 0 )
  {
    if ( !NumberOfBytes )
      goto LABEL_4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
    v61 = PoolWithTag;
    if ( PoolWithTag )
    {
      v55 = 200;
      DeviceParent = CmGetDeviceParent(v3, a2, (wchar_t *)PoolWithTag, &v55);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      DeviceParent = PnpGetObjectProperty(
                       v3,
                       (__int64)v61,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       (__int64)&v51,
                       (__int64)v65,
                       16,
                       (__int64)&v49,
                       0);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      if ( v51 != 13 || v49 != 16 )
      {
        DeviceParent = -1073741823;
        goto LABEL_27;
      }
      v55 = 1;
      DevicePanelGroup = CmGetDevicePanelGroup(NumberOfBytes);
      v57 = (*(_DWORD *)(v20 + 8) >> 3) & 7;
      v22 = (wchar_t *)ExAllocatePoolWithTag(v21, (unsigned int)(v21 + 113), 0x52504E50u);
      v5 = v22;
      if ( !v22 )
        goto LABEL_100;
      DeviceParent = CmBuildDevicePanelId(v65, DevicePanelGroup, v57, v22);
      if ( DeviceParent < 0 )
        goto LABEL_27;
      v23 = 16;
      for ( i = 16LL; ; i = v49 )
      {
        v59 = v23;
        v25 = ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
        v4 = v25;
        if ( !v25 )
          goto LABEL_100;
        DeviceParent = PnpGetObjectProperty(
                         v3,
                         (__int64)a2,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                         (__int64)&v51,
                         (__int64)v25,
                         v23,
                         (__int64)&v49,
                         0);
        if ( DeviceParent != -1073741789 )
          goto LABEL_77;
        if ( v49 <= v59 )
          break;
        ExFreePoolWithTag(v4, 0);
        v23 = v49;
      }
      DeviceParent = -1073741823;
LABEL_77:
      if ( DeviceParent == -1073741275 )
        goto LABEL_78;
      if ( DeviceParent < 0 )
        goto LABEL_27;
      if ( v51 != 4099 || v49 < 0x10 || (*v4 & 0x1F) == 0 )
      {
LABEL_78:
        ExFreePoolWithTag(v4, 0);
        v4 = 0LL;
      }
LABEL_4:
      v11 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
      P = v11;
      if ( v11 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           v3,
                           (__int64)a2,
                           1u,
                           a3,
                           0LL,
                           (__int64)&DEVPKEY_Device_PanelId,
                           (__int64)&v51,
                           (__int64)v11,
                           114,
                           (__int64)&v49,
                           0);
        DeviceParent = ObjectProperty;
        if ( ObjectProperty == -1073741275 )
          goto LABEL_6;
        if ( ObjectProperty < 0 )
          goto LABEL_27;
        if ( v51 != 18 || v49 < 2 )
        {
LABEL_6:
          ExFreePoolWithTag(P, 0);
          v13 = 0LL;
          P = 0LL;
        }
        else
        {
          v13 = (const wchar_t *)P;
        }
        if ( v5 )
        {
          if ( v13 && !wcsicmp(v13, v5) )
          {
            v17 = 0;
LABEL_45:
            if ( v13 && v17 )
            {
              DeviceParent = CmRemovePanelDevice(v3, v13, a2);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
            }
            if ( v5 )
            {
              v18 = -1LL;
              do
                ++v18;
              while ( v5[v18] );
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelId,
                               18,
                               (__int64)v5,
                               2 * (int)v18 + 2,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelGroup,
                               7,
                               (__int64)&DevicePanelGroup,
                               4,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelSide,
                               7,
                               (__int64)&v57,
                               4,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
            }
            else
            {
              if ( !v13 )
                goto LABEL_9;
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelGroup, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
            }
            if ( v5 && NumberOfBytes )
            {
              if ( v4 )
              {
                v46 = (unsigned __int16)*((_DWORD *)v4 + 1);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (_DWORD)a2,
                                 1,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelWidth,
                                 7,
                                 (__int64)&v46,
                                 4,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v46 = *((unsigned __int16 *)v4 + 3);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (_DWORD)a2,
                                 1,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelHeight,
                                 7,
                                 (__int64)&v46,
                                 4,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v46 = (unsigned __int16)*((_DWORD *)v4 + 2);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (_DWORD)a2,
                                 1,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelLength,
                                 7,
                                 (__int64)&v46,
                                 4,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v13 = (const wchar_t *)P;
              }
              else
              {
                v46 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 4);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (_DWORD)a2,
                                 1,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelWidth,
                                 7,
                                 (__int64)&v46,
                                 4,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v46 = *(unsigned __int16 *)(NumberOfBytes + 6);
                DeviceParent = PnpSetObjectProperty(
                                 v3,
                                 (_DWORD)a2,
                                 1,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_PanelHeight,
                                 7,
                                 (__int64)&v46,
                                 4,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_27;
                v13 = (const wchar_t *)P;
                if ( P )
                  PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
              }
            }
            else if ( v13 )
            {
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelWidth, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelHeight, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelLength, 0, 0LL, 0, 0);
            }
            v14 = NumberOfBytes;
            if ( v5
              && NumberOfBytes
              && *(_WORD *)(NumberOfBytes + 18) != 0xFFFF
              && (unsigned __int16)*(_DWORD *)(NumberOfBytes + 16) != 0xFFFF )
            {
              goto LABEL_122;
            }
            goto LABEL_10;
          }
        }
        else if ( !v13 )
        {
LABEL_9:
          v14 = NumberOfBytes;
LABEL_10:
          if ( !v4 )
          {
            if ( v13 )
            {
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelPositionX, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelPositionY, 0, 0LL, 0, 0);
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
            }
            goto LABEL_13;
          }
LABEL_122:
          if ( v4 )
          {
            v46 = *((unsigned __int16 *)v4 + 5);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionX,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v46 = (unsigned __int16)*((_DWORD *)v4 + 3);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionY,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v46 = *((unsigned __int16 *)v4 + 7);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionZ,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
          }
          else
          {
            v46 = *(unsigned __int16 *)(v14 + 18);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionX,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v46 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 16);
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelPositionY,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
            if ( P )
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelPositionZ, 0, 0LL, 0, 0);
          }
LABEL_13:
          if ( v5 && NumberOfBytes )
          {
            if ( v4 )
            {
              v46 = ((*(_DWORD *)v4 >> 5) & 0x1FFu) % 0x168;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationX,
                               7,
                               (__int64)&v46,
                               4,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v46 = ((*(_DWORD *)v4 >> 14) & 0x1FFu) % 0x168;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationY,
                               7,
                               (__int64)&v46,
                               4,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v46 = (*(_DWORD *)v4 >> 23) % 0x168u;
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelRotationZ,
                               7,
                               (__int64)&v46,
                               4,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
              v13 = (const wchar_t *)P;
              goto LABEL_15;
            }
            v46 = 45 * ((*(_DWORD *)(NumberOfBytes + 12) >> 19) & 0xFu) % 0x168;
            DeviceParent = PnpSetObjectProperty(
                             v3,
                             (_DWORD)a2,
                             1,
                             0LL,
                             (__int64)&DEVPKEY_Device_PanelRotationZ,
                             7,
                             (__int64)&v46,
                             4,
                             0);
            if ( DeviceParent < 0 )
              goto LABEL_27;
            v13 = (const wchar_t *)P;
            if ( !P )
              goto LABEL_15;
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
            v26 = &DEVPKEY_Device_PanelRotationY;
          }
          else
          {
            if ( !v13 )
              goto LABEL_15;
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelRotationX, 0, 0LL, 0, 0);
            PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelRotationY, 0, 0LL, 0, 0);
            v26 = &DEVPKEY_Device_PanelRotationZ;
          }
          PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)v26, 0, 0LL, 0, 0);
LABEL_15:
          if ( !v5 || !NumberOfBytes || (*(_DWORD *)NumberOfBytes & 0x80u) != 0 )
          {
            if ( v13 )
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelColor, 0, 0LL, 0, 0);
LABEL_18:
            if ( v5 && NumberOfBytes )
            {
              v50[0] = -((*(_BYTE *)(NumberOfBytes + 8) & 1) != 0);
              DeviceParent = PnpSetObjectProperty(
                               v3,
                               (_DWORD)a2,
                               1,
                               0LL,
                               (__int64)&DEVPKEY_Device_PanelVisible,
                               17,
                               (__int64)v50,
                               1,
                               0);
              if ( DeviceParent < 0 )
                goto LABEL_27;
            }
            else if ( v13 )
            {
              PnpSetObjectProperty(v3, (_DWORD)a2, 1, 0LL, (__int64)&DEVPKEY_Device_PanelVisible, 0, 0LL, 0, 0);
            }
            if ( v5 )
            {
              if ( v48 )
              {
                v27 = CmAddPanelDevice(v3, v5, a2);
                DeviceParent = v27;
                if ( v27 < 0 )
                  goto LABEL_27;
              }
            }
            v67 = 2;
            *(_OWORD *)v66 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
            v69 = 2;
            v68 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
            while ( 2 )
            {
              v15 = CmQueryDevicePanelPldProperty(
                      v3,
                      (int)a2,
                      a3,
                      (int)v66,
                      (__int64)&v64,
                      (__int64)&v60 + 4,
                      (SIZE_T)&NumberOfBytes,
                      (__int64)&v60);
              DeviceParent = v15;
              if ( v15 == -1073741275 )
              {
                DeviceParent = 0;
                goto LABEL_25;
              }
              if ( v15 < 0 )
                goto LABEL_25;
              if ( !v55 )
              {
                v28 = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
                v61 = v28;
                if ( !v28 )
                  goto LABEL_214;
                v55 = 200;
                DeviceParent = CmGetDeviceParent(v3, a2, (wchar_t *)v28, &v55);
                if ( DeviceParent < 0 )
                  goto LABEL_25;
                DeviceParent = PnpGetObjectProperty(
                                 v3,
                                 (__int64)v61,
                                 1u,
                                 0LL,
                                 0LL,
                                 (__int64)&DEVPKEY_Device_ContainerId,
                                 (__int64)&v51,
                                 (__int64)v65,
                                 16,
                                 (__int64)&v49,
                                 0);
                if ( DeviceParent < 0 )
                  goto LABEL_25;
                if ( v51 != 13 || v49 != 16 )
                {
                  DeviceParent = -1073741823;
                  goto LABEL_25;
                }
                v55 = 1;
              }
              v29 = CmGetDevicePanelGroup(NumberOfBytes);
              DevicePanelGroup = v29;
              v31 = (*(_DWORD *)(v30 + 8) >> 3) & 7;
              v57 = (*(_DWORD *)(v30 + 8) >> 3) & 7;
              if ( v5 )
              {
LABEL_150:
                DeviceParent = CmBuildDevicePanelId(v65, v29, v31, v5);
                if ( DeviceParent >= 0 )
                {
                  DevicePanel = CmCreateDevicePanel(v3, (_DWORD)v5, v32, (unsigned int)&v63, (__int64)&v47);
                  v6 = v63;
                  DeviceParent = DevicePanel;
                  if ( DevicePanel >= 0 )
                  {
                    v46 = (unsigned __int16)*(_DWORD *)(NumberOfBytes + 4);
                    DeviceParent = PnpSetObjectProperty(
                                     v3,
                                     (_DWORD)v5,
                                     6,
                                     0LL,
                                     (__int64)&DEVPKEY_DevicePanel_Width,
                                     7,
                                     (__int64)&v46,
                                     4,
                                     0);
                    if ( DeviceParent >= 0 )
                    {
                      v46 = *(unsigned __int16 *)(NumberOfBytes + 6);
                      DeviceParent = PnpSetObjectProperty(
                                       v3,
                                       (_DWORD)v5,
                                       6,
                                       0LL,
                                       (__int64)&DEVPKEY_DevicePanel_Height,
                                       7,
                                       (__int64)&v46,
                                       4,
                                       0);
                      if ( DeviceParent >= 0 )
                      {
                        if ( (*(_DWORD *)NumberOfBytes & 0x80u) != 0 )
                        {
                          if ( !v47 )
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_Color,
                              0,
                              0LL,
                              0,
                              0);
                          goto LABEL_159;
                        }
                        v46 = (unsigned __int8)BYTE1(*(_DWORD *)NumberOfBytes) | (((*(unsigned __int8 *)(NumberOfBytes + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)NumberOfBytes)) << 8) | 0xFF000000;
                        DeviceParent = PnpSetObjectProperty(
                                         v3,
                                         (_DWORD)v5,
                                         6,
                                         0LL,
                                         (__int64)&DEVPKEY_DevicePanel_Color,
                                         7,
                                         (__int64)&v46,
                                         4,
                                         0);
                        if ( DeviceParent >= 0 )
                        {
LABEL_159:
                          v34 = v54;
                          v35 = v58;
                          if ( !v54 )
                            v35 = 16;
                          while ( 1 )
                          {
                            v58 = v35;
                            if ( !v34 )
                            {
                              v34 = ExAllocatePoolWithTag(PagedPool, v35, 0x52504E50u);
                              v54 = v34;
                              if ( !v34 )
                                goto LABEL_214;
                            }
                            DeviceParent = PnpGetObjectProperty(
                                             v3,
                                             (__int64)a2,
                                             1u,
                                             a3,
                                             0LL,
                                             (__int64)&v68,
                                             (__int64)&v51,
                                             (__int64)v34,
                                             v35,
                                             (__int64)&v49,
                                             0);
                            if ( DeviceParent != -1073741789 )
                              goto LABEL_167;
                            if ( v49 <= v58 )
                              break;
                            ExFreePoolWithTag(v54, 0);
                            v35 = v49;
                            v34 = 0LL;
                            v54 = 0LL;
                          }
                          DeviceParent = -1073741823;
LABEL_167:
                          if ( DeviceParent == -1073741275 )
                          {
                            v36 = v54;
                            *(_DWORD *)v54 &= 0xFFFFFFE0;
                          }
                          else
                          {
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            if ( v51 == 4099 && v49 >= 0x10 )
                            {
                              v36 = v54;
                            }
                            else
                            {
                              v36 = v54;
                              *(_DWORD *)v54 &= 0xFFFFFFE0;
                            }
                          }
                          if ( (*v36 & 0x1F) != 0 )
                          {
                            v46 = (*v36 >> 5) & 0xF;
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointType,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v46 = (*(_DWORD *)v54 >> 9) & 7;
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v37 = v62;
                            if ( !v62 )
                            {
                              v38 = ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
                              v62 = v38;
                              if ( !v38 )
                                goto LABEL_214;
                              v37 = v38;
                            }
                            DeviceParent = CmBuildDevicePanelId(
                                             v65,
                                             (unsigned __int8)(*(_DWORD *)v54 >> 12),
                                             (*(_DWORD *)v54 >> 20) & 7,
                                             v37);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v39 = -1LL;
                            do
                              ++v39;
                            while ( *((_WORD *)v62 + v39) );
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
                                             18,
                                             (__int64)v62,
                                             2 * (int)v39 + 2,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v46 = (*(_DWORD *)v54 >> 23) & 7;
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v46 = (unsigned __int16)*((_DWORD *)v54 + 2);
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v46 = *((unsigned __int16 *)v54 + 5);
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v46 = (unsigned __int16)*((_DWORD *)v54 + 3);
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v40 = (1813430637 * (unsigned __int64)(*((_WORD *)v54 + 7) & 0x1FF)) >> 32;
                            v46 = (*((_WORD *)v54 + 7) & 0x1FF)
                                - 360 * ((v40 + (((*((_WORD *)v54 + 7) & 0x1FFu) - v40) >> 1)) >> 8);
                            DeviceParent = PnpSetObjectProperty(
                                             v3,
                                             (_DWORD)v5,
                                             6,
                                             0LL,
                                             (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
                                             7,
                                             (__int64)&v46,
                                             4,
                                             0);
                            if ( DeviceParent < 0 )
                              goto LABEL_25;
                            v41 = v54;
                            v42 = (*(_DWORD *)v54 >> 5) & 0xF;
                            if ( v42 == 1 )
                            {
                              v46 = 0;
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                                goto LABEL_212;
                              v46 = (unsigned __int16)v41[1] + HIWORD(v41[1]);
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                                goto LABEL_212;
                              v46 = *((unsigned __int16 *)v41 + 3);
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0
                                || (unsigned int)PnpGetObjectProperty(
                                                   v3,
                                                   (__int64)v5,
                                                   6u,
                                                   (__int64)v6,
                                                   0LL,
                                                   (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                                                   (__int64)&v51,
                                                   0LL,
                                                   0,
                                                   (__int64)&v49,
                                                   0) == -1073741275
                                && (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                              {
                                goto LABEL_212;
                              }
                              if ( v47 )
                                goto LABEL_212;
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                                0,
                                0LL,
                                0,
                                0);
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                                0,
                                0LL,
                                0,
                                0);
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                                0,
                                0LL,
                                0,
                                0);
                              v45 = &DEVPKEY_DevicePanel_JointRotationCurrent;
                            }
                            else
                            {
                              if ( (unsigned int)(v42 - 2) > 1 )
                                goto LABEL_212;
                              v46 = 0;
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                                goto LABEL_212;
                              v43 = (unsigned __int16)v41[1] + HIWORD(v41[1]);
                              if ( v43 > 0x168 )
                                v43 = 360;
                              v46 = v43;
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                                goto LABEL_212;
                              v44 = *((unsigned __int16 *)v41 + 3);
                              if ( v44 > 0x168 )
                                v44 = 360;
                              v46 = v44;
                              if ( (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0
                                || (unsigned int)PnpGetObjectProperty(
                                                   v3,
                                                   (__int64)v5,
                                                   6u,
                                                   (__int64)v6,
                                                   0LL,
                                                   (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                                                   (__int64)&v51,
                                                   0LL,
                                                   0,
                                                   (__int64)&v49,
                                                   0) == -1073741275
                                && (int)PnpSetObjectProperty(
                                          v3,
                                          (_DWORD)v5,
                                          6,
                                          0LL,
                                          (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                                          7,
                                          (__int64)&v46,
                                          4,
                                          0) < 0 )
                              {
                                goto LABEL_212;
                              }
                              if ( v47 )
                                goto LABEL_212;
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                                0,
                                0LL,
                                0,
                                0);
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                                0,
                                0LL,
                                0,
                                0);
                              PnpSetObjectProperty(
                                v3,
                                (_DWORD)v5,
                                6,
                                0LL,
                                (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                                0,
                                0LL,
                                0,
                                0);
                              v45 = &DEVPKEY_DevicePanel_JointPositionCurrent;
                            }
                          }
                          else
                          {
                            if ( v47 )
                            {
LABEL_212:
                              ++v67;
                              ++v69;
                              continue;
                            }
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointType,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointSourcePanelEdge,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetPanelId,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetPanelEdge,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetPositionX,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetPositionY,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetPositionZ,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetRotationX,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetRotationY,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointTargetRotationZ,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionMin,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionMax,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionDefault,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointPositionCurrent,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationMin,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationMax,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationDefault,
                              0,
                              0LL,
                              0,
                              0);
                            PnpSetObjectProperty(
                              v3,
                              (_DWORD)v5,
                              6,
                              0LL,
                              (__int64)&DEVPKEY_DevicePanel_JointRotationCurrent,
                              0,
                              0LL,
                              0,
                              0);
                            v45 = &DEVPKEY_DevicePanel_JointDetachable;
                          }
                          PnpSetObjectProperty(v3, (_DWORD)v5, 6, 0LL, (__int64)v45, 0, 0LL, 0, 0);
                          goto LABEL_212;
                        }
                      }
                    }
                  }
                }
LABEL_25:
                if ( v6 )
                  ZwClose(v6);
                goto LABEL_27;
              }
              break;
            }
            v5 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x72uLL, 0x52504E50u);
            if ( v5 )
            {
              v29 = DevicePanelGroup;
              v31 = v57;
              goto LABEL_150;
            }
LABEL_214:
            DeviceParent = -1073741801;
            goto LABEL_25;
          }
          v46 = (unsigned __int8)BYTE1(*(_DWORD *)NumberOfBytes) | (((*(unsigned __int8 *)(NumberOfBytes + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)NumberOfBytes)) << 8) | 0xFF000000;
          DeviceParent = PnpSetObjectProperty(
                           v3,
                           (_DWORD)a2,
                           1,
                           0LL,
                           (__int64)&DEVPKEY_Device_PanelColor,
                           7,
                           (__int64)&v46,
                           4,
                           0);
          if ( DeviceParent >= 0 )
          {
            v13 = (const wchar_t *)P;
            goto LABEL_18;
          }
LABEL_27:
          if ( v61 )
            ExFreePoolWithTag(v61, 0);
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v62 )
            ExFreePoolWithTag(v62, 0);
          goto LABEL_35;
        }
        v17 = 1;
        v48 = 1;
        goto LABEL_45;
      }
LABEL_100:
      DeviceParent = -1073741801;
      goto LABEL_27;
    }
    DeviceParent = -1073741801;
  }
LABEL_35:
  if ( v64 )
    ExFreePoolWithTag(v64, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v54 )
    ExFreePoolWithTag(v54, 0);
  return (unsigned int)DeviceParent;
}
