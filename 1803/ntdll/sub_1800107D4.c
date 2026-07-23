/*
 * XREFs of sub_1800107D4 @ 0x1800107D4
 * Callers:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall sub_1800107D4(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int v10; // r8d
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v16 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&stru_18015D3E8);
  v10 = dword_18015B2A0 - 1;
  v13 = dword_18015B2A0 - 1;
  while ( v10 >= 0 )
  {
    v11 = (__int64)v10 << 6;
    if ( *(_QWORD *)((char *)BaseAddress + v11 + 8) == DllHandle )
    {
      if ( *(_DWORD *)((char *)BaseAddress + v11 + 24) != v9->OptionalHeader.CheckSum )
      {
        v16 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)((char *)BaseAddress + v11 + 16) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)BaseAddress + 8 * (__int64)v13 + 2);
          v15 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v16 = 1;
            v8 = 0LL;
            v15 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)((char *)BaseAddress + v11) == a2 )
      {
        v8 = *(_DWORD **)((char *)BaseAddress + v11 + 32);
        v15 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)((char *)BaseAddress + v11 + 48);
        break;
      }
    }
    v13 = --v10;
  }
  RtlReleaseSRWLockShared(&stru_18015D3E8);
  if ( v16 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v8;
}
