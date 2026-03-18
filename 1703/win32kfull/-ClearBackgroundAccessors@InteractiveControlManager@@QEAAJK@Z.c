/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C021A09C
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02205D8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(InteractiveControlManager *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  InteractiveControlDevice **v4; // rbx
  __int64 v5; // rsi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v9; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+17h] BYREF
  unsigned int *v14; // [rsp+88h] [rbp+27h]
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+94h] [rbp+33h]

  v9 = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearBackgroundAccessors entry");
    v10 = 0;
    v16 = 0;
    v14 = (unsigned int *)&v10;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC2DB, v2, v3, 4u, &pData);
  }
  v4 = (InteractiveControlDevice **)((char *)this + 40);
  v5 = 5LL;
  do
  {
    if ( *v4 )
      InteractiveControlDevice::SetBackgroundAccessor(*v4, 0LL, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  v11[1] = 0LL;
  *((_DWORD *)this + 6) = 0;
  v11[0] = (char *)this + 16;
  HMAssignmentLock(v11);
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearBackgroundAccessors exit");
    v16 = 0;
    v14 = &v9;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v6, v7, 4u, &pData);
  }
  return v9;
}
