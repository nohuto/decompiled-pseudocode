/*
 * XREFs of PortTraceInitGlobalLogger @ 0x1C0047AA4
 * Callers:
 *     RaidHandleTraceNotifyType @ 0x1C003889C (RaidHandleTraceNotifyType.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     WppGuidToStr @ 0x1C0047DC0 (WppGuidToStr.c)
 */

char __fastcall PortTraceInitGlobalLogger(__int64 *a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rbx
  int *v3; // rdi
  _BYTE *v4; // rsi
  PVOID SystemRoutineAddress; // rax
  int v6; // eax
  __int64 v7; // rax
  PVOID v8; // rax
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h]
  const wchar_t *v17; // [rsp+68h] [rbp-A0h]
  int *v18; // [rsp+70h] [rbp-98h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  int *v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+98h] [rbp-70h]
  const wchar_t *v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  __int64 v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  _OWORD Src[2]; // [rsp+108h] [rbp+0h] BYREF
  int v32; // [rsp+128h] [rbp+20h]
  _WORD v33[56]; // [rsp+138h] [rbp+30h] BYREF

  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  v3 = (int *)a1[2];
  v4 = (_BYTE *)a1[3];
  v12 = 0;
  v13 = 0;
  v11 = 0;
  v10 = 0;
  Src[0] = *(_OWORD *)L"WMI\\GlobalLogger\\";
  v32 = *(_DWORD *)L"\\";
  Src[1] = *(_OWORD *)L"alLogger\\";
  memset(v33, 0, 0x26uLL);
  memmove(v33, Src, 0x24uLL);
  v15 = 0LL;
  v17 = L"Start";
  LODWORD(v16) = 288;
  v18 = &v11;
  LODWORD(v19) = 67108868;
  v20 = &v10;
  v21 = 4;
  v22 = 0LL;
  v23 = 0;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v6 = ((__int64 (__fastcall *)(__int64, _WORD *, __int64 *, _QWORD, _QWORD))SystemRoutineAddress)(
         2147483650LL,
         v33,
         &v15,
         0LL,
         0LL);
  if ( v6 >= 0 && v11 )
  {
    v15 = 0LL;
    v17 = L"Flags";
    LODWORD(v16) = 288;
    v18 = &v12;
    v20 = &v10;
    v24 = L"Level";
    v25 = &v13;
    v27 = &v10;
    v7 = -1LL;
    LODWORD(v19) = 67108868;
    v21 = 4;
    v22 = 0LL;
    v23 = 288;
    v26 = 67108868;
    v28 = 1;
    v29 = 0LL;
    v30 = 0;
    do
      ++v7;
    while ( v33[v7] );
    WppGuidToStr(&v33[v7], v1);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    v8 = MmGetSystemRoutineAddress(&DestinationString);
    if ( !v8 )
      v8 = RtlQueryRegistryValues;
    v6 = ((__int64 (__fastcall *)(__int64, _WORD *, __int64 *, _QWORD, _QWORD))v8)(2147483650LL, v33, &v15, 0LL, 0LL);
    if ( v6 >= 0 && v11 == 1 )
    {
      *v2 = 1LL;
      *v3 = v12 & 0x7FFFFFFF;
      LOBYTE(v6) = v13;
      *v4 = v13;
    }
  }
  return v6;
}
