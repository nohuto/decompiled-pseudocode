/*
 * XREFs of ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AED38
 * Callers:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00AEC7C (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00AE0FC (_CcdWriteStrValueToRegistry.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00AEE9C (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ??1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ @ 0x1C00AEFAC (--1CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@XZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00AF018 (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00B0370 (_CcdOpenRegistrySubkey_0.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00EE7AC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::CONNECTED_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // eax
  ULONG v28; // [rsp+30h] [rbp-A1h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-99h] BYREF
  HANDLE v30; // [rsp+40h] [rbp-91h] BYREF
  struct _UNICODE_STRING v31; // [rsp+48h] [rbp-89h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v33[112]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v34; // [rsp+E0h] [rbp+Fh] BYREF
  int v35; // [rsp+E8h] [rbp+17h]

  v30 = 0LL;
  v7 = CcdOpenRegistrySubkey(
         (int)&v30,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
         &v28);
  v10 = v7;
  if ( v7 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v24[3] = v10;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v24[5] = a2;
    v24[6] = a3;
    v24[7] = a4;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v10;
  }
  Handle = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  v11 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v31, a2);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  v28 = 2;
  v10 = (int)CcdOpenRegistrySubkey_0((int)&Handle, 983103, (int)v30, (int)&v31, &v28);
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v31);
  if ( (int)v10 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    v26[3] = v10;
    v26[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
    v26[5] = a2;
    v26[6] = a3;
    v26[7] = a4;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_6;
  }
  if ( v28 == 1 )
  {
    v35 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v34;
    v34 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v27 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2, v17);
    v10 = v27;
    if ( v27 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v25[3] = v10;
      v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
      v25[5] = a2;
      v25[6] = a3;
      v25[7] = a4;
      WdLogEvent5_WdError(v25);
      goto LABEL_6;
    }
  }
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v33, Handle, a2);
  v10 = a3(v33, a4);
  ZwClose(Handle);
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
  v22[3] = v10;
  v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\";
  v22[5] = a2;
  v22[6] = a3;
  v22[7] = a4;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::~CONNECTED_SET_DESCRIPTOR((CCD_STORE::CONNECTED_SET_DESCRIPTOR *)v33);
LABEL_6:
  ZwClose(v30);
  return (unsigned int)v10;
}
