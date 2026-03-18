/*
 * XREFs of ?ReleaseResources@CMILResourceCache@@QEAAJXZ @ 0x1801ADFDC
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18017B700 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::ReleaseResources(CMILResourceCache *this)
{
  int v2; // esi
  _QWORD *i; // rdi
  __int64 result; // rax

  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 0x80000000, 0) )
    SleepEx(0, 1);
  v2 = *((_DWORD *)this + 8);
  for ( i = (_QWORD *)*((_QWORD *)this + 1); v2; --v2 )
  {
    if ( *i )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 24LL))(*i);
      *i = 0LL;
    }
    ++i;
  }
  result = 0LL;
  *((_DWORD *)this + 14) = 0;
  return result;
}
