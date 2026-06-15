/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180040DF4
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800B8880 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  void *v9; // rcx
  int Error; // ebx
  int v11; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

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
  v7 = 0x8000LL;
  if ( (pControl & 0x8000u) != 0 )
  {
    v8 = (unsigned int)Size;
    if ( !(_DWORD)Size )
      return;
    if ( *((_QWORD *)this + 1) )
    {
      v9 = (void *)*((_QWORD *)this + 1);
      if ( a2 )
      {
        memcpy_0(v9, a2, (unsigned int)Size);
        return;
      }
      memset_0(v9, 0, (unsigned int)Size);
    }
    *(_DWORD *)_o__errno(v7, v5, v8, v6) = 22;
    invalid_parameter_noinfo();
    ATL::AtlThrowImpl(-2147024809);
  }
  if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), (LPDWORD)&Size) )
  {
    v11 = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(v11);
  }
}
