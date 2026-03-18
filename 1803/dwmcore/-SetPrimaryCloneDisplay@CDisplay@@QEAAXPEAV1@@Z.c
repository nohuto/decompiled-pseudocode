/*
 * XREFs of ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x1800B7C08
 * Callers:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B69C4 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::SetPrimaryCloneDisplay(CDisplay *this, struct CDisplay *a2)
{
  __int64 v2; // r9
  _DWORD *DisplayId; // rax
  __int64 v5; // r9
  _DWORD *v6; // rax
  __int64 v7; // r9
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 19) = a2;
  if ( v2 )
  {
    DisplayId = CDisplay::GetDisplayId((__int64)this, &v8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 520LL))(v5, (unsigned int)*DisplayId);
  }
  if ( *((_QWORD *)this + 10) )
  {
    v6 = CDisplay::GetDisplayId((__int64)this, &v8);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 520LL))(v7, (unsigned int)*v6);
  }
}
