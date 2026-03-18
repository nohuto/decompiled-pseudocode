/*
 * XREFs of GreSetRedirectionBitmapOwner @ 0x1C00FF348
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0026184 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01C1A40 (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreSetRedirectionBitmapOwner(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  SURFACE *v8; // rax
  char *v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  SURFACE *v13; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    LOBYTE(v7) = 5;
    v8 = (SURFACE *)HmgShareLockCheck(a1, v7);
    v13 = v8;
    if ( v8 )
    {
      if ( (*((_DWORD *)v8 + 28) & 0x800) != 0 )
      {
        v9 = (char *)v8 + 24;
        v10 = 0LL;
        if ( v8 != (SURFACE *)-24LL )
        {
          if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((char *)v8 + 24) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
          {
            v10 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
            GreLockDisplayDevice(*(_QWORD *)(v10 + 48));
          }
          v8 = v13;
        }
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v8 + 280));
        v12 = *((_QWORD *)v13 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v12, (struct _SURFOBJ *)((char *)v13 + 24), 0LL, 2u);
        if ( a2 != -1 )
          *((_QWORD *)v13 + 73) = a2;
        *((_DWORD *)v13 + 148) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v13 + 280));
        v6 = 1;
        if ( a3 && (unsigned int)SURFACE::Map(v13, &v13, 0LL) <= 1 )
          SURFACE::bUnMap(v13, &v13, 0LL);
        if ( v10 )
          GreUnlockDisplayDevice(*(_QWORD *)(v10 + 48));
        v8 = v13;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  return v6;
}
