/*
 * XREFs of sub_1800D65C8 @ 0x1800D65C8
 * Callers:
 *     sub_180089560 @ 0x180089560 (sub_180089560.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     sub_1800898DC @ 0x1800898DC (sub_1800898DC.c)
 *     sub_1800905E4 @ 0x1800905E4 (sub_1800905E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     RtlCaptureContext @ 0x1800A91B0 (RtlCaptureContext.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 */

NTSTATUS __fastcall sub_1800D65C8(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-B0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+68h] [rbp-A0h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+108h] [rbp+0h] BYREF
  char v24[32]; // [rsp+5D8h] [rbp+4D0h] BYREF
  _DWORD *v25; // [rsp+5F8h] [rbp+4F0h]
  __int64 v26; // [rsp+600h] [rbp+4F8h]
  __int64 v27; // [rsp+608h] [rbp+500h]
  _DWORD v28[2]; // [rsp+610h] [rbp+508h] BYREF
  int *v29; // [rsp+618h] [rbp+510h]
  __int64 v30; // [rsp+620h] [rbp+518h]
  int *v31; // [rsp+628h] [rbp+520h]
  __int64 v32; // [rsp+630h] [rbp+528h]
  int *v33; // [rsp+638h] [rbp+530h]
  __int64 v34; // [rsp+640h] [rbp+538h]
  int *v35; // [rsp+648h] [rbp+540h]
  __int64 v36; // [rsp+650h] [rbp+548h]
  _DWORD *v37; // [rsp+658h] [rbp+550h]
  __int64 v38; // [rsp+660h] [rbp+558h]
  __int64 v39; // [rsp+668h] [rbp+560h]
  _DWORD v40[2]; // [rsp+670h] [rbp+568h] BYREF
  int *v41; // [rsp+678h] [rbp+570h]
  __int64 v42; // [rsp+680h] [rbp+578h]
  int *v43; // [rsp+688h] [rbp+580h]
  __int64 v44; // [rsp+690h] [rbp+588h]
  __int64 *v45; // [rsp+698h] [rbp+590h]
  __int64 v46; // [rsp+6A0h] [rbp+598h]

  SystemInformation = 0LL;
  if ( RtlRunOnceExecuteOnce(&stru_18015C048, (PRTL_RUN_ONCE_INIT_FN)sub_18008AB00, 0LL, 0LL) >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = (unsigned __int16 *)(v6 + 72);
    if ( v6 )
    {
      v8 = *(unsigned __int8 *)(v6 + 284);
    }
    else
    {
      v7 = 0LL;
      v8 = -1;
    }
    LODWORD(SystemInformation) = 8;
    ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL);
    if ( (unsigned int)dword_1801554C0 > 5 && sub_1800898DC((__int64)&dword_1801554C0, 0x800000000000LL) )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v14 = *(unsigned __int8 *)(v11 + 284);
      v15 = *(_DWORD *)(a1 + 24);
      v16 = *(_DWORD *)(a1 + 28);
      LODWORD(v20) = HIDWORD(SystemInformation);
      v17 = a3;
      v18 = v8;
      v19 = a2;
      v12 = *(unsigned __int16 *)(v11 + 72);
      v27 = *(_QWORD *)(v11 + 80);
      v29 = &v14;
      v31 = &v15;
      v33 = &v16;
      v35 = &v17;
      v37 = v40;
      v39 = *((_QWORD *)v7 + 1);
      v40[0] = *v7;
      v41 = &v18;
      v43 = &v19;
      v45 = &v20;
      v25 = v28;
      v26 = 2LL;
      v28[0] = v12;
      v28[1] = 0;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 2LL;
      v40[1] = 0;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      sub_1800905E4(
        (__int64)&dword_1801554C0,
        (unsigned __int8 *)dword_180124231,
        v9,
        v10,
        0xDu,
        (PEVENT_DATA_DESCRIPTOR)v24);
    }
  }
  RtlCaptureContext(&ContextRecord);
  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionAddress = 0LL;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = 45LL;
  return RtlReportException(&ExceptionRecord, &ContextRecord, 0x1Eu);
}
