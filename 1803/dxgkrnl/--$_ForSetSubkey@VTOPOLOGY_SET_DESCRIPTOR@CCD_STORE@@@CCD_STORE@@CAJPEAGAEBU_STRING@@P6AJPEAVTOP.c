/*
 * XREFs of ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AFBEC
 * Callers:
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C009D9E4 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C009DF84 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C009E06C (_CcdWriteStrValueToRegistry.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00B0054 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B022C (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00B0284 (_CcdOpenRegistrySubkey_0.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B1B1C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  ULONG v26; // [rsp+30h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  HANDLE v28; // [rsp+40h] [rbp-81h] BYREF
  struct _UNICODE_STRING v29; // [rsp+48h] [rbp-79h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v31[80]; // [rsp+70h] [rbp-51h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-1h] BYREF
  int v33; // [rsp+C8h] [rbp+7h]

  v28 = 0LL;
  v8 = CcdOpenRegistrySubkey(
         (int)&v28,
         983103,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &v26);
  v10 = v8;
  if ( v8 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v22[3] = v10;
    v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v22[5] = a2;
    v22[6] = a3;
    v22[7] = a4;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v10;
  }
  Handle = 0LL;
  *(_QWORD *)&v29.Length = 0LL;
  v29.Buffer = 0LL;
  v11 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v29, a2);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_9;
  v26 = 2;
  v10 = (int)CcdOpenRegistrySubkey_0(
               (int)&Handle,
               983103,
               (int)v28,
               (int)&v29,
               (PULONG)((unsigned __int64)&v26 & -(__int64)(a5 != 0)));
  CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v29);
  if ( (int)v10 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v24[3] = v10;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[5] = a2;
    v24[6] = a3;
    v24[7] = a4;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_6;
  }
  if ( v26 == 1 )
  {
    v33 = *(_DWORD *)L"d";
    ValueName.Buffer = (wchar_t *)&v32;
    v32 = *(_QWORD *)L"SetId";
    *(_DWORD *)&ValueName.Length = 786442;
    v25 = CcdWriteStrValueToRegistry(Handle, &ValueName, a2);
    v10 = v25;
    if ( v25 < 0 )
    {
      ZwClose(Handle);
LABEL_9:
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v23[3] = v10;
      v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
      v23[5] = a2;
      v23[6] = a3;
      v23[7] = a4;
      WdLogEvent5_WdError(v23);
      goto LABEL_6;
    }
  }
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR((CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v31, Handle, a2);
  v10 = a3(v31, a4);
  ZwClose(Handle);
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
  v20[3] = v10;
  v20[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
  v20[5] = a2;
  v20[6] = a3;
  v20[7] = a4;
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
LABEL_6:
  ZwClose(v28);
  return (unsigned int)v10;
}
