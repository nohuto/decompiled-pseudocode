/*
 * XREFs of ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00B4C6C
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00B4A60 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C00B4B44 (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02B22A0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02B2B88 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rdi
  char v5; // si
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v13; // rdx

  v3 = (volatile signed __int32 *)UmfdFileviewLookup;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = 1;
  _InterlockedCompareExchange(v3 + 4, 0, 1);
  _InterlockedAdd(v3 + 7, 1u);
  if ( *((_DWORD *)v3 + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(v3 + 2));
  v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound((__int64)v3, &g_UmfdFileViewKey);
  v7 = *((_QWORD *)v3 + 5);
  v8 = v6;
  if ( v6 < v7 && (v13 = *((_QWORD *)v3 + 6), *(_DWORD *)(v13 + 16 * v6) == g_UmfdFileViewKey) )
  {
    *(_QWORD *)(v13 + 16 * v6 + 8) = *a3;
  }
  else
  {
    v9 = *((_QWORD *)v3 + 4);
    if ( v7 != v9 || (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(v3, 2 * v9) )
    {
      v10 = 16 * v8;
      memmove(
        (void *)(16 * v8 + *((_QWORD *)v3 + 6) + 16),
        (const void *)(16 * v8 + *((_QWORD *)v3 + 6)),
        16 * (*((_QWORD *)v3 + 5) - v8));
      v11 = *((_QWORD *)v3 + 6);
      *(_DWORD *)(v10 + v11) = g_UmfdFileViewKey;
      *(_QWORD *)(v10 + v11 + 8) = *a3;
      ++*((_QWORD *)v3 + 5);
    }
    else
    {
      v5 = 0;
    }
  }
  _InterlockedDecrement(v3 + 7);
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
