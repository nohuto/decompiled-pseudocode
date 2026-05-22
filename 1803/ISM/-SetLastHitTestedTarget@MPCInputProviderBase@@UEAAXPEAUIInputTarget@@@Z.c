/*
 * XREFs of ?SetLastHitTestedTarget@MPCInputProviderBase@@UEAAXPEAUIInputTarget@@@Z @ 0x180043ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetLastHitTestedTarget(MPCInputProviderBase *this, struct IInputTarget *a2)
{
  struct IInputTarget *v4; // rcx

  v4 = (struct IInputTarget *)*((_QWORD *)this + 281);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = (struct IInputTarget *)*((_QWORD *)this + 281);
    }
    *((_QWORD *)this + 281) = a2;
    if ( v4 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
