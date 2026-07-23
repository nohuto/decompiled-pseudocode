/*
 * XREFs of IopGetBootDiskInformationLite @ 0x1408053E4
 * Callers:
 *     IoGetBootDiskInformationLite @ 0x1405A3370 (IoGetBootDiskInformationLite.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     IopAddBootDiskInformation @ 0x140154A24 (IopAddBootDiskInformation.c)
 *     IopCheckDiskName @ 0x140154AA0 (IopCheckDiskName.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     VhdiGetDiskParameters @ 0x1408362DC (VhdiGetDiskParameters.c)
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
  size_t v12; // rbx
  unsigned int *PoolWithTagPriority; // rax
  unsigned int *v14; // rsi
  _QWORD *i; // rbx
  __int64 v16; // rcx
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v20; // [rsp+20h] [rbp-B9h] BYREF
  ULONG v21; // [rsp+24h] [rbp-B5h]
  __int128 v22; // [rsp+28h] [rbp-B1h]
  int v23; // [rsp+38h] [rbp-A1h]
  _STRING v24; // [rsp+40h] [rbp-99h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-89h] BYREF
  _STRING v26; // [rsp+60h] [rbp-79h] BYREF
  _DWORD v27[48]; // [rsp+70h] [rbp-69h] BYREF
  ULONG v28; // [rsp+148h] [rbp+6Fh] BYREF
  __int128 *v29; // [rsp+150h] [rbp+77h] BYREF
  char v30; // [rsp+158h] [rbp+7Fh] BYREF

  v1 = KeLoaderBlock_0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  RtlInitAnsiString(&DestinationString, *(PCSZ *)(KeLoaderBlock_0 + 184));
  RtlInitAnsiString(&v26, *(PCSZ *)(v1 + 192));
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
  v12 = (unsigned int)(28 * v8 + 4);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            (unsigned int)v12,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v12, 0x20206F49u);
  v14 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, v12);
    for ( i = *v6; v6 != i; i = (_QWORD *)*i )
    {
      RtlInitAnsiString(&v24, (PCSZ)i[3]);
      if ( !v4 && IopCheckDiskName(&v24, &DestinationString, &v28) )
      {
        v4 = 1;
        v21 = v28;
        v23 = 256;
        if ( *((_BYTE *)i + 38) )
        {
          v18 = *(_OWORD *)(i + 5);
          v20 = 1;
          v22 = v18;
        }
        else
        {
          v20 = 0;
          v22 = 0uLL;
          LODWORD(v22) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v14, (__int64)&v20);
      }
      if ( !v5 && IopCheckDiskName(&v24, &v26, &v28) )
      {
        v5 = 1;
        v21 = v28;
        v23 = 0x200000;
        if ( *((_BYTE *)i + 38) )
        {
          v19 = *(_OWORD *)(i + 5);
          v20 = 1;
          v22 = v19;
        }
        else
        {
          v20 = 0;
          v22 = 0uLL;
          LODWORD(v22) = *((_DWORD *)i + 4);
        }
        IopAddBootDiskInformation(v14, (__int64)&v20);
      }
      v16 = i[7];
      if ( v16 && (int)VhdiGetDiskParameters(v16, v27, &v29, &v30) >= 0 )
      {
        v20 = v27[0];
        v21 = v27[6];
        v23 = 0x400000;
        if ( v27[0] )
        {
          if ( v27[0] == 1 )
            v22 = *v29;
        }
        else
        {
          v22 = 0uLL;
          LODWORD(v22) = *(_DWORD *)v29;
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
