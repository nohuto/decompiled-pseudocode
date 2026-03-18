/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C027B100
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0278604 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C027ABFC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027CB84 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rbx
  void *v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-88h] BYREF
  struct SURFACE *v19; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v20[80]; // [rsp+50h] [rbp-78h] BYREF
  __int64 HDEV; // [rsp+D0h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v19, a1);
  if ( a1 )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x800) != 0 )
    {
      HDEV = UserGetHDEV(v10);
      v11 = HDEV;
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(v11 + 32) & 0x20000) != 0 )
        {
          v12 = **(_QWORD ***)(v11 + 1816);
          if ( v12 )
          {
            v13 = a6;
            v14 = a5;
            do
            {
              v15 = v12[6];
              HDEV = v15;
              if ( v15 )
              {
                if ( (*(_DWORD *)(v15 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v15 + 2144) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v15 + 1808) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v18,
                      (struct PDEVOBJ *)&HDEV,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v16 + 1808) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v14,
                      v13);
                    if ( v18 )
                      *(_WORD *)(v18 + 78) &= ~0x8000u;
                  }
                }
              }
              v12 = (_QWORD *)*v12;
            }
            while ( v12 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      }
    }
  }
  if ( v19 )
    bMakeOpaque(v19);
  return 0LL;
}
