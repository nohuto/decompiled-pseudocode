/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB9C
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A848 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpSystemTerminatePsmHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180041678 (-RmpSystemTerminatePsmHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465B4 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v2 = *((_QWORD *)a1 + 90);
  if ( *((_DWORD *)a1 + 140) == 2 && (*((_BYTE *)a1 + 708) & 1) != 0 )
    RmpSystemTerminatePsmHost(a1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 320) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v2 + 48));
      *(_QWORD *)(v3 + 320) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v3);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v2);
    v4 = (_QWORD *)((char *)a1 + 728);
    if ( *v4 )
    {
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v2);
  }
}
