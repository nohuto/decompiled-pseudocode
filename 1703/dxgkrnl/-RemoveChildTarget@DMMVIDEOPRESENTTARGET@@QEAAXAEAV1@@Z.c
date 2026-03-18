/*
 * XREFs of ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0045344
 * Callers:
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01DBD0C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC650 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00453C8 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveChildTarget(DMMVIDEOPRESENTTARGET *this, struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r8
  struct DMMVIDEOPRESENTTARGET **v4; // rcx
  struct DMMVIDEOPRESENTTARGET **v5; // rdi

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 54);
  v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 55);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 432)
    || *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 432) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  *((_QWORD *)a2 + 56) = 0LL;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 52) == (DMMVIDEOPRESENTTARGET *)((char *)this + 416) )
  {
    v5 = (struct DMMVIDEOPRESENTTARGET **)((char *)this + 456);
    while ( 1 )
    {
      a2 = *v5;
      if ( *v5 == (struct DMMVIDEOPRESENTTARGET *)v5 )
        break;
      DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(this, (struct DMMVIDEOPRESENTTARGET *)((char *)a2 - 472));
    }
  }
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64), (__int64)a2);
}
