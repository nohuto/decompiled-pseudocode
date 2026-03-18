/*
 * XREFs of ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C007E7E8
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007E1B8 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0083F38 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 */

void __fastcall DxgkpGetDodPrimaryInfo(struct DXGDEVICE *a1, struct DXGALLOCATION *a2, struct _D3DKMT_KMDOD_ESCAPE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DXGKARG_ESCAPE v8; // [rsp+20h] [rbp-38h] BYREF

  memset(&v8, 0, 0x28uLL);
  memset(a3, 0, 0x50uLL);
  *(_DWORD *)a3 = -791674879;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL);
  v8.Flags.Value |= 0x10u;
  *((_QWORD *)a3 + 1) = v6;
  v7 = *((_QWORD *)a1 + 2);
  v8.hDevice = (HANDLE)*((_QWORD *)a1 + 52);
  v8.pPrivateDriverData = a3;
  v8.PrivateDriverDataSize = 80;
  DXGADAPTER::DdiEscape(*(DXGADAPTER **)(v7 + 16), &v8);
}
