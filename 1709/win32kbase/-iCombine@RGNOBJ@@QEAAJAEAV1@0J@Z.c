/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0043370 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00461E0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0053630 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003AC98 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0045418 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0045C60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0046620 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0046700 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0046760 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C0047B40 (AllocateObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0054DEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
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
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 Object; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int16 *v22; // r14
  __int16 *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rcx
  __int16 **v29; // rax
  __int16 *v30; // r14
  __int16 *v31; // rdi
  __int64 v32; // rax
  __int16 **v33; // rcx
  __int64 v34; // rdi
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __m128i v39; // xmm2
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // xmm1_8
  unsigned __int64 v42; // rax
  LONG v43; // r8d
  unsigned __int64 v44; // xmm2_8
  LONG v45; // edx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r11
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // r8
  __int16 *v52; // [rsp+20h] [rbp-38h] BYREF
  int v53; // [rsp+28h] [rbp-30h]
  struct _RECTL v54; // [rsp+30h] [rbp-28h] BYREF

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
LABEL_35:
          if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
          return v12;
        }
        v14 = 216;
        v53 = 0;
        if ( v13 > 0xD8 )
          v14 = v13;
        Object = AllocateObject(v14);
        v52 = (__int16 *)Object;
        if ( Object )
        {
          *(_DWORD *)(Object + 80) = 120;
          v16 = Object + 104;
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
          v19 = (_QWORD *)(Object + 48);
          v19[1] = v19;
          *v19 = v19;
        }
        v22 = v52;
        if ( W32GetThreadWin32Thread(KeGetCurrentThread(), v16, v17, v18) )
        {
          if ( !v52 )
            goto LABEL_75;
          v23 = v52 + 24;
          if ( v52 != (__int16 *)-48LL )
          {
            KeEnterCriticalRegion();
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v24, v25, v26);
            v22 = v52;
            *((_QWORD *)v52 + 9) = CleanUpRegion;
            *((_QWORD *)v23 + 2) = v22;
            if ( ThreadWin32Thread )
            {
              v28 = *(_QWORD *)(ThreadWin32Thread + 88);
              v29 = (__int16 **)(ThreadWin32Thread + 88);
              if ( *(__int16 ***)(v28 + 8) != v29 )
                __fastfail(3u);
              *(_QWORD *)v23 = v28;
              *((_QWORD *)v23 + 1) = v29;
              *(_QWORD *)(v28 + 8) = v23;
              *v29 = v23;
            }
            else
            {
              *((_QWORD *)v23 + 1) = v23;
              *(_QWORD *)v23 = v23;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( v22 )
        {
          memmove(v22 + 40, (const void *)(*(_QWORD *)v5 + 80LL), *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
          *((_QWORD *)v22 + 5) = (char *)v22 + (int)(*(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_QWORD *)v5 - 104) + 104;
          RGNOBJ::vSwap(this, (struct RGNOBJ *)&v52);
          v30 = v52;
          if ( v52 )
          {
            v31 = v52 + 24;
            if ( v52 != (__int16 *)-48LL )
            {
              KeEnterCriticalRegion();
              v32 = *(_QWORD *)v31;
              if ( *(__int16 **)(*(_QWORD *)v31 + 8LL) != v31 || (v33 = (__int16 **)*((_QWORD *)v30 + 7), *v33 != v31) )
                __fastfail(3u);
              *v33 = (__int16 *)v32;
              *(_QWORD *)(v32 + 8) = v33;
              *((_QWORD *)v30 + 7) = v30 + 24;
              *(_QWORD *)v31 = v31;
              KeLeaveCriticalRegion();
            }
            if ( v30 != (__int16 *)prgnDefault )
            {
              if ( v30[7] >= 0 )
              {
                Win32FreePool((__int64)v30);
              }
              else
              {
                v34 = qword_1C018FBD0;
                if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
                  Win32FreeToPagedLookasideListImpl(v34, v30);
              }
            }
          }
          if ( v53 == 1 )
            REGION::vDeleteREGION(0LL);
          goto LABEL_35;
        }
LABEL_75:
        RGNMEMOBJTMP::~RGNMEMOBJTMP(&v52, v20, v21);
        v49 = *(_QWORD *)this;
        v50 = *(_QWORD *)this + 104LL;
        *(_DWORD *)(v49 + 80) = 120;
        *(_QWORD *)(v49 + 84) = 1LL;
        *(_QWORD *)(v49 + 92) = 0LL;
        result = 0LL;
        *(_DWORD *)(v49 + 100) = 0;
        *(_DWORD *)v50 = 0;
        *(_DWORD *)(v50 + 4) = 0x80000000;
        *(_QWORD *)(v50 + 8) = 0x7FFFFFFFLL;
        *(_QWORD *)(v49 + 40) = v50 + 16;
        return result;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160 && RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 != 1 )
        v6 = v5;
      if ( (unsigned int)RGNOBJ::bCopy(this, v6) )
        return RGNOBJ::iComplexity(this);
      goto LABEL_77;
    }
  }
  if ( a4 == 1
    && (v37 = *(_QWORD *)v6, *(_DWORD *)(*(_QWORD *)v6 + 80LL) == 160)
    && (v38 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) == 160) )
  {
    v39 = *(__m128i *)(v37 + 88);
    v40 = *(_QWORD *)(v38 + 88);
    v41 = _mm_srli_si128(*(__m128i *)(v38 + 88), 8).m128i_u64[0];
    v42 = *(_QWORD *)(v37 + 88);
    v43 = v40;
    v44 = _mm_srli_si128(v39, 8).m128i_u64[0];
    if ( (int)v42 > (int)v40 )
      v43 = v42;
    v45 = v41;
    v54.left = v43;
    if ( (int)v44 < (int)v41 )
      v45 = v44;
    v46 = HIDWORD(v42);
    v47 = HIDWORD(v40);
    v54.right = v45;
    if ( (int)v46 > (int)v47 )
      LODWORD(v47) = v46;
    v48 = HIDWORD(v41);
    v54.top = v47;
    if ( SHIDWORD(v44) < SHIDWORD(v41) )
      LODWORD(v48) = HIDWORD(v44);
    v54.bottom = v48;
    if ( (int)v47 >= (int)v48 || v43 >= v45 )
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
      RGNOBJ::vSet(this, &v54);
    }
    return 2LL;
  }
  else
  {
    if ( !(unsigned int)RGNOBJ::bMerge(this, v6, v5, *((_BYTE *)&gafjRgnOp + a4)) )
    {
LABEL_77:
      v51 = *(_QWORD *)this;
      *(_DWORD *)(v51 + 80) = 120;
      *(_QWORD *)(v51 + 84) = 1LL;
      *(_QWORD *)(v51 + 92) = 0LL;
      *(_DWORD *)(v51 + 100) = 0;
      result = 0LL;
      *(_DWORD *)(v51 + 104) = 0;
      *(_DWORD *)(v51 + 108) = 0x80000000;
      *(_QWORD *)(v51 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v51 + 40) = v51 + 120;
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
