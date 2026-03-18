/*
 * XREFs of ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0108974
 * Callers:
 *     NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0108720 (NtUserAcquireInteractiveControlBackgroundAccess.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02205D8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::AcquireDeviceBackgroundAccess(
        InteractiveControlManager *this,
        int a2,
        unsigned int a3,
        unsigned int a4,
        struct tagWND *a5)
{
  unsigned int v5; // edi
  struct tagWND *v6; // r15
  InteractiveControlDevice **v9; // rsi
  __int64 v10; // r12
  InteractiveControlDevice *v11; // rcx
  int v13; // r10d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  LPCGUID cData; // r9
  LPCGUID v17; // r8
  unsigned int v18; // [rsp+30h] [rbp-91h] BYREF
  int v19; // [rsp+34h] [rbp-8Dh] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-51h] BYREF
  unsigned int *v23; // [rsp+80h] [rbp-41h]
  int v24; // [rsp+88h] [rbp-39h]
  int v25; // [rsp+8Ch] [rbp-35h]
  unsigned int *v26; // [rsp+90h] [rbp-31h]
  int v27; // [rsp+98h] [rbp-29h]
  int v28; // [rsp+9Ch] [rbp-25h]
  unsigned int *v29; // [rsp+A0h] [rbp-21h]
  int v30; // [rsp+A8h] [rbp-19h]
  int v31; // [rsp+ACh] [rbp-15h]
  _QWORD *v32; // [rsp+B0h] [rbp-11h]
  int v33; // [rsp+B8h] [rbp-9h]
  int v34; // [rsp+BCh] [rbp-5h]
  unsigned int v35; // [rsp+130h] [rbp+6Fh] BYREF
  unsigned int v36; // [rsp+138h] [rbp+77h] BYREF

  v36 = a4;
  v35 = a3;
  v18 = 0;
  v5 = 0;
  v6 = a5;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::AcquireDeviceBackgroundAccess entry");
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v23 = (unsigned int *)&v19;
    v26 = &v35;
    v29 = &v36;
    v32 = v20;
    v19 = a2;
    v24 = v13;
    v27 = v13;
    v30 = v13;
    v20[0] = v6;
    v33 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC315, v14, v15, 7u, &pData);
    a4 = v36;
    a3 = v35;
  }
  while ( a3 <= a4 )
    v5 |= 1 << (a3++ + 24);
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
      v20[0] = (char *)this + 16;
      v20[1] = v6;
      *((_DWORD *)this + 6) = v5;
      HMAssignmentLock(v20);
    }
  }
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::AcquireDeviceBackgroundAccess exit");
    v25 = 0;
    v23 = &v18;
    v24 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v17, cData, (UINT32)cData, &pData);
  }
  return v18;
}
