/*
 * XREFs of SeSecureBootRegisterPolicy @ 0x140823478
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x1408233B0 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepSecureBootSetRegistryKey @ 0x140823554 (SepSecureBootSetRegistryKey.c)
 *     SepSecureBootBuildRules @ 0x1408354E0 (SepSecureBootBuildRules.c)
 *     SepSecureBootCheckForUpdates @ 0x140835554 (SepSecureBootCheckForUpdates.c)
 */

__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  int v7; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rbp
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  __int64 v14; // rcx

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10
    || (v4 = *(_DWORD *)(BugCheckParameter2 + 8), v5 = *(_DWORD *)(BugCheckParameter2 + 12), (v4 == 0) != (v5 == 0))
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    v7 = -1069350909;
    goto LABEL_26;
  }
  v6 = 0LL;
  g_SecureBootPolicyBlobHeader = *(_OWORD *)BugCheckParameter2;
  qword_14036EFF8 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey(v6);
  if ( (dword_14036EFEC & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( !v6 )
    return 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  *(unsigned int *)(BugCheckParameter2 + 12),
                                  0x62536553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    v7 = -1073741670;
    goto LABEL_27;
  }
  memmove(PoolWithTag, v6, *(unsigned int *)(BugCheckParameter2 + 12));
  qword_140387F50 = v10;
  if ( v6[18] || v6[19] )
  {
    qword_14038C450 = (__int64)v10 + v10[13] + 60;
    v7 = SepSecureBootBuildRules();
    if ( v7 < 0 )
      goto LABEL_27;
    if ( *(_DWORD *)BugCheckParameter2 < 2u )
      goto LABEL_26;
    v11 = *(_DWORD *)(BugCheckParameter2 + 20);
    if ( !v11 )
      goto LABEL_26;
    if ( v11 + *(_DWORD *)(BugCheckParameter2 + 16) > (unsigned int)v2 )
    {
      v7 = -1069350909;
      goto LABEL_27;
    }
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(BugCheckParameter2 + 20), 0x62536553u);
    v13 = v12;
    if ( v12 )
    {
      memmove(
        v12,
        (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
        *(unsigned int *)(BugCheckParameter2 + 20));
      v14 = 276LL * *(unsigned int *)v13;
      v13[1] = v13 + 3;
      g_SecureBootActivePlatformManifest = v13;
      v13[2] = (char *)v13 + v14 + 24;
      LODWORD(g_SecureBootActivePlatformManifestSize) = *(_DWORD *)(BugCheckParameter2 + 20);
LABEL_26:
      if ( v7 >= 0 )
        return (unsigned int)v7;
LABEL_27:
      if ( qword_140387F50 )
      {
        ExFreePoolWithTag(qword_140387F50, 0);
        qword_140387F50 = 0LL;
      }
      KeBugCheckEx(0x145u, v7, BugCheckParameter2, v2, 0LL);
    }
    goto LABEL_23;
  }
  return 0;
}
