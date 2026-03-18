/*
 * XREFs of UsbhSsh_CheckPortChangeQueuesIdle @ 0x1C0019CA0
 * Callers:
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C001A454 (UsbhSsh_CheckHubIdle.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhSsh_CheckPortChangeQueuesIdle(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned __int16 i; // bx
  __int64 v4; // rdx
  char v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  KIRQL v11; // al
  bool v12; // zf
  KSPIN_LOCK *v13; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v2 = *(_DWORD **)(a1 + 64);
  if ( !v2 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v2 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v2);
  for ( i = 1; ; ++i )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      return 0LL;
    v5 = UsbhLogMask;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v6 = 1413771367;
      *(_QWORD *)(v6 + 16) = i;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
      v5 = UsbhLogMask;
    }
    if ( i )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v7 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v7);
      if ( i > *(unsigned __int8 *)(v7 + 2938) )
      {
        v9 = 0LL;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 3056);
        if ( v8 )
        {
          v9 = v8 + 2928LL * (i - 1);
          if ( (v5 & 8) != 0 )
          {
            v10 = *(_QWORD *)(v7 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
            *(_DWORD *)v10 = 1044672615;
            *(_QWORD *)(v10 + 16) = i;
            *(_QWORD *)(v10 + 8) = 0LL;
            *(_QWORD *)(v10 + 24) = v9;
          }
        }
        else
        {
          v9 = 0LL;
        }
      }
    }
    else
    {
      v9 = 0LL;
    }
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 440));
    *(_DWORD *)(v9 + 448) = 1;
    v12 = *(_QWORD *)(v9 + 456) == v9 + 456;
    v13 = (KSPIN_LOCK *)(v9 + 440);
    *(_DWORD *)(v9 + 448) = 0;
    if ( !v12 )
      break;
    KeReleaseSpinLock(v13, v11);
  }
  KeReleaseSpinLock(v13, v11);
  return 3221225473LL;
}
