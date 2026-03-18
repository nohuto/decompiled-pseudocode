/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0012B08 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0097B48 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     memcmp @ 0x1C00A1480 (memcmp.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  RGNOBJ *v4; // rsi
  unsigned int *v5; // rdi
  int *v6; // r15
  _DWORD *v7; // r14
  int v8; // r8d
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  signed int v11; // r12d
  int *v12; // r13
  signed int v13; // ecx
  _DWORD *v14; // rbp
  int *v15; // r9
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // r8
  int v18; // r10d
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  signed int v22; // ecx
  signed int v23; // ecx
  signed int v24; // edx
  signed int v25; // ecx
  unsigned __int8 *v26; // rax
  unsigned int v28; // ebx
  __int64 Object; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *ThreadWin32Thread; // rax
  __int16 *v34; // rbx
  __int16 *v35; // rbp
  __int16 *v36; // rbx
  __int64 v37; // rcx
  __int16 **v38; // rax
  __int64 v39; // rbx
  _DWORD *v40; // [rsp+28h] [rbp-60h]
  __int16 *v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+38h] [rbp-50h]

  v4 = this;
  v5 = 0LL;
  v6 = (int *)(*(_QWORD *)a2 + 104LL);
  v7 = (_DWORD *)(*(_QWORD *)a3 + 104LL);
  v40 = v7;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000;
