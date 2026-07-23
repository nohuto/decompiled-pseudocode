/*
 * XREFs of sub_18002FF94 @ 0x18002FF94
 * Callers:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall sub_18002FF94(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  PIMAGE_NT_HEADERS v9; // r13
  int i; // r8d
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-38h]
  char v14; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v14 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&stru_18015C3B0);
  for ( i = dword_18015A268 - 1; i >= 0; --i )
  {
    if ( *((_QWORD *)BaseAddress + 9 * i + 1) == DllHandle )
    {
      if ( *((_DWORD *)BaseAddress + 18 * i + 6) != v9->OptionalHeader.CheckSum )
      {
        v14 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *((_QWORD *)BaseAddress + 9 * i + 2) )
        {
          _mm_lfence();
          v8 = (_DWORD *)*((_QWORD *)BaseAddress + 9 * i + 2);
          v13 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v14 = 1;
            v8 = 0LL;
            v13 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *((_WORD *)BaseAddress + 36 * i) == a2 )
      {
        v8 = (_DWORD *)*((_QWORD *)BaseAddress + 9 * i + 4);
        v13 = v8;
        if ( a3 )
          *a3 = *((_QWORD *)BaseAddress + 9 * i + 6);
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(&stru_18015C3B0);
  if ( v14 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v8;
}
