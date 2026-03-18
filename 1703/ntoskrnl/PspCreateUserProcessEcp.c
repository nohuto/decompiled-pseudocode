/*
 * XREFs of PspCreateUserProcessEcp @ 0x140545044
 * Callers:
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140542880 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x140545140 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405451B0 (FsRtlAllocateExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140545270 (FsRtlAllocateExtraCreateParameterList.c)
 */

__int64 __fastcall PspCreateUserProcessEcp(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  NTSTATUS Parameter; // esi
  NTSTATUS v6; // eax
  struct _ECP_LIST *v7; // rdi
  GUID EcpType; // [rsp+30h] [rbp-38h] BYREF
  PECP_LIST EcpList; // [rsp+70h] [rbp+8h] BYREF
  PVOID EcpContext; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0LL;
  EcpList = 0LL;
  EcpContext = 0LL;
  EcpType = GUID_ECP_CREATE_USER_PROCESS;
  memset(a1, 0, 0x28uLL);
  *(_WORD *)a1 = 40;
  a1[4] = 1LL;
  Parameter = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
  if ( Parameter < 0
    || (v6 = FsRtlAllocateExtraCreateParameter(&EcpType, 0x10u, 0, 0LL, 0x70437350u, &EcpContext),
        v3 = EcpContext,
        Parameter = v6,
        v6 < 0) )
  {
    v7 = EcpList;
  }
  else
  {
    *(_DWORD *)EcpContext = 16;
    v3[1] = a2;
    v7 = EcpList;
    Parameter = FsRtlInsertExtraCreateParameter(EcpList, v3);
    if ( Parameter >= 0 )
    {
      a1[1] = v7;
      v3 = 0LL;
      v7 = 0LL;
    }
  }
  if ( v7 )
    FsRtlFreeExtraCreateParameterList(v7);
  if ( v3 )
    FsRtlFreeExtraCreateParameter(v3);
  return (unsigned int)Parameter;
}
