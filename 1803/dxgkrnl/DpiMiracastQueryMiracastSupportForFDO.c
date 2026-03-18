/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C00DD098
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000B790 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C000B7F0 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000B820 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C000B8E4 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C000B930 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _IO_REMOVE_LOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v7; // ebp
  DXGADAPTER *v8; // rcx
  int DriverVersion; // eax
  _WORD *v10; // r8
  int v11; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // cl
  struct _IO_REMOVE_LOCK *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+38h] [rbp-20h]
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v16 = a1;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v18, (struct _COMMON_PNP_CONTEXT *)a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v16) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v18);
    Flink = a1[116].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( Flink )
    {
      Blink = Flink[153].Blink;
      if ( Blink )
      {
        v7 = BYTE5(Blink[8].Flink);
        if ( !Flink[154].Flink )
        {
          v14 = WdLogNewEntry5_WdError(Flink);
          *(_QWORD *)(v14 + 24) = 1109LL;
          WdLogEvent5_WdError(v14);
          Flink = a1[116].Common.RemoveEvent.Header.WaitListHead.Flink;
        }
        if ( (int)DXGADAPTER::GetDriverVersion((DXGADAPTER *)Flink) >= 2000 && v7 )
          *(_BYTE *)a2 = 1;
        DriverVersion = DXGADAPTER::GetDriverVersion(v8);
        if ( DriverVersion >= v11 && *(_DWORD *)&a1[90].Common.Removed >= 2u && v10 && *v10 && v7 )
          *(_BYTE *)(a2 + 1) = 1;
        if ( LODWORD(a1[96].Common.RemoveEvent.Header.WaitListHead.Flink) != -1
          && LOWORD(a1[147].Common.RemoveEvent.Header.Lock) )
        {
          v15 = a1[96].Common.RemoveEvent.Header.SignalState & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v15;
        }
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(Flink);
        *(_QWORD *)(v13 + 24) = 1086LL;
        WdLogEvent5_WdError(v13);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v18);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v16);
  return v2;
}
