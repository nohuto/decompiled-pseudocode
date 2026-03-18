/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C01A9F00
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C011BBC8 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C01A932C (--1DXGGLOBAL@@AEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::DestroyGlobal(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rax
  PVOID v4; // rbx

  v1 = 0;
  v2 = 104LL;
  do
  {
    v3 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1) + v2);
    (*(void (**)(void))(*(_QWORD *)(v3 + 8) + 16LL))();
    ++v1;
    v2 += 8LL;
  }
  while ( v1 < 2 );
  v4 = DXGGLOBAL::m_pGlobal;
  if ( DXGGLOBAL::m_pGlobal )
  {
    DXGGLOBAL::~DXGGLOBAL((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    operator delete(v4);
    DXGGLOBAL::m_pGlobal = 0LL;
  }
}
