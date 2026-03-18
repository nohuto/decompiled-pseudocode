/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C003E8A8
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0126070 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C003DDC0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0116804 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  __int64 i; // rbx
  unsigned int v7; // edi
  char v8; // bp
  _QWORD *v9; // rcx
  bool v10; // bl
  bool v11; // al
  bool v12; // cl
  __int64 ThreadWin32Thread; // r15
  bool v15; // bl
  int v16; // eax

  v5 = PDEVOBJ::pDevHTInfo(this, a2, a3, a4);
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x100) != 0 )
  {
    for ( i = 1464LL; i < 1512; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
  }
  v7 = 1;
  v8 = 1;
  v9 = *(_QWORD **)(*(_QWORD *)this + 1520LL);
  if ( v9 )
  {
    v10 = (unsigned int)bDeletePalette(*v9, 0LL, 0LL) != 0;
    v11 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1520LL)) != 0;
    if ( !v10 || !v11 )
      v8 = 0;
  }
  v12 = 1;
  if ( v5 != *(_QWORD **)(*(_QWORD *)this + 1520LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v15 = (unsigned int)bDeletePalette(*v5, 0LL, 0LL) != 0;
    v16 = HT_DestroyDeviceHalftoneInfo(v5);
    v12 = v15 && v16;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 1520LL) = 0LL;
  if ( !v8 || !v12 )
    return 0;
  return v7;
}
