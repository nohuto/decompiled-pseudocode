/*
 * XREFs of sub_1800389A8 @ 0x1800389A8
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 *     sub_180086714 @ 0x180086714 (sub_180086714.c)
 *     sub_1800888F8 @ 0x1800888F8 (sub_1800888F8.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 */

__int64 __fastcall sub_1800389A8(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rbx
  char v18; // al
  int v19; // r8d
  int v20; // r9d
  USHORT *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  DWORD v25; // [rsp+88h] [rbp+20h] BYREF

  if ( (NtCurrentPeb()->BitField & 0x20) == 0 && (*(_WORD *)(a2 + 94) & 0x1000) != 0 )
  {
    return (unsigned int)-1073700352;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = 0;
    v8 = sub_180032C0C(*(_QWORD *)(v6 + 48), 1, 0xEu, &v25, (char **)&v24);
    v9 = v24;
    if ( v8 < 0 )
      v9 = 0LL;
    v24 = v9;
    if ( !v9
      || (*(_DWORD *)(v6 + 104) |= 0x400000u, (*(_BYTE *)(v9 + 16) & 1) == 0)
      || (v11 = *(_QWORD *)(v6 + 48), *(_DWORD *)(v6 + 104) |= 0x1000000u, v7 = sub_1800888F8(v11), v7 >= 0)
      && ((*(_DWORD *)(a1 + 24) & 0x200000) == 0 || (v7 = sub_1800900A4(*(_QWORD *)(v6 + 48)), v7 >= 0)) )
    {
      if ( (*(_WORD *)(a2 + 22) & 0x2000) != 0 )
      {
        if ( *(char *)(*(_QWORD *)(v6 + 176) + 24LL) >= 0 || *(char *)(a2 + 94) < 0 )
        {
          if ( (*(_DWORD *)(v6 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
          {
            v12 = *(_QWORD *)(v6 + 48);
            v13 = 2147353476LL;
            if ( RtlGetCurrentServiceSessionId() )
              v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
            else
              v14 = 2147353476LL;
            v15 = 2147353477LL;
            if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
            {
              v21 = RtlGetCurrentServiceSessionId()
                  ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
                  : (USHORT *)2147353477;
              if ( (*(_BYTE *)v21 & 0x20) != 0 )
              {
                LOBYTE(v20) = -1;
                LOBYTE(v19) = -1;
                sub_1800D62F0(5264, v12, v19, v20, 0LL, 0LL);
              }
            }
            if ( a3 == 1073741827 && (v16 = sub_180086714(*(PVOID *)(v6 + 48)), v7 = v16, v16 < 0) )
            {
              sub_180084734((unsigned int)v16, 5264LL, 0LL, v6 + 72);
            }
            else
            {
              v17 = *(_QWORD *)(v6 + 48);
              if ( RtlGetCurrentServiceSessionId() )
                v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
              if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
              {
                if ( RtlGetCurrentServiceSessionId() )
                  v15 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
                if ( (*(_BYTE *)v15 & 0x20) != 0 )
                {
                  LOBYTE(v23) = -1;
                  LOBYTE(v22) = -1;
                  sub_1800D62F0(5265, v17, v22, v23, 0LL, 0LL);
                }
              }
            }
          }
        }
        else
        {
          v18 = dword_180155A10;
          if ( (dword_180155A10 & 3) != 0 )
          {
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrmap.c",
              765,
              (unsigned int)"LdrpCompleteMapModule",
              0,
              "Could not validate the crypto signature for DLL %wZ\n",
              v6 + 72,
              v24);
            v18 = dword_180155A10;
          }
          if ( (v18 & 0x10) != 0 )
            __debugbreak();
          return (unsigned int)-1073740760;
        }
      }
      else
      {
        *(_DWORD *)(v6 + 104) &= ~4u;
      }
    }
  }
  return (unsigned int)v7;
}
