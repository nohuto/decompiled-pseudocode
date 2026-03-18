/*
 * XREFs of ?Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0221F80
 * Callers:
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C0214F2C (-DmmReset@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0111174 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C022168C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::Reset(DMMVIDEOPRESENTTARGET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx

  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this, a2, a3, a4);
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)this + 5);
  }
  v8 = *(_QWORD *)(v6 + 88);
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v10);
    v9 = *(_QWORD *)(v8 + 8);
  }
  v11 = *(DXGADAPTER **)(v9 + 16);
  if ( *((_DWORD *)v11 + 69) != 4098 || (int)DXGADAPTER::GetDriverVersion(v11) >= 1300 )
    DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(this, 0);
  *(_DWORD *)(*((_QWORD *)this + 64) + 24LL) = 13;
}
