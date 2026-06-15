/*
 * XREFs of ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800267C8
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180025614 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180026700 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180026888 (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeSelfRelative(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // rax
  void *v4; // rdi
  void (__fastcall *v5)(PSECURITY_DESCRIPTOR *); // rax
  int Error; // ebx
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF

  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v7) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (v7 & 0x8000u) == 0 )
    {
      v2 = this[1];
      dwBufferLength = 0;
      MakeSelfRelativeSD(v2, 0LL, &dwBufferLength);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v3 = malloc(dwBufferLength);
      v4 = v3;
      if ( !v3 )
        ATL::AtlThrowImpl(-2147024882);
      if ( !MakeSelfRelativeSD(this[1], v3, &dwBufferLength) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v4);
        ATL::AtlThrowImpl(Error);
      }
      v5 = (void (__fastcall *)(PSECURITY_DESCRIPTOR *))*((_QWORD *)*this + 1);
      if ( v5 == ATL::CSecurityDesc::Clear )
        ATL::CSecurityDesc::Clear(this);
      else
        v5(this);
      this[1] = v4;
    }
  }
}
