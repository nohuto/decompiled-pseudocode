/*
 * XREFs of ndisPostSetAddWakeUpPattern @ 0x1C004C8B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMiniportPostAddWOLPattern @ 0x1C001F478 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostAddWakeUpPattern @ 0x1C004BA04 (ndisMiniportPostAddWakeUpPattern.c)
 */

void __fastcall ndisPostSetAddWakeUpPattern(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // al
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  void *v10; // rbx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  PVOID *v14; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(v1 + 88);
  if ( (v6 & 0x40000) == 0 && (v6 & 0x80000) == 0 )
  {
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( v4 )
      {
        v7 = *(_BYTE *)(v4 + 32);
        if ( v7 <= 6u && (v7 != 6 || *(_BYTE *)(v4 + 33) < 0x14u) )
        {
          ndisMiniportPostAddWakeUpPattern(v4, v1);
          goto LABEL_15;
        }
        ndisMiniportPostAddWOLPattern(v4, v1);
      }
      else
      {
        if ( !v5 )
          goto LABEL_15;
        v8 = *(_QWORD *)(v5 + 16);
        v9 = *(_BYTE *)(v8 + 100);
        if ( v9 <= 6u && (v9 != 6 || *(_BYTE *)(v8 + 101) < 0x14u) )
          goto LABEL_15;
      }
      v10 = *(void **)(v1 + 144);
      *(_DWORD *)(v1 + 152) = *(_DWORD *)(*((_QWORD *)v10 + 3) + 148LL);
      ExFreePoolWithTag(*((PVOID *)v10 + 3), 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v10;
      *(_QWORD *)(v1 + 40) = *((_QWORD *)v10 + 1);
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v10 + 4);
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
LABEL_15:
      if ( *(_QWORD *)(a1 + 24) )
      {
        v11 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v11 + 40) = *(_DWORD *)(v1 + 152);
        *(_QWORD *)v11 = *(_QWORD *)(v3 + 496);
        *(_QWORD *)(v3 + 496) = v11;
      }
      return;
    }
    if ( v3 )
    {
      v12 = *(void **)(v1 + 160);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    if ( *(_QWORD *)a1 )
    {
      v13 = *(void **)(v4 + 192);
      *(_QWORD *)(v4 + 192) = 0LL;
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    v14 = *(PVOID **)(v1 + 144);
    if ( v14 )
    {
      ExFreePoolWithTag(v14[3], 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v14;
      *(_QWORD *)(v1 + 40) = v14[1];
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v14 + 4);
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    *(_DWORD *)(v1 + 152) = 0;
  }
}
