/*
 * XREFs of ?NotifyCurrentGamepadReading@WGIController@@AEAAJ_N@Z @ 0x180079B58
 * Callers:
 *     ?OnInputSuspended@WGIController@@UEAAJ_K@Z @ 0x1800796A0 (-OnInputSuspended@WGIController@@UEAAJ_K@Z.c)
 *     ?OnKeyReceived@WGIController@@UEAAJ_KEE@Z @ 0x1800796C0 (-OnKeyReceived@WGIController@@UEAAJ_KEE@Z.c)
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800797D0 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 *     ?OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180079B20 (-OnInputReportReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 *     ?OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z @ 0x180079B40 (-OnInputReceived@WGIController@@UEAAJ_KEIPEBE@Z.c)
 * Callees:
 *     ?NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z @ 0x18007A194 (-NotifyInputReport@WGIController@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800E3211 (memcmp_0.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIController::NotifyCurrentGamepadReading(WGIController *this, char a2)
{
  bool v4; // zf
  _DWORD *v5; // rax
  DWORD TickCount; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // eax
  double v11; // xmm0_8
  double v12; // xmm2_8
  double v13; // xmm2_8
  double v14; // xmm2_8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r8d
  _BYTE *v21; // rdx
  _BYTE *v22; // rcx
  __int64 v23; // r9
  int v24; // r8d
  _DWORD *v25; // rcx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  double *v29; // rcx
  double *v30; // r8
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v35; // [rsp+30h] [rbp-D8h]
  __int64 v36; // [rsp+38h] [rbp-D0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  int v39; // [rsp+68h] [rbp-A0h]
  int v40; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v41[4]; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v42; // [rsp+88h] [rbp-80h]
  int v43; // [rsp+90h] [rbp-78h]
  __int64 v44; // [rsp+260h] [rbp+158h]
  __int128 Buf1; // [rsp+280h] [rbp+178h] BYREF
  __int128 v46; // [rsp+290h] [rbp+188h]
  __int128 v47; // [rsp+2A0h] [rbp+198h]
  __int128 v48; // [rsp+2B0h] [rbp+1A8h]
  char v49; // [rsp+2C0h] [rbp+1B8h]
  char v50; // [rsp+2C1h] [rbp+1B9h]

  memset_0(v41, 0, 0x6C8uLL);
  v4 = *((_QWORD *)this + 20) == 0LL;
  v43 = 1736;
  if ( v4 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
    return 0LL;
  }
  QueryPerformanceCounter(&PerformanceCount);
  v5 = (_DWORD *)*((_QWORD *)this + 20);
  v41[0] = 64;
  v41[1] = *v5;
  TickCount = GetTickCount();
  v7 = *((_QWORD *)this + 11);
  v41[2] = TickCount;
  v42 = PerformanceCount;
  v44 = *((_QWORD *)this + 17);
  if ( v7 )
  {
    if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, &Buf1) < 0 )
      return 0LL;
    v49 = 0;
  }
  else
  {
    v8 = *((_QWORD *)this + 10);
    if ( v8 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v38) < 0 )
        return 0LL;
      v9 = v39 & 1;
      *(_QWORD *)&Buf1 = v38;
      v10 = v9 != 0;
      DWORD2(Buf1) = v10;
      if ( (v39 & 2) != 0 )
      {
        v10 = v9 | 2;
        DWORD2(Buf1) = v9 | 2;
        v9 |= 2u;
      }
      if ( (v39 & 4) != 0 )
      {
        v10 = v9 | 4;
        DWORD2(Buf1) = v9 | 4;
        v9 |= 4u;
      }
      if ( (v39 & 8) != 0 )
      {
        v10 = v9 | 8;
        DWORD2(Buf1) = v9 | 8;
        v9 |= 8u;
      }
      if ( (v39 & 0x10) != 0 )
      {
        v10 = v9 | 0x40;
        DWORD2(Buf1) = v9 | 0x40;
        v9 |= 0x40u;
      }
      if ( (v39 & 0x20) != 0 )
      {
        v10 = v9 | 0x80;
        DWORD2(Buf1) = v9 | 0x80;
        v9 |= 0x80u;
      }
      if ( (v39 & 0x40) != 0 )
      {
        v10 = v9 | 0x100;
        DWORD2(Buf1) = v9 | 0x100;
      }
      if ( (v39 & 0x80) != 0 )
      {
        v10 |= 0x200u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 1) != 0 )
      {
        v10 |= 0x10u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 2) != 0 )
      {
        v10 |= 0x20u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 4) != 0 )
      {
        v10 |= 0x1000u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 8) != 0 )
      {
        v10 |= 0x2000u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 0x40) != 0 )
      {
        v10 |= 0x400u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 0x80) != 0 )
      {
        v10 |= 0x800u;
        DWORD2(Buf1) = v10;
      }
      if ( (v40 & 0x40000000) != 0 )
        DWORD2(Buf1) = v10 | 0x40000000;
      v11 = DOUBLE_1_0;
      if ( (v40 & 0x10) != 0 )
        v12 = DOUBLE_1_0;
      else
        v12 = 0.0;
      *(double *)&v46 = v12;
      if ( (v40 & 0x20) != 0 )
        v13 = DOUBLE_1_0;
      else
        v13 = 0.0;
      *((double *)&v46 + 1) = v13;
      v47 = 0LL;
      if ( (v40 & 0x400) != 0 )
      {
        v14 = DOUBLE_N1_0;
      }
      else if ( (v40 & 0x800) != 0 )
      {
        v14 = DOUBLE_1_0;
      }
      else
      {
        v14 = 0.0;
      }
      *(double *)&v48 = v14;
      if ( (v40 & 0x100) == 0 )
      {
        if ( (v40 & 0x200) != 0 )
          v11 = DOUBLE_N1_0;
        else
          v11 = 0.0;
      }
      *((double *)&v48 + 1) = v11;
      v49 = 1;
    }
  }
  v15 = *((_QWORD *)this + 16);
  v16 = *((unsigned int *)this + 38);
  v17 = *((_QWORD *)this + 15);
  v36 = *((_QWORD *)this + 14);
  v35 = *((_DWORD *)this + 36);
  v18 = *((_QWORD *)this + 9);
  v50 = 0;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int, __int64, __int64 *))(*(_QWORD *)v18
                                                                                                  + 104LL))(
         v18,
         *((unsigned int *)this + 37),
         v17,
         v16,
         v15,
         v35,
         v36,
         &v38) < 0 )
    return 0LL;
  v19 = *((int *)this + 37);
  v20 = 0;
  v21 = (_BYTE *)*((_QWORD *)this + 15);
  v22 = &v21[v19];
  if ( (int)v19 <= 0 )
  {
LABEL_58:
    v23 = *((int *)this + 38);
    v24 = 0;
    v25 = (_DWORD *)*((_QWORD *)this + 16);
    v26 = &v25[v23];
    if ( (int)v23 <= 0 )
    {
LABEL_61:
      v27 = *((int *)this + 36);
      v28 = 0;
      v29 = (double *)*((_QWORD *)this + 14);
      v30 = &v29[v27];
      if ( (int)v27 > 0 )
      {
        while ( *v29 < *v30 + 0.03125 && *v30 - 0.03125 < *v29 )
        {
          ++v29;
          ++v30;
          if ( ++v28 >= (int)v27 )
            goto LABEL_68;
        }
        v50 = 1;
      }
LABEL_68:
      if ( !v50 )
        goto LABEL_70;
      goto LABEL_69;
    }
    while ( *v25 == *v26 )
    {
      ++v25;
      ++v26;
      if ( ++v24 >= (int)v23 )
        goto LABEL_61;
    }
  }
  else
  {
    while ( *v21 == *v22 )
    {
      ++v21;
      ++v22;
      if ( ++v20 >= (int)v19 )
        goto LABEL_58;
    }
  }
  v50 = 1;
LABEL_69:
  memcpy_0(
    (void *)(*((_QWORD *)this + 14) + 8LL * *((int *)this + 36)),
    *((const void **)this + 14),
    8LL * *((int *)this + 36));
  memcpy_0((void *)(*((_QWORD *)this + 15) + *((int *)this + 37)), *((const void **)this + 15), *((int *)this + 37));
  memcpy_0(
    (void *)(*((_QWORD *)this + 16) + 4LL * *((int *)this + 38)),
    *((const void **)this + 16),
    4LL * *((int *)this + 38));
LABEL_70:
  v50 = a2 != 0 ? v50 : 0;
  if ( v50 || memcmp_0((char *)&Buf1 + 8, (char *)this + 176, 0x38uLL) )
  {
    v31 = v46;
    *(_OWORD *)((char *)this + 168) = Buf1;
    v32 = v47;
    *(_OWORD *)((char *)this + 184) = v31;
    v33 = v48;
    *(_OWORD *)((char *)this + 200) = v32;
    *(_OWORD *)((char *)this + 216) = v33;
    WGIController::NotifyInputReport(this, (struct LegacyInputInfo *)v41);
  }
  return 0LL;
}
