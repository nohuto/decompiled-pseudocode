/*
 * XREFs of ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18008A4A4
 * Callers:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180089AE8 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::RegisterWaitHandler(
        RIMDeviceCollection *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v7 = CoreUICreate(&v13);
  v9 = v7;
  if ( v7 >= 0 )
  {
    v11 = v13;
    if ( v13 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, void *, int (*)(void *, unsigned int, void *), void *))(*(_QWORD *)v13 + 264LL))(
             v13,
             a2,
             a3,
             a4);
      v9 = v7;
      if ( v7 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_11;
      v10 = 1243;
      goto LABEL_10;
    }
    v9 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_12;
    McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 2, 1237, 255);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 1233;
LABEL_10:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 2, v10, v7);
  }
LABEL_11:
  v11 = v13;
LABEL_12:
  if ( v11 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
