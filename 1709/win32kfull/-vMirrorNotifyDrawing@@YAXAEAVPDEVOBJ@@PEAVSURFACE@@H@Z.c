/*
 * XREFs of ?vMirrorNotifyDrawing@@YAXAEAVPDEVOBJ@@PEAVSURFACE@@H@Z @ 0x1C02772D0
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00EFC40 (vMirrorIncludeNotifyWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vMirrorNotifyDrawing(struct PDEVOBJ *a1, struct SURFACE *a2, int a3)
{
  __int64 v3; // r9
  __int64 v5; // rbp
  struct _DISPSURF *i; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v10)(__int64, __int64, __int64, char **); // rax
  __int64 v11; // rcx
  char *v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)a1;
  v5 = a3;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 32) & 0x1000000) != 0 )
  {
    for ( i = **(struct _DISPSURF ***)(v3 + 1816); i; i = *(struct _DISPSURF **)i )
    {
      v7 = *((_QWORD *)i + 6);
      if ( v7 && (*(_DWORD *)(v7 + 1840) & 0x8000000) != 0 && (*(_DWORD *)(v7 + 2144) & 0x1000) != 0 )
      {
        v8 = *(_QWORD *)(v7 + 1808);
        if ( (*(_DWORD *)(v7 + 2144) & 0x8000) != 0 )
        {
          if ( *(_QWORD *)(v8 + 760) )
          {
            DevBitmap = GetDevBitmap(
                          i,
                          (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64)));
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, __int64))(*(_QWORD *)(v7 + 1808) + 760LL))(
              DevBitmap,
              7LL,
              v5);
          }
        }
        else
        {
          v10 = *(void (__fastcall **)(__int64, __int64, __int64, char **))(v8 + 808);
          if ( v10 )
          {
            if ( a2 )
              v12 = (char *)a2 + 24;
            else
              v12 = 0LL;
            v11 = *(_QWORD *)(v7 + 1816);
            v13 = v5;
            v10(v11, 1LL, 16LL, &v12);
          }
        }
      }
    }
  }
}