LABEL_4:
  v8 = *(_DWORD *)(*(_QWORD *)v4 + 80LL);
  v9 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
  v10 = 4 * (*v6 + *v7) + 16;
  if ( v10 <= *(_DWORD *)(*(_QWORD *)v4 + 24LL) - v8 )
    goto LABEL_5;
  v28 = v10 + 2 * v8;
  v42 = 0;
  if ( v28 < 0xD8 )
    v28 = 216;
  Object = AllocateObject(v28, 4u, 0);
  v41 = (__int16 *)Object;
  v30 = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    v31 = Object + 104;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    v32 = *(_DWORD *)(Object + 104);
    *(_DWORD *)(v31 + 4) = 0x80000000;
    *(_QWORD *)(v31 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v30 + 40) = v31 + (unsigned int)(4 * v32 + 16);
    *(_DWORD *)(v30 + 24) = v28;
    *(_QWORD *)(v30 + 28) = 0LL;
    *(_DWORD *)(v30 + 36) = 0;
    *(_QWORD *)(v30 + 56) = v30 + 48;
    *(_QWORD *)(v30 + 48) = v30 + 48;
  }
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  v34 = v41;
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    if ( !v41 )
      goto LABEL_71;
    PushThreadGuardedObject(v41 + 24, v41, CleanUpRegion);
  }
  if ( v34 )
  {
    memmove(v34 + 40, (const void *)(*(_QWORD *)v4 + 80LL), *(unsigned int *)(*(_QWORD *)v4 + 80LL) - 80LL);
    *((_QWORD *)v34 + 5) = (char *)v34 + *(_DWORD *)(*(_QWORD *)v4 + 40LL) - *(_DWORD *)v4;
    RGNOBJ::vSwap(v4, (struct RGNOBJ *)&v41);
    v35 = v41;
    if ( v41 )
    {
      v36 = v41 + 24;
      if ( v41 != (__int16 *)-48LL )
      {
        KeEnterCriticalRegion();
        v37 = *(_QWORD *)v36;
        v38 = (__int16 **)*((_QWORD *)v35 + 7);
        if ( *(__int16 **)(*(_QWORD *)v36 + 8LL) != v36 || *v38 != v36 )
          __fastfail(3u);
        *v38 = (__int16 *)v37;
        *(_QWORD *)(v37 + 8) = v38;
        *((_QWORD *)v35 + 7) = v35 + 24;
        *(_QWORD *)v36 = v36;
        KeLeaveCriticalRegion();
      }
      if ( v35 != (__int16 *)prgnDefault )
      {
        if ( v35[7] >= 0 )
        {
          Win32FreePool(v35);
        }
        else
        {
          v39 = qword_1C018AF80;
          if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
            Win32FreeToPagedLookasideListImpl(v39, v35);
        }
      }
    }
    v41 = 0LL;
    if ( v42 == 1 )
    {
      REGION::vDeleteREGION(0LL);
      v41 = 0LL;
    }
    v9 = *(unsigned int **)(*(_QWORD *)v4 + 40LL);
    if ( v5 )
      v5 = &v9[-*(v9 - 1) - 4];
LABEL_5:
    v11 = v7[2];
    v12 = v7 + 3;
    v13 = v7[1];
    v14 = v9 + 3;
    v15 = v6 + 3;
    v16 = a4;
    if ( v6[1] > v13 )
      v13 = v6[1];
    v17 = 1;
    if ( v6[2] < v11 )
      v11 = v6[2];
    v9[2] = v11;
    v9[1] = v13;
    v18 = *v7;
    v19 = *v6;
    *v9 = 0;
    while ( 1 )
    {
      if ( v19 )
      {
        v20 = *v15;
        if ( v18 )
        {
          if ( v20 < *v12 )
          {
            ++v15;
            --v19;
            v17 = byte_1C01692D0[v17];
          }
          else
          {
            if ( v20 <= *v12 )
            {
              ++v15;
              --v19;
              ++v12;
              --v18;
              v26 = (unsigned __int8 *)&unk_1C01692B0 + v17;
            }
            else
            {
              v20 = *v12++;
              --v18;
              v26 = &byte_1C01692C0[v17];
            }
            v17 = *v26;
          }
        }
        else
        {
          ++v15;
          --v19;
          v17 = byte_1C01692D0[v17];
        }
      }
      else
      {
        if ( !v18 )
        {
          v4 = this;
          v7 = v40;
          v9[*v9 + 3] = *v9;
          if ( v5 && *v5 == *v9 && !memcmp(v5 + 3, v9 + 3, 4LL * *v5) )
          {
            v21 = v9[2];
            v9 = v5;
            v5[2] = v21;
          }
          else if ( v5 != v9 )
          {
            *(_QWORD *)(*(_QWORD *)this + 40LL) = &v9[*v9 + 4];
            *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v9 + 16;
            ++*(_DWORD *)(*(_QWORD *)this + 84LL);
          }
          if ( v9[2] == 0x7FFFFFFF )
            return 1LL;
          if ( *v9 )
          {
            v22 = v9[3];
            if ( v22 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
              *(_DWORD *)(*(_QWORD *)this + 88LL) = v22;
            v23 = v9[1];
            if ( v23 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
              *(_DWORD *)(*(_QWORD *)this + 92LL) = v23;
            v24 = v9[*v9 + 2];
            if ( v24 > *(_DWORD *)(*(_QWORD *)this + 96LL) )
              *(_DWORD *)(*(_QWORD *)this + 96LL) = v24;
            v25 = v9[2];
            if ( v25 > *(_DWORD *)(*(_QWORD *)this + 100LL) )
              *(_DWORD *)(*(_QWORD *)this + 100LL) = v25;
          }
          if ( v11 == v6[2] )
            v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
          if ( v11 == v40[2] )
          {
            v7 = (_DWORD *)((char *)v40 + (unsigned int)(4 * *v40 + 16));
            v40 = v7;
          }
          if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
            || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
          {
            return 0LL;
          }
          v5 = v9;
          goto LABEL_4;
        }
        v20 = *v12++;
        --v18;
        v17 = byte_1C01692C0[v17];
      }
      if ( (v16 & v17) != 0 )
      {
        ++*v9;
        *v14++ = v20;
        v16 ^= 0xFu;
      }
    }
  }
LABEL_71:
  EngSetLastError(8u);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v41);
  return 0LL;
}
