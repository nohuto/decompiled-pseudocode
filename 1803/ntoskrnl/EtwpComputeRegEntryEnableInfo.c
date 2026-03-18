/*
 * XREFs of EtwpComputeRegEntryEnableInfo @ 0x140591660
 * Callers:
 *     EtwpCalculateUpdateNotification @ 0x14058C620 (EtwpCalculateUpdateNotification.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140591B34 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 *     SendCaptureStateNotificationsWorker @ 0x1407B0900 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall EtwpComputeRegEntryEnableInfo(__int64 a1, unsigned __int8 *a2)
{
  int v2; // edi
  unsigned __int8 v4; // bp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // edx
  _QWORD *v8; // rbx
  __int64 result; // rax
  unsigned int v10; // r8d
  int v11; // r9d
  char *v12; // rdx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // cl

  v2 = *(unsigned __int8 *)(a1 + 100);
  v4 = *(_BYTE *)(a1 + 101);
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  memset(a2, 0, 0x20uLL);
  *((_QWORD *)a2 + 3) = -1LL;
  v7 = 0;
  v8 = (_QWORD *)(v5 + 128);
  do
  {
    result = (unsigned __int8)v7;
    if ( _bittest(&v2, (unsigned __int8)v7) )
    {
      v13 = a2[4];
      *(_DWORD *)a2 = 1;
      if ( v13 <= *((_BYTE *)v8 - 12) )
        v13 = *((_BYTE *)v8 - 12);
      a2[4] = v13;
      *((_QWORD *)a2 + 2) |= *v8;
      *((_QWORD *)a2 + 3) &= v8[1];
      result = *((unsigned int *)v8 - 2);
      *((_DWORD *)a2 + 2) |= result;
    }
    ++v7;
    v8 += 4;
  }
  while ( v7 < 8 );
  if ( v4 )
  {
    v10 = 0;
    v11 = v4;
    v12 = (char *)(v6 + 116);
    do
    {
      result = (unsigned __int8)v10;
      if ( _bittest(&v11, (unsigned __int8)v10) && *((_DWORD *)v12 - 1) )
      {
        v14 = a2[4];
        *(_DWORD *)a2 = 1;
        if ( v14 <= (unsigned __int8)*v12 )
          v14 = *v12;
        a2[4] = v14;
        *((_QWORD *)a2 + 2) |= *(_QWORD *)(v12 + 12);
        *((_QWORD *)a2 + 3) &= *(_QWORD *)(v12 + 20);
        result = *((unsigned int *)v12 + 1);
        *((_DWORD *)a2 + 2) |= result;
      }
      ++v10;
      v12 += 32;
    }
    while ( v10 < 8 );
  }
  return result;
}
