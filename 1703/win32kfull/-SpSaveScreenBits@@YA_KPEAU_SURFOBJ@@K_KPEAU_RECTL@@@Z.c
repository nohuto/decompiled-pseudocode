/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C0259980
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0254ADC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C0256D9C (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C0256F00 (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0258D48 (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // r13
  __int64 v5; // rbx
  struct _SURFOBJ *v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  TRACKOBJ *v11; // rsi
  int v12; // r14d
  __int64 i; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  struct _RECTL v16; // xmm0
  __int64 *v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  struct _SURFOBJ *v20; // [rsp+38h] [rbp-41h]
  __int64 v21; // [rsp+40h] [rbp-39h]
  _BYTE v22[16]; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v23[2]; // [rsp+58h] [rbp-21h] BYREF
  struct _RECTL v24; // [rsp+68h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-1h]

  hdev = a1->hdev;
  v5 = 0LL;
  v6 = a1;
  v20 = a1;
  v25 = 0LL;
  LODWORD(v23[0]) = 0;
  v8 = a3;
  v9 = *((_QWORD *)hdev + 14);
  v21 = a3;
  SURFOBJ_TO_SURFACE_NOT_NULL(v9);
  if ( *((_QWORD *)hdev + 174) && gpto )
  {
    if ( !a2 )
    {
      v19 = ghsemWndobj;
      GreAcquireSemaphore(ghsemWndobj);
      v11 = gpto;
      v12 = 0;
      if ( !gpto )
      {
LABEL_21:
        SEMOBJ::vUnlock((SEMOBJ *)&v19);
        goto LABEL_20;
      }
      while ( !v12 )
      {
        for ( i = *((_QWORD *)v11 + 3); i; i = *(_QWORD *)(i + 160) )
        {
          UNDODESKTOPCOORD::UNDODESKTOPCOORD(
            (UNDODESKTOPCOORD *)v22,
            (struct EWNDOBJ *)i,
            (struct _SPRITESTATE *)(hdev + 18));
          if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
            && (unsigned int)bIntersect(i + 4, a4, v14, v15)
            && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
          {
            v12 = 1;
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v22);
            break;
          }
          UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v22);
        }
        v11 = (TRACKOBJ *)*((_QWORD *)v11 + 1);
        if ( !v11 )
        {
          if ( !v12 )
            goto LABEL_21;
          break;
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
      v6 = v20;
      v8 = v21;
    }
    if ( a2 != 2 )
    {
      v16 = *a4;
      v17 = (__int64 *)v6->hdev;
      v25 = 0LL;
      v24 = v16;
      v23[1] = v17;
      LODWORD(v23[0]) = GreTearDownSprites((HDEV)v17, a4);
    }
    v5 = (*((__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))hdev + 174))(v6, a2, v8, a4);
  }
LABEL_20:
  DEVEXCLUDERECT::~DEVEXCLUDERECT(v23);
  return v5;
}
