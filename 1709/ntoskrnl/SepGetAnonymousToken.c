/*
 * XREFs of SepGetAnonymousToken @ 0x140101C60
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepSetTokenSessionById @ 0x14048C960 (SepSetTokenSessionById.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SepSetTokenLowboxNumber @ 0x140563EE0 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // edx
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+48h] BYREF

  Object = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v13 = 0;
  v12 = 0LL;
  v10 = 48;
  v14 = 0LL;
  v4 = SepDuplicateToken(SeAnonymousLogonTokenNoEveryone, (unsigned int)&v10, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_13;
      v4 = SepSetTokenCapabilities(v5, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
      if ( v4 < 0 )
        goto LABEL_13;
      SepSetTokenSessionById((_DWORD)v5, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
      v4 = SepSetTokenLowboxNumber(v5, *(_QWORD *)(a1 + 784));
      if ( v4 < 0 )
        goto LABEL_13;
      v6 = AppContainerPrivilegesEnabledExt(*(_QWORD *)(a1 + 784), 0x200800000LL, &v16, &v9);
      v4 = v6;
      if ( v6 == -1073741637 )
      {
        v5[9] &= 0x200800000uLL;
        v5[10] &= 0x200800000uLL;
        v4 = 0;
      }
      else
      {
        if ( v6 < 0 )
          goto LABEL_13;
        v5[9] &= v16;
        v5[10] &= v9;
      }
      v7 = v5[25] & 0xFFFF9FFF | 0x4000;
      *((_DWORD *)v5 + 50) = v7;
      *((_DWORD *)v5 + 50) = v7 | *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = v5;
    if ( v4 >= 0 )
      return (unsigned int)v4;
LABEL_13:
    ObfDereferenceObject(v5);
  }
  return (unsigned int)v4;
}
