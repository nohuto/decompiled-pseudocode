/*
 * XREFs of NtGdiDdDDICreateOutputDupl @ 0x1C00F39A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     UserScreenAccessCheck @ 0x1C007C030 (UserScreenAccessCheck.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     GreIsInLowBox @ 0x1C00F02C0 (GreIsInLowBox.c)
 */

__int64 __fastcall NtGdiDdDDICreateOutputDupl(ULONG64 a1)
{
  BOOL v2; // eax
  int v3; // eax
  char v4; // dl
  _OWORD *v6; // rax
  int v7; // ebx
  _DWORD *v8; // rdx
  int v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[4]; // [rsp+24h] [rbp-54h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  _OWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF

  v2 = (gOutputDuplicationTestControl & 2) != 0 || UserIsCurrentProcessDwm();
  v9 = (v2 ? 4 : 0) | (8 * (gOutputDuplicationTestControl & 1));
  if ( !UserIsCurrentProcessDwm() && (unsigned int)GreIsInLowBox() )
  {
    v9 |= 2u;
    RtlInitUnicodeString(&DestinationString, L"screenDuplication");
    v3 = RtlCapabilityCheck(0LL, &DestinationString, v10);
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v10[0];
    if ( !v4 )
    {
      if ( !gbOSTestSigningEnabled || (gOutputDuplicationTestControl & 1) == 0 )
        return 3221225506LL;
      v9 |= 8u;
    }
  }
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  v12[0] = *v6;
  v12[1] = v6[1];
  v12[2] = v6[2];
  v7 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C0190728)(v12, &v9);
  if ( v7 >= 0 )
  {
    if ( !(unsigned int)UserScreenAccessCheck() )
    {
      v7 = -1073741790;
LABEL_19:
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)&v12[0];
      LODWORD(DestinationString.Buffer) = 0;
      ((void (__fastcall *)(struct _UNICODE_STRING *, __int64))qword_1C0190730)(&DestinationString, 1LL);
      goto LABEL_20;
    }
    v9 |= 1u;
    v7 = ((__int64 (__fastcall *)(_OWORD *, int *))qword_1C0190728)(v12, &v9);
    if ( v7 < 0 )
      goto LABEL_19;
  }
LABEL_20:
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = HIDWORD(v12[0]);
  }
  return (unsigned int)v7;
}
