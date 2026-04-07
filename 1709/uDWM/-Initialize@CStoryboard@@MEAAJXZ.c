/*
 * XREFs of ?Initialize@CStoryboard@@MEAAJXZ @ 0x180004DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180004590 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::Initialize(CStoryboard *this, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *i; // rsi

  CStoryboard::_LogStoryboardEvent((unsigned __int64)this, a2);
  v3 = 0LL;
  *((_DWORD *)this + 18) = *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  if ( *((int *)this + 16) < 0 )
  {
    *((_DWORD *)this + 16) = -1;
    for ( i = dword_1800AAE40;
          *i != *(_DWORD *)(*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
          i += 2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 0x22 )
        return 0LL;
    }
    *((_DWORD *)this + 16) = dword_1800AAE40[2 * v3 + 1];
  }
  return 0LL;
}
