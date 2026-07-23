/*
 * XREFs of sub_18005DDCC @ 0x18005DDCC
 * Callers:
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 */

volatile signed __int64 *__fastcall sub_18005DDCC(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // rax
  ULONG_PTR v6; // r14
  int v7; // r9d
  __int64 v8; // r10
  int v9; // edi
  ULONG v10; // ebx
  __int64 UserModeGlobalLogger; // rcx
  volatile signed __int64 *v12; // rbx
  int v13; // esi
  ULONG_PTR v14; // rcx
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+50h] [rbp-19h] BYREF
  __int128 v18; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v20[2]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v21; // [rsp+90h] [rbp+27h]
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = *a3;
  BaseAddress = 0LL;
  v4 = 64LL;
  if ( a2 <= 0x40 )
    v4 = a2;
  v18 = v3;
  v6 = 4096LL;
  v23 = 4096LL;
  v17 = v3;
  RegionSize[0] = 129 * (((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 72 * v4)
                + 15192
                - ((129 * (((v4 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 72 * v4) + 15191) & 0xFFF)
                + 4095;
  if ( !*(_QWORD *)sub_18005DFE4(&v18) || (dword_180159760 & 8) != 0 || (v7 & 0x40000000) != 0 || BYTE2(v17) )
  {
    v9 = BYTE1(v17) < 2u ? 0x1000000 : 0;
    v10 = (v7 & 0x40000000) != 0 ? 64 : 4;
    *(_OWORD *)v19 = v3;
    if ( (int)sub_18001182C(&BaseAddress, RegionSize, 0, v9 | 0x2000u, v10, (__int128 *)v19, 0LL) < 0
      || (*(_OWORD *)v20 = *a3, (int)sub_18001182C(&BaseAddress, &v23, 0, v9 | 0x1000u, v10, (__int128 *)v20, 0LL) < 0) )
    {
      v12 = 0LL;
      goto LABEL_12;
    }
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v6 = v23;
      sub_1800FE0A4(BaseAddress, BaseAddress, v23, 11LL);
    }
    else
    {
      v6 = v23;
    }
    v12 = (volatile signed __int64 *)BaseAddress;
    v13 = 0;
    BaseAddress = 0LL;
LABEL_11:
    memset((void *)v12, 0, 0x6F0uLL);
    *((_QWORD *)v12 + 46) = v12 + 222;
    *((_QWORD *)v12 + 47) = (char *)v12 + v6;
    v14 = RegionSize[0];
    *((_DWORD *)v12 + 17) &= ~1u;
    *((_DWORD *)v12 + 17) |= v13;
    *((_QWORD *)v12 + 48) = (char *)v12 + v14;
    _InterlockedExchangeAdd64(v12 + 3, RegionSize[0] >> 12);
    _InterlockedExchangeAdd64(v12 + 4, v23 >> 12);
    goto LABEL_12;
  }
  v13 = 1;
  v17 = v3;
  v12 = (volatile signed __int64 *)sub_18005E238(v8, 4096LL, 1LL, &v17);
  if ( v12 )
    goto LABEL_11;
LABEL_12:
  if ( BaseAddress )
  {
    v21 = *a3;
    sub_1800624DC(&BaseAddress, RegionSize);
  }
  return v12;
}
