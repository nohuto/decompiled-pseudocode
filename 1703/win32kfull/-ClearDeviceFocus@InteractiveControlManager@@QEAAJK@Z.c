/*
 * XREFs of ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A1E4
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220A08 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearDeviceFocus(InteractiveControlManager *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  __int128 v11; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+17h] BYREF
  unsigned int *v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+94h] [rbp+33h]

  v9 = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearDeviceFocus entry");
    v10 = 0;
    v16 = 0;
    v14 = (unsigned int *)&v10;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC2DB, v2, v3, 4u, &pData);
  }
  v4 = (_QWORD *)((char *)this + 40);
  v5 = 5LL;
  do
  {
    if ( *v4 )
      InteractiveControlDevice::SetFocus(*v4, 0LL, 0LL);
    ++v4;
    --v5;
  }
  while ( v5 );
  v11 = (unsigned __int64)this;
  HMAssignmentLock(&v11);
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearDeviceFocus exit");
    v16 = 0;
    v14 = &v9;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v6, v7, 4u, &pData);
  }
  return v9;
}
