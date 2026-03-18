/*
 * XREFs of PnpFindBestConfigurationWorker @ 0x14055B0C4
 * Callers:
 *     PnpFindBestConfiguration @ 0x14055B06C (PnpFindBestConfiguration.c)
 * Callees:
 *     IopTestConfiguration @ 0x14055B26C (IopTestConfiguration.c)
 *     IopAddRemoveReqDescs @ 0x14055B3A8 (IopAddRemoveReqDescs.c)
 *     IopSaveRestoreConfiguration @ 0x1405E3B70 (IopSaveRestoreConfiguration.c)
 *     IopRetestConfiguration @ 0x1405EE0E4 (IopRetestConfiguration.c)
 *     IopSelectNextConfiguration @ 0x1405F07F8 (IopSelectNextConfiguration.c)
 */

__int64 __fastcall PnpFindBestConfigurationWorker(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r15d
  __int64 v8; // rbx
  __int64 v9; // rsi
  _DWORD **v10; // rcx
  _DWORD *v11; // rdx
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned int v14; // r12d
  int v15; // esi
  __int64 v16; // r9
  __int128 v17; // xmm0
  unsigned int v19; // edx
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 i; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // r15
  _OWORD v26[3]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  *((_QWORD *)&v26[0] + 1) = v26;
  *(_QWORD *)&v26[0] = v26;
  v5 = a4;
  a3[1] = a3;
  *a3 = a3;
  if ( a2 )
  {
    v8 = a1 + 32;
    v9 = a2;
    do
    {
      v10 = (_DWORD **)(*(_QWORD *)v8 + 40LL);
      *(_QWORD *)(*(_QWORD *)v8 + 16LL) = v10;
      v11 = *v10;
      if ( v5 )
      {
        for ( i = 0LL; (unsigned int)i < v11[5]; i = (unsigned int)(i + 1) )
        {
          v23 = *(_QWORD *)&v11[2 * i + 6];
          if ( *(_BYTE *)(v23 + 8) && *v11 == 1 )
            *(_DWORD *)(v23 + 84) |= 1u;
        }
      }
      LOBYTE(a4) = 1;
      IopAddRemoveReqDescs(v11 + 6, (unsigned int)v11[5], a3, a4);
      v8 += 64LL;
      --v9;
    }
    while ( v9 );
  }
  v12 = -1;
  v13 = MEMORY[0xFFFFF78000000014];
  v14 = PnpFindBestConfigurationTimeout;
  while ( 1 )
  {
    v15 = IopTestConfiguration(a1, (unsigned int)v4, a3);
    if ( v15 >= 0 )
    {
      v17 = *(_OWORD *)a3;
      v26[0] = *(_OWORD *)a3;
      if ( (_DWORD)v4 == 1 )
        goto LABEL_8;
      v19 = 0;
      if ( (_DWORD)v4 )
      {
        v20 = (__int64 *)(a1 + 32);
        v16 = v4;
        do
        {
          v21 = *v20;
          v20 += 8;
          v19 += ***(_DWORD ***)(v21 + 16);
          --v16;
        }
        while ( v16 );
      }
      if ( v19 < v12 )
      {
        v12 = v19;
        LOBYTE(v16) = 1;
        IopSaveRestoreConfiguration(a1, (unsigned int)v4, a3, v16);
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000014] - v13) / 10000) >= v14 )
      break;
    if ( !(unsigned __int8)IopSelectNextConfiguration(a1, (unsigned int)v4, a3) )
      goto LABEL_19;
  }
  if ( (_DWORD)v4 )
  {
    v24 = a1 + 32;
    v25 = v4;
    do
    {
      IopAddRemoveReqDescs(
        **(_QWORD **)(*(_QWORD *)v24 + 16LL) + 24LL,
        *(unsigned int *)(**(_QWORD **)(*(_QWORD *)v24 + 16LL) + 20LL),
        0LL,
        0LL);
      v24 += 64LL;
      --v25;
    }
    while ( v25 );
  }
LABEL_19:
  v17 = v26[0];
LABEL_8:
  if ( (_OWORD *)v17 == v26 )
  {
    if ( v15 != -1073739512 )
      return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0;
    if ( (_DWORD)v4 != 1 )
    {
      *(_OWORD *)a3 = v17;
      IopSaveRestoreConfiguration(a1, (unsigned int)v4, a3, 0LL);
      return (unsigned int)IopRetestConfiguration(a1, (unsigned int)v4);
    }
  }
  return (unsigned int)v15;
}
