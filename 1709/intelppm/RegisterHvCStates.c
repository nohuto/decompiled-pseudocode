/*
 * XREFs of RegisterHvCStates @ 0x1C002AE28
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002B510 (RegisterHvIdleStates.c)
 *     RegisterHvPepIdleStatesV2 @ 0x1C002B9A4 (RegisterHvPepIdleStatesV2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     DecodeAcpiIdleState @ 0x1C0003868 (DecodeAcpiIdleState.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rdi
  __int64 *PoolWithTag; // rax
  int v5; // ebx
  unsigned __int8 v6; // r15
  unsigned int v7; // edx
  unsigned int i; // ebx
  __int64 v9; // r10
  char v10; // cl
  __int64 j; // r8
  char v12; // cl
  __int64 v13; // rdx
  int v14; // eax
  unsigned int *v16; // [rsp+20h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-48h]
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  int v20; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 496);
  v3 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    goto LABEL_34;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x188uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x188uLL);
  v18[1] = v3;
  v18[0] = 0LL;
  v6 = 1;
  HIDWORD(v18[0]) = *(_DWORD *)(a1 + 48);
  LODWORD(v18[0]) = 52;
  if ( *(_BYTE *)(v1 + 16) != 1 )
  {
    *(__int64 *)((char *)v3 + 20) = 0LL;
    *((_DWORD *)v3 + 4) = 1;
    v19[1] = 0x100000000LL;
    v19[0] = 127LL;
    v20 = 0;
    DecodeAcpiIdleState(a1, (char *)v19, 1u, 0LL, v3 + 1, 0LL, 0LL, 0LL);
    ++*(_DWORD *)v3;
  }
  v7 = *(_DWORD *)v1;
  for ( i = 0; i < *(_DWORD *)v1; ++v6 )
  {
    if ( v6 > 3u )
      break;
    v9 = *(unsigned int *)v3;
    if ( (unsigned int)v9 >= 0x10 )
      break;
    v10 = *(_BYTE *)(v1 + 20LL * i + 16);
    if ( (unsigned __int8)v10 > 3u )
      v10 = 3;
    if ( v10 == v6 )
    {
      for ( j = i + 1; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
      {
        v12 = *(_BYTE *)(v1 + 20 * j + 16);
        if ( (unsigned __int8)v12 > 3u )
          v12 = 3;
        if ( v12 != v6 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
          break;
        ++i;
      }
      v16 = (unsigned int *)&v3[2 * v9 + 1 + v9];
      v16[2] = v6;
      v13 = v1 + 4 * (i + 4LL * i + 1);
      v16[3] = *(unsigned __int16 *)(v13 + 14);
      v16[4] = *(_DWORD *)(v13 + 16);
      if ( (int)DecodeAcpiIdleState(a1, (char *)v13, *(unsigned __int8 *)(v13 + 12), 0LL, (__int64 *)v16, 0LL, 0LL, 0LL) < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
      else
        ++*(_DWORD *)v3;
    }
    else
    {
      --i;
    }
    v7 = *(_DWORD *)v1;
    ++i;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( qword_1C0019848 )
      v14 = qword_1C0019848(v18);
    else
      v14 = -1073741822;
    v5 = 0;
    if ( v14 != -1073741637 )
      v5 = v14;
    if ( v5 >= 0 )
    {
      v5 = 0;
    }
    else
    {
      LODWORD(v17) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
        v17);
    }
  }
  else
  {
LABEL_34:
    v5 = -1073741823;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
