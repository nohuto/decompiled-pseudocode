/*
 * XREFs of ndisOidPostMiniportStats @ 0x1C00486E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C0023604 (ndisIsSatisfiedByOidGenStatistics.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 */

void __fastcall ndisOidPostMiniportStats(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int *v2; // r11
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v4; // r8
  int v5; // r9d
  __int64 v6; // r11
  unsigned int v7; // edi
  __int64 *p_Src; // rdx
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(unsigned int **)(v1 + 144);
  if ( v2 )
  {
    if ( *(_DWORD *)(v1 + 32) != 131334 || !*v2 )
      goto LABEL_13;
    IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(*v2);
    v7 = *(_DWORD *)(v6 + 16) < 8u ? 4 : 8;
    if ( !IsSatisfiedByOidGenStatistics || *(_DWORD *)(v4 + 40) )
    {
      if ( v5 != 131333 || *(_DWORD *)(v4 + 40) )
      {
        *(_DWORD *)(v1 + 52) = 0;
        goto LABEL_12;
      }
      ndisIsSatisfiedByOidGenStatistics(0x2021Bu);
      v9 = ndisIsSatisfiedByOidGenStatistics(0x20104u);
      p_Src = &Src;
      Src = *(_QWORD *)(v10 + v11) - *(_QWORD *)(v9 + v11);
    }
    else
    {
      p_Src = (__int64 *)(*(_QWORD *)(v1 + 40) + IsSatisfiedByOidGenStatistics);
    }
    memmove(*(void **)(v6 + 8), p_Src, v7);
    *(_DWORD *)(v1 + 52) = v7;
LABEL_12:
    ExFreePoolWithTag(*(PVOID *)(v1 + 40), 0);
    *(_QWORD *)(v1 + 40) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8LL);
    *(_DWORD *)(v1 + 48) = *(_DWORD *)(*(_QWORD *)(v1 + 144) + 16LL);
    *(_DWORD *)(v1 + 32) = **(_DWORD **)(v1 + 144);
LABEL_13:
    ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    *(_QWORD *)(v1 + 144) = 0LL;
  }
}
