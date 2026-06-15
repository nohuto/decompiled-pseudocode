/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800338A8
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800335F0 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002A214 (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180033B00 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180034A34 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(ATL::CSecurityDesc *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // r15
  DWORD v5; // eax
  void *pOwner; // r12
  DWORD v7; // eax
  void *pPrimaryGroup; // r14
  DWORD v9; // eax
  struct _ACL *v10; // rsi
  DWORD v11; // eax
  struct _ACL *pSacl; // rdi
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-18h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+64h] [rbp-14h] BYREF
  DWORD dwRevision[4]; // [rsp+68h] [rbp-10h] BYREF
  WORD pControl; // [rsp+C0h] [rbp+48h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+C8h] [rbp+50h] BYREF
  DWORD dwOwnerSize; // [rsp+D0h] [rbp+58h] BYREF
  DWORD dwSaclSize; // [rsp+D8h] [rbp+60h] BYREF

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    pControl = 0;
    if ( !GetSecurityDescriptorControl(v2, &pControl, dwRevision) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (pControl & 0x8000u) != 0 )
    {
      v3 = (void *)*((_QWORD *)this + 1);
      dwSaclSize = 0;
      dwDaclSize = 0;
      dwPrimaryGroupSize = 0;
      dwOwnerSize = 0;
      dwAbsoluteSecurityDescriptorSize = 0;
      MakeAbsoluteSD(
        v3,
        0LL,
        &dwAbsoluteSecurityDescriptorSize,
        0LL,
        &dwDaclSize,
        0LL,
        &dwSaclSize,
        0LL,
        &dwOwnerSize,
        0LL,
        &dwPrimaryGroupSize);
      if ( GetLastError() != 122 )
        ATL::AtlThrowLastWin32();
      v4 = malloc(dwAbsoluteSecurityDescriptorSize);
      if ( !v4 )
        ATL::AtlThrowImpl(-2147467259);
      v5 = dwOwnerSize;
      if ( dwOwnerSize )
      {
        pOwner = malloc(dwOwnerSize);
        v5 = dwOwnerSize;
      }
      else
      {
        pOwner = 0LL;
      }
      if ( v5 && !pOwner )
        ATL::AtlThrowImpl(-2147467259);
      v7 = dwPrimaryGroupSize;
      if ( dwPrimaryGroupSize )
      {
        pPrimaryGroup = malloc(dwPrimaryGroupSize);
        v7 = dwPrimaryGroupSize;
      }
      else
      {
        pPrimaryGroup = 0LL;
      }
      if ( v7 && !pPrimaryGroup )
        ATL::AtlThrowImpl(-2147467259);
      v9 = dwDaclSize;
      if ( dwDaclSize )
      {
        v10 = (struct _ACL *)malloc(dwDaclSize);
        v9 = dwDaclSize;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v9 && !v10 )
        ATL::AtlThrowImpl(-2147467259);
      v11 = dwSaclSize;
      if ( dwSaclSize )
      {
        pSacl = (struct _ACL *)malloc(dwSaclSize);
        v11 = dwSaclSize;
      }
      else
      {
        pSacl = 0LL;
      }
      if ( v11 && !pSacl )
        ATL::AtlThrowImpl(-2147467259);
      if ( !MakeAbsoluteSD(
              *((PSECURITY_DESCRIPTOR *)this + 1),
              v4,
              &dwAbsoluteSecurityDescriptorSize,
              v10,
              &dwDaclSize,
              pSacl,
              &dwSaclSize,
              pOwner,
              &dwOwnerSize,
              pPrimaryGroup,
              &dwPrimaryGroupSize) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v4);
        free(pOwner);
        free(pPrimaryGroup);
        free(v10);
        free(pSacl);
        ATL::AtlThrowImpl(Error);
      }
      ATL::CSecurityDesc::Clear(this);
      *((_QWORD *)this + 1) = v4;
    }
  }
}
