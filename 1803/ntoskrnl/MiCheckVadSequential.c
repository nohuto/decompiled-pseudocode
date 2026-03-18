/*
 * XREFs of MiCheckVadSequential @ 0x14001EA00
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiCheckVadSequential(int *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r12d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // r13
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // r8d
  __int64 v12; // r10
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  int v16; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  char v20; // dl
  unsigned __int64 v21; // rax
  __int64 *v22; // r8
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  char v28; // r9
  unsigned int v29; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+18h]
  unsigned __int64 v32; // [rsp+88h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *((_QWORD *)a1 + 8);
  v5 = v1 & 0xFFFFFFFFFFFFF000uLL | 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = *(_DWORD *)(v4 + 48);
  do
  {
    while ( v7 < 0 )
    {
      if ( (v7 & 0x40000000) != 0 )
      {
        v30 = 0;
        do
        {
          KeYieldProcessorEx(&v30);
          v7 = *(_DWORD *)(v4 + 48);
        }
        while ( v7 < 0 );
      }
      else
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 | 0x40000000, v7);
      }
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v7 & 0x3FFFFFFF | 0x80000000, v7);
  }
  while ( v8 != v7 );
  v9 = *(_QWORD *)(v4 + 120);
  v10 = v9 & 0xFFF;
  v11 = *a1 | 0x20;
  v12 = *(_DWORD *)(v4 + 120) & 0xFFF;
  *a1 = v11;
  v13 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v9 & 0xFFFFFFFFFFFFF000uLL) + (v12 << 12);
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v14 )
  {
    if ( v10 == 4095 )
      v5 = (v9 + 4096) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v9 + 1) & 0xFFF;
    LOBYTE(v16) = v11;
  }
  else if ( v1 > v14 && (v15 = (v1 - v14) >> 12, v32 = v15, v15 < 8) )
  {
    v20 = v11;
    v21 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    v29 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    if ( v21 <= v15 )
    {
      if ( (_DWORD)v21 )
      {
        v20 = v11 & 0xDF;
        *a1 = v11 & 0xFFFFFFDF;
      }
    }
    else
    {
      LODWORD(v21) = (v1 - v14) >> 12;
      v29 = v21;
    }
    if ( (v20 & 0x20) == 0 )
      goto LABEL_10;
    v22 = (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
    v31 = (unsigned __int64)v22;
    if ( (_DWORD)v21 )
    {
      v23 = v29;
      while ( 1 )
      {
        v24 = *v22;
        if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x1800000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v24 & 1) != 0
            && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            v26 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v26 )
            {
              v27 = *(_QWORD *)(v26 + 8 * ((v31 >> 3) & 0x1FF));
              v28 = v24 | 0x20;
              if ( (v27 & 0x20) == 0 )
                v28 = *v22;
              LOBYTE(v24) = v28;
              if ( (v27 & 0x42) != 0 )
                LOBYTE(v24) = v28 | 0x42;
            }
          }
          v22 = (__int64 *)v31;
        }
        if ( (v24 & 1) == 0 || (v24 & 0x20) == 0 )
          break;
        v31 = (unsigned __int64)--v22;
        if ( !--v23 )
          goto LABEL_33;
      }
      if ( v23 )
      {
        *a1 &= ~0x20u;
        v16 = *a1;
        goto LABEL_9;
      }
LABEL_33:
      LODWORD(v15) = v32;
    }
    v25 = (unsigned int)(v15 + 1);
    if ( (unsigned __int64)(v10 + v25) > 0xFFF )
      v5 = (v9 + ((unsigned __int64)((unsigned int)v25 + (v9 & 0xFFF) - 4095) << 12)) | 0xFFF;
    else
      v5 = v13 | ((_WORD)v15 + 1 + (_WORD)v9) & 0xFFF;
    v16 = *a1;
  }
  else if ( v14
         || (LOBYTE(v16) = v11,
             v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))) )
  {
    LOBYTE(v16) = v11 & 0xDF;
    *a1 = v11 & 0xFFFFFFDF;
  }
LABEL_9:
  if ( (v16 & 0x20) == 0 )
  {
LABEL_10:
    *(_DWORD *)(v4 + 64) &= ~0x2000000u;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v4 + 64) & 0x2000000) != 0 )
  {
    v18 = v1;
    if ( v14 )
      v18 = v14 - 4096;
    v19 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    if ( (((v18 >> 12) - v19) >> 8) + 1 == ((v1 >> 12) - v19) >> 8 )
      v3 = -1073741280;
  }
LABEL_11:
  *(_QWORD *)(v4 + 120) = v5;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 48), 0x3FFFFFFFu);
  __writecr8(CurrentIrql);
  return v3;
}
