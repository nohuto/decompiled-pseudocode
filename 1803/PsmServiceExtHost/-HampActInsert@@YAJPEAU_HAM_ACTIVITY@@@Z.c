/*
 * XREFs of ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180040DAC
 * Callers:
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180040CD8 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     ?HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800118EC (-HampHostCheckCancelCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180027880 (CemRcTableFindOrInsertEx.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180034854 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003487C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004057C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActInsert(struct _HAM_ACTIVITY *a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  unsigned __int64 v4; // rbp
  int v5; // ebx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  struct _HAM_CLIENT_CONTEXT *v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 **v12; // rdx
  __int64 v14; // [rsp+20h] [rbp-18h]
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = *((_DWORD *)a1 + 28);
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  if ( (v3 & 0x400) != 0 && *(_QWORD *)(v2 + 584) != v2 + 584
    || (unsigned int)HampHostIsElasticRecipient((struct _RM_HAM_ACTIVITY_HOST *)v2) )
  {
    v5 = -1071513591;
  }
  else
  {
    *((_BYTE *)a1 + 540) = 1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    v6 = *(_QWORD **)(v2 + 592);
    v7 = (_QWORD *)((char *)a1 + 96);
    if ( *v6 != v2 + 584 )
      __fastfail(3u);
    *v7 = v2 + 584;
    *((_QWORD *)a1 + 13) = v6;
    *v6 = v7;
    *(_QWORD *)(v2 + 592) = v7;
    HampHostCheckCancelCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v2);
    v9 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    if ( v9 )
    {
      HampClientAcquireLockExclusive(*((struct _HAM_CLIENT_CONTEXT **)a1 + 8), v8);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
        __fastfail(0xEu);
      v10 = (__int64 *)((char *)a1 + 48);
      v11 = *((_QWORD *)a1 + 8) + 40LL;
      v12 = *(__int64 ***)(*((_QWORD *)a1 + 8) + 48LL);
      if ( *v12 != (__int64 *)v11 )
        __fastfail(3u);
      *v10 = v11;
      *((_QWORD *)a1 + 7) = v12;
      *v12 = v10;
      *(_QWORD *)(v11 + 8) = v10;
      HampClientReleaseLockExclusive(v9, (__int64)v12);
    }
    v5 = 0;
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  if ( v5 >= 0 )
    CemRcTableFindOrInsertEx(
      v4,
      (__int64)a1 + 40,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampActCompareByHandle,
      (unsigned __int64)a1,
      v14,
      &v15);
  return (unsigned int)v5;
}
