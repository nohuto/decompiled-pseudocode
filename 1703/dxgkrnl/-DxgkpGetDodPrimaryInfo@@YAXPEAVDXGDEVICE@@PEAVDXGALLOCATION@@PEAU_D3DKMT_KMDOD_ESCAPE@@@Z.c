/*
 * XREFs of ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C01B473C
 * Callers:
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C019789C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01B641C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C016BC04 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

void __fastcall DxgkpGetDodPrimaryInfo(struct DXGDEVICE *a1, struct DXGALLOCATION *a2, struct _D3DKMT_KMDOD_ESCAPE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _DXGKARG_ESCAPE v10; // [rsp+20h] [rbp-38h] BYREF

  memset(&v10, 0, 0x28uLL);
  memset(a3, 0, 0x50uLL);
  *(_DWORD *)a3 = -791674879;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v10.Flags.Value |= 0x10u;
  *((_QWORD *)a3 + 1) = v6;
  v7 = *((_QWORD *)a1 + 2);
  v10.hDevice = (HANDLE)*((_QWORD *)a1 + 52);
  v10.pPrivateDriverData = a3;
  v10.PrivateDriverDataSize = 80;
  DXGADAPTER::DdiEscape(*(DXGADAPTER **)(v7 + 16), &v10, v8, v9);
}
