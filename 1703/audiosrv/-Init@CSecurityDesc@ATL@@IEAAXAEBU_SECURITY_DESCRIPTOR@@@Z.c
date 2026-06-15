/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180030454
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002FEC0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  int Error; // ebx
  int v10; // ebx
  WORD pControl; // [rsp+40h] [rbp+8h] BYREF
  size_t Size; // [rsp+48h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(Size) = GetSecurityDescriptorLength(a2);
  v4 = malloc((unsigned int)Size);
  *((_QWORD *)this + 1) = v4;
  if ( !v4 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  if ( (pControl & 0x8000u) != 0 )
  {
    v8 = (void *)*((_QWORD *)this + 1);
    if ( !(_DWORD)Size )
      return;
    if ( v8 )
    {
      if ( a2 )
      {
        memcpy_0(v8, a2, (unsigned int)Size);
        return;
      }
      memset(v8, 0, (unsigned int)Size);
    }
    *(_DWORD *)_o__errno(v8, v5, v6, v7) = 22;
    invalid_parameter_noinfo();
    ATL::AtlThrowImpl(-2147024809);
  }
  if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), (LPDWORD)&Size) )
  {
    v10 = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(v10);
  }
}
