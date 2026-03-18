/*
 * XREFs of Isoch_TransferData_Initialize @ 0x1C002B924
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0029D28 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McTemplateK0cqqq @ 0x1C0007E38 (McTemplateK0cqqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026EBC (WPP_RECORDER_SF_DDq.c)
 */

__int64 __fastcall Isoch_TransferData_Initialize(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbp
  unsigned int v8; // eax
  ULONG v9; // r14d
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rax
  struct _MDL *Mdl; // rax
  __int64 v14; // rax
  _QWORD v16[5]; // [rsp+40h] [rbp-68h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v7 = v16[1];
  v8 = *(unsigned __int16 *)(v16[1] + 2LL);
  if ( v8 <= 0x38 || v8 > 0x3A )
    v9 = *(_DWORD *)(v16[1] + 36LL);
  else
    v9 = *(_DWORD *)(v16[1] + 52LL);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    a2,
                    off_1C004E098);
  memset(v10, 0, 0x300uLL);
  v10[1] = v10;
  *v10 = v10;
  *((_BYTE *)v10 + 16) = 1;
  v10[3] = a2;
  v10[6] = v7;
  v10[7] = a1;
  *((_DWORD *)v10 + 17) = 259;
  *((_DWORD *)v10 + 16) = 0;
  v10[9] = 0LL;
  *((_DWORD *)v10 + 20) = v9;
  *(_QWORD *)((char *)v10 + 84) = 0LL;
  *((_DWORD *)v10 + 23) = 0;
  *((_DWORD *)v10 + 24) = *(_DWORD *)(v7 + 132);
  *(_QWORD *)((char *)v10 + 100) = 0LL;
  *(_QWORD *)((char *)v10 + 108) = 0LL;
  *((_DWORD *)v10 + 29) = 0;
  *((_DWORD *)v10 + 32) = 976;
  *((_WORD *)v10 + 66) = 0;
  *((_BYTE *)v10 + 134) = 0;
  v11 = *(unsigned __int16 *)(v7 + 2);
  if ( v11 <= 0x38 || v11 > 0x3A )
  {
    v12 = *(_QWORD *)(v7 + 48);
    if ( v12 )
    {
      v10[9] = v12;
    }
    else
    {
      Mdl = IoAllocateMdl(*(PVOID *)(v7 + 40), v9, 0, 0, 0LL);
      v10[9] = Mdl;
      if ( !Mdl )
      {
        v6 = -1073741670;
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0xFu,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          a2);
        goto LABEL_17;
      }
      MmBuildMdlForNonPagedPool(Mdl);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
  {
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (int)IoGetActivityIdIrp(v14, v10 + 4) < 0 )
      EtwActivityIdControl(3u, (LPGUID)v10 + 2);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x100) != 0 )
      McTemplateK0cqqq(
        *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_QWORD *)(a1 + 56),
        (const GUID *)v10 + 2,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        *((_DWORD *)v10 + 20));
  }
LABEL_17:
  *a3 = v10;
  return v6;
}
