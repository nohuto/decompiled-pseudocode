/*
 * XREFs of ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180005388
 * Callers:
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18000ABE0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 * Callees:
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800269CC (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_HOST_WAKE_CONTEXT *__fastcall HampWakeManagerFindContextByActivityHandle(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2)
{
  __int64 v2; // rax
  struct _RTL_BALANCED_NODE **v3; // rcx
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_QWORD *)a1 + 11);
  v3 = (struct _RTL_BALANCED_NODE **)((char *)a1 + 80);
  v4 = (unsigned __int64)*v3;
  if ( (v2 & 1) != 0 && v4 )
    v4 ^= (unsigned __int64)v3;
  v5 = v2 & 1;
  while ( v4 )
  {
    v6 = HampWakeContextTreeCompareByActivityId(&v9, (struct _RTL_BALANCED_NODE *)v4);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return (struct _HAM_HOST_WAKE_CONTEXT *)((v4 - 64) & -(__int64)(v4 != 0));
      v7 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v4;
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  return (struct _HAM_HOST_WAKE_CONTEXT *)((v4 - 64) & -(__int64)(v4 != 0));
}
