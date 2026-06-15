/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1800DFAB8
 * Callers:
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13q @ 0x1800DF4B4 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13q.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(__int64 a1, _DWORD *a2, unsigned int a3, char a4)
{
  int v4; // ebp
  const WCHAR *v5; // rsi
  __int64 v6; // rdi
  int v8; // r12d
  ULONGLONG v9; // r10
  int v10; // r11d
  int v11; // r13d
  char v12; // r8
  const WCHAR *v13; // r14
  const WCHAR *v14; // r15
  ULONGLONG TickCount64; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // [rsp+D0h] [rbp+8h]

  LOBYTE(v4) = -1;
  v5 = &word_180104218;
  v6 = -1LL;
  LOBYTE(v8) = -1;
  LOBYTE(v9) = -1;
  LOBYTE(v10) = 0;
  v11 = -1;
  v12 = -1;
  v13 = &word_180104218;
  v14 = &word_180104218;
  if ( a2 )
  {
    v11 = a2[6];
    v5 = (const WCHAR *)(a2 + 23);
    v8 = a2[55];
    v4 = a2[56];
  }
  if ( a1 )
  {
    v14 = (const WCHAR *)(a1 + 72);
    v19 = *(_DWORD *)(a1 + 52);
    v13 = (const WCHAR *)(a1 + 328);
    TickCount64 = GetTickCount64();
    v16 = *(unsigned int *)(a1 + 64);
    v9 = TickCount64 - *(_QWORD *)(a1 + 40);
    v10 = *(_DWORD *)(a1 + 584);
    v12 = v19;
  }
  else
  {
    v16 = 0xFFFFFFFFLL;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v5[v17] );
    v18 = -1LL;
    do
      ++v18;
    while ( v13[v18] );
    do
      ++v6;
    while ( v14[v6] );
    McTemplateU0qqzr1qzr3qqqxqqqpqzr13q(
      a3,
      v16,
      v11,
      v6,
      (__int64)v14,
      v18,
      (__int64)v13,
      v12,
      v4,
      v8,
      v9,
      v16,
      a3,
      a4,
      a1,
      v17,
      (__int64)v5,
      v10);
  }
}
