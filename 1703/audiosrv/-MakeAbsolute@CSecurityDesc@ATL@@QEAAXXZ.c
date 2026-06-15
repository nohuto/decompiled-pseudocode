/*
 * XREFs of ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800302A0
 * Callers:
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x1800268BC (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180026700 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180026888 (-GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180098C70 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x180098C8C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

void __fastcall ATL::CSecurityDesc::MakeAbsolute(PSECURITY_DESCRIPTOR *this)
{
  PSECURITY_DESCRIPTOR v2; // rcx
  void *v3; // r15
  DWORD v4; // eax
  void *pOwner; // r12
  DWORD v6; // eax
  void *pPrimaryGroup; // r14
  DWORD v8; // eax
  struct _ACL *v9; // rsi
  DWORD v10; // eax
  struct _ACL *pSacl; // rdi
  void (__fastcall *v12)(PSECURITY_DESCRIPTOR *); // rax
  int Error; // ebx
  DWORD dwDaclSize; // [rsp+60h] [rbp-10h] BYREF
  DWORD dwAbsoluteSecurityDescriptorSize[3]; // [rsp+64h] [rbp-Ch] BYREF
  unsigned __int16 v16; // [rsp+B0h] [rbp+40h] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+B8h] [rbp+48h] BYREF
  DWORD dwOwnerSize; // [rsp+C0h] [rbp+50h] BYREF
  DWORD dwSaclSize; // [rsp+C8h] [rbp+58h] BYREF

  if ( this[1] )
  {
    if ( !ATL::CSecurityDesc::GetControl((ATL::CSecurityDesc *)this, &v16) )
      ATL::AtlThrowImpl(-2147467259);
    if ( (v16 & 0x8000u) != 0 )
    {
      v2 = this[1];
      dwSaclSize = 0;
      dwDaclSize = 0;
      dwPrimaryGroupSize = 0;
      dwOwnerSize = 0;
      dwAbsoluteSecurityDescriptorSize[0] = 0;
      MakeAbsoluteSD(
        v2,
        0LL,
        dwAbsoluteSecurityDescriptorSize,
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
      v3 = malloc(dwAbsoluteSecurityDescriptorSize[0]);
      if ( !v3 )
        ATL::AtlThrowImpl(-2147467259);
      v4 = dwOwnerSize;
      if ( dwOwnerSize )
      {
        pOwner = malloc(dwOwnerSize);
        v4 = dwOwnerSize;
      }
      else
      {
        pOwner = 0LL;
      }
      if ( v4 && !pOwner )
        ATL::AtlThrowImpl(-2147467259);
      v6 = dwPrimaryGroupSize;
      if ( dwPrimaryGroupSize )
      {
        pPrimaryGroup = malloc(dwPrimaryGroupSize);
        v6 = dwPrimaryGroupSize;
      }
      else
      {
        pPrimaryGroup = 0LL;
      }
      if ( v6 && !pPrimaryGroup )
        ATL::AtlThrowImpl(-2147467259);
      v8 = dwDaclSize;
      if ( dwDaclSize )
      {
        v9 = (struct _ACL *)malloc(dwDaclSize);
        v8 = dwDaclSize;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v8 && !v9 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = dwSaclSize;
      if ( dwSaclSize )
      {
        pSacl = (struct _ACL *)malloc(dwSaclSize);
        v10 = dwSaclSize;
      }
      else
      {
        pSacl = 0LL;
      }
      if ( v10 && !pSacl )
        ATL::AtlThrowImpl(-2147467259);
      if ( !MakeAbsoluteSD(
              this[1],
              v3,
              dwAbsoluteSecurityDescriptorSize,
              v9,
              &dwDaclSize,
              pSacl,
              &dwSaclSize,
              pOwner,
              &dwOwnerSize,
              pPrimaryGroup,
              &dwPrimaryGroupSize) )
      {
        Error = ATL::AtlHresultFromLastError();
        free(v3);
        free(pOwner);
        free(pPrimaryGroup);
        free(v9);
        free(pSacl);
        ATL::AtlThrowImpl(Error);
      }
      v12 = (void (__fastcall *)(PSECURITY_DESCRIPTOR *))*((_QWORD *)*this + 1);
      if ( v12 == ATL::CSecurityDesc::Clear )
        ATL::CSecurityDesc::Clear(this);
      else
        v12(this);
      this[1] = v3;
    }
  }
}
