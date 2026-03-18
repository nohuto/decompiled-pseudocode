/*
 * XREFs of Template_xxxxxxxxxxxqN16 @ 0x18014411C
 * Callers:
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800C47C0 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxxxxxxxxxxqN16(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-D0h]
  __int64 v16; // [rsp+38h] [rbp-C8h]
  char *v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  char *v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  char *v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  char *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  char *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  char *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  char *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  char *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  char *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  va_list v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  __int64 v39; // [rsp+130h] [rbp+30h] BYREF
  __int64 v40; // [rsp+138h] [rbp+38h] BYREF
  __int64 v41; // [rsp+188h] [rbp+88h] BYREF
  va_list va; // [rsp+188h] [rbp+88h]
  __int64 v43; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  va_list va1; // [rsp+1A0h] [rbp+A0h] BYREF

  va_start(va1, a13);
  va_start(va, a13);
  v41 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v44 = va_arg(va1, _QWORD);
  v40 = a4;
  v39 = a3;
  UserData.Ptr = (ULONGLONG)&v39;
  *(_QWORD *)&UserData.Size = 8LL;
  v15 = &v40;
  v16 = 8LL;
  v17 = &a5;
  v18 = 8LL;
  v19 = &a6;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v33 = &a13;
  va_copy(v35, va);
  v37 = v44;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 8LL;
  v30 = 8LL;
  v32 = 8LL;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 128LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_GLITCH, 0xDu, &UserData);
}
