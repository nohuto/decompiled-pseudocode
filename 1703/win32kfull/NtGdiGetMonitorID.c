/*
 * XREFs of NtGdiGetMonitorID @ 0x1C024AE80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rbx
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  unsigned int v16; // ebx
  _BYTE v17[8]; // [rsp+30h] [rbp-3B8h] BYREF
  DC *v18[2]; // [rsp+38h] [rbp-3B0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-3A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-398h] BYREF
  int v21[82]; // [rsp+60h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+1A8h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  v18[1] = 0LL;
  XDCOBJ::vLock(v18, a1);
  if ( v18[0] )
  {
    v19 = *((_QWORD *)v18[0] + 6);
    v12 = v19;
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v17);
    if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0 )
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1816) + 40LL) + 2592LL);
    else
      v13 = *(_QWORD *)(v12 + 2592);
    if ( v13 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v13 + 64));
      v21[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v21, 0, 0) >= 0 )
        v6 = 1;
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v18);
    v14 = -1LL;
    _InterlockedAdd((volatile signed __int32 *)v18[0] + 3, 0xFFFFFFFF);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15);
  }
  else
  {
    v14 = -1LL;
  }
  if ( v6 )
  {
    do
      ++v14;
    while ( Src[v14] );
    v16 = 2 * v14 + 2;
    if ( v16 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, Src, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v6;
}
