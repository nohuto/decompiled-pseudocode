/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCInputTarget@@_N@Z @ 0x180043F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCInputTarget *a2, char a3)
{
  struct IMPCInputTarget *v5; // rcx

  v5 = (struct IMPCInputTarget *)*((_QWORD *)this + 279);
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = (struct IMPCInputTarget *)*((_QWORD *)this + 279);
    }
    *((_QWORD *)this + 279) = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_BYTE *)this + 2256) = a3;
}
