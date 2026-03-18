/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0001580
 * Callers:
 *     <none>
 * Callees:
 *     ControllerReset @ 0x1C0001008 (ControllerReset.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C00010DC (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013E0 (ControllerAllocateUncachedExtension.c)
 *     NVMeControllerInitPart1 @ 0x1C00044B4 (NVMeControllerInitPart1.c)
 *     GetRegistrySettings @ 0x1C0010E90 (GetRegistrySettings.c)
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  bool v7; // r15
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  int v13; // kr00_4
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edx
  _QWORD *DeviceBase; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // esi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rdx
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // edx
  __int16 v29; // ax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r8
  void **v33; // r15
  void *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  char v38; // r8
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned __int16 v42; // cx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned int v46; // r8d
  _QWORD *v47; // [rsp+20h] [rbp-59h]
  _OWORD v48[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v49[8]; // [rsp+50h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  v7 = (*(_DWORD *)(a1 + 20) & 2) != 0;
  if ( (*(_DWORD *)(a1 + 20) & 2) == 0 )
  {
    v8 = g_ControllerExtensionIndex;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  *(_BYTE *)(a1 + 16) = v9;
  v10 = 64;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 24) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(45LL, a1, v6, 96LL, 0);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_QWORD *)(a1 + 92) = *(_QWORD *)(v6 + 80);
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v6 + 88);
    v11 = *(_DWORD *)(v6 + 92);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 152) = v11;
  }
  else
  {
    memset(v49, 0, sizeof(v49));
    v47 = v49;
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100)) != 64 )
    {
      v21 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_88;
    }
    v13 = v49[0];
    *(_BYTE *)(a1 + 8) = v49[1];
    *(_DWORD *)(a1 + 4) = v13;
    if ( v13 == 538017926 )
    {
      v14 = v49[3] & 0xFFFFF000;
      v15 = HIDWORD(v49[3]);
    }
    else
    {
      v14 = v49[2] & 0xFFFFC000;
      v15 = HIDWORD(v49[2]);
    }
    *(_QWORD *)(a1 + 104) = v14 | (v15 << 32);
  }
  v16 = *(_DWORD *)(a5 + 52);
  DeviceBase = 0LL;
  v18 = *(_QWORD *)(a1 + 104);
  if ( v16 )
  {
    v19 = *(_QWORD *)(a5 + 56);
    v20 = 0;
    while ( *(_QWORD *)(v19 + 16LL * v20) != v18 )
    {
      if ( ++v20 >= v16 )
        goto LABEL_18;
    }
    LODWORD(v47) = *(_DWORD *)(v19 + 16LL * v20 + 8);
    DeviceBase = (_QWORD *)StorPortGetDeviceBase(
                             a1,
                             *(unsigned int *)(a5 + 8),
                             *(unsigned int *)(a5 + 4),
                             *(_QWORD *)(v19 + 16LL * v20));
  }
