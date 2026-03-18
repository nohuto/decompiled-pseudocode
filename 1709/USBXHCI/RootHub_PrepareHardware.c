/*
 * XREFs of RootHub_PrepareHardware @ 0x1C005E13C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005A020 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001F2D4 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C001F340 (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x1C001F67C (XilRegister_GetOperationalRegisters.c)
 *     XilRegister_ReadBufferUlong @ 0x1C001F688 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x1C001F9CC (RootHub_DumpPortData.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C0020340 (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C0021C04 (WPP_RECORDER_SF_cccc.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  PVOID PoolWithTag; // rax
  __int64 v5; // rdx
  int v6; // edi
  _DWORD *FirstExtendedCapability; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r13d
  char v11; // di
  int v12; // edi
  unsigned int v13; // r12d
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  int Ulong; // eax
  unsigned __int16 v20; // r9
  unsigned int j; // edi
  unsigned int v22; // esi
  int v23; // eax
  unsigned __int64 v24; // r12
  _QWORD *v25; // rax
  void *v26; // r13
  __int64 v27; // rax
  __int64 v28; // r9
  int v29; // eax
  unsigned int i; // r14d
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  void *v34; // rcx
  int v36; // [rsp+28h] [rbp-79h]
  char v37; // [rsp+58h] [rbp-49h]
  unsigned int v38; // [rsp+5Ch] [rbp-45h]
  unsigned int v39; // [rsp+60h] [rbp-41h]
  unsigned __int64 v40; // [rsp+68h] [rbp-39h]
  _QWORD v41[3]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v42[7]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v43; // [rsp+C0h] [rbp+1Fh] BYREF
  unsigned int v44; // [rsp+C4h] [rbp+23h]
  unsigned int v45; // [rsp+C8h] [rbp+27h]

  v37 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = *(_WORD *)(v2 + 100);
  *(_WORD *)(a1 + 26) = *(_WORD *)(v2 + 102);
  *(_QWORD *)(a1 + 32) = XilRegister_GetOperationalRegisters(v2);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v2 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v3, 0xAu) )
    *(_BYTE *)(a1 + 56) = 1;
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  (unsigned __int64)*(unsigned int *)(a1 + 16) << 6,
                  0x49434858u);
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x14u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    v6 = -1073741670;
LABEL_52:
    if ( *(_QWORD *)(a1 + 48) )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v31 = *(_QWORD *)(a1 + 48);
        v32 = (unsigned __int64)i << 6;
        if ( *(_BYTE *)(v31 + v32 + 1) == 2 )
        {
          v33 = *(_QWORD *)(v31 + v32 + 32);
          if ( v33 )
          {
            LOBYTE(v5) = 1;
            ExDeleteTimer(v33, v5, 0LL, 0LL);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v32 + 32) = 0LL;
          }
          v34 = *(void **)(*(_QWORD *)(a1 + 48) + v32 + 24);
          if ( v34 )
          {
            ExFreePoolWithTag(v34, 0x49434858u);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v32 + 24) = 0LL;
          }
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    return (unsigned int)v6;
  }
  memset(PoolWithTag, 0, (unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
  FirstExtendedCapability = (_DWORD *)Register_FindFirstExtendedCapability(v2, 2u);
  v40 = (unsigned __int64)FirstExtendedCapability;
  if ( !FirstExtendedCapability )
  {
LABEL_50:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x1Au,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
LABEL_51:
    v6 = -1073741811;
    goto LABEL_52;
  }
  do
  {
    XilRegister_ReadBufferUlong(v2, FirstExtendedCapability, &v43, 4u);
    if ( v44 == 541217621 )
    {
      v10 = HIBYTE(v43);
      if ( HIBYTE(v43) - 2 <= 1u )
      {
        v39 = BYTE1(v45);
        v12 = BYTE1(v45) + (unsigned __int8)v45;
        v13 = HIWORD(v43);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0x15u,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
        v14 = (unsigned __int8)v45;
        if ( (_BYTE)v45 && v39 && (unsigned int)(v12 - 1) <= *(_DWORD *)(a1 + 16) )
        {
          v15 = 0;
          v37 = 1;
          v38 = 0;
          v16 = v45;
          while ( 1 )
          {
            v17 = v14 - 1 + v15;
            v18 = *(_QWORD *)(a1 + 48) + ((unsigned __int64)v17 << 6);
            if ( *(_BYTE *)(v18 + 1) )
              break;
            if ( v10 == 2 )
              ++*(_WORD *)(a1 + 20);
            else
              ++*(_WORD *)(a1 + 22);
            *(_BYTE *)v18 = v13;
            *(_BYTE *)(v18 + 3) = (v16 & 0x20000) != 0;
            *(_BYTE *)(v18 + 1) = v10;
            *(_BYTE *)(v18 + 4) = (v16 & 0x40000) != 0;
            Ulong = XilRegister_ReadUlong(v2, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * v17));
            v16 = v45;
            *(_BYTE *)(v18 + 7) = 0;
            if ( (v16 & 0x80000) != 0 )
              *(_BYTE *)(v18 + 7) = 1;
            if ( (v16 & 0x100000) != 0 )
              *(_BYTE *)(v18 + 7) |= 2u;
            if ( (Ulong & 0x40000000) == 0 )
              *(_BYTE *)(v18 + 5) = 1;
            v14 = (unsigned __int8)v45;
            *(_BYTE *)(v18 + 2) = (v16 >> 25) & 7;
            *(_WORD *)(v18 + 54) = v16 >> 28;
            *(_QWORD *)(v18 + 56) = v40 + 16;
            v15 = v38 + 1;
            v38 = v15;
            if ( v15 >= v39 )
              goto LABEL_9;
          }
          v20 = 23;
        }
        else
        {
          v20 = 22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          v20,
          (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
        goto LABEL_51;
      }
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x18u,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
LABEL_9:
      v11 = v37;
    }
    else
    {
      WPP_RECORDER_SF_cccc(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v44, v8, v9, v36);
      v11 = v37;
    }
    FirstExtendedCapability = (_DWORD *)Register_FindNextExtendedCapability(v2, v40);
    v40 = (unsigned __int64)FirstExtendedCapability;
  }
  while ( FirstExtendedCapability );
  if ( !v11 )
    goto LABEL_50;
  for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
    RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * j), *(_QWORD *)(a1 + 8));
  v6 = 0;
  v22 = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v23 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v22);
      v6 = v23;
      if ( v23 < 0 )
        break;
      v24 = (unsigned __int64)v22 << 6;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + v24 + 1) == 2 )
      {
        v25 = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x10uLL, 0x49434858u);
        v26 = v25;
        if ( !v25 )
        {
          v6 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Cu,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            -1073741670);
          goto LABEL_52;
        }
        *v25 = a1;
        *((_DWORD *)v25 + 2) = v22 + 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + v24 + 32) = ExAllocateTimer(
                                                         RootHub_WdfEvtTimer20PortResumeCompleteDpc,
                                                         v25,
                                                         4LL);
        v27 = *(_QWORD *)(a1 + 48);
        if ( !*(_QWORD *)(v27 + v24 + 32) )
        {
          v6 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Du,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            -1073741670);
          ExFreePoolWithTag(v26, 0x49434858u);
          goto LABEL_52;
        }
        *(_QWORD *)(v27 + v24 + 24) = v26;
        memset(v42, 0, sizeof(v42));
        v28 = *(_QWORD *)(a1 + 48);
        v42[6] = off_1C004E0C0;
        v42[4] = *(_QWORD *)a1;
        v42[3] = 0x100000001LL;
        v41[1] = RootHub_WdfEvtTimer20PortResumeCompleteWorker;
        v41[2] = 1LL;
        LODWORD(v42[0]) = 56;
        v41[0] = 24LL;
        v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, unsigned __int64))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                v41,
                v42,
                v24 + v28 + 40);
        v6 = v29;
        if ( v29 < 0 )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Eu,
            (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
            v29);
          goto LABEL_48;
        }
      }
      if ( ++v22 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_48;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x1Bu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v23,
      v22);
LABEL_48:
    if ( v6 < 0 )
      goto LABEL_52;
  }
  return (unsigned int)v6;
}
