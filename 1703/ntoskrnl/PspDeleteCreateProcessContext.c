/*
 * XREFs of PspDeleteCreateProcessContext @ 0x14054168C
 * Callers:
 *     NtCreateThreadEx @ 0x140541434 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x140542C84 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

void __fastcall PspDeleteCreateProcessContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  unsigned __int64 i; // rdi
  void *v16; // rcx
  void *v17; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(void **)(a1 + 176);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *(void **)(a1 + 152);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 128);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 184);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 192);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(void **)(a1 + 200);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0);
  v9 = *(void **)(a1 + 280);
  if ( v9 && v9 != (void *)(a1 + 264) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 296);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( *(_QWORD *)(a1 + 392) )
  {
    for ( i = 0LL; i < *(unsigned int *)(a1 + 404); ++i )
    {
      v16 = *(void **)(*(_QWORD *)(a1 + 392) + 8 * i);
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x6C4A7350u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 392), 0x6C4A7350u);
  }
  v11 = *(void **)(a1 + 384);
  if ( v11 )
  {
    memset(v11, 0, *(unsigned int *)(a1 + 400));
    ExFreePoolWithTag(*(PVOID *)(a1 + 384), 0);
  }
  v12 = *(void **)(a1 + 416);
  if ( v12 )
  {
    memset(v12, 0, *(unsigned int *)(a1 + 424));
    ExFreePoolWithTag(*(PVOID *)(a1 + 416), 0);
  }
  v13 = *(_QWORD *)(a1 + 432);
  if ( v13 )
  {
    v17 = *(void **)(v13 + 8);
    if ( v17 || (v17 = *(void **)(v13 + 24)) != 0LL )
      ExFreePoolWithTag(v17, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 432), 0);
  }
  v14 = *(void **)(a1 + 464);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 464) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 232));
}
