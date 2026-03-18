/*
 * XREFs of ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C016D17C
 * Callers:
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0002CFC (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetForcable(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // ecx
  int v11; // eax

  if ( !*((_QWORD *)this + 5) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 88LL);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL);
  if ( *(_DWORD *)(v8 + 276) == 21299
    && (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v8 + 2280) + 16LL)) < 1105 )
  {
    return 0;
  }
  if ( *((_DWORD *)this + 30) != -1 )
    return 1;
  v10 = *((_DWORD *)this + 100);
  if ( v10 != -1 )
    return v10 == 1;
  v11 = *((_DWORD *)this + 20);
  return v11 >= 0 && (v11 <= 3 || v11 == 14);
}
