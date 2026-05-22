/*
 * XREFs of ?NotifyDeviceRemovalCallback@WGIController@@CAJPEAX@Z @ 0x1800A1870
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceRemovalCallback(__int64 *Block)
{
  unsigned int v2; // edi
  int v3; // r9d
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx

  if ( !Block )
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_16;
    v3 = 1128;
    goto LABEL_4;
  }
  v4 = *Block;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, Block[1]);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 1131, v5);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v7 = (void *)Block[1];
    if ( v7 )
    {
      operator delete(v7);
      Block[1] = 0LL;
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v3 = 1129;
LABEL_4:
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, v3, 87);
    }
  }
LABEL_16:
  if ( Block )
  {
    v8 = *Block;
    if ( *Block )
    {
      *Block = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    operator delete(Block);
  }
  return v2;
}
