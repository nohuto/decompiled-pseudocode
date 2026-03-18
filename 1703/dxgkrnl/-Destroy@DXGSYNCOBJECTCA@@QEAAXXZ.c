/*
 * XREFs of ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C01A57CC
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0039440 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C016CBCC (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTCA::Destroy(DXGSYNCOBJECTCA *this)
{
  __int64 **v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  DXGADAPTERSYNCOBJECTCA *v5; // rsi
  void *v6; // rcx

  v2 = (__int64 **)((char *)this + 232);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    v5 = (DXGADAPTERSYNCOBJECTCA *)(v3 - 5);
    *(_QWORD *)(v4 + 8) = v2;
    DXGADAPTERSYNCOBJECT::Stop((DXGADAPTERSYNCOBJECT *)(v3 - 5));
    if ( v5 )
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v5);
  }
  v6 = (void *)*((_QWORD *)this + 31);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 31) = 0LL;
  }
}
