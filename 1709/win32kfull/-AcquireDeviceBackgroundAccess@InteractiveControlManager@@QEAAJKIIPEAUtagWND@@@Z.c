/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C01126B0
 * Callers:
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0112460 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02219D0 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        unsigned __int64 a3,
        const GUID *a4,
        struct tagWND *a5)
{
  unsigned int v5; // edi
  struct tagWND *v6; // r15
  InteractiveControlDevice **v9; // rsi
  __int64 v10; // r12
  InteractiveControlDevice *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-81h] BYREF
  int v14; // [rsp+34h] [rbp-7Dh] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  const char *v17; // [rsp+70h] [rbp-41h]
  int v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+7Ch] [rbp-35h]
  unsigned int *v20; // [rsp+80h] [rbp-31h]
  int v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+8Ch] [rbp-25h]
  unsigned int *v23; // [rsp+90h] [rbp-21h]
  int v24; // [rsp+98h] [rbp-19h]
  int v25; // [rsp+9Ch] [rbp-15h]
  unsigned int *v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+ACh] [rbp-5h]
  _QWORD *v29; // [rsp+B0h] [rbp-1h]
  int v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+BCh] [rbp+Bh]
  unsigned int v32; // [rsp+120h] [rbp+6Fh] BYREF
  unsigned int v33; // [rsp+128h] [rbp+77h] BYREF

  v33 = (unsigned int)a4;
  v32 = a3;
  v13 = 0;
  v5 = 0;
  v6 = a5;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v17 = "InteractiveControlManager::AcquireDeviceBackgroundAccess entry";
    v20 = (unsigned int *)&v14;
    v23 = &v32;
    v26 = &v33;
    v29 = v15;
    v18 = 63;
    v14 = a2;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v15[0] = a5;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8E4B, (LPCGUID)a3, a4, 7u, &pData);
    a4 = (const GUID *)v33;
    a3 = v32;
  }
  while ( (unsigned int)a3 <= (unsigned int)a4 )
  {
    v5 |= 1 << (a3 + 24);
    a3 = (unsigned int)(a3 + 1);
  }
  v9 = (InteractiveControlDevice **)((char *)this + 40);
  v10 = 5LL;
  do
  {
    v11 = *v9;
    if ( *v9 && (!a2 || a2 == *((_DWORD *)v11 + 2)) )
      InteractiveControlDevice::SetBackgroundAccessor(v11, v6, v5);
    ++v9;
    --v10;
  }
  while ( v10 );
  if ( !a2 )
  {
    if ( v6 == *((struct tagWND **)this + 2) )
    {
      *((_DWORD *)this + 6) |= v5;
    }
    else
    {
      v15[0] = (char *)this + 16;
      v15[1] = v6;
      *((_DWORD *)this + 6) = v5;
      HMAssignmentLock(v15);
    }
  }
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v19 = 0;
    v22 = 0;
    v17 = "InteractiveControlManager::AcquireDeviceBackgroundAccess exit";
    v20 = &v13;
    v18 = 62;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, (LPCGUID)a3, a4, 4u, &pData);
  }
  return v13;
}
