/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00EDF8C
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z @ 0x1C00EE024 (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // esi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v8; // rbx
  __int64 v10; // rax

  v4 = (*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) << 6) + 56;
  v5 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *)operator new(v4, 0x63644356u, PagedPool);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v5, v4);
    *((_DWORD *)v8 + 13) = a2;
    DxgkWriteDiagEntry(v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v10 + 24) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    WdLogEvent5_WdLowResource(v10);
    return (unsigned int)-1073741801;
  }
  return v7;
}
