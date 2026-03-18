/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00C7368
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00C4958 (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00C7210 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01B66C4 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01B676C (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHidProcessRequest @ 0x1C00C7160 (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00C7550 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00C76F8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00C7790 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C00C7AE4 (-HidDeviceStartStop@@YAXXZ.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00C7B18 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00C7C04 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00C8190 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned int v11; // edi
  __int128 *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // esi
  unsigned int *v15; // rdi
  struct tagPROCESS_HID_REQUEST *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 i; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 *v25; // r8
  __int16 v26; // r11
  __int64 *j; // rax
  bool v28; // zf
  int v29; // eax
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+78h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  EnterDeviceInfoListCrit_();
  v10 = *(_QWORD *)(CurrentProcessWin32Process + 784);
  if ( v10 )
  {
    *(_QWORD *)(v10 + 88) = 0LL;
    *(_DWORD *)(v10 + 96) = 0;
  }
  v11 = 0;
  if ( a2 )
  {
    v12 = (__int128 *)a1;
    do
    {
      v13 = *(_QWORD *)(CurrentProcessWin32Process + 784);
      v30 = *v12;
      if ( !(unsigned int)HidRequestValidityCheck(&v30, v13, a3) )
        goto LABEL_26;
      ++v11;
      ++v12;
    }
    while ( v11 < a2 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    v22 = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
    v8 = (_QWORD *)v22;
    if ( v22 )
    {
      v23 = (_QWORD *)(v22 + 16);
      v23[1] = v23;
      *v23 = v23;
      v8[5] = v8 + 4;
      v8[4] = v8 + 4;
      v8[7] = v8 + 6;
      v8[6] = v8 + 6;
      v24 = &RawInputManagerObject::gHidRequestTable[4];
      v7 = RawInputManagerObject::gHidRequestTable[4];
      if ( *(_QWORD **)(v7 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
        __fastfail(3u);
      ++gnHidProcess;
      *v8 = v7;
      v8[1] = v24;
      *(_QWORD *)(v7 + 8) = v8;
      *v24 = v8;
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)(CurrentProcessWin32Process + 784) = v8;
    if ( !v8 )
    {
      UserSetLastError(8LL, v7);
LABEL_26:
      v17 = 0;
      goto LABEL_14;
    }
  }
  v14 = 0;
  if ( a2 )
  {
    v15 = (unsigned int *)(a1 + 4);
    do
    {
      v16 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v15 - 2),
              *((_WORD *)v15 - 1),
              &v31);
      v8 = (_QWORD *)*v15;
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( v16 )
          FreeHidProcessRequest(v16, v31, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 784));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v14, v16, v31, a3) )
      {
        goto LABEL_26;
      }
      ++v14;
      v15 += 4;
    }
    while ( v14 < a2 );
  }
  v17 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 784) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v18 = *(_QWORD *)(CurrentProcessWin32Process + 784);
    v19 = v18 + 48;
    for ( i = *(_QWORD *)(v18 + 48); i != v19; i = *v25 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v18 + 32); j != (__int64 *)(v18 + 32); j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 8) == v26 )
            goto LABEL_35;
        }
        j = 0LL;
LABEL_35:
        v28 = j == 0LL;
        v29 = *((_DWORD *)v25 + 5);
        if ( v28 )
        {
          if ( (v29 & 8) == 0 )
          {
            ++*(_DWORD *)(v25[3] + 40);
            *((_DWORD *)v25 + 5) |= 8u;
          }
        }
        else if ( (v29 & 8) != 0 )
        {
          --*(_DWORD *)(v25[3] + 40);
          *((_DWORD *)v25 + 5) &= ~8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
  }
  LeaveDeviceInfoListCrit_(v8, v7, v9);
  return v17;
}
