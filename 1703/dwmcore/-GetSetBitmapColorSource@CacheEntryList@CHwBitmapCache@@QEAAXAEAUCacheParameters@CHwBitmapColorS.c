/*
 * XREFs of ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800B2E98
 * Callers:
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800B2D8C (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x180045184 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x1800B3084 (-CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA-AW4Enum@SizeLayoutMatch@12@AEBUCacheSize.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18019ECFC (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 */

void __fastcall CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
        CHwBitmapCache::CacheEntryList *this,
        __int64 a2,
        void (****a3)(void),
        struct CHwBitmapColorSource **a4)
{
  __int64 v4; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  int v11; // eax
  int v12; // r12d
  void (***v13)(void); // r15
  __int64 v14; // rsi
  CHwBitmapColorSource *v15; // rcx
  int v16; // ecx
  int v17; // edx
  void (****v18)(void); // rax
  void (***v19)(void); // rcx
  void (**v20)(void); // rax
  CMILRefCountBase *v21; // rcx
  _OWORD *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r13
  void (***v25)(void); // rcx
  CHwBitmapColorSource *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  CMILRefCountBase *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  _OWORD *v32; // [rsp+60h] [rbp+8h] BYREF
  void (****v33)(void); // [rsp+70h] [rbp+18h]

  v33 = a3;
  v4 = 0LL;
  if ( *((_DWORD *)this + 6) )
  {
    v9 = (a2 + 12) & -(__int64)(a2 != 0);
    do
    {
      v10 = *(_QWORD *)this + 72 * v4;
      v11 = CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(v10, v9);
      v12 = v11;
      if ( v11 > 0 )
      {
        if ( v11 >= 2 )
          goto LABEL_5;
        if ( a4 )
        {
          v26 = *(CHwBitmapColorSource **)(v10 + 64);
          if ( v26 )
            CHwBitmapColorSource::AddToReusableRealizationSourceList(v26, a4);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) );
    if ( v12 < 2 )
      goto LABEL_17;
LABEL_5:
    v13 = *a3;
    v14 = *(_QWORD *)this;
    if ( !v13 )
    {
      v15 = *(CHwBitmapColorSource **)(v14 + 72 * v4 + 64);
      if ( !v15 )
        goto LABEL_11;
      if ( v12 == 2 )
      {
        *(_OWORD *)(v14 + 72 * v4) = *(_OWORD *)v9;
        *(_OWORD *)(v14 + 72 * v4 + 16) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)(v14 + 72 * v4 + 32) = *(_OWORD *)(v9 + 32);
        *(_QWORD *)(v14 + 72 * v4 + 48) = *(_QWORD *)(v9 + 48);
        *(_DWORD *)(v14 + 72 * v4 + 56) = *(_DWORD *)(v9 + 56);
      }
      else if ( CHwBitmapColorSource::IsValid(v15) )
      {
        v16 = *(_DWORD *)(a2 + 64);
        v17 = *(_DWORD *)(a2 + 52);
        *(_OWORD *)(a2 + 12) = *(_OWORD *)(v14 + 72 * v4);
        *(_OWORD *)(a2 + 28) = *(_OWORD *)(v14 + 72 * v4 + 16);
        *(_OWORD *)(a2 + 44) = *(_OWORD *)(v14 + 72 * v4 + 32);
        *(_QWORD *)(a2 + 60) = *(_QWORD *)(v14 + 72 * v4 + 48);
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(v14 + 72 * v4 + 56);
        v18 = v33;
        *(_DWORD *)(a2 + 52) = v17;
        *(_DWORD *)(a2 + 64) = v16;
        v19 = *(void (****)(void))(v14 + 72 * v4 + 64);
        *v18 = v19;
        v20 = *v19;
LABEL_10:
        (*v20)();
        goto LABEL_11;
      }
      CMILRefCountBase::Release(v15);
      *(_QWORD *)(v14 + 72 * v4 + 64) = 0LL;
LABEL_11:
      if ( v12 == 2 )
      {
        while ( 1 )
        {
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 >= *((_DWORD *)this + 6) )
            break;
          v27 = 9 * v4;
          v28 = *(_QWORD *)this + 72 * v4;
          if ( (unsigned int)CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(v28, v9) == 2 )
          {
            v29 = *(CMILRefCountBase **)(v28 + 64);
            if ( v29 )
              CMILRefCountBase::Release(v29);
            v30 = (unsigned int)(*((_DWORD *)this + 6) - 1);
            if ( (_DWORD)v4 != (_DWORD)v30 )
            {
              v31 = *(_QWORD *)this;
              LODWORD(v4) = v4 - 1;
              *(_OWORD *)(v31 + 8 * v27) = *(_OWORD *)(*(_QWORD *)this + 72 * v30);
              *(_OWORD *)(v31 + 8 * v27 + 16) = *(_OWORD *)(v31 + 72 * v30 + 16);
              *(_OWORD *)(v31 + 8 * v27 + 32) = *(_OWORD *)(v31 + 72 * v30 + 32);
              *(_OWORD *)(v31 + 8 * v27 + 48) = *(_OWORD *)(v31 + 72 * v30 + 48);
              *(_QWORD *)(v31 + 8 * v27 + 64) = *(_QWORD *)(v31 + 72 * v30 + 64);
            }
            *((_DWORD *)this + 6) = v30;
          }
        }
      }
      return;
    }
    *(_OWORD *)(v14 + 72 * v4) = *(_OWORD *)v9;
    *(_OWORD *)(v14 + 72 * v4 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v14 + 72 * v4 + 32) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v14 + 72 * v4 + 48) = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(v14 + 72 * v4 + 56) = *(_DWORD *)(v9 + 56);
    v21 = *(CMILRefCountBase **)(v14 + 72 * v4 + 64);
    if ( v21 )
      CMILRefCountBase::Release(v21);
    *(_QWORD *)(v14 + 72 * v4 + 64) = v13;
    v20 = *v13;
    goto LABEL_10;
  }
LABEL_17:
  if ( (int)DynArrayImpl<1>::AddMultiple(this, 72LL, 1LL, &v32) >= 0 )
  {
    v22 = v32;
    v23 = a2 + 12;
    v24 = -a2;
    *v32 = *(_OWORD *)(v23 & -(__int64)(v24 != 0));
    v22[1] = *(_OWORD *)((v23 & -(__int64)(v24 != 0)) + 0x10);
    v22[2] = *(_OWORD *)((v23 & -(__int64)(v24 != 0)) + 0x20);
    *((_QWORD *)v22 + 6) = *(_QWORD *)((v23 & -(__int64)(v24 != 0)) + 0x30);
    v25 = *a3;
    *((_DWORD *)v22 + 14) = *(_DWORD *)((v23 & -(__int64)(v24 != 0)) + 0x38);
    *((_QWORD *)v22 + 8) = v25;
    if ( v25 )
      ((void (__fastcall *)(void (***)(void)))**v25)(v25);
  }
}
