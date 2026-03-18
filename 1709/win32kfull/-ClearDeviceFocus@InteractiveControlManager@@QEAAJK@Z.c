/*
 * XREFs of ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C021B434
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C02221D0 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221EDC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearDeviceFocus(
        InteractiveControlManager *this,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  __int128 v12; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  const char *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  unsigned int *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]

  v10 = 0;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v16 = 0;
    v11 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::ClearDeviceFocus entry";
    v17 = (unsigned int *)&v11;
    v15 = 50;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EAB, a3, a4, 4u, &pData);
  }
  v5 = (_QWORD *)((char *)this + 40);
  v6 = 5LL;
  do
  {
    if ( *v5 )
      InteractiveControlDevice::SetFocus(*v5, 0LL, 0LL);
    ++v5;
    --v6;
  }
  while ( v6 );
  v12 = (unsigned __int64)this;
  HMAssignmentLock(&v12);
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v16 = 0;
    v19 = 0;
    v14 = "InteractiveControlManager::ClearDeviceFocus exit";
    v17 = &v10;
    v15 = 49;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v7, v8, 4u, &pData);
  }
  return v10;
}
