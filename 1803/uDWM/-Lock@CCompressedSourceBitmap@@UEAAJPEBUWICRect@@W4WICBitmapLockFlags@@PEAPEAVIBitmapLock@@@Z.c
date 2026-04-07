/*
 * XREFs of ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180046770
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180046578 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x180047278 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompressedSourceBitmap::Lock(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IBitmapLock **a4)
{
  char *v4; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  CCompoundBitmapLock *v11; // rax
  struct CBitmapLock *v12; // rdx
  CCompoundBitmapLock *v13; // rdi
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CBitmapLock *v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = (char *)this - 24;
  v17 = 0LL;
  v9 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 24));
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 184;
LABEL_19:
    v15 = v9;
    goto LABEL_21;
  }
  v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 30))(
         *((_QWORD *)this + 30),
         &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
         &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 187;
    goto LABEL_19;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, const struct WICRect *, _QWORD, struct CBitmapLock **))(*(_QWORD *)v18 + 24LL))(
         v18,
         a2,
         a3,
         &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 189;
    goto LABEL_19;
  }
  v11 = (CCompoundBitmapLock *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 48LL);
  if ( v11 )
  {
    v12 = v17;
    if ( v17 )
      v12 = (struct CBitmapLock *)((char *)v17 - 72);
    v13 = CCompoundBitmapLock::CCompoundBitmapLock(
            v11,
            v12,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 8) & -(__int64)(v4 != 0LL)));
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(CCompoundBitmapLock *))(*(_QWORD *)v13 + 8LL))(v13);
    *a4 = (CCompoundBitmapLock *)((char *)v13 + 16);
    goto LABEL_10;
  }
  v10 = -2147024882;
  v16 = 194;
  v15 = -2147024882;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
LABEL_10:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(struct CBitmapLock *))(*(_QWORD *)v17 + 16LL))(v17);
  return v10;
}
