/*
 * XREFs of MmGetEnclaveModuleList @ 0x140264A80
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x140285918 (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *PoolWithTag; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  void *v10; // rsi
  __int64 *v12; // rdi
  unsigned int v13; // ecx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v17);
  v9 = 0;
  v10 = (void *)v5;
  if ( !v5 )
    return v17;
  if ( (*(_DWORD *)(v5 + 48) & 0x10000) == 0 || (*(_DWORD *)(v5 + 64) & 1) != 0 )
  {
    v9 = -1073741800;
  }
  else
  {
    v12 = (__int64 *)(v5 + 80);
    v13 = 0;
    v14 = *(__int64 **)(v5 + 80);
    while ( v14 != v12 )
    {
      if ( v13 == -1 )
        goto LABEL_12;
      v14 = (__int64 *)*v14;
      ++v13;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * v13, 0x4C4D4556u);
    if ( !PoolWithTag )
    {
LABEL_12:
      v9 = -1073741670;
      goto LABEL_16;
    }
    v6 = *v12;
    v8 = 0LL;
    while ( (__int64 *)v6 != v12 )
    {
      v15 = (unsigned int)v8;
      v8 = (unsigned int)(v8 + 1);
      v16 = 3 * v15;
      PoolWithTag[v16] = *(_QWORD *)(v6 + 16);
      PoolWithTag[v16 + 1] = *(_QWORD *)(v6 + 24);
      LODWORD(PoolWithTag[v16 + 2]) = *(_DWORD *)(v6 + 36);
      HIDWORD(PoolWithTag[v16 + 2]) = *(_DWORD *)(v6 + 40);
      v6 = *(_QWORD *)v6;
    }
    *a2 = PoolWithTag;
    *a3 = v8;
  }
LABEL_16:
  MiUnlockAndDereferenceVad(v10, v6, (__int64)PoolWithTag, v8);
  return v9;
}
