/*
 * XREFs of _CcdWriteRegistryValues @ 0x1C00F3BE8
 * Callers:
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9C10 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00DA308 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     _CcdOpenRegistrySubkey @ 0x1C00CF0AC (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdWriteRegistryValues(const WCHAR *a1, PCWSTR SourceString, __int64 a3, int a4, __int64 a5)
{
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // r14
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  PCWSTR Path; // [rsp+30h] [rbp-38h] BYREF
  ULONG v22; // [rsp+78h] [rbp+10h] BYREF

  Path = 0LL;
  LODWORD(v9) = -1073741823;
  if ( SourceString && *SourceString )
  {
    v10 = CcdOpenRegistrySubkey((int)&Path, 983103, (int)a1, SourceString, &v22);
    v9 = v10;
    if ( v10 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v19[7] = a5;
      v19[3] = v9;
      v19[4] = a1;
      v19[5] = SourceString;
      v19[6] = a3;
      WdLogEvent5_WdError(v19);
      return (unsigned int)v9;
    }
  }
  else
  {
    Path = a1;
  }
  v12 = 0;
  v13 = a4 - 1;
  if ( v13 )
  {
    v14 = a5;
    v15 = a3 + 24;
    while ( 1 )
    {
      v16 = RtlWriteRegistryValue(
              0x40000000u,
              Path,
              *(PCWSTR *)(v15 - 8),
              *(_DWORD *)(v15 + 8) & 0xFFFFFF,
              (PVOID)(v14 + *(_QWORD *)v15),
              *(_DWORD *)(v15 + 24));
      v9 = v16;
      if ( v16 < 0 )
        break;
      ++v12;
      v15 += 56LL;
      if ( v12 >= v13 )
        goto LABEL_8;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v20[4] = v12;
    v20[3] = v9;
    v20[5] = SourceString;
    v20[6] = a3;
    v20[7] = v14;
    WdLogEvent5_WdError(v20);
  }
LABEL_8:
  if ( Path != a1 )
    ZwClose((HANDLE)Path);
  return (unsigned int)v9;
}
