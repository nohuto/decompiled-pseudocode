/*
 * XREFs of DxgkCreateDoDPrimarySection @ 0x1C0153EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall DxgkCreateDoDPrimarySection(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  PVOID v9; // rcx
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v2 <= a2 )
    v2 = a2;
  *(_DWORD *)a1 = v2;
  v11 = v2;
  v4 = MmCreateSection(&Object, 0LL, 0LL, &v11, 4, 0x8000000, 0LL, 0LL);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v9 = Object;
    *(_QWORD *)(a1 + 8) = Object;
    ObfReferenceObject(v9);
    return Object;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return 0LL;
  }
}
