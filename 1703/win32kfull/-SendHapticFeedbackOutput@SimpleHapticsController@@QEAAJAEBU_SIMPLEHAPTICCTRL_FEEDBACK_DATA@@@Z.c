/*
 * XREFs of ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0223688
 * Callers:
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0220588 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SimpleHapticsController::SendHapticFeedbackOutput(
        SimpleHapticsController *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2)
{
  ULONG v4; // r14d
  __int64 v5; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  _BYTE *v8; // r10
  int v9; // eax
  ULONG v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // r8
  NTSTATUS result; // eax
  __int64 v15; // rax
  int v16; // ecx
  void *v17; // rcx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-A1h]
  ULONG Report; // [rsp+30h] [rbp-99h]
  NTSTATUS v22; // [rsp+50h] [rbp-79h] BYREF
  int v23; // [rsp+54h] [rbp-75h] BYREF
  int v24; // [rsp+58h] [rbp-71h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-39h] BYREF
  const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  int *v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  int *v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  union _LARGE_INTEGER *p_ByteOffset; // [rsp+D0h] [rbp+7h]
  __int64 v35; // [rsp+D8h] [rbp+Fh]

  v22 = 0;
  v4 = 0;
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::GetReportInfo entry");
    v23 = *((_DWORD *)a2 + 1);
    v30 = &v23;
    v24 = *((_DWORD *)a2 + 2);
    v32 = &v24;
    ByteOffset.LowPart = *((_DWORD *)a2 + 3);
    p_ByteOffset = &ByteOffset;
    v28 = a2;
    v29 = v5;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECC68, v6, v7, 7u, &v26);
  }
  if ( !*((_WORD *)this + 36) || (v8 = (_BYTE *)*((_QWORD *)this + 8)) == 0LL || !*((_QWORD *)this + 3) )
  {
    result = -1073740701;
    goto LABEL_22;
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = v9 - 1;
  if ( v9 <= 0 )
    v10 = 0;
  if ( *(_WORD *)a2 > 2u )
  {
    v11 = *((_DWORD *)this + 22);
    v12 = 0;
    if ( !v11 )
      goto LABEL_13;
    v13 = *((_QWORD *)this + 10);
    while ( *(_WORD *)(v13 + 8LL * v12) != *(_WORD *)a2 )
    {
      if ( ++v12 >= v11 )
        goto LABEL_13;
    }
    v15 = v13 + 8LL * v12;
    if ( !v15 )
    {
LABEL_13:
      result = -1073741811;
      goto LABEL_22;
    }
    v16 = *((_DWORD *)a2 + 3);
    if ( v16 > 0 )
      v4 = v16 + *(_DWORD *)(v15 + 4);
  }
  *v8 = 1;
  if ( HidP_SetUsageValue(
         HidP_Output,
         0xEu,
         0,
         0x21u,
         *(unsigned __int16 *)a2,
         *((PHIDP_PREPARSED_DATA *)this + 2),
         *((PCHAR *)this + 8),
         *((unsigned __int16 *)this + 36)) < 0 )
  {
    result = v22;
    goto LABEL_23;
  }
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x24u,
    v10,
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x25u,
    v4,
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  HidP_SetUsageValue(
    HidP_Output,
    0xEu,
    0,
    0x23u,
    *((_DWORD *)a2 + 1),
    *((PHIDP_PREPARSED_DATA *)this + 2),
    *((PCHAR *)this + 8),
    *((unsigned __int16 *)this + 36));
  v17 = (void *)*((_QWORD *)this + 3);
  Report = *((unsigned __int16 *)this + 36);
  pData = (EVENT_DATA_DESCRIPTOR *)*((_QWORD *)this + 8);
  ByteOffset.QuadPart = 0LL;
  result = ZwWriteFile(v17, 0LL, 0LL, 0LL, (PIO_STATUS_BLOCK)((char *)this + 40), pData, Report, &ByteOffset, 0LL);
  v22 = result;
  if ( result < 0 )
    goto LABEL_23;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  result = ZwFlushBuffersFile(*((HANDLE *)this + 3), (PIO_STATUS_BLOCK)((char *)this + 40));
LABEL_22:
  v22 = result;
LABEL_23:
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SendHapticFeedbackOutput exit");
    v29 = 4LL;
    v28 = (const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *)&v22;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBC1, v18, v19, 4u, &v26);
    return v22;
  }
  return result;
}
