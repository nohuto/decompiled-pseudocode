/*
 * XREFs of NVMeHwFindAdapter @ 0x1C00015C0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0001418 (ControllerAllocateUncachedExtension.c)
 *     NVMeControllerInitPart1 @ 0x1C0004758 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0005420 (ControllerReset.c)
 *     GetRegistrySettings @ 0x1C00128E0 (GetRegistrySettings.c)
 *     __security_check_cookie @ 0x1C00138B0 (__security_check_cookie.c)
 *     memset @ 0x1C0013D00 (memset.c)
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
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rax
  char v22; // cl
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int16 v27; // ax
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // r8
  void **v31; // r15
  void *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  char v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int16 v40; // cx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned int v44; // r8d
  _QWORD *v45; // [rsp+20h] [rbp-59h]
  _OWORD v46[2]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v47[8]; // [rsp+50h] [rbp-29h] BYREF

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
    memset(v47, 0, sizeof(v47));
    v45 = v47;
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100)) != 64 )
    {
      v20 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_88;
    }
    v13 = v47[0];
    *(_BYTE *)(a1 + 8) = v47[1];
    *(_DWORD *)(a1 + 4) = v13;
    if ( v13 == 538017926 )
    {
      v14 = v47[3] & 0xFFFFF000;
      v15 = HIDWORD(v47[3]);
    }
    else
    {
      v14 = v47[2] & 0xFFFFC000;
      v15 = HIDWORD(v47[2]);
    }
    *(_QWORD *)(a1 + 104) = v14 | (v15 << 32);
  }
  v16 = *(_DWORD *)(a5 + 52);
  DeviceBase = 0LL;
  if ( v16 )
  {
    v18 = *(_QWORD *)(a5 + 56);
    v19 = 0;
    while ( *(_QWORD *)(v18 + 16LL * v19) != *(_QWORD *)(a1 + 104) )
    {
      if ( ++v19 >= v16 )
        goto LABEL_18;
    }
    LODWORD(v45) = *(_DWORD *)(v18 + 16LL * v19 + 8);
    DeviceBase = (_QWORD *)StorPortGetDeviceBase(
                             a1,
                             *(unsigned int *)(a5 + 8),
                             *(unsigned int *)(a5 + 4),
                             *(_QWORD *)(v18 + 16LL * v19));
  }
LABEL_18:
  *(_QWORD *)(a1 + 112) = DeviceBase;
  if ( !DeviceBase )
  {
    *(_DWORD *)(a1 + 24) = 4;
    v20 = 3;
LABEL_88:
    NVMeControllerStartFailureEventLog(a1);
    return v20;
  }
  v21 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 128) = *DeviceBase;
  v22 = HIDWORD(*(_QWORD *)(a1 + 128)) & 0xF;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v21 + 8);
  *(_DWORD *)(a1 + 136) = 4 << v22;
  if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
    *(_BYTE *)(a1 + 131) = 1;
  *(_DWORD *)(a1 + 140) = 500 * *(unsigned __int8 *)(a1 + 131);
  if ( !*(_BYTE *)(a1 + 16) && !v7 )
    GetRegistrySettings(a1);
  v23 = *(_DWORD *)(a5 + 20) == 1;
  v24 = 1;
  *(_DWORD *)(a1 + 224) = 1048640;
  if ( v23 )
    v24 = 3;
  *(_DWORD *)(a1 + 12) = v24;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v25 = *(_DWORD *)(a1 + 32);
    *(_WORD *)(a1 + 228) = 64;
    if ( v25 && v25 <= 0x40 )
      v10 = v25;
    *(_WORD *)(a1 + 230) = v10;
  }
  else
  {
    v26 = 1024;
    *(_WORD *)(a1 + 228) = 256;
    if ( *(_DWORD *)(a1 + 32) )
      v26 = *(_DWORD *)(a1 + 32);
    if ( v26 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 128) + 1 )
      v26 = (unsigned __int16)*(_DWORD *)(a1 + 128) + 1;
    v27 = -1;
    if ( v26 < 0xFFFF )
      v27 = v26;
    *(_WORD *)(a1 + 230) = v27;
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
  v23 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v23 )
    *(_BYTE *)(a5 + 144) = 2;
  v28 = *(_DWORD *)(a5 + 220) | 2;
  *(_BYTE *)(a5 + 147) = 0;
  v29 = v28 | 0x28;
  *(_DWORD *)(a5 + 220) = v29;
  if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v29 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_60:
      v20 = 2;
      goto LABEL_88;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v30 = *(unsigned int *)(a1 + 92);
      if ( (_DWORD)v30 )
      {
        v31 = (void **)(a1 + 3288);
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v30, 1701672526LL, a1 + 3288) )
        {
          v32 = *v31;
          if ( *v31 )
          {
            v33 = *(_DWORD *)(a1 + 92);
            if ( (v33 & 3) != 0 )
            {
              if ( v33 )
                memset(v32, 0, *(unsigned int *)(a1 + 92));
            }
            else
            {
              v34 = v33 >> 2;
              if ( v34 )
                memset(v32, 0, 4LL * v34);
            }
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)ControllerReset(a1) )
    goto LABEL_60;
  LOBYTE(v35) = 1;
  if ( !(unsigned __int8)NVMeControllerInitPart1(a1, v35) )
    goto LABEL_60;
  v36 = *(_BYTE *)(*(_QWORD *)(a1 + 1080) + 77LL);
  if ( v36 )
    *(_DWORD *)(a1 + 144) = (1 << v36) * (1 << ((*(_BYTE *)(a1 + 134) & 0xF) + 12));
  else
    *(_DWORD *)(a1 + 144) = -1;
  v37 = *(_DWORD *)(a1 + 144);
  if ( v37 > 0x200000 )
    v37 = 0x200000;
  v38 = *(_DWORD *)(a1 + 28);
  if ( v38 && v37 >= v38 )
    v37 = *(_DWORD *)(a1 + 28);
  v39 = *(_DWORD *)(a1 + 48);
  if ( v39 && v39 < v37 )
    v37 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a5 + 24) = v37;
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = *(_BYTE *)(a1 + 148);
  *(_DWORD *)(a5 + 212) = 1024;
  v40 = *(_WORD *)(a1 + 36);
  if ( v40 )
  {
    LOWORD(v41) = *(_WORD *)(a1 + 162);
    if ( v40 < (unsigned __int16)v41 )
      LOWORD(v41) = *(_WORD *)(a1 + 36);
    v42 = *(unsigned __int16 *)(a1 + 230);
    v41 = (unsigned __int16)v41;
  }
  else
  {
    v42 = *(unsigned __int16 *)(a1 + 162);
    v41 = *(unsigned __int16 *)(a1 + 230);
  }
  v43 = v41 * v42;
  if ( v43 < 0x400 )
    v43 = 1024LL;
  if ( v43 > 0xFFFFFFFF )
    LODWORD(v43) = -1;
  *(_DWORD *)(a5 + 204) = v43;
  v44 = *(_DWORD *)(a1 + 148);
  if ( v44 )
    *(_DWORD *)(a5 + 208) = (unsigned int)v43 / v44;
  else
    *(_DWORD *)(a5 + 208) = v43;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v46[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE;
    v46[1] = GUID_NVME_POWER_IDLE_TIMEOUT;
    StorPortExtendedFunction(26LL, a1, 2LL, v46, v45);
  }
  *(_DWORD *)(a1 + 20) &= ~2u;
  return 1LL;
}
