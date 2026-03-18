/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0012518
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00116E0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00244C0 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int v6; // esi
  char *v7; // rdi
  char *v8; // rsi
  char *v9; // r12
  char *v10; // r15
  __int128 v11; // xmm0
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( (*((_QWORD *)this + 8) != a2 || !a2) && *((int *)this + 11) > 0 )
  {
    v7 = 0LL;
    if ( !*((_DWORD *)this + 22) )
      goto LABEL_11;
    v8 = (char *)*((_QWORD *)this + 10);
    v9 = (char *)this + 72;
    if ( v8 == (char *)this + 72 )
      goto LABEL_11;
    do
    {
      v10 = v8 - 24;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*((_QWORD *)v8 - 3) + 16LL))((_QWORD *)v8 - 3) )
        break;
      v8 = (char *)*((_QWORD *)v8 + 1);
      v7 = v10;
    }
    while ( v8 != v9 );
    if ( !v7 )
    {
LABEL_11:
      memset(a3, 0, 0xC8uLL);
      v6 = 0;
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 1);
      goto LABEL_12;
    }
    v6 = (*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v7 + 208LL))(v7, &v13);
    if ( v6 >= 0 )
    {
      *(_DWORD *)a3 = 200;
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 1);
      *((_QWORD *)a3 + 2) = *((_QWORD *)v7 + 2);
      *((_DWORD *)a3 + 6) = *(_DWORD *)(v13 + 28);
      *((_DWORD *)a3 + 7) = *((_DWORD *)v7 + 61);
      (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v7 + 31) + 56LL))(*((_QWORD *)v7 + 31), (char *)a3 + 32);
      *(_OWORD *)((char *)a3 + 40) = *((_OWORD *)v7 + 16);
      *((_QWORD *)a3 + 7) = *((_QWORD *)v7 + 34);
      *((_DWORD *)a3 + 16) = *((_DWORD *)v7 + 70);
      v11 = *((_OWORD *)v7 + 3);
      *((_DWORD *)v7 + 64) = 0;
      v7[42] = 0;
      *(_OWORD *)((char *)a3 + 72) = v11;
      *(_OWORD *)((char *)a3 + 88) = *((_OWORD *)v7 + 4);
      *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)v7 + 5);
      *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)v7 + 6);
      *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)v7 + 7);
      *(_OWORD *)((char *)a3 + 152) = *((_OWORD *)v7 + 8);
      *(_OWORD *)((char *)a3 + 168) = *((_OWORD *)v7 + 9);
      *((_QWORD *)a3 + 23) = *((_QWORD *)v7 + 20);
      *((_DWORD *)a3 + 48) = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 168LL))(v7);
LABEL_12:
      *((_QWORD *)this + 8) = a2;
    }
  }
  return (unsigned int)v6;
}
