/*
 * XREFs of McTemplateK0qq @ 0x1C0027694
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C002152C (McGenEventWriteKM.c)
 */

ULONG __stdcall McTemplateK0qq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const unsigned int Arg0,
        const unsigned int Arg1)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = Arg0;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  p_Arg1 = &Arg1;
  v12 = 0;
  v11 = 4;
  return McGenEventWriteKM(
           &DxgkControlGuid_Context,
           &EventPeriodicFrameNotificationInterrupt,
           (__int64)Activity,
           3u,
           &v6);
}
