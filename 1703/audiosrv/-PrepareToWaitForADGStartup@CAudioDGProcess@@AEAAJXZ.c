/*
 * XREFs of ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001789C
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001746C (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

signed int __fastcall CAudioDGProcess::PrepareToWaitForADGStartup(CAudioDGProcess *this)
{
  HANDLE v2; // rax
  signed int result; // eax
  CVolumeStrip *v4; // rcx
  __int64 v5; // r9
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  signed int v8; // [rsp+30h] [rbp-39h] BYREF
  int v9; // [rsp+34h] [rbp-35h] BYREF
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *v13; // [rsp+80h] [rbp+17h]
  int v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+8Ch] [rbp+23h]
  signed int *v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+98h] [rbp+2Fh]
  int v18; // [rsp+9Ch] [rbp+33h]

  EventAttributes.lpSecurityDescriptor = 0LL;
  EventAttributes.nLength = 24;
  EventAttributes.bInheritHandle = 1;
  v2 = CreateEventW(&EventAttributes, 1, 0, 0LL);
  *((_QWORD *)this + 13) = v2;
  if ( v2 )
  {
    result = 0;
    v8 = 0;
LABEL_3:
    v4 = WPP_GLOBAL_Control;
    goto LABEL_4;
  }
  result = GetLastError();
  v5 = (unsigned int)result;
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  v8 = result;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids, v5);
    result = v8;
    goto LABEL_3;
  }
LABEL_4:
  if ( result < 0 )
  {
    if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)v4 + 2), 20LL, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids, (unsigned int)result);
      result = v8;
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::PrepareToWaitForADGStartup");
      v15 = 0;
      v18 = 0;
      v13 = &v9;
      v16 = &v8;
      v9 = 356;
      v14 = 4;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v6, v7, 5u, &pData);
      return v8;
    }
  }
  return result;
}
