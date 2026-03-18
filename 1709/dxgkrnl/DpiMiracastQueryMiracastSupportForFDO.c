/*
 * XREFs of DpiMiracastQueryMiracastSupportForFDO @ 0x1C00FB2E8
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F238 (-Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C000F294 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F2C4 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C000F388 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C000F3D4 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DpiMiracastQueryMiracastSupportForFDO(struct _COMMON_PNP_CONTEXT *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
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
  v16 = (struct _IO_REMOVE_LOCK *)a1;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v18, a1);
  if ( AUTO_REMOVE_LOCK::Acquire(&v16) < 0 )
  {
    v2 = -1073741637;
  }
  else
  {
    AUTO_PNPPOWER_LOCK::Acquire((AUTO_PNPPOWER_LOCK *)v18);
    v5 = *((_QWORD *)a1 + 466);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 2304);
      if ( v6 )
      {
        v7 = *(unsigned __int8 *)(v6 + 133);
        if ( !*(_QWORD *)(v5 + 2312) )
        {
          v13 = WdLogNewEntry5_WdError(v6);
          *(_QWORD *)(v13 + 24) = 1075LL;
          WdLogEvent5_WdError(v13);
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)a1 + 466)) >= 2000 && v7 )
          *(_BYTE *)a2 = 1;
        DriverVersion = DXGADAPTER::GetDriverVersion(v8);
        if ( DriverVersion >= v11 && *((_DWORD *)a1 + 720) >= 2u && v10 && *v10 && v7 )
          *(_BYTE *)(a2 + 1) = 1;
        if ( *((_DWORD *)a1 + 772) != -1 && *((_WORD *)a1 + 2320) )
        {
          v15 = *((_BYTE *)a1 + 3084) & 1;
          *(_BYTE *)(a2 + 2) = 1;
          *(_BYTE *)(a2 + 3) = v15;
        }
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v14 + 24) = 1052LL;
        WdLogEvent5_WdError(v14);
        v2 = -1073741811;
      }
    }
  }
  AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v18);
  AUTO_REMOVE_LOCK::Release((PVOID *)&v16);
  return v2;
}
