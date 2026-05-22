/*
 * XREFs of ?NotifyDeviceAttachCallback@WGIController@@CAJPEAX@Z @ 0x18007A020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIController::NotifyDeviceAttachCallback(__int64 *Block)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( Block && (v3 = *Block) != 0 && Block[1] )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 40LL))(v3, Block[2]);
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
    v4 = Block[1];
    if ( v4 )
    {
      Block[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = *Block;
    if ( *Block )
    {
      *Block = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(Block);
  }
  return (unsigned int)v2;
}
