/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x1800092E0
 * Callers:
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009340 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  void *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+58h] [rbp+10h]

  memset_0(&v8, 0, 0x20uLL);
  v8 = 32;
  v9 = a2;
  result = D3DKMTQueryProcessOfferInfo(&v8);
  if ( (int)result < 0 )
  {
    v7 = v11;
  }
  else
  {
    v7 = v10;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    *a4 += v7;
    return 0LL;
  }
  return result;
}
