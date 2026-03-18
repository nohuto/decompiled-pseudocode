/*
 * XREFs of ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00361C8
 * Callers:
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C0036144 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01F460C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01F4F78 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  struct DMMVIDEOPRESENTTARGET **v3; // r9
  struct DMMVIDEOPRESENTTARGET **v4; // r8

  v3 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 59);
  if ( v3[1] != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 472)
    || (v4 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)a2 + 60),
        *v4 != (struct DMMVIDEOPRESENTTARGET *)((char *)a2 + 472)) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DMMVIDEOPRESENTTARGET *)v3;
  v3[1] = (struct DMMVIDEOPRESENTTARGET *)v4;
  ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_QWORD *)a2 + 63) = 0LL;
}
