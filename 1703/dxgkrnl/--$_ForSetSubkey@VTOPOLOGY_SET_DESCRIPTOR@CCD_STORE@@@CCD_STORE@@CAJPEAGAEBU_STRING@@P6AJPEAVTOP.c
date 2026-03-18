/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AF934
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00AECB0 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C00AE0FC (_CcdWriteStrValueToRegistry.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00AEE9C (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00B0370 (_CcdOpenRegistrySubkey_0.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B07D8 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00EE7AC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall CCD_STORE::_ForSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        struct _STRING *a2,
        int (__fastcall *a3)(_BYTE *, __int64),
        __int64 a4,
        char a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // eax
  ULONG v29; // [rsp+30h] [rbp-81h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-79h] BYREF
  HANDLE v31; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING v32; // [rsp+48h] [rbp-69h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v34[80]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+Fh] BYREF
  int v36; // [rsp+C8h] [rbp+17h]

  v31 = 0LL;
  v8 = CcdOpenRegistrySubkey(
         (int)&v31,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v29);
  v11 = v8;
  if ( v8 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v25[3] = v11;
    v25[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v25[5] = a2;
    v25[6] = a3;
    v25[7] = a4;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v11;
  }
  Handle = 0LL;
  *(_QWORD *)&v32.Length = 0LL;
  v32.Buffer = 0LL;
  v12 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v32, a2);
  v11 = v12;
  if ( v12 < 0 )
    goto LABEL_9;
  v29 = 2;
  v11 = (int)CcdOpenRegistrySubkey_0(
               (int)&Handle,
               983103,
               (int)v31,
               (int)&v32,
               (PULONG)((unsigned __int64)&v29 & -(__int64)(a5 != 0)));
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v32);
  if ( (int)v11 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    v27[3] = v11;
    v27[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v27[5] = a2;
    v27[6] = a3;
    v27[7] = a4;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_6;
  }
  if ( v29 == 1 )
  {
    v36 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v35;
    v35 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v28 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2, v18);
    v11 = v28;
    if ( v28 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v26[3] = v11;
      v26[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v26[5] = a2;
      v26[6] = a3;
      v26[7] = a4;
      WdLogEvent5_WdError(v26);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v34, Handle, a2);
  v11 = a3(v34, a4);
  ZwClose(Handle);
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  v23[3] = v11;
  v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v23[5] = a2;
  v23[6] = a3;
  v23[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v34);
LABEL_6:
  ZwClose(v31);
  return (unsigned int)v11;
}