LABEL_18:
  *(_QWORD *)(a1 + 112) = DeviceBase;
  if ( !DeviceBase )
  {
    *(_DWORD *)(a1 + 24) = 4;
    v21 = 3;
LABEL_88:
    NVMeControllerStartFailureEventLog(a1);
    return v21;
  }
  v22 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 128) = *DeviceBase;
  v23 = HIDWORD(*(_QWORD *)(a1 + 128)) & 0xF;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v22 + 8);
  v24 = (unsigned int)(4 << v23);
  *(_DWORD *)(a1 + 136) = v24;
  if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
    *(_BYTE *)(a1 + 131) = 1;
  *(_DWORD *)(a1 + 140) = 500 * *(unsigned __int8 *)(a1 + 131);
  if ( !*(_BYTE *)(a1 + 16) && !v7 )
    GetRegistrySettings(a1, v24, DeviceBase, v18);
  v25 = *(_DWORD *)(a5 + 20) == 1;
  v26 = 1;
  *(_DWORD *)(a1 + 224) = 1048640;
  if ( v25 )
    v26 = 3;
  *(_DWORD *)(a1 + 12) = v26;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v27 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(a1 + 228) = 64;
    if ( v27 && v27 <= 0x40 )
      v10 = v27;
    *(_WORD *)(a1 + 230) = v10;
  }
  else
  {
    v28 = 1024;
    *(_WORD *)(a1 + 228) = 256;
    if ( *(_DWORD *)(a1 + 32) )
      v28 = *(_DWORD *)(a1 + 32);
    if ( v28 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 128) + 1 )
      v28 = (unsigned __int16)*(_DWORD *)(a1 + 128) + 1;
    v29 = -1;
    if ( v28 < 0xFFFF )
      v29 = v28;
    *(_WORD *)(a1 + 230) = v29;
  }
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_DWORD *)(a5 + 160) = 2;
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
  }
  else
  {
    *(_DWORD *)(a5 + 160) = 1;
  }
  v25 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v25 )
    *(_BYTE *)(a5 + 144) = 2;
  v30 = *(_DWORD *)(a5 + 220) | 2;
  *(_BYTE *)(a5 + 147) = 0;
  v31 = v30 | 0x28;
  *(_DWORD *)(a5 + 220) = v31;
  if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v31 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_60:
      v21 = 2;
      goto LABEL_88;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v32 = *(unsigned int *)(a1 + 92);
      if ( (_DWORD)v32 )
      {
        v33 = (void **)(a1 + 11480);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v32, 1701672526LL, a1 + 11480) )
        {
          v34 = *v33;
          if ( *v33 )
          {
            v35 = *(_DWORD *)(a1 + 92);
            if ( (v35 & 3) != 0 )
            {
              if ( v35 )
                memset(v34, 0, *(unsigned int *)(a1 + 92));
            }
            else
            {
              v36 = v35 >> 2;
              if ( v36 )
                memset(v34, 0, 4LL * v36);
            }
          }
        }
      }
    }
  }
  if ( !ControllerReset(a1) )
    goto LABEL_60;
  LOBYTE(v37) = 1;
  if ( !(unsigned __int8)NVMeControllerInitPart1(a1, v37) )
    goto LABEL_60;
  v38 = *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 77LL);
  if ( v38 )
    *(_DWORD *)(a1 + 144) = (1 << v38) * (1 << ((*(_BYTE *)(a1 + 134) & 0xF) + 12));
  else
    *(_DWORD *)(a1 + 144) = -1;
  v39 = *(_DWORD *)(a1 + 144);
  if ( v39 > 0x200000 )
    v39 = 0x200000;
  v40 = *(_DWORD *)(a1 + 28);
  if ( v40 && v39 >= v40 )
    v39 = *(_DWORD *)(a1 + 28);
  v41 = *(_DWORD *)(a1 + 48);
  if ( v41 && v41 < v39 )
    v39 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a5 + 24) = v39;
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = *(_BYTE *)(a1 + 148);
  *(_DWORD *)(a5 + 212) = 1024;
  v42 = *(_WORD *)(a1 + 36);
  if ( v42 )
  {
    LOWORD(v43) = *(_WORD *)(a1 + 162);
    if ( v42 < (unsigned __int16)v43 )
      LOWORD(v43) = *(_WORD *)(a1 + 36);
    v44 = *(unsigned __int16 *)(a1 + 230);
    v43 = (unsigned __int16)v43;
  }
  else
  {
    v44 = *(unsigned __int16 *)(a1 + 162);
    v43 = *(unsigned __int16 *)(a1 + 230);
  }
  v45 = v43 * v44;
  if ( v45 < 0x400 )
    v45 = 1024LL;
  if ( v45 > 0xFFFFFFFF )
    LODWORD(v45) = -1;
  *(_DWORD *)(a5 + 204) = v45;
  v46 = *(_DWORD *)(a1 + 148);
  if ( v46 )
    *(_DWORD *)(a5 + 208) = (unsigned int)v45 / v46;
  else
    *(_DWORD *)(a5 + 208) = v45;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v48[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE;
    v48[1] = GUID_NVME_POWER_IDLE_TIMEOUT;
    StorPortExtendedFunction(26LL, a1, 2LL, v48, v47);
  }
  *(_DWORD *)(a1 + 20) &= ~2u;
  return 1LL;
}
