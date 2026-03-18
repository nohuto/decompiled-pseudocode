/*
 * XREFs of NVMePowerInitialize @ 0x1C000592C
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C0001B90 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeGetAutoPowerStateTransition @ 0x1C000F0D8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C000F228 (NVMeSetAutoPowerStateTransition.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v3; // r15d
  unsigned __int8 v4; // r12
  unsigned __int8 v5; // cl
  int v6; // eax
  __int64 v8; // rdx
  unsigned __int8 v9; // r14
  __int64 v10; // rax
  char v11; // bl
  unsigned int v12; // r11d
  unsigned __int16 *v13; // r10
  int v14; // r14d
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // r9d
  unsigned __int8 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // eax
  unsigned __int8 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int16 *v36; // rdx
  unsigned int v37; // ecx
  int v38; // ebx
  __int64 v39; // r9
  const char *v40; // r8
  unsigned __int8 v41; // [rsp+130h] [rbp+67h]
  unsigned __int8 v42; // [rsp+138h] [rbp+6Fh]

  v1 = *(_QWORD *)(a1 + 1112);
  v3 = -1;
  v4 = 0;
  v42 = 0;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 60);
  v41 = 0;
  if ( v6 == 4 )
    return 1;
  if ( v6 == 3 )
  {
    NVMeGetAutoPowerStateTransition(a1);
    if ( (*(_DWORD *)(a1 + 1152) & 0x40) == 0 )
    {
      LOBYTE(v8) = 1;
      NVMeSetAutoPowerStateTransition(a1, v8);
      NVMeGetAutoPowerStateTransition(a1);
    }
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
  }
  else if ( (*(_DWORD *)(a1 + 1152) & 1) == 0 )
  {
    v9 = 0;
    if ( *(unsigned __int8 *)(v1 + 263) != -1 )
    {
      do
      {
        v10 = *(_QWORD *)(a1 + 1112);
        if ( v9 <= 0x1Fu && v9 <= *(_BYTE *)(v10 + 263) && (v13 = (unsigned __int16 *)(v10 + 32 * (v9 + 64LL))) != 0LL )
        {
          v11 = *((_BYTE *)v13 + 3);
          v12 = *v13 * ((v11 & 1) != 0 ? 100 : 10000);
        }
        else
        {
          v11 = MEMORY[3];
          v12 = -1;
        }
        if ( (v11 & 2) != 0 )
        {
          v41 = v5 + 1;
          if ( v12 < v3 )
            v3 = v12;
        }
        else
        {
          ++v4;
          v42 = v9;
        }
        StorPortExtendedFunction(60LL, a1, 0LL, 0LL);
        ++v9;
        v5 = v41;
      }
      while ( v9 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
    }
    v14 = v5;
    v15 = 32 * (v5 + 3);
    if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v15, 1701672526LL) )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n");
    }
    else
    {
      v16 = v15 >> 2;
      if ( v16 )
        memset(0LL, 0, 4LL * v16);
      v17 = 1;
      MEMORY[0] = 2;
      MEMORY[4] = 24;
      MEMORY[8] = 1;
      MEMORY[0xC] |= 0x40u;
      MEMORY[0x18] = 2;
      MEMORY[0x1C] = 40;
      MEMORY[0x28] = xmmword_1C0015AE8;
      if ( *(_DWORD *)(a1 + 60) != 5 )
        v17 = v14 + 1;
      MEMORY[0x20] = v17;
      if ( v17 > 1 )
      {
        MEMORY[0xC] |= 0x100u;
        v17 = MEMORY[0x20];
      }
      if ( v17 > 8 )
        MEMORY[0x20] = 8;
      MEMORY[0xC] |= 0x10u;
      MEMORY[0x10] = -1;
      v18 = *(_DWORD *)(a1 + 60);
      if ( (v18 || v3 <= 0x2710) && v18 != 2 )
      {
        if ( v18 == 5 )
        {
          MEMORY[0xC] |= 4u;
          MEMORY[0x10] = *(_DWORD *)(a1 + 72);
        }
      }
      else
      {
        MEMORY[0xC] |= 4u;
        *(_DWORD *)(a1 + 1152) |= 0x10u;
      }
      v19 = 1;
      MEMORY[0xC] |= 8u;
      v20 = v42 + 1;
      MEMORY[0x3C] = MEMORY[0x20] - 1;
      MEMORY[0x40] = 1;
      MEMORY[0x44] = 32;
      MEMORY[0x48] = 0LL;
      MEMORY[0x50] = 0LL;
      MEMORY[0x58] = -1;
      if ( MEMORY[0x20] > 1u )
      {
        do
        {
          v21 = *(_QWORD *)(a1 + 1112);
          if ( v20 > 0x1Fu || v20 > *(_BYTE *)(v21 + 263) )
            v22 = 0LL;
          else
            v22 = v21 + 32 * (v20 + 64LL);
          ++v20;
          v23 = v19;
          v24 = 32 * (v19++ + 2LL);
          v23 *= 32LL;
          *(_DWORD *)(v24 + 24) = -1;
          *(_DWORD *)(v23 + 64) = 1;
          *(_DWORD *)(v23 + 68) = 32;
          v25 = (unsigned int)(*(_DWORD *)(v22 + 4) + *(_DWORD *)(v22 + 8));
          *(_QWORD *)(v23 + 80) = 0LL;
          *(_QWORD *)(v23 + 72) = 10 * v25;
        }
        while ( v19 < MEMORY[0x20] );
      }
      if ( (unsigned int)StorPortExtendedFunction(48LL, a1, 0LL, 0LL) )
      {
        StorPortExtendedFunction(1LL, a1, 0LL, v26);
        v27 = *(_DWORD *)(a1 + 1152) & 0xFFFFFFFA;
        *(_QWORD *)(a1 + 1136) = 0LL;
        *(_DWORD *)(a1 + 1152) = v27;
        StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Failed\n");
      }
      else
      {
        v28 = *(_DWORD *)(a1 + 80);
        *(_DWORD *)(a1 + 1152) = (*(_DWORD *)(a1 + 1152) | 5) ^ *(_BYTE *)(a1 + 1152) & 8;
        *(_BYTE *)(a1 + 1161) = MEMORY[0x20];
        *(_QWORD *)(a1 + 1136) = 0LL;
        v29 = 15;
        *(_DWORD *)(a1 + 1176) = 15;
        if ( v28 != -1 )
          v29 = v28;
        *(_DWORD *)(a1 + 1168) = v29;
        *(_BYTE *)(a1 + 1162) = 0;
        *(_WORD *)(a1 + 1158) = 0;
        *(_DWORD *)(a1 + 1164) = 0;
        *(_BYTE *)(a1 + 1157) = v42;
        *(_DWORD *)(a1 + 1180) = 200;
        *(_DWORD *)(a1 + 1188) = 2000;
        *(_DWORD *)(a1 + 1184) = 100;
        if ( v41 )
        {
          StorPortExtendedFunction(32LL, a1, a1 + 1192, v26);
          StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
          StorPortExtendedFunction(52LL, a1, 0LL, 0LL);
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
        if ( !(unsigned int)StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v4 + 40, 1701672526LL) )
        {
          v30 = 0;
          MEMORY[0] = 1;
          MEMORY[4] = 40;
          MEMORY[0x10] = 3LL;
          MEMORY[0x18] = v4;
          MEMORY[0x1C] = 40;
          if ( v4 )
          {
            v31 = 0LL;
            v32 = 0LL;
            v33 = 0LL;
            do
            {
              v34 = v33 + MEMORY[0x1C];
              *(_DWORD *)v34 = 1;
              *(_DWORD *)(v34 + 4) = 24;
              v35 = *(_QWORD *)(a1 + 1112);
              if ( v30 <= 0x1Fu && v30 <= *(_BYTE *)(v35 + 263) && (v36 = (unsigned __int16 *)(v32 + v35 + 2048)) != 0LL )
                v37 = *v36 * ((*((_BYTE *)v36 + 3) & 1) != 0 ? 100 : 10000);
              else
                v37 = -1;
              *(_QWORD *)(v34 + 16) = v31;
              ++v30;
              ++v31;
              v33 += 24LL;
              v32 += 32LL;
              *(_QWORD *)(v34 + 8) = v37 / 0x3E8;
            }
            while ( v30 < v4 );
          }
          v38 = StorPortExtendedFunction(65LL, a1, 0LL, 0LL);
          if ( v38 )
          {
            StorPortExtendedFunction(1LL, a1, 0LL, v39);
          }
          else
          {
            *(_DWORD *)(a1 + 1152) |= 2u;
            *(_QWORD *)(a1 + 1144) = 0LL;
            *(_BYTE *)(a1 + 1158) = v4;
            *(_BYTE *)(a1 + 1159) = 0;
          }
          v40 = "Failed";
          if ( !v38 )
            v40 = "Succeeded";
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v40);
          NVMeGetAutoPowerStateTransition(a1);
          if ( (*(_DWORD *)(a1 + 1152) & 0x40) != 0 )
          {
            NVMeSetAutoPowerStateTransition(a1, 0LL);
            NVMeGetAutoPowerStateTransition(a1);
          }
          return 1;
        }
        StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
      }
    }
    return 0;
  }
  return 1;
}
