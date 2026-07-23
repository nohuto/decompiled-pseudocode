/*
 * XREFs of IopGetBootDiskInformationLite @ 0x140833760
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x1405BBFD0 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     IopAddBootDiskInformation @ 0x140140AE4 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x140140B60 (IopCheckDiskName.c)
 *     memset @ 0x140192F40 (memset.c)
 *     VhdiGetDiskParameters @ 0x14086D514 (VhdiGetDiskParameters.c)
 */

__int64 __fastcall IopGetBootDiskInformationLite(unsigned int **a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  char v4; // r12
  char v5; // r15
  _QWORD **v6; // r14
  _QWORD *v7; // rdx
  int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int *Pool; // rax
  unsigned int *v14; // rsi
  _QWORD *i; // rbx
  __int64 v16; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  unsigned __int64 v20; // [rsp+20h] [rbp-B9h] BYREF
  __int128 v21; // [rsp+28h] [rbp-B1h]
  int v22; // [rsp+38h] [rbp-A1h]
  _STRING v23; // [rsp+40h] [rbp-99h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  _STRING v25; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v26[48]; // [rsp+70h] [rbp-69h] BYREF
  ULONG v27; // [rsp+148h] [rbp+6Fh] BYREF
  __int128 *v28; // [rsp+150h] [rbp+77h] BYREF
  char v29; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = KeLoaderBlock_0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v25, *(PCSZ *)(v1 + 192));
  v7 = *v6;
  v8 = 2;
  while ( v6 != v7 )
  {
    v9 = v7 + 7;
    v7 = (_QWORD *)*v7;
    v10 = *v9;
    v11 = v8 + 1;
    if ( !v10 )
      v11 = v8;
    v8 = v11;
  }
  v12 = 28 * v8 + 4;
  Pool = (unsigned int *)IopVerifierExAllocatePool(NonPagedPoolNx, v12);
  v14 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v12);
    for ( i = *v6; v6 != i; i = (_QWORD *)*i )
    {
      RtlInitAnsiString(&v23, (PCSZ)i[3]);
      if ( !v4 && IopCheckDiskName(&v23, &DestinationString, &v27) )
      {
        v4 = 1;
        HIDWORD(v20) = v27;
        v22 = 256;
        if ( *((_BYTE *)i + 38) )
        {
          v18 = *(_OWORD *)(i + 5);
          LODWORD(v20) = 1;
          v21 = v18;
        }
        else
        {
          LODWORD(v20) = 0;
          v21 = 0uLL;
          LODWORD(v21) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v14, (__int64)&v20);
      }
      if ( !v5 && IopCheckDiskName(&v23, &v25, &v27) )
      {
        v5 = 1;
        HIDWORD(v20) = v27;
        v22 = 0x200000;
        if ( *((_BYTE *)i + 38) )
        {
          v19 = *(_OWORD *)(i + 5);
          LODWORD(v20) = 1;
          v21 = v19;
        }
        else
        {
          LODWORD(v20) = 0;
          v21 = 0uLL;
          LODWORD(v21) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v14, (__int64)&v20);
      }
      v16 = i[7];
      if ( v16 && (int)VhdiGetDiskParameters(v16, v26, &v28, &v29, v20, v21, *((_QWORD *)&v21 + 1), v22) >= 0 )
      {
        v20 = __PAIR64__(v26[6], v26[0]);
        v22 = 0x400000;
        if ( v26[0] )
        {
          if ( v26[0] == 1 )
            v21 = *v28;
        }
        else
        {
          v21 = 0uLL;
          LODWORD(v21) = *(_DWORD *)v28;
        }
        IopAddBootDiskInformation(v14, (__int64)&v20);
      }
    }
    *a1 = v14;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
