/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003C850
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003AA20 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003D1DC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C003E380 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012D78 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0037C7C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C003C340 (AllocateObject.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003C498 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003CC90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003D670 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003D750 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003D7B0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // rdi
  struct RGNOBJ *v6; // r11
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 Object; // rax
  _QWORD *v16; // rax
  _QWORD *ThreadWin32Thread; // rax
  __int16 *v18; // r14
  __int16 *v19; // rdi
  __int64 v20; // rcx
  __int16 **v21; // rax
  __int64 v22; // rdi
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i v27; // xmm2
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // xmm1_8
  unsigned __int64 v30; // rax
  LONG v31; // r8d
  unsigned __int64 v32; // xmm2_8
  LONG v33; // edx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r11
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  __int16 *v40; // [rsp+20h] [rbp-28h] BYREF
  int v41; // [rsp+28h] [rbp-20h]
  struct _RECTL v42; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v8 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 160 )
    {
      v9 = *(_DWORD **)a3;
      if ( v8[22] <= *(_DWORD *)(*(_QWORD *)a3 + 88LL) && v8[24] >= v9[24] && v8[23] <= v9[23] && v8[25] >= v9[25] )
      {
        v10 = *(_DWORD *)(v4 + 24);
        if ( a4 != 1 )
          v5 = v6;
        v11 = *(_QWORD *)v5;
        v12 = 1;
        v13 = *(_DWORD *)(*(_QWORD *)v5 + 80LL);
        if ( (v10 >= v13 || *(_DWORD *)(v11 + 24) <= 0xD8u) && (v10 <= 0xD8 || *(_DWORD *)(v11 + 24) > 0xD8u) )
        {
          RGNOBJ::vCopy(this, v5);
LABEL_32:
          if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
          return v12;
        }
        v14 = 216;
        v41 = 0;
        if ( v13 > 0xD8 )
          v14 = v13;
        Object = AllocateObject(v14, 4u, 0);
        v40 = (__int16 *)Object;
        if ( Object )
        {
          *(_DWORD *)(Object + 80) = 120;
          *(_QWORD *)(Object + 84) = 1LL;
          *(_QWORD *)(Object + 92) = 0LL;
          *(_DWORD *)(Object + 100) = 0;
          *(_DWORD *)(Object + 104) = 0;
          *(_DWORD *)(Object + 108) = 0x80000000;
          *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(Object + 40) = Object + 120;
          *(_DWORD *)(Object + 24) = v14;
          *(_QWORD *)(Object + 28) = 0LL;
          *(_DWORD *)(Object + 36) = 0;
          v16 = (_QWORD *)(Object + 48);
          v16[1] = v16;
          *v16 = v16;
        }
        ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread && *ThreadWin32Thread )
        {
          if ( !v40 )
            goto LABEL_70;
          PushThreadGuardedObject(v40 + 24, v40, CleanUpRegion);
        }
        if ( v40 )
        {
          memmove(v40 + 40, (const void *)(*(_QWORD *)v5 + 80LL), *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
          *((_QWORD *)v40 + 5) = (char *)v40 + *(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_DWORD *)v5;
          RGNOBJ::vSwap(this, (struct RGNOBJ *)&v40);
          v18 = v40;
          if ( v40 )
          {
            v19 = v40 + 24;
            if ( v40 != (__int16 *)-48LL )
            {
              KeEnterCriticalRegion();
              v20 = *(_QWORD *)v19;
              v21 = (__int16 **)*((_QWORD *)v18 + 7);
              if ( *(__int16 **)(*(_QWORD *)v19 + 8LL) != v19 || *v21 != v19 )
                __fastfail(3u);
              *v21 = (__int16 *)v20;
              *(_QWORD *)(v20 + 8) = v21;
              *((_QWORD *)v18 + 7) = v18 + 24;
              *(_QWORD *)v19 = v19;
              KeLeaveCriticalRegion();
            }
            if ( v18 != (__int16 *)prgnDefault )
            {
              if ( v18[7] >= 0 )
              {
                Win32FreePool(v18);
              }
              else
              {
                v22 = qword_1C018AF80;
                if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                  Win32FreeToPagedLookasideListImpl(v22, v18);
              }
            }
          }
          if ( v41 == 1 )
            REGION::vDeleteREGION(0LL);
          goto LABEL_32;
        }
LABEL_70:
        RGNMEMOBJTMP::~RGNMEMOBJTMP(&v40);
        v37 = *(_QWORD *)this;
        v38 = *(_QWORD *)this + 104LL;
        *(_DWORD *)(v37 + 80) = 120;
        *(_QWORD *)(v37 + 84) = 1LL;
        *(_QWORD *)(v37 + 92) = 0LL;
        result = 0LL;
        *(_DWORD *)(v37 + 100) = 0;
        *(_DWORD *)v38 = 0;
        *(_DWORD *)(v38 + 4) = 0x80000000;
        *(_QWORD *)(v38 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v37 + 40) = v38 + 16;
        return result;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160 && RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 != 1 )
        v6 = v5;
      if ( (unsigned int)RGNOBJ::bCopy(this, v6) )
        return RGNOBJ::iComplexity(this);
      goto LABEL_72;
    }
  }
  if ( a4 == 1
    && (v25 = *(_QWORD *)v6, *(_DWORD *)(*(_QWORD *)v6 + 80LL) == 160)
    && (v26 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) == 160) )
  {
    v27 = *(__m128i *)(v25 + 88);
    v28 = *(_QWORD *)(v26 + 88);
    v29 = _mm_srli_si128(*(__m128i *)(v26 + 88), 8).m128i_u64[0];
    v30 = *(_QWORD *)(v25 + 88);
    v31 = v28;
    v32 = _mm_srli_si128(v27, 8).m128i_u64[0];
    if ( (int)v30 > (int)v28 )
      v31 = v30;
    v33 = v29;
    v42.left = v31;
    if ( (int)v32 < (int)v29 )
      v33 = v32;
    v34 = HIDWORD(v30);
    v35 = HIDWORD(v28);
    v42.right = v33;
    if ( (int)v34 > (int)v35 )
      LODWORD(v35) = v34;
    v36 = HIDWORD(v29);
    v42.top = v35;
    if ( SHIDWORD(v32) < SHIDWORD(v29) )
      LODWORD(v36) = HIDWORD(v32);
    v42.bottom = v36;
    if ( (int)v35 >= (int)v36 || v31 >= v33 )
    {
      *(_DWORD *)(v4 + 80) = 120;
      *(_QWORD *)(v4 + 84) = 1LL;
      *(_QWORD *)(v4 + 92) = 0LL;
      *(_DWORD *)(v4 + 100) = 0;
      *(_DWORD *)(v4 + 104) = 0;
      *(_DWORD *)(v4 + 108) = 0x80000000;
      *(_QWORD *)(v4 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v4 + 40) = v4 + 120;
    }
    else
    {
      RGNOBJ::vSet(this, &v42);
    }
    return 2LL;
  }
  else
  {
    if ( !(unsigned int)RGNOBJ::bMerge(this, v6, v5, *((_BYTE *)&gafjRgnOp + a4)) )
    {
LABEL_72:
      v39 = *(_QWORD *)this;
      *(_DWORD *)(v39 + 80) = 120;
      *(_QWORD *)(v39 + 84) = 1LL;
      *(_QWORD *)(v39 + 92) = 0LL;
      *(_DWORD *)(v39 + 100) = 0;
      result = 0LL;
      *(_DWORD *)(v39 + 104) = 0;
      *(_DWORD *)(v39 + 108) = 0x80000000;
      *(_QWORD *)(v39 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v39 + 40) = v39 + 120;
      return result;
    }
    if ( *(_DWORD *)(*(_QWORD *)this + 84LL) == 1 )
    {
      return 1;
    }
    else if ( *(_DWORD *)(*(_QWORD *)this + 80LL) <= 0xA0u )
    {
      return 2;
    }
    else
    {
      return 3;
    }
  }
}
