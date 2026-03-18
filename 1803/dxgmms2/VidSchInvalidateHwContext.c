/*
 * XREFs of VidSchInvalidateHwContext @ 0x1C0032560
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     McTemplateK0dp @ 0x1C0028AA8 (McTemplateK0dp.c)
 */

__int64 __fastcall VidSchInvalidateHwContext(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  bool IsLimitExhausted; // al
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v2 + 32);
  VidSchiMarkDeviceAsError(v2, 7);
  v6 = *(_QWORD *)(v4 + 1728);
  if ( v6 && (a2 & 1) == 0 )
  {
    v7 = *(_QWORD *)(v2 + 40);
    v8 = v7;
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
    {
      *(_QWORD *)(v6 + 2808) = *(_QWORD *)(v9 + 64);
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
      if ( v10 )
        v10 = *(_QWORD *)(v10 + 80);
      *(_QWORD *)(v6 + 96) = v10;
      v8 = *(_QWORD *)(v2 + 40);
    }
    if ( !*(_BYTE *)(v8 + 2624) )
    {
      v11 = *(_DWORD *)(v2 + 48);
      if ( (v11 & 8) == 0 && (v11 & 1) == 0 )
      {
        TdrHistoryUpdate((struct _TDR_HISTORY *)(v7 + 32), (const struct _TDR_RECOVERY_CONTEXT *)v6);
        IsLimitExhausted = TdrHistoryIsLimitExhausted(
                             (const struct _TDR_HISTORY *)(v7 + 32),
                             (const struct _TDR_RECOVERY_CONTEXT *)v6,
                             1);
        *(_BYTE *)(v6 + 2820) = IsLimitExhausted;
        if ( IsLimitExhausted )
        {
          v14 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
          v15 = *(_DWORD *)(v5 + 4) & 0x1F;
          *(_DWORD *)(*(_QWORD *)(v7 + 2616) + 4 * v14) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
          if ( bTracingEnabled )
          {
            if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0dp(v15, v14, v13, *(_DWORD *)(v5 + 4), *(_QWORD *)(v6 + 2808));
          }
        }
      }
    }
  }
  return 0LL;
}
