/*
 * XREFs of ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180288860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180289338 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 */

bool __fastcall CSwitchItemElement::HitTest(CSwitchItemElement *this, struct tagPOINT *a2)
{
  int v4; // r8d
  int v5; // r10d
  int v6; // r9d
  int v7; // r8d
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rax
  LONG v14; // edx
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v19; // [rsp+60h] [rbp+10h] BYREF
  char v20; // [rsp+68h] [rbp+18h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    this,
    (struct Geometry::CRect *)&v17,
    (struct Geometry::CRect *)&v16,
    (struct Geometry::CRect *)&v18);
  v4 = HIDWORD(v16);
  v5 = DWORD2(v16);
  v6 = v16;
  if ( SHIDWORD(v18) > SHIDWORD(v16) )
    v4 = HIDWORD(v18);
  HIDWORD(v16) = v4;
  v7 = HIDWORD(v17);
  if ( SDWORD2(v18) > SDWORD2(v16) )
    v5 = DWORD2(v18);
  v8 = DWORD1(v16);
  DWORD2(v16) = v5;
  if ( SDWORD1(v18) < SDWORD1(v16) )
    v8 = DWORD1(v18);
  DWORD1(v16) = v8;
  v9 = DWORD1(v17);
  if ( (int)v18 < (int)v16 )
    v6 = v18;
  v10 = DWORD2(v17);
  LODWORD(v16) = v6;
  if ( SHIDWORD(v16) > SHIDWORD(v17) )
    v7 = HIDWORD(v16);
  HIDWORD(v17) = v7;
  if ( v5 > SDWORD2(v17) )
    v10 = v5;
  DWORD2(v17) = v10;
  if ( SDWORD1(v16) < SDWORD1(v17) )
    v9 = DWORD1(v16);
  v11 = v17;
  DWORD1(v17) = v9;
  if ( v6 < (int)v17 )
    v11 = v6;
  LODWORD(v17) = v11;
  v12 = *(_QWORD *)this;
  v18 = v17;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(CSwitchItemElement *, char *))(v12 + 120))(this, &v20);
  v19 = *a2;
  v14 = *v13 + v19.x;
  v19.y += v13[1];
  v19.x = v14;
  return Geometry::CRect::Contains((Geometry::CRect *)&v18, &v19);
}
