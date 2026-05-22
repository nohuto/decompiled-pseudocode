/*
 * XREFs of ?MPCExclusiveInputTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x1800871BC
 * Callers:
 *     ?DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800877D0 (-DeliverInput@MPCExclusiveInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004A354 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCExclusiveInputTarget_DeliverInput_(
        ISMTracing *this,
        struct IInputTarget *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  int PIDOfTarget; // eax
  int v8; // [rsp+38h] [rbp-79h] BYREF
  int v9; // [rsp+3Ch] [rbp-75h] BYREF
  int v10; // [rsp+40h] [rbp-71h] BYREF
  int v11; // [rsp+44h] [rbp-6Dh] BYREF
  int v12; // [rsp+48h] [rbp-69h] BYREF
  struct IInputTarget *v13; // [rsp+50h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-59h] BYREF
  struct IInputTarget **v15; // [rsp+78h] [rbp-39h]
  int v16; // [rsp+80h] [rbp-31h]
  int v17; // [rsp+84h] [rbp-2Dh]
  int *v18; // [rsp+88h] [rbp-29h]
  int v19; // [rsp+90h] [rbp-21h]
  int v20; // [rsp+94h] [rbp-1Dh]
  int *v21; // [rsp+98h] [rbp-19h]
  int v22; // [rsp+A0h] [rbp-11h]
  int v23; // [rsp+A4h] [rbp-Dh]
  int *v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+B0h] [rbp-1h]
  int v26; // [rsp+B4h] [rbp+3h]
  char *v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+C0h] [rbp+Fh]
  int v29; // [rsp+C4h] [rbp+13h]
  char *v30; // [rsp+C8h] [rbp+17h]
  int v31; // [rsp+D0h] [rbp+1Fh]
  int v32; // [rsp+D4h] [rbp+23h]
  int *v33; // [rsp+D8h] [rbp+27h]
  int v34; // [rsp+E0h] [rbp+2Fh]
  int v35; // [rsp+E4h] [rbp+33h]
  int *v36; // [rsp+E8h] [rbp+37h]
  int v37; // [rsp+F0h] [rbp+3Fh]
  int v38; // [rsp+F4h] [rbp+43h]

  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v17 = 0;
      v15 = &v13;
      v13 = a2;
      v16 = 8;
      PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v8 = PIDOfTarget;
      v18 = &v8;
      v9 = *(_DWORD *)a3;
      v21 = &v9;
      v10 = *((_DWORD *)a3 + 1);
      v24 = &v10;
      v27 = (char *)a3 + 8;
      v30 = (char *)a3 + 528;
      v11 = *((_DWORD *)a3 + 130);
      v33 = &v11;
      v12 = *((_DWORD *)a3 + 131);
      v36 = &v12;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)v6, &unk_18010F9A1, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
