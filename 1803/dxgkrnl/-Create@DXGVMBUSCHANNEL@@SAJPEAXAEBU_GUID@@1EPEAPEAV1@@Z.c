/*
 * XREFs of ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1EPEAPEAV1@@Z @ 0x1C01E4D60
 * Callers:
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C01E62E4 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGVMBUSCHANNEL@@IEAA@XZ @ 0x1C01E4738 (--0DXGVMBUSCHANNEL@@IEAA@XZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1E@Z @ 0x1C01E4F3C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1E@Z.c)
 *     ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x1C01E5728 (-Release@DXGVMBUSCHANNEL@@QEAAJXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Create(
        void *a1,
        const struct _GUID *a2,
        const struct _GUID *a3,
        char a4,
        struct DXGVMBUSCHANNEL **a5)
{
  int v7; // edi
  DXGVMBUSCHANNEL *v8; // rax
  const struct _GUID *v9; // r8
  const struct _GUID *v10; // r9
  DXGVMBUSCHANNEL *v11; // rbx

  v7 = -1073741801;
  v8 = (DXGVMBUSCHANNEL *)operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v8 )
    v11 = DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(v8);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v7 = DXGVMBUSCHANNEL::Initialize(v11, a1, v9, v10, a4);
    if ( v7 < 0 )
      DXGVMBUSCHANNEL::Release(v11);
    else
      *a5 = v11;
  }
  return (unsigned int)v7;
}
