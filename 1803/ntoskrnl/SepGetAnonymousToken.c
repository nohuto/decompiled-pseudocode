/*
 * XREFs of SepGetAnonymousToken @ 0x14009F040
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14005C310 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  _QWORD **v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // r14
  int v8; // eax
  unsigned int v9; // edx
  PVOID Object; // [rsp+40h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  v15 = 0;
  v14 = 0LL;
  v12 = 48;
  v16 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)&v12, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    v5 = (_QWORD **)Object;
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_16;
      v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
      if ( v4 < 0 )
        goto LABEL_16;
      SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
      v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_16;
      v6 = *(_DWORD **)(a1 + 776);
      v7 = *(_QWORD *)(a1 + 784);
      if ( v6 )
      {
        if ( *v6 )
        {
          v4 = AuthzBasepDuplicateSecurityAttributes((__int64)v6, v5[97], 0);
          if ( v4 < 0 )
            goto LABEL_16;
        }
      }
      v8 = AppContainerPrivilegesEnabledExt(v7, 0x200800000LL, &v18, &v17);
      v4 = v8;
      if ( v8 == -1073741637 )
      {
        v5[9] = (_QWORD *)((unsigned __int64)v5[9] & 0x200800000LL);
        v5[10] = (_QWORD *)((unsigned __int64)v5[10] & 0x200800000LL);
        v5[8] = (_QWORD *)((unsigned __int64)v5[8] & 0x200800000LL);
        v4 = 0;
      }
      else
      {
        if ( v8 < 0 )
          goto LABEL_16;
        v5[9] = (_QWORD *)(v18 & (unsigned __int64)v5[9]);
        v5[10] = (_QWORD *)(v17 & (unsigned __int64)v5[10]);
        v5[8] = (_QWORD *)((v18 | v17) & (unsigned __int64)v5[8]);
      }
      v9 = (_DWORD)v5[25] & 0xFFFF9FFF | 0x4000;
      *((_DWORD *)v5 + 50) = v9;
      *((_DWORD *)v5 + 50) = v9 | *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = v5;
    if ( v4 >= 0 )
      return (unsigned int)v4;
LABEL_16:
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
