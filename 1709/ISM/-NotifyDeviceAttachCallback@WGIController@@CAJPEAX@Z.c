/*
 * XREFs of ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x1800A1730
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceAttachCallback(__int64 Block)
{
  __int64 *v1; // rbx
  unsigned int v2; // edi
  int v3; // r9d
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = (__int64 *)Block;
  if ( !Block )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_17;
    v3 = 1088;
    goto LABEL_4;
  }
  Block = *(_QWORD *)Block;
  if ( Block )
  {
    if ( v1[1] )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)Block + 40LL))(Block, v1[2]);
      v2 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 1094, v4);
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    else
    {
      v2 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v3 = 1090;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 1089;
LABEL_4:
      McTemplateU0qqq(Block, &MinInput_Warning_CheckResult, 0, v3, 87);
    }
  }
LABEL_17:
  if ( v1 )
  {
    v6 = v1[1];
    if ( v6 )
    {
      v1[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    operator delete(v1);
  }
  return v2;
}
