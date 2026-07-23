/*
 * XREFs of sub_180012070 @ 0x180012070
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180012010 @ 0x180012010 (sub_180012010.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_180083574 @ 0x180083574 (sub_180083574.c)
 * Callees:
 *     sub_180011630 @ 0x180011630 (sub_180011630.c)
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

__int64 __fastcall sub_180012070(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // eax
  char v6; // cl
  unsigned int v8; // esi
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r11
  int v12; // r9d
  unsigned int v13; // eax
  unsigned __int64 v14; // r14
  int v15; // ecx
  unsigned __int64 v16; // r14
  int v17; // r8d
  unsigned int v18; // r15d
  int v19; // r10d
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  char v25; // cl
  __int128 v26; // xmm0
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  bool v29; // cf
  ULONG v30; // eax
  __int64 result; // rax
  unsigned __int64 v32; // rbx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  int v35; // eax
  unsigned int v36; // edx
  unsigned int v37; // ecx
  __int64 v38[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v39; // [rsp+90h] [rbp+40h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+48h] BYREF
  int v41; // [rsp+A0h] [rbp+50h] BYREF
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a4 - 1;
  v6 = *(_BYTE *)(a1 + 9);
  v8 = 1 << v6;
  v9 = (unsigned __int64)a3 >> v6;
  v10 = v9 << v6;
  v11 = a2 + 32 * v9;
  v12 = a3 & ((1 << v6) - 1);
  v13 = v12 + v4;
  v14 = (unsigned __int64)v13 >> v6;
  v15 = 0;
  v16 = v11 + 32 * v14;
  v17 = -1;
  v18 = (v13 & (v8 - 1)) + 1;
  v19 = -1;
  if ( v12 )
  {
    v36 = *(unsigned __int8 *)(v11 + 25);
    v37 = v8;
    if ( v11 == v16 )
      v37 = (v13 & (v8 - 1)) + 1;
    if ( v36 < v37 )
    {
      v17 = v36 + v10;
      v19 = v10 + v37;
    }
    v11 += 32LL;
    v15 = v36 < v37 ? v37 - v36 : 0;
    LODWORD(v10) = v8 + v10;
  }
  while ( v11 < v16 )
  {
    v20 = *(unsigned __int8 *)(v11 + 25);
    v21 = 0;
    if ( v20 < v8 )
    {
      v19 = v8 + v10;
      v21 = v8 - v20;
      v35 = v10 + v20;
      if ( v17 != -1 )
        v35 = v17;
      v17 = v35;
    }
    v15 += v21;
    LODWORD(v10) = v8 + v10;
    v11 += 32LL;
  }
  if ( v11 == v16 )
  {
    v22 = *(unsigned __int8 *)(v11 + 25);
    v23 = 0;
    if ( v22 < v18 )
    {
      v19 = v18 + v10;
      v23 = v18 - v22;
      v24 = v10 + v22;
      if ( v17 != -1 )
        v24 = v17;
      v17 = v24;
    }
    v15 += v23;
  }
  if ( v15 )
  {
    v25 = *(_BYTE *)(a1 + 8);
    v26 = *(_OWORD *)(a1 + 96);
    v27 = a2 & *(_QWORD *)a1;
    v41 = v17;
    v42 = v19 - v17;
    BaseAddress = (PVOID)(v27 + ((a2 - v27) >> 5 << v25) + (unsigned int)(v17 << 12));
    v28 = *(_DWORD **)(a1 + 112);
    v39 = (unsigned int)((v19 - v17) << 12);
    v29 = (v28[5] & 0x40000000) != 0;
    *(_OWORD *)v38 = v26;
    v30 = sub_180011A6C(v28, v29 ? 64 : 4);
    result = sub_18001182C(&BaseAddress, &v39, 0, 4096, v30, (__int128 *)v38, 0LL);
    if ( (int)result < 0 )
      return result;
    v32 = (int)sub_180011630(a1, a2, &v41, &v42, 1);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), v32);
    if ( (byte_18015D028 & 8) != 0 )
      sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
    *(_DWORD *)(a2 + 28) ^= (*(_DWORD *)(a2 + 28) ^ (~((_DWORD)v32 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(*(_QWORD *)(a1 + 112), BaseAddress, v39, 10LL);
  }
  return 0LL;
}
