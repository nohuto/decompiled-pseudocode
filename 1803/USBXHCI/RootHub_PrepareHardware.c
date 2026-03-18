/*
 * XREFs of RootHub_PrepareHardware @ 0x1C005B498
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0018FD8 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x1C0019044 (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x1C0019678 (XilRegister_GetOperationalRegisters.c)
 *     XilRegister_ReadBufferUlong @ 0x1C0019684 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     RootHub_DumpPortData @ 0x1C001A060 (RootHub_DumpPortData.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C001AAAC (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C001F4B4 (WPP_RECORDER_SF_cccc.c)
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
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  int Ulong; // eax
  char v20; // cl
  unsigned __int16 v21; // r9
  unsigned int v22; // eax
  unsigned int j; // edi
  unsigned int v24; // esi
  int v25; // eax
  unsigned __int64 v26; // r12
  _QWORD *v27; // rax
  void *v28; // r13
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  _BYTE *v32; // rcx
  unsigned int i; // r14d
  unsigned __int64 v34; // rsi
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
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
    v6 = -1073741670;
LABEL_52:
    v32 = *(_BYTE **)(a1 + 48);
    if ( v32 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v32 = *(_BYTE **)(a1 + 48);
        v34 = (unsigned __int64)i << 6;
        if ( v32[v34 + 1] == 2 )
        {
          if ( *(_QWORD *)&v32[v34 + 32] )
          {
            LOBYTE(v5) = 1;
            ExDeleteTimer(*(_QWORD *)&v32[v34 + 32], v5, 0LL, 0LL);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v34 + 32) = 0LL;
            v32 = *(_BYTE **)(a1 + 48);
          }
          if ( *(_QWORD *)&v32[v34 + 24] )
          {
            ExFreePoolWithTag(*(PVOID *)&v32[v34 + 24], 0x49434858u);
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + v34 + 24) = 0LL;
            v32 = *(_BYTE **)(a1 + 48);
          }
        }
      }
      ExFreePoolWithTag(v32, 0x49434858u);
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
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
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
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
        v14 = (unsigned __int8)v45;
        if ( (_BYTE)v45 && v39 && (unsigned int)(v12 - 1) <= *(_DWORD *)(a1 + 16) )
        {
          v15 = 0;
          v37 = 1;
          v38 = 0;
          v16 = v45;
          while ( 1 )
          {
            v17 = v14 + v15 - 1;
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
            v20 = 0;
            *(_BYTE *)(v18 + 7) = 0;
            if ( (v16 & 0x80000) != 0 )
            {
              *(_BYTE *)(v18 + 7) = 1;
              v20 = 1;
            }
            if ( (v16 & 0x100000) != 0 )
              *(_BYTE *)(v18 + 7) = v20 | 2;
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
          v21 = 23;
        }
        else
        {
          v21 = 22;
        }
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          v21,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
        goto LABEL_51;
      }
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xBu,
        0x18u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
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
  v22 = *(_DWORD *)(a1 + 16);
  for ( j = 0; j < v22; ++j )
  {
    RootHub_DumpPortData((unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * j), *(_QWORD *)(a1 + 8));
    v22 = *(_DWORD *)(a1 + 16);
  }
  v6 = 0;
  v24 = 0;
  if ( v22 )
  {
    while ( 1 )
    {
      v25 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v24);
      v6 = v25;
      if ( v25 < 0 )
        break;
      v26 = (unsigned __int64)v24 << 6;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + v26 + 1) == 2 )
      {
        v27 = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x10uLL, 0x49434858u);
        v28 = v27;
        if ( !v27 )
        {
          v6 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Cu,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            -1073741670);
          goto LABEL_52;
        }
        *v27 = a1;
        *((_DWORD *)v27 + 2) = v24 + 1;
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + v26 + 32) = ExAllocateTimer(
                                                         RootHub_WdfEvtTimer20PortResumeCompleteDpc,
                                                         v27,
                                                         4LL);
        v29 = *(_QWORD *)(a1 + 48);
        if ( !*(_QWORD *)(v29 + v26 + 32) )
        {
          v6 = -1073741670;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Du,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            -1073741670);
          ExFreePoolWithTag(v28, 0x49434858u);
          goto LABEL_52;
        }
        *(_QWORD *)(v29 + v26 + 24) = v28;
        memset(v42, 0, sizeof(v42));
        v30 = *(_QWORD *)(a1 + 48);
        v42[6] = off_1C004B0C0;
        v42[4] = *(_QWORD *)a1;
        v42[3] = 0x100000001LL;
        v41[1] = RootHub_WdfEvtTimer20PortResumeCompleteWorker;
        v41[2] = 1LL;
        LODWORD(v42[0]) = 56;
        v41[0] = 24LL;
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, unsigned __int64))(WdfFunctions_01023 + 3032))(
                WdfDriverGlobals,
                v41,
                v42,
                v26 + v30 + 40);
        v6 = v31;
        if ( v31 < 0 )
        {
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x1Eu,
            (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
            v31);
          goto LABEL_48;
        }
      }
      if ( ++v24 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_48;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0x1Bu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v25,
      v24);
LABEL_48:
    if ( v6 < 0 )
      goto LABEL_52;
  }
  return (unsigned int)v6;
}
