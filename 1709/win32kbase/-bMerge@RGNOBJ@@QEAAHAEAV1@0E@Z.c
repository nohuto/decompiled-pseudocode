/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60
 * Callers:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003A490 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003A688 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     memcmp @ 0x1C00AA900 (memcmp.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  unsigned int *v4; // rdi
  RGNOBJ *v5; // rsi
  int *v6; // r15
  _DWORD *v7; // r14
  int v8; // r8d
  unsigned int *v9; // rbx
  unsigned int v10; // edx
  signed int v11; // r12d
  int *v12; // r13
  _DWORD *v13; // rbp
  signed int v14; // ecx
  int *v15; // r9
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // r8
  signed int v18; // eax
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  signed int v23; // ecx
  signed int v24; // ecx
  signed int v25; // edx
  signed int v26; // ecx
  unsigned __int8 *v27; // rax
  unsigned int v29; // ebx
  __int64 Object; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  int v34; // eax
  __int64 ThreadWin32Thread; // rax
  __int16 *v36; // rbp
  __int16 *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int16 **v43; // rax
  __int16 *v44; // rbp
  __int16 *v45; // rbx
  __int64 v46; // rax
  __int16 **v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // [rsp+28h] [rbp-60h]
  __int16 *v52; // [rsp+30h] [rbp-58h] BYREF
  int v53; // [rsp+38h] [rbp-50h]

  v4 = 0LL;
  v5 = this;
  v6 = (int *)(*(_QWORD *)a2 + 104LL);
  v7 = (_DWORD *)(*(_QWORD *)a3 + 104LL);
  v51 = v7;
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
  v8 = *(_DWORD *)(*(_QWORD *)v5 + 80LL);
  v9 = *(unsigned int **)(*(_QWORD *)v5 + 40LL);
  v10 = 4 * (*v6 + *v7) + 16;
  if ( v10 <= *(_DWORD *)(*(_QWORD *)v5 + 24LL) - v8 )
    goto LABEL_5;
  v29 = v10 + 2 * v8;
  v53 = 0;
  if ( v29 < 0xD8 )
    v29 = 216;
  Object = AllocateObject(v29);
  v52 = (__int16 *)Object;
  v33 = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    v31 = Object + 104;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    v34 = *(_DWORD *)(Object + 104);
    *(_DWORD *)(v31 + 4) = 0x80000000;
    *(_QWORD *)(v31 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v33 + 40) = v31 + (unsigned int)(4 * v34 + 16);
    *(_DWORD *)(v33 + 24) = v29;
    *(_QWORD *)(v33 + 28) = 0LL;
    *(_DWORD *)(v33 + 36) = 0;
    *(_QWORD *)(v33 + 56) = v33 + 48;
    *(_QWORD *)(v33 + 48) = v33 + 48;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v31, v33, v32);
  v36 = v52;
  if ( ThreadWin32Thread )
  {
    if ( !v52 )
      goto LABEL_76;
    v37 = v52 + 24;
    if ( v52 != (__int16 *)-48LL )
    {
      KeEnterCriticalRegion();
      v41 = W32GetThreadWin32Thread(KeGetCurrentThread(), v38, v39, v40);
      v36 = v52;
      *((_QWORD *)v37 + 2) = v52;
      *((_QWORD *)v37 + 3) = CleanUpRegion;
      if ( v41 )
      {
        v42 = *(_QWORD *)(v41 + 88);
        v43 = (__int16 **)(v41 + 88);
        if ( *(__int16 ***)(v42 + 8) != v43 )
          __fastfail(3u);
        *(_QWORD *)v37 = v42;
        *((_QWORD *)v37 + 1) = v43;
        *(_QWORD *)(v42 + 8) = v37;
        *v43 = v37;
      }
      else
      {
        *((_QWORD *)v37 + 1) = v37;
        *(_QWORD *)v37 = v37;
      }
      KeLeaveCriticalRegion();
    }
  }
  if ( v36 )
  {
    memmove(v36 + 40, (const void *)(*(_QWORD *)v5 + 80LL), *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
    *((_QWORD *)v36 + 5) = (char *)v36 + (int)(*(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_QWORD *)v5 - 104) + 104;
    RGNOBJ::vSwap(v5, (struct RGNOBJ *)&v52);
    v44 = v52;
    if ( v52 )
    {
      v45 = v52 + 24;
      if ( v52 != (__int16 *)-48LL )
      {
        KeEnterCriticalRegion();
        v46 = *(_QWORD *)v45;
        if ( *(__int16 **)(*(_QWORD *)v45 + 8LL) != v45 || (v47 = (__int16 **)*((_QWORD *)v44 + 7), *v47 != v45) )
          __fastfail(3u);
        *v47 = (__int16 *)v46;
        *(_QWORD *)(v46 + 8) = v47;
        *((_QWORD *)v44 + 7) = v44 + 24;
        *(_QWORD *)v45 = v45;
        KeLeaveCriticalRegion();
      }
      if ( v44 != (__int16 *)prgnDefault )
      {
        if ( v44[7] >= 0 )
        {
          Win32FreePool((__int64)v44);
        }
        else
        {
          v48 = qword_1C018FBD0;
          if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
            Win32FreeToPagedLookasideListImpl(v48, v44);
        }
      }
    }
    v52 = 0LL;
    if ( v53 == 1 )
    {
      REGION::vDeleteREGION(0LL);
      v52 = 0LL;
    }
    v9 = *(unsigned int **)(*(_QWORD *)v5 + 40LL);
    if ( v4 )
      v4 = &v9[-*(v9 - 1) - 4];
LABEL_5:
    v11 = v7[2];
    v12 = v7 + 3;
    v13 = v9 + 3;
    v14 = v7[1];
    v15 = v6 + 3;
    v16 = a4;
    v17 = 1;
    if ( v6[1] > v14 )
      v14 = v6[1];
    v18 = v6[2];
    v9[1] = v14;
    if ( v18 < v11 )
      v11 = v18;
    v9[2] = v11;
    v19 = *v7;
    v20 = *v6;
    *v9 = 0;
    while ( 1 )
    {
      if ( v20 )
      {
        v21 = *v15;
        if ( v19 )
        {
          if ( v21 < *v12 )
          {
            ++v15;
            --v20;
            v17 = byte_1C01695B8[v17];
          }
          else
          {
            if ( v21 <= *v12 )
            {
              ++v15;
              --v20;
              ++v12;
              --v19;
              v27 = (unsigned __int8 *)&unk_1C0169598 + v17;
            }
            else
            {
              v21 = *v12++;
              --v19;
              v27 = &byte_1C01695A8[v17];
            }
            v17 = *v27;
          }
        }
        else
        {
          ++v15;
          --v20;
          v17 = byte_1C01695B8[v17];
        }
      }
      else
      {
        if ( !v19 )
        {
          v5 = this;
          v7 = v51;
          v9[*v9 + 3] = *v9;
          if ( v4 && *v4 == *v9 && !memcmp(v4 + 3, v9 + 3, 4LL * *v4) )
          {
            v22 = v9[2];
            v9 = v4;
            v4[2] = v22;
          }
          else if ( v4 != v9 )
          {
            *(_QWORD *)(*(_QWORD *)this + 40LL) = &v9[*v9 + 4];
            *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v9 + 16;
            ++*(_DWORD *)(*(_QWORD *)this + 84LL);
          }
          if ( v9[2] == 0x7FFFFFFF )
            return 1LL;
          if ( *v9 )
          {
            v23 = v9[3];
            if ( v23 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
              *(_DWORD *)(*(_QWORD *)this + 88LL) = v23;
            v24 = v9[1];
            if ( v24 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
              *(_DWORD *)(*(_QWORD *)this + 92LL) = v24;
            v25 = v9[*v9 + 2];
            if ( v25 > *(_DWORD *)(*(_QWORD *)this + 96LL) )
              *(_DWORD *)(*(_QWORD *)this + 96LL) = v25;
            v26 = v9[2];
            if ( v26 > *(_DWORD *)(*(_QWORD *)this + 100LL) )
              *(_DWORD *)(*(_QWORD *)this + 100LL) = v26;
          }
          if ( v11 == v6[2] )
            v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
          if ( v11 == v51[2] )
          {
            v7 = (_DWORD *)((char *)v51 + (unsigned int)(4 * *v51 + 16));
            v51 = v7;
          }
          if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
            || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
          {
            return 0LL;
          }
          v4 = v9;
          goto LABEL_4;
        }
        v21 = *v12++;
        --v19;
        v17 = byte_1C01695A8[v17];
      }
      if ( (v16 & v17) != 0 )
      {
        ++*v9;
        *v13++ = v21;
        v16 ^= 0xFu;
      }
    }
  }
LABEL_76:
  EngSetLastError(8u);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v52, v49, v50);
  return 0LL;
}
