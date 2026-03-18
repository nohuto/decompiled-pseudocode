/*
 * XREFs of SmIssueIo @ 0x1402A8E14
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1402A3F2C (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 * Callees:
 *     SmKmStoreReference @ 0x1400901B0 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140090324 (SmKmStoreRefFromStoreIndex.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SmKmIssueIo @ 0x1402A7374 (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(
        unsigned __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6)
{
  int v6; // r14d
  unsigned __int64 v7; // rdi
  int v8; // ebp
  int v13; // edi
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  void (*v17)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r8
  struct _EX_RUNDOWN_REF *v18; // rax
  _QWORD v20[6]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0;
  v7 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = a6 & 1;
  if ( (a6 & 1) == 0 )
    v7 = a6;
  if ( (*(_DWORD *)(v7 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016)) )
      return (unsigned int)-1073741058;
    v6 = 1;
  }
  v14 = (volatile signed __int32 *)(a1 + 6104);
  if ( (a6 & 1) != 0 )
    _InterlockedIncrement(v14);
  memset(v20, 0, 0x28uLL);
  v15 = *(_DWORD *)a1;
  HIDWORD(v20[3]) = *(_DWORD *)(a1 + 6208);
  v20[1] = a5;
  LODWORD(v20[3]) = a2;
  v20[2] = __PAIR64__(a3, a4);
  LODWORD(v20[4]) = v8 | v20[4] & 0xFFFFFFFE;
  if ( (v15 & 0x2000) != 0 )
  {
    v16 = v7 + 32;
    v7 = a1;
    v20[0] = v16;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a1;
    v20[0] = v7 + 48;
    v17 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
    *(_DWORD *)(v7 + 32) = a4;
    v15 = *(_DWORD *)a1;
  }
  v13 = SmKmIssueIo((struct _SMKM_FILE_INFO *)(a1 + 6216), (__int64)v20, v17, (void *)v7, (v15 >> 13) & 1);
  if ( v13 >= 0 )
  {
    v6 = 0;
    v8 = 0;
  }
  if ( v8 )
    _InterlockedDecrement(v14);
  if ( v6 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v18 + 1);
  }
  return (unsigned int)v13;
}
