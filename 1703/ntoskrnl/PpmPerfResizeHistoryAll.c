/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x1405C0E1C
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x14000E7B0 (PpmGetHeterogeneousClass.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmPerfResetHistory @ 0x1401608A4 (PpmPerfResetHistory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  __int64 result; // rax
  __int64 Prcb; // rdi
  unsigned __int8 v2; // bl
  _DWORD *v3; // rcx
  int v4; // esi
  unsigned int v5; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF

  v8[1] = (unsigned __int16 *)qword_140340128[0];
  v8[0] = PpmCheckRegistered;
  v9 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v10, v8);
    if ( (_DWORD)result )
      return result;
    Prcb = KeGetPrcb(v10);
    v2 = *((_BYTE *)&PpmCurrentProfile[175 * dword_14034BB2C + 8] + PpmGetHeterogeneousClass(Prcb));
    v3 = *(_DWORD **)(Prcb + 24344);
    if ( v3 )
    {
      if ( *v3 != v2 )
      {
        ExFreePoolWithTag(v3, 0x704D5050u);
        *(_QWORD *)(Prcb + 24344) = 0LL;
        goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v2 > 1u )
      {
        v4 = v2;
        v5 = 8 * v2 + 28;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x704D5050u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v5);
          *v7 = v4;
          *(_QWORD *)(Prcb + 24344) = v7;
          PpmPerfResetHistory(Prcb);
        }
      }
    }
  }
}
