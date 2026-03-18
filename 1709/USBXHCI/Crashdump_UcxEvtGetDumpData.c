/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C003A040
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0008700 (memmove.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C0038F94 (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C00391BC (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C00394FC (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C003A650 (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C003B0E0 (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  unsigned int v8; // esi
  _QWORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  _QWORD *v15; // r14
  int v16; // edx
  int v17; // eax
  PVOID v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ebp
  __int64 v22; // r8
  int v23; // edx
  int v24; // edx
  __int64 v27; // [rsp+38h] [rbp-80h]
  _DWORD v28[10]; // [rsp+40h] [rbp-78h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C004E2F0);
  v8 = 0;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C004E430);
  v10 = v9[11];
  v11 = v9[15];
  v27 = v9[17];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 0x278uLL, 0x43434858u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_34;
  }
  memset(PoolWithTag, 0, 0x278uLL);
  v15 = v13 + 62;
  v13[63] = v13 + 62;
  v13[62] = v13 + 62;
  v13[61] = v11;
  Crashdump_Register_Initialize(v13, v10, v9);
  v14 = Crashdump_EventRing_InitializeForDump(v13 + 9, v13);
  if ( v14 >= 0 )
  {
    v13[25] = v13;
    v13[26] = v13;
    v13[27] = *(_QWORD *)(*v13 + 40LL) + 32LL;
    v13[41] = v13;
    v13[42] = v13;
    v13[43] = *(_QWORD *)(*v13 + 32LL) + 24LL;
    v14 = Crashdump_CommonBufferAcquire((__int64)v13, 32, (__int64)(v13 + 44));
    if ( v14 >= 0 )
    {
      v16 = *(_DWORD *)(a4 + 80);
      if ( !v16 )
        goto LABEL_8;
      v14 = Crashdump_CommonBufferAcquire((__int64)v13, v16, (__int64)(v13 + 74));
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v13[75];
        *(_QWORD *)(a4 + 72) = v13[74];
LABEL_8:
        *((_DWORD *)v13 + 131) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v13 + 532) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v13 + 548) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v13 + 141) = *(_DWORD *)(v7 + 64);
        v17 = 20;
        if ( *(_BYTE *)(((unsigned __int64)(unsigned int)(*((_DWORD *)v13 + 136) - 1) << 6)
                      + *(_QWORD *)(v9[19] + 48LL)
                      + 1) != 2 )
          v17 = 30;
        *((_DWORD *)v13 + 132) = v17;
        v18 = ExAllocatePoolWithTag(
                *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                376LL * *((unsigned int *)v13 + 134),
                0x43434858u);
        v13[71] = v18;
        if ( v18 )
        {
          memset(v18, 0, 376LL * *((unsigned int *)v13 + 134));
          if ( *((_DWORD *)v13 + 134) )
          {
            v21 = 1;
            while ( 1 )
            {
              memset(v28, 0, 0x24uLL);
              v28[1] = v21;
              memmove(&v28[3], v13 + 68, 4LL * v21);
              v22 = a3;
              if ( v21 != *((_DWORD *)v13 + 134) )
                v22 = 0LL;
              v14 = Crashdump_InitializeDeviceContext(v27, (int)v13, v22, (__int64)v28, v13[71] + 376LL * (v21 - 1));
              if ( v14 < 0 )
                break;
              if ( v21++ >= *((_DWORD *)v13 + 134) )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v13[72] = v13[71] + 376LL * (unsigned int)(*((_DWORD *)v13 + 134) - 1);
            v14 = Crashdump_CommonBufferAcquire((__int64)v13, 64, (__int64)(v13 + 55));
            if ( v14 >= 0 )
            {
              v23 = 2112;
              if ( (*(_DWORD *)(*v13 + 104LL) & 4) == 0 )
                v23 = 1056;
              v14 = Crashdump_CommonBufferAcquire((__int64)v13, v23, (__int64)(v13 + 58));
              if ( v14 >= 0 )
              {
                v24 = *((_DWORD *)v13 + 134);
                *((_DWORD *)v13 + 102) = v24;
                v14 = Crashdump_CommonBufferAcquire((__int64)v13, 8 * v24 + 8, (__int64)(v13 + 52));
                if ( v14 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v13 + 128),
                    *((_DWORD *)v13 + 128) << 12,
                    *((_DWORD *)v13 + 129));
                  *((_DWORD *)v13 + 146) = 0;
                  v14 = 0;
                  *(_QWORD *)(a4 + 8) = v13;
                  v13[77] = v9;
                  v9[44] = v13;
                  goto LABEL_34;
                }
              }
            }
          }
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
  }
  if ( v13[71] )
  {
    if ( *((_DWORD *)v13 + 134) )
    {
      do
        Crashdump_FreeDeviceContext(v13[71] + 376LL * v8++);
      while ( v8 < *((_DWORD *)v13 + 134) );
    }
    ExFreePoolWithTag((PVOID)v13[71], 0x43434858u);
  }
  while ( (_QWORD *)*v15 != v15 )
  {
    v19 = (_DWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v20 = *(_QWORD *)v19, *(_DWORD **)(*(_QWORD *)v19 + 8LL) != v19) )
      __fastfail(3u);
    *v15 = v20;
    *(_QWORD *)(v20 + 8) = v15;
    CommonBuffer_ReleaseBuffer(v13[61], v19);
  }
  ExFreePoolWithTag(v13, 0x43434858u);
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v14);
  return (unsigned int)v14;
}
