/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0052060
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00507C0 (DrvBuildDevmodeList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C0051A38 (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C0052368 (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(
        struct tagGRAPHICS_DEVICE *a1,
        unsigned int a2,
        struct tagDEVMODEMARK *a3)
{
  int v3; // r9d
  unsigned int v5; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // r14d
  int v9; // eax
  char *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r12
  struct tagModeCap *v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rdx
  unsigned int MonitorCapability; // eax
  bool v21; // cc
  unsigned int v22; // eax
  int v23; // eax
  unsigned int v24; // eax
  unsigned int i; // r14d
  __int64 v26; // r12
  struct _devicemodeW *v27; // r10
  struct tagModeCap *v28; // r11
  int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v33; // edx
  __int64 v34; // r9
  struct tagModeCap *v35; // [rsp+30h] [rbp-49h]
  struct tagModeCap *v36; // [rsp+30h] [rbp-49h]
  unsigned int v37; // [rsp+38h] [rbp-41h]
  unsigned int v38; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v39; // [rsp+40h] [rbp-39h]
  unsigned int *v40; // [rsp+48h] [rbp-31h]
  unsigned int v41; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+54h] [rbp-25h]
  unsigned int v43; // [rsp+58h] [rbp-21h]
  unsigned int v44; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v45; // [rsp+60h] [rbp-19h]
  unsigned int v46; // [rsp+64h] [rbp-15h]
  unsigned int v47; // [rsp+68h] [rbp-11h] BYREF
  int v48; // [rsp+6Ch] [rbp-Dh]
  unsigned int v49; // [rsp+70h] [rbp-9h]
  int v50; // [rsp+74h] [rbp-5h]
  int v51; // [rsp+78h] [rbp-1h]
  int v52; // [rsp+7Ch] [rbp+3h]
  PVOID Object; // [rsp+80h] [rbp+7h] BYREF
  struct _DEVICE_OBJECT *v54; // [rsp+88h] [rbp+Fh] BYREF
  bool v55; // [rsp+E0h] [rbp+67h]
  unsigned int v56; // [rsp+E0h] [rbp+67h]
  int v59; // [rsp+F8h] [rbp+7Fh]
  int v60; // [rsp+F8h] [rbp+7Fh]

  v3 = *((_DWORD *)a1 + 40);
  v5 = a2;
  v55 = (v3 & 0x800000) != 0;
  v7 = -1;
  v49 = 0;
  v48 = -1;
  v37 = -1;
  v50 = -1;
  v8 = (v3 & 0x800000) == 0 ? 0x38 : 0;
  v47 = v8;
  v38 = 0;
  v51 = 0;
  v39 = -1;
  v52 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices();
  v9 = *((_DWORD *)a1 + 54);
  if ( v9 )
  {
    v10 = (char *)PALLOCMEM2((unsigned int)(868 * v9), 0x76656447u, 1);
    v11 = (__int64)v10;
    if ( !v10 )
      return v5;
    v12 = *((unsigned int *)a1 + 54);
    v13 = 0;
    v14 = 0LL;
    v59 = 0;
    v15 = (struct tagModeCap *)&v10[4 * v12];
    v35 = v15;
    if ( !(_DWORD)v12 )
      goto LABEL_52;
    v16 = 0;
    while ( 1 )
    {
      *(_DWORD *)(v11 + 4 * v14) = 0;
      v17 = 0LL;
      v18 = *((_QWORD *)a1 + 28);
      v19 = 32LL * (unsigned int)v14;
      v40 = (unsigned int *)(v11 + 4 * v14);
      if ( (*(_BYTE *)(v19 + v18) & 3) == 3 )
      {
        if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C01A1BE0)(
                    v19 + v18 + 8,
                    *(unsigned int *)(v19 + v18 + 4),
                    &Object,
                    &v54) < 0 )
        {
          v13 = v59;
          v15 = v35;
          goto LABEL_21;
        }
        MonitorCapability = GetMonitorCapability(v54, v35, (struct _FREQUENCY_RAGE *)&v41, v55);
        if ( v8 <= v41 )
          v8 = v41;
        v47 = v8;
        if ( v7 >= v42 )
          v7 = v42;
        v21 = v16 <= v43;
        *v40 = MonitorCapability;
        if ( v21 )
          v16 = v43;
        v22 = v37;
        if ( v37 >= v44 )
          v22 = v44;
        v37 = v22;
        v50 = v22;
        v23 = v38;
        v48 = v7;
        if ( v38 <= v45 )
          v23 = v45;
        v38 = v23;
        v51 = v23;
        v24 = v39;
        v49 = v16;
        if ( v39 >= v46 )
          v24 = v46;
        v39 = v24;
        v52 = v24;
        ObfDereferenceObject(Object);
        v13 = v59;
        v15 = v35;
        v17 = *v40;
      }
      v13 += v17;
      v15 = (struct tagModeCap *)((char *)v15 + 24 * v17);
      v59 = v13;
      v35 = v15;
LABEL_21:
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)a1 + 54) )
      {
        v5 = a2;
        LODWORD(v12) = *((_DWORD *)a1 + 54);
        if ( v13 )
          goto LABEL_23;
LABEL_52:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
LABEL_23:
          for ( i = 0; ; i = v31 )
          {
            if ( !v5 )
            {
              v5 = i;
              break;
            }
            --v5;
            v26 = 0LL;
            v27 = (struct _devicemodeW *)*((_QWORD *)a3 + 2 * v5 + 1);
            Object = v27;
            v28 = (struct tagModeCap *)(v11 + 4LL * (unsigned int)v12);
            v36 = v28;
            if ( !(_DWORD)v12 )
              goto LABEL_34;
            v60 = *((_DWORD *)a1 + 40) & 0x800000;
            while ( 1 )
            {
              v29 = *(_DWORD *)(v11 + 4 * v26);
              v30 = 0;
              v56 = v29;
              if ( v29 )
              {
                v30 = PruneMode(
                        v27,
                        v28,
                        v29,
                        (struct _FREQUENCY_RAGE *)&v47,
                        *(_DWORD *)(32LL * (unsigned int)v26 + *((_QWORD *)a1 + 28)));
                v27 = (struct _devicemodeW *)Object;
                v28 = (struct tagModeCap *)((char *)v36 + 24 * v56);
                v36 = v28;
              }
              if ( !v60 || v27->dmDriverExtra + v27->dmSize != 244 )
                goto LABEL_38;
              if ( (*(_DWORD *)&v27[1].dmDeviceName[10] & 1) == 0 )
                break;
LABEL_32:
              v26 = (unsigned int)(v26 + 1);
              if ( (unsigned int)v26 >= *((_DWORD *)a1 + 54) )
              {
                LODWORD(v12) = *((_DWORD *)a1 + 54);
                goto LABEL_34;
              }
            }
            v30 = 1;
LABEL_38:
            if ( !v30 )
              goto LABEL_32;
            *((_DWORD *)a3 + 4 * v5) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
            LODWORD(v12) = *((_DWORD *)a1 + 54);
LABEL_34:
            v31 = i + 1;
            if ( (_DWORD)v26 != (_DWORD)v12 )
              v31 = i;
          }
        }
        Win32FreePool(v11);
        return v5;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v5;
  v33 = 0;
  while ( v5 )
  {
    v34 = *((_QWORD *)a3 + 2 * --v5 + 1);
    if ( *(unsigned __int16 *)(v34 + 68) + *(unsigned __int16 *)(v34 + 70) != 244 || (*(_DWORD *)(v34 + 240) & 1) != 0 )
    {
      ++v33;
    }
    else
    {
      *((_DWORD *)a3 + 4 * v5) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v33;
}
