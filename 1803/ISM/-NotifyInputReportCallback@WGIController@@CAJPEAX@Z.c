/*
 * XREFs of ?NotifyInputReportCallback@WGIController@@CAJPEAX@Z @ 0x18007A370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyInputReportCallback(char *Block)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( Block && (v3 = *(_QWORD *)Block) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 24LL))(v3, Block + 8);
    if ( v2 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  else
  {
    v2 = -2147024809;
  }
  if ( Block )
  {
    v4 = *(_QWORD *)Block;
    if ( *(_QWORD *)Block )
    {
      *(_QWORD *)Block = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete(Block);
  }
  return (unsigned int)v2;
}
