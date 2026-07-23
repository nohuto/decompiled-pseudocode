/*
 * XREFs of sub_18002C0DC @ 0x18002C0DC
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180082804 @ 0x180082804 (sub_180082804.c)
 *     sub_18008325C @ 0x18008325C (sub_18008325C.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 */

__int64 __fastcall sub_18002C0DC(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v7; // edi
  NTSTATUS v8; // eax
  char *v9; // rcx
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  char v20; // al
  int v21; // r8d
  int v22; // r9d
  USHORT *v23; // rcx
  int v24; // r8d
  int v25; // r9d
  DWORD v26; // [rsp+70h] [rbp+8h] BYREF
  char *v27; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = sub_18001014C(*(_QWORD *)(v3 + 48), 1, 0xEu, &v26, &v27);
  v9 = v27;
  if ( v8 < 0 )
    v9 = 0LL;
  v27 = v9;
  if ( !v9 )
    goto LABEL_4;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return (unsigned int)-1073741701;
  v11 = *(_DWORD *)(v3 + 104) | 0x400000;
  *(_DWORD *)(v3 + 104) = v11;
  if ( (v9[16] & 1) == 0
    || (v18 = *(_QWORD *)(v3 + 48),
        *(_DWORD *)(v3 + 104) = v11 | 0x1000000,
        v19 = sub_18008325C(v18),
        (v7 = v19, v19 >= 0)
     && ((*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = sub_1800CAFA8(*(_QWORD *)(v3 + 48)), v7 >= 0))) )
  {
LABEL_4:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
    {
      if ( *(char *)(*(_QWORD *)(v3 + 176) + 32LL) >= 0 || *(char *)(a2 + 94) < 0 )
      {
        if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
        {
          v12 = *(_QWORD *)(v3 + 48);
          v13 = 2147353476LL;
          if ( RtlGetCurrentServiceSessionId() )
            v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
          else
            v14 = 2147353476LL;
          v15 = 2147353477LL;
          if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v23 = RtlGetCurrentServiceSessionId()
                ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
                : (USHORT *)2147353477;
            if ( (*(_BYTE *)v23 & 0x20) != 0 )
            {
              LOBYTE(v22) = -1;
              LOBYTE(v21) = -1;
              sub_1800CBAB0(5264, v12, v21, v22, 0LL, 0LL);
            }
          }
          if ( a3 == 1073741827 && (v16 = sub_180082804(*(PVOID *)(v3 + 48)), v7 = v16, v16 < 0) )
          {
            sub_180043B30((unsigned int)v16, 5264LL, 0LL, v3 + 72);
          }
          else
          {
            v17 = *(_QWORD *)(v3 + 48);
            if ( RtlGetCurrentServiceSessionId() )
              v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
            if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
              if ( (*(_BYTE *)v15 & 0x20) != 0 )
              {
                LOBYTE(v25) = -1;
                LOBYTE(v24) = -1;
                sub_1800CBAB0(5265, v17, v24, v25, 0LL, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v20 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrmap.c",
            867,
            (unsigned int)"LdrpCompleteMapModule",
            0,
            "Could not validate the crypto signature for DLL %wZ\n",
            v3 + 72);
          v20 = dword_180156A70;
        }
        if ( (v20 & 0x10) != 0 )
          __debugbreak();
        return (unsigned int)-1073740760;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 104) &= ~4u;
    }
  }
  return (unsigned int)v7;
}
