/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x18002E560
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002E208 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002E93C (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x18002E980 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x18002E9C4 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  struct ATL::CDacl::CAccessAce *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = 1LL;
  v2 = *((_QWORD *)this + 4);
  v4 = 4LL;
  if ( v2 <= 4 )
    goto LABEL_27;
  do
  {
    v1 = v4;
    v4 += 2 * v4 + 1;
  }
  while ( v4 < v2 );
  if ( v1 )
  {
LABEL_27:
    do
    {
      for ( i = v1 - 1; i < v2; ++i )
      {
        if ( i >= *((_QWORD *)this + 4) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(&v8, *((_QWORD *)this + 3) + 8 * i);
        v7 = i;
        if ( i >= v1 )
        {
          do
          {
            v6 = v7 - v1;
            if ( v7 - v1 >= *((_QWORD *)this + 4) )
              ATL::AtlThrowImpl(-2147024809);
            if ( (unsigned int)ATL::CDacl::CAccessAce::Order(
                                 *(const struct ATL::CDacl::CAccessAce **)(*((_QWORD *)this + 3) + 8 * v6),
                                 v8) != -1 )
              break;
            if ( v6 >= *((_QWORD *)this + 4) )
              ATL::AtlThrowImpl(-2147024809);
            if ( v7 >= *((_QWORD *)this + 4) )
              ATL::AtlThrowImpl(-2147024809);
            ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(
              *((_QWORD *)this + 3) + 8 * v7,
              *((_QWORD *)this + 3) + 8 * v6);
            v7 -= v1;
          }
          while ( v6 >= v1 );
        }
        if ( v7 >= *((_QWORD *)this + 4) )
          ATL::AtlThrowImpl(-2147024809);
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(*((_QWORD *)this + 3) + 8 * v7, &v8);
      }
      v1 /= 3uLL;
    }
    while ( v1 );
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v8);
}
