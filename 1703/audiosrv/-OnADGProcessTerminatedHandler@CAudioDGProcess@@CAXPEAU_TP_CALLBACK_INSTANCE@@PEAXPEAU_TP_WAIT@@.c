/*
 * XREFs of ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800CD6A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800CD47C (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 */

void __fastcall CAudioDGProcess::OnADGProcessTerminatedHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioDGProcess *a2,
        struct _TP_WAIT *a3,
        const GUID *a4)
{
  const GUID *v5; // r8
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+7Ch] [rbp+3h]
  int *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+27h] BYREF

  v8 = (int)a4;
  if ( (unsigned int)dword_18012A2A0 > 2 && TlgKeywordOn((TraceLoggingHProvider)&dword_18012A2A0, 0x400000000000uLL) )
  {
    TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB55, v5, a4, 2u, &pData);
    LODWORD(a4) = v8;
  }
  if ( (_DWORD)a4 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
        (int)a4);
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::OnADGProcessTerminatedHandler");
      v14 = 0;
      v17 = 0;
      v12 = &v9;
      v15 = &v8;
      v9 = 1014;
      v13 = 4;
      v16 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v6, v7, 5u, &v10);
    }
  }
  else
  {
    CAudioDGProcess::OnADGProcessTerminated(a2);
  }
}
