/*
 * XREFs of PfSnCleanupTrace @ 0x140454B38
 * Callers:
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     PfSnEndTrace @ 0x140454934 (PfSnEndTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnCleanupTrace(__int64 a1)
{
  char v1; // si
  unsigned __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  char v9; // al
  void *v10; // rcx
  __int64 **v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rax
  void *v14; // rcx
  void *v15; // rcx

  v1 = *(_BYTE *)(a1 + 528);
  v3 = *(_QWORD *)(a1 + 520);
  v4 = v1 & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v3 )
        {
          v8 = (_QWORD *)v3;
          if ( v4 )
            v3 ^= *(_QWORD *)v3;
          else
            v3 = *(_QWORD *)v3;
          *v8 = 0LL;
        }
        v5 = *(_QWORD *)(v3 + 8);
        if ( !v5 )
          break;
        v7 = v3;
        if ( v4 )
          v3 ^= v5;
        else
          v3 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v7 + 8) = 0LL;
      }
      v6 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v6 )
        v6 ^= v3;
      ExFreePoolWithTag((PVOID)v3, 0);
      if ( !v6 )
        break;
      v3 = v6;
    }
  }
  v9 = *(_BYTE *)(a1 + 528);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(a1 + 528) |= 1u;
  v10 = *(void **)(a1 + 584);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (__int64 **)(a1 + 104);
  while ( *v11 != (__int64 *)v11 )
  {
    v12 = *v11;
    if ( (__int64 **)(*v11)[1] != v11 || (v13 = (__int64 *)*v12, *(__int64 **)(*v12 + 8) != v12) )
      __fastfail(3u);
    *v11 = v13;
    v13[1] = (__int64)v11;
    --*(_DWORD *)(a1 + 120);
    ExFreePoolWithTag(v12, 0);
  }
  v14 = *(void **)(a1 + 472);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 352);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x73576650u);
  if ( (*(_BYTE *)(a1 + 486) & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_14038D3E0);
}
