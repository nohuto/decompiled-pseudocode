/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00D03F8
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D096C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CF0AC (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00CF12C (_CcdOpenRegistrySubkey_0.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D03C8 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00D063C (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D06A8 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00DFBEC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00F7134 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  ULONG v23; // [rsp+30h] [rbp-A1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-99h] BYREF
  HANDLE v25; // [rsp+40h] [rbp-91h] BYREF
  struct _UNICODE_STRING v26; // [rsp+48h] [rbp-89h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v28[112]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+Fh] BYREF
  int v30; // [rsp+E8h] [rbp+17h]

  v25 = 0LL;
  v7 = CcdOpenRegistrySubkey(
         (int)&v25,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v19[3] = v9;
    v19[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v19[5] = a2;
    v19[6] = a3;
    v19[7] = a4;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v9;
  }
  Handle = 0LL;
  *(_QWORD *)&v26.Length = 0LL;
  v26.Buffer = 0LL;
  v10 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v26, a2);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_9;
  v23 = 2;
  v9 = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, v25, &v26, &v23);
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v26);
  if ( (int)v9 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v21[3] = v9;
    v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v21[5] = a2;
    v21[6] = a3;
    v21[7] = a4;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_6;
  }
  if ( v23 == 1 )
  {
    v30 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v29;
    v29 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v22 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v9 = v22;
    if ( v22 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v20[3] = v9;
      v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
      v20[5] = a2;
      v20[6] = a3;
      v20[7] = a4;
      WdLogEvent5_WdError(v20);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v28, Handle, a2);
  v9 = a3(v28, a4);
  ZwClose(Handle);
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
  v17[3] = v9;
  v17[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v17[5] = a2;
  v17[6] = a3;
  v17[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v28);
LABEL_6:
  ZwClose(v25);
  return (unsigned int)v9;
}
