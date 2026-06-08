/*
 * XREFs of RegisterKernelCStates @ 0x1C0022540
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0007190 (DecodeAcpiIdleState.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

__int64 __fastcall RegisterKernelCStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  unsigned int v9; // edx
  unsigned int i; // esi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  char v20; // al
  unsigned int v21; // ecx
  _QWORD *v23; // [rsp+38h] [rbp-48h]
  char v24[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  _QWORD v28[2]; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 496);
  v4 = 0;
  v25 = a1;
  v7 = a1;
  if ( v3 && *(_DWORD *)v3 )
  {
    *(_BYTE *)(a2 + 18) = 0;
    *(_QWORD *)(a2 + 24) = AcpiCStateIdlePrepare;
    v8 = 1;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)(a2 + 80) = AcpiCStateIdleExecute;
    *(_QWORD *)(a2 + 88) = AcpiCStateIdleCancel;
    *(_QWORD *)(a2 + 32) = AcpiCStateIdleCancel;
    *(_QWORD *)(a2 + 96) = AcpiCStateIsHalted;
    *(_QWORD *)(a2 + 104) = AcpiCStateIsHalted;
    *(_BYTE *)(a2 + 16) = 0;
    *(_DWORD *)(a3 + 56) = 0;
    v24[0] = 0;
    if ( *(_BYTE *)(v3 + 16) != 1 )
    {
      v29 = 0;
      v28[1] = 0x100000000LL;
      v28[0] = 127LL;
      DecodeAcpiIdleState(a1, (char *)v28, 1u, 0LL, 0LL, v24, 0LL, a3 + 64);
      v8 = 2;
      *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0x7FFFFF80 | ((unsigned __int8)v24[0] << 31) | 0xF;
      *(_DWORD *)(a2 + 116) = 1;
      *(_DWORD *)(a3 + 56) = 1;
    }
    v9 = *(_DWORD *)v3;
    for ( i = 0; i < *(_DWORD *)v3; ++v8 )
    {
      if ( v8 > 3u )
        break;
      v11 = *(unsigned __int8 *)(v3 + 20LL * i + 16);
      if ( v11 > 3 )
        v11 = 3;
      if ( v11 == v8 )
      {
        v12 = i + 1;
        if ( (unsigned int)v12 < v9 )
        {
          do
          {
            v13 = *(unsigned __int8 *)(v3 + 20 * v12 + 16);
            if ( v13 > 3 )
              v13 = 3;
            if ( v13 != v8 )
              break;
            if ( *(_DWORD *)(v3 + 20 * v12 + 20) >= *(_DWORD *)(v3 + 20 * (i + 1LL)) )
              break;
            ++i;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < v9 );
          v7 = v25;
        }
        v14 = *(unsigned int *)(a2 + 116);
        v26 = 32 * v14;
        v23 = (_QWORD *)(88 * v14 + a3 + 64);
        v15 = v3 + 4 * (i + 4LL * i + 1);
        *v23 = v15;
        v16 = *(unsigned __int8 *)(v15 + 12);
        v27 = v15;
        if ( (int)DecodeAcpiIdleState(v7, (char *)v15, v16, 0LL, 0LL, v24, 0LL, (__int64)v23) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1080), 8u);
        }
        else
        {
          v17 = v26;
          v18 = v27;
          v19 = *(_DWORD *)(v26 + a2 + 120) ^ (*(_DWORD *)(v26 + a2 + 120) ^ (8 * v8)) & 0x78 | 7;
          *(_DWORD *)(v26 + a2 + 120) = v19;
          *(_DWORD *)(v17 + a2 + 120) = v19 & 0x7FFFFFFF | ((unsigned __int8)v24[0] << 31);
          *(_DWORD *)(v17 + a2 + 124) = 10 * *(unsigned __int16 *)(v18 + 14);
          *(_DWORD *)(v17 + a2 + 132) = *(_DWORD *)(v18 + 16);
          ++*(_DWORD *)(a2 + 116);
          ++*(_DWORD *)(a3 + 56);
        }
      }
      else
      {
        --i;
      }
      v9 = *(_DWORD *)v3;
      ++i;
    }
    v20 = *(_BYTE *)(a3 + 56);
    v21 = 0;
    *(_BYTE *)(a3 + 20) = v20;
    if ( v20 )
    {
      do
      {
        *(_BYTE *)(v21 + a3 + 21) = v21;
        ++v21;
      }
      while ( v21 < *(unsigned __int8 *)(a3 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
