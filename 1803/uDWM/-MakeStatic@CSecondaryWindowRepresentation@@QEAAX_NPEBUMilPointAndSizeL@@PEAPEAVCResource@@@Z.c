/*
 * XREFs of ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x18007FC84
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180086C20 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x180086C80 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::MakeStatic(
        CSecondaryWindowRepresentation *this,
        char a2,
        LONG *a3,
        struct CResource **a4)
{
  __int64 v4; // rbp
  CWindowSnapshot *v9; // rbx
  LONG v10; // r8d
  LONG v11; // edx
  LONG v12; // ecx
  LONG v13; // ecx
  struct CResource *v14; // rbx
  struct CResource *v15; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v16; // [rsp+28h] [rbp-30h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    v9 = *(CWindowSnapshot **)(v4 + 424);
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v15 = 0LL;
    v16.left = v10;
    v16.right = v10 + v12;
    v13 = v11 + a3[3];
    v16.top = v11;
    v16.bottom = v13;
    if ( a2
      && v9
      && CWindowSnapshot::HasCVIOfCompatibleSize(v9, &v16)
      && (int)CWindowSnapshot::GetCVI(v9, (const struct tagRECT *)(v4 + 48), &v15, (float *)this + 126) >= 0 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v14 = v15;
      *a4 = v15;
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
        v14 = v15;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**((_QWORD **)v14 + 2) + 1024LL))(
        *((_QWORD *)v14 + 2),
        *((unsigned int *)v14 + 6),
        &v16);
      CBaseObject::Release(v14);
      *((_BYTE *)this + 160) = 1;
    }
    else
    {
      *((_DWORD *)this + 10) |= 0x200u;
    }
  }
}
