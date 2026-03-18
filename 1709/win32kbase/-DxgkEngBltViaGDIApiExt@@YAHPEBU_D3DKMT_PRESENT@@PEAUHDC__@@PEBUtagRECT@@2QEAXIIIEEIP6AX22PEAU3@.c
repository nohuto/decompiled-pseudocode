/*
 * XREFs of ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x1C00F2D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngBltViaGDIApiExt(
        const struct _D3DKMT_PRESENT *a1,
        HDC a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        void (*a12)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int),
        int (*a13)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *))
{
  int v17; // eax
  unsigned int v18; // r10d

  v17 = IsDxgkEngBltViaGDISupported();
  v18 = 0;
  if ( v17 >= 0 )
    return (unsigned int)DxgkEngBltViaGDI(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  return v18;
}
