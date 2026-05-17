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

_DWORD *__fastcall sub_18002FF94(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  __int64 v9; // r13
  int i; // r8d
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v13; // [rsp+30h] [rbp-38h]
  char v14; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v14 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v12 = 0LL;
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v12);
  v9 = v12;
  if ( !v12 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&qword_18015C3B0);
  for ( i = dword_18015A268 - 1; i >= 0; --i )
  {
    if ( *(_QWORD *)(qword_18015A260 + 72LL * i + 8) == a1 )
    {
      if ( *(_DWORD *)(qword_18015A260 + 72LL * i + 24) != *(_DWORD *)(v9 + 88) )
      {
        v14 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(qword_18015A260 + 72LL * i + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(qword_18015A260 + 72LL * i + 16);
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
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(qword_18015A260 + 72LL * i) == a2 )
      {
        v8 = *(_DWORD **)(qword_18015A260 + 72LL * i + 32);
        v13 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)(qword_18015A260 + 72LL * i + 48);
        break;
      }
    }
  }
  RtlReleaseSRWLockShared(&qword_18015C3B0);
  if ( v14 )
    LdrUnloadAlternateResourceModuleEx(a1, 0);
  return v8;
}
