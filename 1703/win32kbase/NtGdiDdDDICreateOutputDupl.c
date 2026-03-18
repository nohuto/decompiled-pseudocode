/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00F0DA0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     UserScreenAccessCheck @ 0x1C00778A0 (UserScreenAccessCheck.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00EC360 (GreIsInLowBox.c)
 *     GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C00FBC60 (GreEnterCriticalRegionAndAcquirePushLockExclusive.c)
 *     GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00FBD70 (GreLeaveCriticalRegionAndReleasePushLockExclusive.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(unsigned __int64 a1)
{
  char v2; // al
  BOOL IsCurrentProcessDwm; // edx
  int v4; // eax
  char v5; // dl
  CTouchProcessor *v7; // rcx
  int v8; // ebx
  CTouchProcessor *v9; // rcx
  int v10; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[4]; // [rsp+24h] [rbp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h]

  v2 = gOutputDuplicationTestControl;
  if ( (gOutputDuplicationTestControl & 2) != 0 )
  {
    IsCurrentProcessDwm = 1;
  }
  else
  {
    IsCurrentProcessDwm = UserIsCurrentProcessDwm();
    v2 = gOutputDuplicationTestControl;
  }
  v10 = (IsCurrentProcessDwm ? 4 : 0) | (8 * (v2 & 1));
  if ( !UserIsCurrentProcessDwm() && (unsigned int)GreIsInLowBox() )
  {
    v10 |= 2u;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v4 = RtlCapabilityCheck(0LL, &DestinationString, v11);
    v5 = 0;
    if ( v4 >= 0 )
      v5 = v11[0];
    if ( !v5 )
    {
      if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v10 |= 8u;
    }
  }
  v7 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v7 = W32UserProbeAddress;
  v13[0] = *(_OWORD *)v7;
  v13[1] = *((_OWORD *)v7 + 1);
  v13[2] = *((_OWORD *)v7 + 2);
  v14 = *((_QWORD *)v7 + 6);
  GreEnterCriticalRegionAndAcquirePushLockExclusive(&gOutputDuplPushLock);
  v8 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C018BAC0)(v13, &v10);
  if ( v8 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck() )
    {
      v8 = -1073741790;
LABEL_19:
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)&v13[0];
      LODWORD(DestinationString.Buffer) = 0;
      ((void (__fastcall *)(struct _UNICODE_STRING *, __int64))qword_1C018BAC8)(&DestinationString, 1LL);
      goto LABEL_20;
    }
    v10 |= 1u;
    v8 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C018BAC0)(v13, &v10);
    if ( v8 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  GreLeaveCriticalRegionAndReleasePushLockExclusive(&gOutputDuplPushLock);
  if ( v8 >= 0 )
  {
    v9 = (CTouchProcessor *)(a1 + 12);
    if ( a1 + 12 >= (unsigned __int64)W32UserProbeAddress )
      v9 = W32UserProbeAddress;
    *(_DWORD *)v9 = HIDWORD(v13[0]);
  }
  return (unsigned int)v8;
}
