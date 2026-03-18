/*
 * XREFs of Bulk_Stage_DetermineSize @ 0x1C00302CC
 * Callers:
 *     Bulk_PrepareStage @ 0x1C002EC3C (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Bulk_Stage_DetermineSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  bool v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a2 + 104) - *(_DWORD *)(a2 + 112);
  if ( *(_DWORD *)(a2 + 76) == 3 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_DWORD *)(a1 + 4);
    if ( !*(_BYTE *)(v6 + 441) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
      v13[0] = 0LL;
      v13[1] = 0LL;
      v9 = *(_QWORD *)(a2 + 48);
      LODWORD(v13[0]) = 1;
      v12 = (*(_BYTE *)(v9 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, bool, _QWORD *))(*(_QWORD *)(v8 + 8) + 136LL))(
        v8,
        *(_QWORD *)(a3 + 48),
        0LL,
        v4,
        v12,
        v13);
      v10 = *(_DWORD *)(a1 + 8);
      if ( HIDWORD(v13[0]) > v10 )
      {
        v11 = (v10 << 12) - 4096;
        if ( v11 < v7 )
          v7 = v11;
      }
    }
    if ( v4 > v7 )
      v4 = v7;
  }
  *(_DWORD *)(a3 + 40) = v4;
}
