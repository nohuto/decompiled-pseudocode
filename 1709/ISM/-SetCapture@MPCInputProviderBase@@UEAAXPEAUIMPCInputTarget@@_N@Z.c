/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCInputTarget@@_N@Z @ 0x180036950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCInputTarget *a2, char a3)
{
  __int64 v6; // rcx

  if ( *((struct IMPCInputTarget **)this + 63) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 63);
    *((_QWORD *)this + 63) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_BYTE *)this + 528) = a3;
}
