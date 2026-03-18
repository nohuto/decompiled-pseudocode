/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C003202C
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C011C2D0 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0032890 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C010CE1C (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 i; // rbx
  unsigned int v8; // edi
  char v9; // bp
  _QWORD *v10; // rcx
  bool v11; // bl
  bool v12; // al
  bool v13; // cl
  __int64 ThreadWin32Thread; // r15
  bool v16; // bl
  int v17; // eax

  v2 = PDEVOBJ::pDevHTInfo(this);
  v5 = *(_QWORD *)this;
  v6 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x100) != 0 )
  {
    for ( i = 1464LL; i < 1512; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
  }
  v8 = 1;
  v9 = 1;
  v10 = *(_QWORD **)(*(_QWORD *)this + 1520LL);
  if ( v10 )
  {
    v11 = (unsigned int)bDeletePalette(*v10, 0LL, 0LL) != 0;
    v12 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1520LL)) != 0;
    if ( !v11 || !v12 )
      v9 = 0;
  }
  v13 = 1;
  if ( v6 != *(_QWORD **)(*(_QWORD *)this + 1520LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v5, v3, v4);
    v16 = (unsigned int)bDeletePalette(*v6, 0LL, 0LL) != 0;
    v17 = HT_DestroyDeviceHalftoneInfo(v6);
    v13 = v16 && v17;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 1520LL) = 0LL;
  if ( !v9 || !v13 )
    return 0;
  return v8;
}
