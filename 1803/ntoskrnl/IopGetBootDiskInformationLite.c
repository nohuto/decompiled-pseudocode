/*
 * XREFs of IopGetBootDiskInformationLite @ 0x1408A9998
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x14062AC10 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x140175BF8 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x140175C74 (IopCheckDiskName.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     VhdiGetDiskParameters @ 0x1408E227C (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  char v4; // r12
  char v5; // r15
  _QWORD *v6; // r14
  _QWORD *v7; // r8
  int v8; // edx
  SIZE_T v9; // rbx
  unsigned int *Pool; // rax
  unsigned int *v11; // rsi
  _QWORD *i; // rbx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // ecx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  unsigned __int64 v19; // [rsp+20h] [rbp-B9h] BYREF
  __int128 v20; // [rsp+28h] [rbp-B1h]
  int v21; // [rsp+38h] [rbp-A1h]
  _STRING v22; // [rsp+40h] [rbp-99h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  _STRING v24; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v25[48]; // [rsp+70h] [rbp-69h] BYREF
  ULONG v26; // [rsp+148h] [rbp+6Fh] BYREF
  __int128 *v27; // [rsp+150h] [rbp+77h] BYREF
  char v28; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = KeLoaderBlock_0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD **)(KeLoaderBlock_0 + 232);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v24, *(PCSZ *)(v1 + 192));
  v7 = (_QWORD *)*v6;
  v8 = 2;
  while ( v6 != v7 )
  {
    v14 = v7[7] == 0LL;
    v15 = v8 + 1;
    v7 = (_QWORD *)*v7;
    if ( v14 )
      v15 = v8;
    v8 = v15;
  }
  v9 = (unsigned int)(28 * v8 + 4);
  Pool = (unsigned int *)IopVerifierExAllocatePool(NonPagedPoolNx, v9);
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)v9);
    for ( i = (_QWORD *)*v6; v6 != i; i = (_QWORD *)*i )
    {
      RtlInitAnsiString(&v22, (PCSZ)i[3]);
      if ( !v4 && IopCheckDiskName(&v22, &DestinationString, &v26) )
      {
        v4 = 1;
        HIDWORD(v19) = v26;
        v21 = 256;
        if ( *((_BYTE *)i + 38) )
        {
          v17 = *(_OWORD *)(i + 5);
          LODWORD(v19) = 1;
          v20 = v17;
        }
        else
        {
          LODWORD(v19) = 0;
          v20 = 0uLL;
          LODWORD(v20) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v11, (__int64)&v19);
      }
      if ( !v5 && IopCheckDiskName(&v22, &v24, &v26) )
      {
        v5 = 1;
        HIDWORD(v19) = v26;
        v21 = 0x200000;
        if ( *((_BYTE *)i + 38) )
        {
          v18 = *(_OWORD *)(i + 5);
          LODWORD(v19) = 1;
          v20 = v18;
        }
        else
        {
          LODWORD(v19) = 0;
          v20 = 0uLL;
          LODWORD(v20) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v11, (__int64)&v19);
      }
      v13 = i[7];
      if ( v13 && (int)VhdiGetDiskParameters(v13, v25, &v27, &v28, v19, v20, *((_QWORD *)&v20 + 1), v21) >= 0 )
      {
        v19 = __PAIR64__(v25[6], v25[0]);
        v21 = 0x400000;
        if ( v25[0] )
        {
          if ( v25[0] == 1 )
            v20 = *v27;
        }
        else
        {
          v20 = 0uLL;
          LODWORD(v20) = *(_DWORD *)v27;
        }
        IopAddBootDiskInformation(v11, (__int64)&v19);
      }
    }
    *a1 = v11;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
