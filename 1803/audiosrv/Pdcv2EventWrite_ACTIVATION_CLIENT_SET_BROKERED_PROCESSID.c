/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID @ 0x1800652E8
 * Callers:
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x180065238 (Pdcv2ActivationClientSetBrokeredProcessId.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqxqqqpqzr13 @ 0x180005CD0 (McTemplateU0qqzr1qzr3qqqxqqqpqzr13.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_SET_BROKERED_PROCESSID(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v3; // esi
  const WCHAR *v4; // rbp
  __int64 v5; // rdi
  int v7; // r12d
  ULONGLONG v8; // r10
  int v9; // r11d
  int v10; // r13d
  char v11; // r8
  const WCHAR *v12; // r14
  const WCHAR *v13; // r15
  ULONGLONG TickCount64; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // [rsp+D0h] [rbp+8h]

  LOBYTE(v3) = -1;
  v4 = &word_180133238;
  v5 = -1LL;
  LOBYTE(v7) = -1;
  LOBYTE(v8) = -1;
  LOBYTE(v9) = 0;
  v10 = -1;
  v11 = -1;
  v12 = &word_180133238;
  v13 = &word_180133238;
  if ( a2 )
  {
    v10 = a2[6];
    v4 = (const WCHAR *)(a2 + 23);
    v7 = a2[55];
    v3 = a2[56];
  }
  if ( a1 )
  {
    v13 = (const WCHAR *)(a1 + 72);
    v18 = *(_DWORD *)(a1 + 52);
    v12 = (const WCHAR *)(a1 + 328);
    TickCount64 = GetTickCount64();
    v15 = *(unsigned int *)(a1 + 64);
    v8 = TickCount64 - *(_QWORD *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 584);
    v11 = v18;
  }
  else
  {
    v15 = 0xFFFFFFFFLL;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v4[v16] );
    v17 = -1LL;
    do
      ++v17;
    while ( v12[v17] );
    do
      ++v5;
    while ( v13[v5] );
    McTemplateU0qqzr1qzr3qqqxqqqpqzr13(
      a3,
      v15,
      v10,
      v5,
      (__int64)v13,
      v17,
      (__int64)v12,
      v11,
      v3,
      v7,
      v8,
      v15,
      v9,
      a3,
      a1,
      v16,
      (__int64)v4);
  }
}
