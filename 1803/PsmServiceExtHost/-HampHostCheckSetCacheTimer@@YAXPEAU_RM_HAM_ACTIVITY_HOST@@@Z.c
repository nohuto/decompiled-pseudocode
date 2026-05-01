/*
 * XREFs of ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011880
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011944 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckSetCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( HampHostIsCached(a1) )
  {
    v3 = *(unsigned int *)(v1 + 800);
    if ( (_DWORD)v3 != -1 )
    {
      v4 = *(_QWORD *)(v1 + 632);
      if ( (v4 & 0x200000000000LL) == 0 )
      {
        *(_QWORD *)(v2 + 632) = v4 | 0x200000000000LL;
        v5 = -10000 * v3;
        TpSetTimer(*(_QWORD *)(v2 + 792), &v5, 0LL, 5000LL);
      }
    }
  }
}
