/*
 * XREFs of ?NotifyCurrentGamepadReading@WGIController@@AEAAJXZ @ 0x1800A0FF4
 * Callers:
 *     ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x1800A0B10 (-OnInputSuspended@WGIController@@UEAAJ_K@Z.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800A0B20 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800A0C50 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x1800A0FC0 (-OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x1800A0FE0 (-OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800A1984 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800CC371 (memcmp_0.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIController::NotifyCurrentGamepadReading(WGIController *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rax
  DWORD TickCount; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  double *v20; // rcx
  int v21; // edi
  __int64 v22; // r9
  int v23; // r8d
  _BYTE *v24; // rdx
  _BYTE *v25; // rcx
  __int64 v26; // r9
  int v27; // r8d
  _DWORD *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // rdx
  int v31; // eax
  double *v32; // r8
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v37; // [rsp+30h] [rbp-D8h]
  __int64 v38; // [rsp+38h] [rbp-D0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+68h] [rbp-A0h]
  int v42; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v43[356]; // [rsp+70h] [rbp-98h] BYREF

  memset(v43, 0, sizeof(v43));
  if ( !*((_QWORD *)this + 20) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v2, &MinInput_Warning_CheckResult, 0, 948, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  QueryPerformanceCounter(&PerformanceCount);
  v3 = (_DWORD *)*((_QWORD *)this + 20);
  LODWORD(v43[0]) = 64;
  HIDWORD(v43[0]) = *v3;
  TickCount = GetTickCount();
  v5 = *((_QWORD *)this + 11);
  LODWORD(v43[1]) = TickCount;
  v43[2] = PerformanceCount.QuadPart;
  v43[83] = *((_QWORD *)this + 17);
  LODWORD(v43[5]) = 2848;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, &v43[87]);
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 972;
LABEL_85:
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v8, v6);
        return 0LL;
      }
      return 0LL;
    }
    LOBYTE(v43[95]) = 0;
LABEL_59:
    v15 = *((_QWORD *)this + 16);
    v16 = *((unsigned int *)this + 38);
    v17 = *((_QWORD *)this + 15);
    v38 = *((_QWORD *)this + 14);
    v37 = *((_DWORD *)this + 36);
    v18 = *((_QWORD *)this + 9);
    BYTE1(v43[95]) = 0;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, __int64, __int64 *))(*(_QWORD *)v18 + 104LL))(
            v18,
            *((unsigned int *)this + 37),
            v17,
            v16,
            v15,
            v37,
            v38,
            &v40);
    v21 = v19;
    if ( v19 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq((__int64)v20, &MinInput_Warning_CheckResult, 0, 875, v19);
      goto LABEL_77;
    }
    v22 = *((int *)this + 37);
    v23 = 0;
    v24 = (_BYTE *)*((_QWORD *)this + 15);
    v25 = &v24[v22];
    if ( (int)v22 <= 0 )
    {
LABEL_65:
      v26 = *((int *)this + 38);
      v27 = 0;
      v28 = (_DWORD *)*((_QWORD *)this + 16);
      v29 = &v28[v26];
      if ( (int)v26 <= 0 )
      {
LABEL_68:
        v30 = *((int *)this + 36);
        v31 = 0;
        v20 = (double *)*((_QWORD *)this + 14);
        v32 = &v20[v30];
        if ( (int)v30 > 0 )
        {
          while ( *v20 < *v32 + 0.03125 && *v32 - 0.03125 < *v20 )
          {
            ++v20;
            ++v32;
            if ( ++v31 >= (int)v30 )
              goto LABEL_75;
          }
          BYTE1(v43[95]) = 1;
        }
LABEL_75:
        if ( !BYTE1(v43[95]) )
        {
LABEL_77:
          if ( v21 >= 0 )
          {
            if ( BYTE1(v43[95]) || memcmp_0(&v43[88], (char *)this + 176, 0x38uLL) )
            {
              v33 = *(_OWORD *)&v43[89];
              *(_OWORD *)((char *)this + 168) = *(_OWORD *)&v43[87];
              v34 = *(_OWORD *)&v43[91];
              *(_OWORD *)((char *)this + 184) = v33;
              v35 = *(_OWORD *)&v43[93];
              *(_OWORD *)((char *)this + 200) = v34;
              *(_OWORD *)((char *)this + 216) = v35;
              v6 = WGIController::NotifyInputReport(this, (struct InputInfo *)v43);
              if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              {
                v8 = 1047;
                goto LABEL_85;
              }
            }
          }
          else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            McTemplateU0qqq((__int64)v20, &MinInput_Warning_CheckResult, 0, 1030, v21);
          }
          return 0LL;
        }
LABEL_76:
        memcpy_0(
          (void *)(*((_QWORD *)this + 14) + 8LL * *((int *)this + 36)),
          *((const void **)this + 14),
          8LL * *((int *)this + 36));
        memcpy_0(
          (void *)(*((_QWORD *)this + 15) + *((int *)this + 37)),
          *((const void **)this + 15),
          *((int *)this + 37));
        memcpy_0(
          (void *)(*((_QWORD *)this + 16) + 4LL * *((int *)this + 38)),
          *((const void **)this + 16),
          4LL * *((int *)this + 38));
        goto LABEL_77;
      }
      while ( *v28 == *v29 )
      {
        ++v28;
        ++v29;
        if ( ++v27 >= (int)v26 )
          goto LABEL_68;
      }
    }
    else
    {
      while ( *v24 == *v25 )
      {
        ++v24;
        ++v25;
        if ( ++v23 >= (int)v22 )
          goto LABEL_65;
      }
    }
    BYTE1(v43[95]) = 1;
    goto LABEL_76;
  }
  v9 = *((_QWORD *)this + 10);
  if ( !v9 )
    goto LABEL_59;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v40);
  if ( v6 >= 0 )
  {
    v43[87] = v40;
    v10 = (v41 & 1) != 0;
    LODWORD(v43[88]) = v10;
    if ( (v41 & 2) != 0 )
    {
      v10 |= 2u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 4) != 0 )
    {
      v10 |= 4u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 8) != 0 )
    {
      v10 |= 8u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 0x10) != 0 )
    {
      v10 |= 0x40u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 0x20) != 0 )
    {
      v10 |= 0x80u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 0x40) != 0 )
    {
      v10 |= 0x100u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v41 & 0x80) != 0 )
    {
      v10 |= 0x200u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 1) != 0 )
    {
      v10 |= 0x10u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 2) != 0 )
    {
      v10 |= 0x20u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 4) != 0 )
    {
      v10 |= 0x1000u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 8) != 0 )
    {
      v10 |= 0x2000u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 0x40) != 0 )
    {
      v10 |= 0x400u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 0x80) != 0 )
    {
      v10 |= 0x800u;
      LODWORD(v43[88]) = v10;
    }
    if ( (v42 & 0x40000000) != 0 )
      LODWORD(v43[88]) = v10 | 0x40000000;
    v11 = DOUBLE_1_0;
    if ( (v42 & 0x10) != 0 )
      v12 = DOUBLE_1_0;
    else
      v12 = 0.0;
    *(double *)&v43[89] = v12;
    if ( (v42 & 0x20) != 0 )
      v13 = DOUBLE_1_0;
    else
      v13 = 0.0;
    *(double *)&v43[90] = v13;
    v14 = 0.0;
    *(_OWORD *)&v43[91] = 0LL;
    if ( (v42 & 0x400) != 0 )
    {
      v14 = DOUBLE_N1_0;
    }
    else if ( (v42 & 0x800) != 0 )
    {
      v14 = DOUBLE_1_0;
    }
    *(double *)&v43[93] = v14;
    if ( (v42 & 0x100) == 0 )
    {
      if ( (v42 & 0x200) != 0 )
        v11 = DOUBLE_N1_0;
      else
        v11 = 0.0;
    }
    *(double *)&v43[94] = v11;
    LOBYTE(v43[95]) = 1;
    goto LABEL_59;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 987;
    goto LABEL_85;
  }
  return 0LL;
}
