/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x180052A0C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this, const struct DeviceInfo *a2)
{
  __int64 *v2; // rdi
  __int64 *j; // rbx
  int v5; // eax
  __int64 **v6; // rax
  __int64 *v7; // rcx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 8);
  j = (__int64 *)*v2;
  while ( j != v2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, const struct DeviceInfo *))(*(_QWORD *)j[5] + 48LL))(j[5], a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x100,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5);
    if ( !*((_BYTE *)j + 25) )
    {
      v6 = (__int64 **)j[2];
      if ( *((_BYTE *)v6 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v7 = *v6;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v7 + 25); v7 = (__int64 *)*v7 )
          j = v7;
      }
    }
  }
}
