/*
 * XREFs of NVMeHwFindAdapter @ 0x1C0001590
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     ControllerAllocateUncachedExtension @ 0x1C00013F0 (ControllerAllocateUncachedExtension.c)
 *     NVMeControllerInitPart1 @ 0x1C0004780 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0005494 (ControllerReset.c)
 *     GetRegistrySettings @ 0x1C0012E34 (GetRegistrySettings.c)
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  bool v7; // r15
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int16 v14; // cx
  __int16 v15; // dx
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r10d
  _QWORD *DeviceBase; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  bool v32; // zf
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // r8
  void **v36; // r15
  void *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  char v41; // r8
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned __int16 v45; // ax
  __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned int v48; // r8d
  _QWORD *v49; // [rsp+20h] [rbp-79h]
  _OWORD v50[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v51[8]; // [rsp+70h] [rbp-29h] BYREF

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
    StorPortExtendedFunction(45LL, a1, v6, 104LL, 0);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    v11 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(a1 + 112) = v11;
    *(_OWORD *)(a1 + 28) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 44) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 60) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 92) = *(_OWORD *)(v6 + 80);
    v12 = *(_DWORD *)(v6 + 96);
    *(_DWORD *)(a1 + 52) |= 4u;
    *(_DWORD *)(a1 + 160) = v12;
  }
  else
  {
    memset(v51, 0, sizeof(v51));
    v49 = v51;
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100)) != 64 )
    {
      v23 = 3;
      *(_DWORD *)(a1 + 24) = 3;
      goto LABEL_89;
    }
    v14 = v51[0];
    v15 = WORD1(v51[0]);
    *(_BYTE *)(a1 + 8) = v51[1];
    *(_WORD *)(a1 + 4) = v14;
    *(_WORD *)(a1 + 6) = v15;
    if ( v14 != -32634 || (v16 = 1, v15 != 8209) )
      v16 = 0;
    if ( v16 )
    {
      v17 = v51[3] & 0xFFFFF000;
      v18 = HIDWORD(v51[3]);
    }
    else
    {
      v17 = v51[2] & 0xFFFFC000;
      v18 = HIDWORD(v51[2]);
    }
    v11 = v17 | (v18 << 32);
    *(_QWORD *)(a1 + 112) = v11;
  }
  v19 = *(_DWORD *)(a5 + 52);
  DeviceBase = 0LL;
  if ( v19 )
  {
    v21 = *(_QWORD *)(a5 + 56);
    v22 = 0;
    while ( *(_QWORD *)(v21 + 16LL * v22) != v11 )
    {
      if ( ++v22 >= v19 )
        goto LABEL_21;
    }
    LODWORD(v49) = *(_DWORD *)(v21 + 16LL * v22 + 8);
    DeviceBase = (_QWORD *)StorPortGetDeviceBase(
                             a1,
                             *(unsigned int *)(a5 + 8),
                             *(unsigned int *)(a5 + 4),
                             *(_QWORD *)(v21 + 16LL * v22));
  }
LABEL_21:
  *(_QWORD *)(a1 + 120) = DeviceBase;
  if ( DeviceBase )
  {
    v24 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 136) = *DeviceBase;
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(v24 + 8);
    v25 = *(_QWORD *)(a1 + 136);
    LOBYTE(v24) = BYTE4(v25) & 0xF;
    v26 = v25 >> 24;
    *(_DWORD *)(a1 + 144) = 4 << v24;
    if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
    {
      *(_BYTE *)(a1 + 139) = 1;
      LOBYTE(v26) = 1;
    }
    *(_DWORD *)(a1 + 148) = 500 * (unsigned __int8)v26;
    if ( !*(_BYTE *)(a1 + 16) && !v7 )
      GetRegistrySettings(a1);
    v27 = 1024LL;
    v28 = 3;
    if ( *(_DWORD *)(a5 + 20) != 1 )
      v28 = 1;
    *(_DWORD *)(a1 + 12) = v28;
    v29 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 232) = 1048640;
    if ( *(_BYTE *)(a1 + 16) )
    {
      *(_WORD *)(a1 + 236) = 64;
      if ( !v29 || v29 > 0x40 )
        goto LABEL_42;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 136);
      if ( v29 )
        v27 = v29;
      *(_WORD *)(a1 + 236) = 256;
      if ( (unsigned int)v27 >= (unsigned __int64)(unsigned __int16)v30 + 1 )
        v27 = (unsigned int)(unsigned __int16)v30 + 1;
      LOWORD(v29) = -1;
      if ( (unsigned int)v27 < 0xFFFF )
        LOWORD(v29) = v27;
    }
    v10 = v29;
LABEL_42:
    *(_WORD *)(a1 + 238) = v10;
    *(_DWORD *)(a5 + 48) = 3;
    *(_BYTE *)(a5 + 81) = 1;
    *(_BYTE *)(a5 + 145) = 0;
    *(_DWORD *)(a5 + 148) = 1;
    if ( *(_DWORD *)(a5 + 20) == 1 )
    {
      *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
      v31 = 2;
    }
    else
    {
      v31 = 1;
    }
    *(_DWORD *)(a5 + 160) = v31;
    v32 = *(_BYTE *)(a5 + 144) == 0x80;
    *(_DWORD *)(a5 + 216) = 0;
    if ( v32 )
      *(_BYTE *)(a5 + 144) = 2;
    v33 = *(_DWORD *)(a5 + 220) | 2;
    *(_BYTE *)(a5 + 147) = 0;
    v34 = v33 | 0x28;
    *(_DWORD *)(a5 + 220) = v34;
    if ( (*(_DWORD *)(a1 + 52) & 2) == 0 )
      *(_DWORD *)(a5 + 220) = v34 | 4;
    if ( !v7 )
    {
      if ( !ControllerAllocateUncachedExtension(a1, a5) )
      {
LABEL_62:
        v23 = 2;
        goto LABEL_89;
      }
      if ( !*(_BYTE *)(a1 + 16) )
      {
        v35 = *(unsigned int *)(a1 + 92);
        if ( (_DWORD)v35 )
        {
          v36 = (void **)(a1 + 3336);
          if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, v35, 1701672526LL, a1 + 3336) )
          {
            v37 = *v36;
            if ( *v36 )
            {
              v38 = *(_DWORD *)(a1 + 92);
              if ( (v38 & 3) != 0 )
              {
                if ( v38 )
                  memset(v37, 0, *(unsigned int *)(a1 + 92));
              }
              else
              {
                v39 = v38 >> 2;
                if ( v39 )
                  memset(v37, 0, 4LL * v39);
              }
            }
          }
        }
      }
    }
    if ( (unsigned __int8)ControllerReset(a1, v27) )
    {
      v23 = 1;
      LOBYTE(v40) = 1;
      if ( (unsigned __int8)NVMeControllerInitPart1(a1, v40) )
      {
        v41 = *(_BYTE *)(*(_QWORD *)(a1 + 1112) + 77LL);
        if ( v41 )
          v42 = (1 << v41) * (1 << ((*(_BYTE *)(a1 + 142) & 0xF) + 12));
        else
          v42 = -1;
        *(_DWORD *)(a1 + 152) = v42;
        if ( v42 > 0x200000 )
          v42 = 0x200000;
        v43 = *(_DWORD *)(a1 + 28);
        if ( v43 && v42 >= v43 )
          v42 = *(_DWORD *)(a1 + 28);
        v44 = *(_DWORD *)(a1 + 48);
        if ( v44 && v44 < v42 )
          v42 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a5 + 24) = v42;
        *(_DWORD *)(a5 + 28) = 513;
        *(_BYTE *)(a5 + 72) = 1;
        *(_BYTE *)(a5 + 97) = 1;
        *(_BYTE *)(a5 + 146) = *(_BYTE *)(a1 + 156);
        *(_DWORD *)(a5 + 212) = 1024;
        v45 = *(_WORD *)(a1 + 36);
        LOWORD(v46) = *(_WORD *)(a1 + 170);
        if ( v45 )
        {
          if ( v45 >= (unsigned __int16)v46 )
            v45 = *(_WORD *)(a1 + 170);
          v46 = v45;
        }
        else
        {
          v46 = (unsigned __int16)v46;
        }
        v47 = *(unsigned __int16 *)(a1 + 238) * v46;
        if ( v47 < 0x400 )
          v47 = 1024LL;
        if ( v47 > 0xFFFFFFFF )
          LODWORD(v47) = -1;
        *(_DWORD *)(a5 + 204) = v47;
        v48 = *(_DWORD *)(a1 + 156);
        if ( v48 )
          LODWORD(v47) = (unsigned int)v47 / v48;
        *(_DWORD *)(a5 + 208) = v47;
        if ( !*(_BYTE *)(a1 + 16) )
        {
          v50[0] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
          v50[1] = GUID_NVME_POWER_IDLE_TIMEOUT1;
          v50[2] = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
          v50[3] = GUID_NVME_POWER_IDLE_TIMEOUT2;
          StorPortExtendedFunction(26LL, a1, 4LL, v50, v49);
        }
        *(_DWORD *)(a1 + 20) &= ~2u;
        return v23;
      }
    }
    goto LABEL_62;
  }
  *(_DWORD *)(a1 + 24) = 4;
  v23 = 3;
LABEL_89:
  NVMeControllerStartFailureEventLog(a1);
  return v23;
}
