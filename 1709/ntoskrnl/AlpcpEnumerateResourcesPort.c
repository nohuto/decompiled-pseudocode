/*
 * XREFs of AlpcpEnumerateResourcesPort @ 0x140461648
 * Callers:
 *     NtAlpcDeleteSectionView @ 0x140460970 (NtAlpcDeleteSectionView.c)
 *     AlpcpLocateSectionView @ 0x1404615A8 (AlpcpLocateSectionView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1404616E8 (AlpcpViewSearchCallbackFunction.c)
 */

__int64 __fastcall AlpcpEnumerateResourcesPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 *v4; // rdi
  __int64 **v5; // r14
  int v7; // esi
  __int64 *i; // rbx

  v4 = (signed __int64 *)(a1 + 328);
  v5 = (__int64 **)(a1 + 336);
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 328, 0LL);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 17) == 6 )
    {
      v7 = AlpcpViewSearchCallbackFunction(i + 6, a4);
      if ( v7 < 0 )
        break;
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v7;
}
