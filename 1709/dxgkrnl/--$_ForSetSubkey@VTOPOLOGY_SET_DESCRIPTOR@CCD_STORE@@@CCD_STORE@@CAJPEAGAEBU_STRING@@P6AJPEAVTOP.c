/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00CFEBC
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D08DC (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CF0AC (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00CF12C (_CcdOpenRegistrySubkey_0.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D03C8 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D9E48 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00DFBEC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00F7134 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  ULONG v24; // [rsp+30h] [rbp-81h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-79h] BYREF
  HANDLE v26; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING v27; // [rsp+48h] [rbp-69h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v29[80]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+Fh] BYREF
  int v31; // [rsp+C8h] [rbp+17h]

  v26 = 0LL;
  v8 = CcdOpenRegistrySubkey(
         (int)&v26,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v24);
  v10 = v8;
  if ( v8 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v20[3] = v10;
    v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v20[5] = a2;
    v20[6] = a3;
    v20[7] = a4;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v10;
  }
  Handle = 0LL;
  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  v11 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v27, a2);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  v24 = 2;
  v10 = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, v26, &v27, (PULONG)((unsigned __int64)&v24 & -(__int64)(a5 != 0)));
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v27);
  if ( (int)v10 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v22[3] = v10;
    v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v22[5] = a2;
    v22[6] = a3;
    v22[7] = a4;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_6;
  }
  if ( v24 == 1 )
  {
    v31 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v30;
    v30 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v23 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v10 = v23;
    if ( v23 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v21[3] = v10;
      v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v21[5] = a2;
      v21[6] = a3;
      v21[7] = a4;
      WdLogEvent5_WdError(v21);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v29, Handle, a2);
  v10 = a3(v29, a4);
  ZwClose(Handle);
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
  v18[3] = v10;
  v18[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v18[5] = a2;
  v18[6] = a3;
  v18[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
LABEL_6:
  ZwClose(v26);
  return (unsigned int)v10;
}
