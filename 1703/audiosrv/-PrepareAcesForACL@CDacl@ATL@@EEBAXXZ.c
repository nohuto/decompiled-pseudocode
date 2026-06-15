/*
 * XREFs of ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x180024950
 * Callers:
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180024578 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 * Callees:
 *     ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x180024C44 (-Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002F0CC (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x18007BF00 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??4?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z @ 0x18007C814 (--4-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CDacl::PrepareAcesForACL(ATL::CDacl *this)
{
  unsigned __int64 v1; // r13
  const struct ATL::CDacl::CAccessAce *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbp
  _QWORD *v6; // r14
  const struct ATL::CDacl::CAccessAce **v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  const struct ATL::CDacl::CAccessAce **v10; // rdi
  const struct ATL::CDacl::CAccessAce *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  ATL::CDacl *v14; // [rsp+60h] [rbp+8h]
  const struct ATL::CDacl::CAccessAce *v15; // [rsp+68h] [rbp+10h] BYREF

  v14 = this;
  v1 = *((_QWORD *)this + 4);
  v2 = 0LL;
  v3 = 1LL;
  v15 = 0LL;
  v4 = 4LL;
  if ( v1 > 4 )
  {
    do
    {
      v3 = v4;
      v4 += 2 * v4 + 1;
    }
    while ( v4 < v1 );
    if ( !v3 )
      goto LABEL_22;
  }
  do
  {
    v5 = v3 - 1;
    if ( v3 - 1 >= v1 )
      goto LABEL_21;
    v6 = (_QWORD *)((char *)this + 24);
    do
    {
      if ( v5 >= v6[1] )
        ATL::AtlThrowImpl(-2147024809);
      v7 = (const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v5);
      if ( v2 != *v7 )
      {
        if ( v2 )
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v2)(v2, 1LL);
        v2 = *v7;
        v15 = *v7;
LABEL_9:
        *v7 = 0LL;
        goto LABEL_10;
      }
      if ( &v15 != v7 )
        goto LABEL_9;
LABEL_10:
      v8 = v5;
      if ( v5 >= v3 )
      {
        do
        {
          v9 = v8 - v3;
          if ( v8 - v3 >= v6[1] )
            ATL::AtlThrowImpl(-2147024809);
          if ( (unsigned int)ATL::CDacl::CAccessAce::Order(*(const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v9), v2) != -1 )
            break;
          v12 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v6);
          v13 = ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v6);
          ATL::CAutoPtr<ATL::CDacl::CAccessAce>::operator=(v13, v12);
          v8 -= v3;
        }
        while ( v9 >= v3 );
      }
      if ( v8 >= v6[1] )
        ATL::AtlThrowImpl(-2147024809);
      v10 = (const struct ATL::CDacl::CAccessAce **)(*v6 + 8 * v8);
      v11 = *v10;
      if ( *v10 != v2 )
      {
        if ( v11 )
          (**(void (__fastcall ***)(const struct ATL::CDacl::CAccessAce *, __int64))v11)(v11, 1LL);
        *v10 = v2;
LABEL_18:
        v2 = 0LL;
        v15 = 0LL;
        goto LABEL_19;
      }
      if ( v10 != &v15 )
        goto LABEL_18;
LABEL_19:
      ++v5;
    }
    while ( v5 < v1 );
    this = v14;
LABEL_21:
    v3 /= 3uLL;
  }
  while ( v3 );
LABEL_22:
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v15);
}
