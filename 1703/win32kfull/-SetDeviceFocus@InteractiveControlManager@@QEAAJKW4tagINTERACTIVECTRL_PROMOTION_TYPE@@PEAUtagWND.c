/*
 * XREFs of ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C021B7B8
 * Callers:
 *     NtUserSetInteractiveControlFocus @ 0x1C01DF5E0 (NtUserSetInteractiveControlFocus.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220A08 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::SetDeviceFocus(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  LPCGUID cData; // r9
  LPCGUID v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  int v17; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-21h]
  int v24; // [rsp+8Ch] [rbp-1Dh]
  int *v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+9Ch] [rbp-Dh]
  _QWORD *v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+ACh] [rbp+3h]

  v16 = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceFocus entry");
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = (unsigned int *)&v17;
    v25 = (int *)&v18;
    v28 = v19;
    v17 = a2;
    v23 = (int)v8;
    v18 = a3;
    v26 = (int)v8;
    v19[0] = a4;
    v29 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC375, v9, v8, 6u, &pData);
  }
  v10 = (__int64 *)(a1 + 40);
  v11 = 5LL;
  do
  {
    v12 = *v10;
    if ( *v10 && (!a2 || a2 == *(_DWORD *)(v12 + 8)) )
      InteractiveControlDevice::SetFocus(v12, a4, a3);
    ++v10;
    --v11;
  }
  while ( v11 );
  if ( !a2 )
  {
    v19[0] = a1;
    v19[1] = a4;
    HMAssignmentLock(v19);
    *(_DWORD *)(a1 + 8) = a3;
  }
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::SetDeviceFocus exit");
    v24 = 0;
    v22 = &v16;
    v23 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v14, cData, (UINT32)cData, &pData);
  }
  return v16;
}
