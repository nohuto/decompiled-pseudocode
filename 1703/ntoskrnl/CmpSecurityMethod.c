/*
 * XREFs of CmpSecurityMethod @ 0x1404FCC50
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpSecurityMethod(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  ULONG_PTR v12; // rdi
  char v13; // si
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int KeySecurity; // eax
  unsigned int v19; // ebx
  int v20; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-A1h]
  int BugCheckParameter4a; // [rsp+20h] [rbp-A1h]
  __int64 v24; // [rsp+28h] [rbp-99h]
  _QWORD v25[2]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v26; // [rsp+50h] [rbp-71h]
  __int64 v27; // [rsp+58h] [rbp-69h]
  _QWORD v28[7]; // [rsp+60h] [rbp-61h] BYREF
  LARGE_INTEGER v29[3]; // [rsp+98h] [rbp-29h] BYREF

  v9 = CmpTraceRoutine;
  v27 = a8;
  v12 = a2;
  memset(v29, 0, sizeof(v29));
  v26 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp(v29, 0x20000u);
    v9 = CmpTraceRoutine;
  }
  v25[1] = v25;
  v13 = 0;
  v25[0] = v25;
  memset(v28, 0, sizeof(v28));
  if ( v9 && a1 )
    v26 = a1[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    if ( (_DWORD)v12 == 1 )
    {
      v28[3] = a5;
      v16 = 36;
      v24 = (__int64)a1;
      BugCheckParameter4a = 37;
    }
    else
    {
      if ( (_DWORD)v12 )
        goto LABEL_10;
      v16 = 38;
      v24 = (__int64)a1;
      BugCheckParameter4a = 39;
    }
    LOBYTE(v15) = 1;
    v28[0] = a1;
    v28[1] = a3;
    v28[2] = a4;
    v17 = CmpCallCallBacksEx(v16, (unsigned int)v28, 0, v15, BugCheckParameter4a, v24, (__int64)v25);
    if ( v17 < 0 )
    {
      v19 = 0;
      if ( v17 != -1073740541 )
        v19 = v17;
      goto LABEL_18;
    }
    v13 = 1;
  }
LABEL_10:
  if ( (_DWORD)v12 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5, BugCheckParameter4);
  }
  else if ( (_DWORD)v12 )
  {
    if ( (_DWORD)v12 == 2 )
      goto LABEL_13;
    if ( (_DWORD)v12 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, a1[1], v12);
    KeySecurity = CmpAssignKeySecurity((__int64)a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4);
  }
  v19 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v19 = 0;
  if ( !v13 )
    goto LABEL_18;
  if ( (_DWORD)v12 == 1 )
  {
    v20 = 37;
LABEL_17:
    v19 = CmPostCallbackNotificationEx(v20, (__int64)a1, v19, (__int64)v28, 0LL, v25);
    goto LABEL_18;
  }
  if ( !(_DWORD)v12 )
  {
    v20 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( CmpTraceRoutine )
    CmpTraceRoutine((unsigned int)((_DWORD)v12 != 0) + 28, v29, v19, 0LL, v26, 0LL);
  return v19;
}
