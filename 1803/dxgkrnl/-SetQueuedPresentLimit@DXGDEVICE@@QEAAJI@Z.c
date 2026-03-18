/*
 * XREFs of ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C00F317C
 * Callers:
 *     DxgkSetQueuedLimit @ 0x1C00A0B50 (DxgkSetQueuedLimit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01579F8 (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGDEVICE::SetQueuedPresentLimit(DXGDEVICE *this, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 168LL))(*((_QWORD *)this + 77));
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *((_QWORD *)this + 211);
    if ( v6 )
    {
      if ( v6 != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
        ADAPTER_DISPLAY::SetQueuedPresentLimit(*(ADAPTER_DISPLAY **)(v6 + 2456), this, a2);
    }
    return v5;
  }
  return result;
}
