/*
 * XREFs of PspCreateUserProcessEcp @ 0x14053AFC8
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     FsRtlInsertExtraCreateParameter @ 0x14053B0C0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14053B130 (FsRtlAllocateExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14053B1F0 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14053D570 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
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
