/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C001D500
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C001E840 (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *v2; // r15
  unsigned __int16 v3; // di
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx

  if ( dword_1C006A650 )
  {
    v2 = FdoExt(a1);
    v3 = 1;
    v4 = *((_QWORD *)v2 + 377);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v5 = *(_QWORD *)(a1 + 64);
      if ( !v5 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v5 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v5);
      if ( v3 > *(unsigned __int8 *)(v5 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1413771367;
        *(_QWORD *)(v6 + 16) = v3;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
      if ( v3 )
      {
        v7 = *(_QWORD *)(a1 + 64);
        if ( !v7 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v7 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v7);
        if ( v3 <= *(unsigned __int8 *)(v7 + 2938) )
        {
          v8 = *(_QWORD *)(v7 + 3056);
          if ( v8 )
            Log(a1, 8, 1735410750, v3, 2928LL * v3 + v8 - 2928);
        }
      }
      if ( dword_1C006A650 )
      {
        v9 = *(_DWORD **)(a1 + 64);
        if ( !v9 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *v9 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v9);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, 0LL);
      }
      if ( *((_QWORD *)v2 + 378) )
      {
        if ( (*(_DWORD *)(v4 + 4LL * v3) & 0x20) != 0 && dword_1C006A650 )
        {
          v10 = *(_DWORD **)(a1 + 64);
          if ( !v10 )
            UsbhTrapFatal_Dbg(a1, 0LL);
          if ( *v10 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v10);
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, 0LL);
        }
        if ( (*(_DWORD *)(v4 + 4LL * v3) & 0x40) != 0 && dword_1C006A650 )
        {
          v11 = *(_DWORD **)(a1 + 64);
          if ( !v11 )
            UsbhTrapFatal_Dbg(a1, 0LL);
          if ( *v11 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v11);
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE, 0LL);
        }
      }
      ++v3;
    }
  }
}
