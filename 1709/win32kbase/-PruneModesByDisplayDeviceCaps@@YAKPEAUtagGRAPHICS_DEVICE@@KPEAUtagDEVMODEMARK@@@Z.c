/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C00791C8
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C006ABB0 (DrvBuildDevmodeList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C00794C8 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C00796EC (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     UpdateMonitorDevices @ 0x1C007A450 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned int a2,
        struct tagDEVMODEMARK *a3)
{
  int v3; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  int v8; // eax
  _DWORD *v9; // r14
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r12
  struct tagModeCap *v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // r11
  __int64 v16; // r10
  unsigned int MonitorCapability; // eax
  PVOID v18; // rcx
  bool v19; // cf
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r13d
  struct _DEVICE_OBJECT *v26; // r8
  __int64 v27; // r15
  struct tagModeCap *v28; // r11
  struct _devicemodeW *v29; // r10
  int v30; // edx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v34; // edx
  __int64 v35; // r9
  struct tagModeCap *v36; // [rsp+30h] [rbp-49h]
  struct tagModeCap *v37; // [rsp+30h] [rbp-49h]
  unsigned int v38; // [rsp+38h] [rbp-41h]
  unsigned int v39; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v40; // [rsp+40h] [rbp-39h]
  unsigned int v41; // [rsp+44h] [rbp-35h]
  unsigned int v42; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-2Dh]
  unsigned int v44; // [rsp+50h] [rbp-29h]
  unsigned int v45; // [rsp+54h] [rbp-25h]
  unsigned int v46; // [rsp+58h] [rbp-21h]
  unsigned int v47; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v48; // [rsp+60h] [rbp-19h] BYREF
  int v49; // [rsp+64h] [rbp-15h]
  int v50; // [rsp+68h] [rbp-11h]
  int v51; // [rsp+6Ch] [rbp-Dh]
  int v52; // [rsp+70h] [rbp-9h]
  int v53; // [rsp+74h] [rbp-5h]
  struct _DEVICE_OBJECT *v54; // [rsp+78h] [rbp-1h] BYREF
  PVOID Object[10]; // [rsp+80h] [rbp+7h] BYREF
  bool v56; // [rsp+E0h] [rbp+67h]
  unsigned int v57; // [rsp+E0h] [rbp+67h]
  int v60; // [rsp+F8h] [rbp+7Fh]
  int v61; // [rsp+F8h] [rbp+7Fh]

  v3 = *((_DWORD *)a1 + 40);
  v6 = a2;
  v56 = (v3 & 0x800000) != 0;
  v49 = -1;
  v38 = 0;
  v50 = 0;
  v7 = (v3 & 0x800000) == 0 ? 0x38 : 0;
  v39 = -1;
  v48 = v7;
  v51 = -1;
  v40 = 0;
  v52 = 0;
  v41 = -1;
  v53 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices();
  v8 = *((_DWORD *)a1 + 56);
  if ( v8 )
  {
    v9 = PALLOCMEM2((unsigned int)(868 * v8), 1986356295LL, 1);
    if ( !v9 )
      return v6;
    v10 = *((unsigned int *)a1 + 56);
    v11 = 0;
    v12 = 0LL;
    v60 = 0;
    v13 = (struct tagModeCap *)&v9[v10];
    v36 = v13;
    if ( !(_DWORD)v10 )
      goto LABEL_39;
    v14 = -1;
    while ( 1 )
    {
      v9[v12] = 0;
      v15 = *((_QWORD *)a1 + 29);
      v16 = (unsigned int)v12 + 4 * v12;
      if ( (*(_BYTE *)(v15 + 4 * v16) & 3) == 3 )
      {
        if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C01907F8)(
                    v15 + 8 + 4 * v16,
                    *(unsigned int *)(v15 + 4 * v16 + 4),
                    Object,
                    &v54) < 0 )
        {
          v11 = v60;
          v13 = v36;
          goto LABEL_21;
        }
        MonitorCapability = GetMonitorCapability(v54, v36, (struct _FREQUENCY_RAGE *)&v42, v56);
        v18 = Object[0];
        if ( v7 <= v42 )
          v7 = v42;
        v19 = v14 < v43;
        v9[v12] = MonitorCapability;
        if ( !v19 )
          v14 = v43;
        v20 = v38;
        v48 = v7;
        if ( v38 <= v44 )
          v20 = v44;
        v38 = v20;
        v50 = v20;
        v21 = v39;
        v49 = v14;
        if ( v39 >= v45 )
          v21 = v45;
        v39 = v21;
        v51 = v21;
        v22 = v40;
        if ( v40 <= v46 )
          v22 = v46;
        v40 = v22;
        v52 = v22;
        v23 = v41;
        if ( v41 >= v47 )
          v23 = v47;
        v41 = v23;
        v53 = v23;
        ObfDereferenceObject(v18);
        v11 = v60;
        v13 = v36;
      }
      v24 = (unsigned int)v9[v12];
      v11 += v24;
      v60 = v11;
      v13 = (struct tagModeCap *)((char *)v13 + 24 * v24);
      v36 = v13;
LABEL_21:
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)a1 + 56) )
      {
        v6 = a2;
        if ( v11 )
          goto LABEL_23;
LABEL_39:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
        {
LABEL_37:
          Win32FreePool((__int64)v9);
          return v6;
        }
LABEL_23:
        v25 = 0;
        while ( 2 )
        {
          if ( !v6 )
          {
            v6 = v25;
            goto LABEL_37;
          }
          v26 = (struct _DEVICE_OBJECT *)*((unsigned int *)a1 + 56);
          --v6;
          v27 = 0LL;
          v54 = v26;
          v28 = (struct tagModeCap *)&v9[(_QWORD)v26];
          v37 = v28;
          v29 = (struct _devicemodeW *)*((_QWORD *)a3 + 2 * v6 + 1);
          Object[0] = v29;
          if ( !(_DWORD)v26 )
            goto LABEL_33;
          v61 = *((_DWORD *)a1 + 40) & 0x800000;
          while ( 2 )
          {
            v30 = v9[v27];
            v31 = 0;
            v57 = v30;
            if ( v30 )
            {
              v31 = PruneMode(
                      v29,
                      v28,
                      v30,
                      (struct _FREQUENCY_RAGE *)&v48,
                      *(_DWORD *)(*((_QWORD *)a1 + 29) + 20 * v27));
              v29 = (struct _devicemodeW *)Object[0];
              LODWORD(v26) = (_DWORD)v54;
              v28 = (struct tagModeCap *)((char *)v37 + 24 * v57);
              v37 = v28;
            }
            if ( v61 && v29->dmDriverExtra + v29->dmSize == 244 )
            {
              if ( (*(_DWORD *)&v29[1].dmDeviceName[10] & 1) != 0 )
              {
LABEL_32:
                v27 = (unsigned int)(v27 + 1);
                if ( (unsigned int)v27 >= (unsigned int)v26 )
                  goto LABEL_33;
                continue;
              }
              v31 = 1;
            }
            break;
          }
          if ( v31 )
          {
            *((_DWORD *)a3 + 4 * v6) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
LABEL_33:
            v32 = v25 + 1;
            if ( (_DWORD)v27 != *((_DWORD *)a1 + 56) )
              v32 = v25;
            v25 = v32;
            continue;
          }
          goto LABEL_32;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v6;
  v34 = 0;
  while ( v6 )
  {
    v35 = *((_QWORD *)a3 + 2 * --v6 + 1);
    if ( *(unsigned __int16 *)(v35 + 68) + *(unsigned __int16 *)(v35 + 70) != 244 || (*(_DWORD *)(v35 + 240) & 1) != 0 )
    {
      ++v34;
    }
    else
    {
      *((_DWORD *)a3 + 4 * v6) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v34;
}
