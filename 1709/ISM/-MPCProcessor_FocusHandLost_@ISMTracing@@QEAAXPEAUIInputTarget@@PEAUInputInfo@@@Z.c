/*
 * XREFs of ?MPCProcessor_FocusHandLost_@ISMTracing@@QEAAXPEAUIInputTarget@@PEAUInputInfo@@@Z @ 0x180052714
 * Callers:
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180053140 (-OnTargetWithFocus3dChanged@MPCProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180054C00 (-OnTargetWithFocus3dChanged@MPCClickerProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ?IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x180055020 (-IsEndOfCapture@MPCClickerProcessor@@UEAA_NPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x18004CB1C (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCProcessor_FocusHandLost_(
        ISMTracing *this,
        struct IInputTarget *a2,
        struct InputInfo *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  int PIDOfTarget; // eax
  int v8; // [rsp+30h] [rbp-89h] BYREF
  int v9; // [rsp+34h] [rbp-85h] BYREF
  int v10; // [rsp+38h] [rbp-81h] BYREF
  int v11; // [rsp+3Ch] [rbp-7Dh] BYREF
  int v12; // [rsp+40h] [rbp-79h] BYREF
  struct IInputTarget *v13; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  struct IInputTarget **v15; // [rsp+70h] [rbp-49h]
  int v16; // [rsp+78h] [rbp-41h]
  int v17; // [rsp+7Ch] [rbp-3Dh]
  int *v18; // [rsp+80h] [rbp-39h]
  int v19; // [rsp+88h] [rbp-31h]
  int v20; // [rsp+8Ch] [rbp-2Dh]
  int *v21; // [rsp+90h] [rbp-29h]
  int v22; // [rsp+98h] [rbp-21h]
  int v23; // [rsp+9Ch] [rbp-1Dh]
  int *v24; // [rsp+A0h] [rbp-19h]
  int v25; // [rsp+A8h] [rbp-11h]
  int v26; // [rsp+ACh] [rbp-Dh]
  char *v27; // [rsp+B0h] [rbp-9h]
  int v28; // [rsp+B8h] [rbp-1h]
  int v29; // [rsp+BCh] [rbp+3h]
  char *v30; // [rsp+C0h] [rbp+7h]
  int v31; // [rsp+C8h] [rbp+Fh]
  int v32; // [rsp+CCh] [rbp+13h]
  int *v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D8h] [rbp+1Fh]
  int v35; // [rsp+DCh] [rbp+23h]
  int *v36; // [rsp+E0h] [rbp+27h]
  int v37; // [rsp+E8h] [rbp+2Fh]
  int v38; // [rsp+ECh] [rbp+33h]

  v5 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
  {
    v6 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
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
      v30 = (char *)a3 + 704;
      v11 = *((_DWORD *)a3 + 174);
      v33 = &v11;
      v12 = *((_DWORD *)a3 + 175);
      v36 = &v12;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      TlgWrite((TraceLoggingHProvider)v6, &unk_1800EE66B, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
