/*
 * XREFs of ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C01BF2C0
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x1C0029888 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01701C4 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTCA::Destroy(DXGSYNCOBJECTCA *this)
{
  char *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // rcx
  DXGADAPTERSYNCOBJECTCA *v5; // rsi
  void *v6; // rcx

  v2 = (char *)this + 248;
  while ( *(char **)v2 != v2 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    v5 = (DXGADAPTERSYNCOBJECTCA *)(v3 - 5);
    *(_QWORD *)(v4 + 8) = v2;
    DXGADAPTERSYNCOBJECT::Stop((DXGADAPTERSYNCOBJECT *)(v3 - 5));
    if ( v5 )
      DXGADAPTERSYNCOBJECTCA::`scalar deleting destructor'(v5);
  }
  v6 = (void *)*((_QWORD *)this + 33);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + 33) = 0LL;
  }
}
