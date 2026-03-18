/*
 * XREFs of rimObsCopyMessage @ 0x1C0114290
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01143CC (rimObsDeliverInputToObserver.c)
 *     rimObsPopInputMessage @ 0x1C0114788 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C01148D4 (rimObsPushInputMessage.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimObsCalculateObserverMessageSize @ 0x1C0114064 (rimObsCalculateObserverMessageSize.c)
 */

__int64 __fastcall rimObsCopyMessage(__int64 a1, __int64 a2, void **a3)
{
  unsigned int v5; // eax
  char v6; // dl
  unsigned int v7; // r9d
  unsigned int v8; // esi
  unsigned int v9; // ebx
  void **v10; // rdx
  void **v11; // r9
  _QWORD *v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  void *v15; // rcx
  ULONG64 v16; // r9

  v5 = rimObsCalculateObserverMessageSize((_DWORD *)a1);
  v8 = v7 < v5 ? 0xC0000023 : 0;
  if ( v7 >= v5 )
  {
    if ( v6 )
    {
      v9 = v7;
      ProbeForWrite(a3, v7, 2u);
      memset(a3, 0, v9);
      v10 = a3 + 6;
      if ( (unsigned __int64)(a3 + 6) > MmUserProbeAddress || v10 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v11 = a3 + 5;
        v12 = a3 + 5;
        if ( (unsigned __int64)(a3 + 5) >= MmUserProbeAddress )
          v12 = (_QWORD *)MmUserProbeAddress;
        *v12 = v10;
        v13 = *(_QWORD *)(a1 + 24);
        v14 = *(const void **)(a1 + 40);
        v15 = *v11;
        v16 = (ULONG64)*v11 + v13;
        if ( v16 > MmUserProbeAddress || v16 <= (unsigned __int64)v15 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v15, v14, v13);
      }
    }
    else
    {
      memset(a3, 0, v7);
      *(_OWORD *)a3 = *(_OWORD *)a1;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + 32);
      if ( *(_QWORD *)(a1 + 40) )
      {
        a3[5] = a3 + 6;
        memmove(a3 + 6, *(const void **)(a1 + 40), *(_QWORD *)(a1 + 24));
      }
    }
  }
  return v8;
}
