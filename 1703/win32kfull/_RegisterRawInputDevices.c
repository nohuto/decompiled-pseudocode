/*
 * XREFs of _RegisterRawInputDevices @ 0x1C00B0B10
 * Callers:
 *     ?RegisterTabletButtonHandler@@YAXXZ @ 0x1C00ADD0C (-RegisterTabletButtonHandler@@YAXXZ.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00B0990 (NtUserRegisterRawInputDevices.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01B3754 (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01B37FC (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     FreeHidProcessRequest @ 0x1C00B08E0 (FreeHidProcessRequest.c)
 *     ?HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00B0CF8 (-HidRequestValidityCheck@@YAHQEAUtagRAWINPUTDEVICE@@PEBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_IN.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00B0EA0 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00B0F38 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?HidDeviceStartStop@@YAXXZ @ 0x1C00B128C (-HidDeviceStartStop@@YAXXZ.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00B12C0 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00B13B4 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 *     ?IsLegacyDevice@@YAHGG@Z @ 0x1C00B1938 (-IsLegacyDevice@@YAHGG@Z.c)
 */

__int64 __fastcall RegisterRawInputDevices(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int128 *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  struct tagPROCESS_HID_REQUEST *v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r10
  __int64 i; // r8
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int16 v26; // r11
  __int64 *j; // rax
  bool v28; // zf
  int v29; // eax
  __int128 v30; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  EnterDeviceInfoListCrit_(v7);
  v9 = *(_QWORD *)(CurrentProcessWin32Process + 776);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_DWORD *)(v9 + 96) = 0;
  }
  v10 = 0;
  if ( v4 )
  {
    v11 = (__int128 *)a1;
    do
    {
      v12 = *(_QWORD *)(CurrentProcessWin32Process + 776);
      v30 = *v11;
      if ( !(unsigned int)HidRequestValidityCheck(&v30, v12, a3) )
        goto LABEL_26;
      ++v10;
      ++v11;
    }
    while ( v10 < v4 );
  }
  if ( !*(_QWORD *)(CurrentProcessWin32Process + 776) )
  {
    v21 = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
    v8 = (_QWORD *)v21;
    if ( v21 )
    {
      v22 = (_QWORD *)(v21 + 16);
      v22[1] = v22;
      *v22 = v22;
      v8[5] = v8 + 4;
      v8[4] = v8 + 4;
      v8[7] = v8 + 6;
      v8[6] = v8 + 6;
      v23 = &RawInputManagerObject::gHidRequestTable[4];
      v24 = RawInputManagerObject::gHidRequestTable[4];
      if ( *(_QWORD **)(v24 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
        __fastfail(3u);
      ++gnHidProcess;
      *v8 = v24;
      v8[1] = v23;
      *(_QWORD *)(v24 + 8) = v8;
      *v23 = v8;
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)(CurrentProcessWin32Process + 776) = v8;
    if ( !v8 )
    {
      UserSetLastError(8LL);
LABEL_26:
      v16 = 0;
      goto LABEL_14;
    }
  }
  v13 = 0;
  if ( v4 )
  {
    v14 = (unsigned int *)(a1 + 4);
    do
    {
      v15 = SearchProcessHidRequest(
              (struct tagPROCESSINFO *)CurrentProcessWin32Process,
              *((_WORD *)v14 - 2),
              *((_WORD *)v14 - 1),
              &v31);
      v8 = (_QWORD *)*v14;
      if ( ((unsigned __int8)v8 & 1) != 0 )
      {
        if ( v15 )
          FreeHidProcessRequest(v15, v31, *(struct tagPROCESS_HID_TABLE **)(CurrentProcessWin32Process + 776));
      }
      else if ( !(unsigned int)SetProcDeviceRequest(CurrentProcessWin32Process, a1 + 16LL * v13, v15, v31, a3) )
      {
        goto LABEL_26;
      }
      ++v13;
      v14 += 4;
    }
    while ( v13 < v4 );
  }
  v16 = 1;
LABEL_14:
  if ( *(_QWORD *)(CurrentProcessWin32Process + 776) )
  {
    AdjustLegacyDeviceFlags((struct tagPROCESSINFO *)CurrentProcessWin32Process);
    v17 = *(_QWORD *)(CurrentProcessWin32Process + 776);
    v18 = v17 + 48;
    for ( i = *(_QWORD *)(v17 + 48); i != v18; i = *v25 )
    {
      if ( !(unsigned int)IsLegacyDevice(*(_WORD *)(i + 16), *(_WORD *)(i + 18)) )
      {
        for ( j = *(__int64 **)(v17 + 32); j != (__int64 *)(v17 + 32); j = (__int64 *)*j )
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
            ++*(_DWORD *)(v25[3] + 36);
            *((_DWORD *)v25 + 5) |= 8u;
          }
        }
        else if ( (v29 & 8) != 0 )
        {
          --*(_DWORD *)(v25[3] + 36);
          *((_DWORD *)v25 + 5) &= ~8u;
        }
      }
    }
    CleanupFreedTLCInfo();
    HidDeviceStartStop();
  }
  LeaveDeviceInfoListCrit_(v8);
  return v16;
}
