/*
 * XREFs of ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AEFC8
 * Callers:
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AF270 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007E80C (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x1801AE9AC (-CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA-AW4Enum@SizeLayoutMatch@12@AEBUCacheSize.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x1801B44E0 (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x1801B5BA4 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 */

void __fastcall CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
        CHwBitmapCache::CacheEntryList *this,
        __int64 a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  __int64 v4; // rbx
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r11
  int v12; // r12d
  CHwBitmapColorSource *v13; // rcx
  struct CHwBitmapColorSource *v14; // r15
  __int64 v15; // rsi
  CMILRefCountBase *v16; // rcx
  void (__fastcall **v17)(struct CHwBitmapColorSource *); // rax
  struct CHwBitmapColorSource *v18; // rcx
  CHwBitmapColorSource *v19; // rcx
  int v20; // ecx
  int v21; // edx
  struct CHwBitmapColorSource **v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r11
  CMILRefCountBase *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  _OWORD *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r13
  struct CHwBitmapColorSource *v31; // rcx
  _OWORD *v32; // [rsp+60h] [rbp+8h] BYREF
  struct CHwBitmapColorSource **v33; // [rsp+70h] [rbp+18h]

  v33 = a3;
  v4 = 0LL;
  if ( *((_DWORD *)this + 6) )
  {
    v9 = (a2 + 12) & -(__int64)(a2 != 0);
    do
    {
      v10 = CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(*(_QWORD *)this + 72 * v4, v9);
      v12 = v10;
      if ( v10 > 0 )
      {
        if ( v10 >= 2 )
          goto LABEL_10;
        if ( a4 )
        {
          v13 = *(CHwBitmapColorSource **)(v11 + 64);
          if ( v13 )
            CHwBitmapColorSource::AddToReusableRealizationSourceList(v13, a4);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) );
    if ( v12 < 2 )
      goto LABEL_31;
LABEL_10:
    v14 = *a3;
    v15 = *(_QWORD *)this;
    if ( v14 )
    {
      *(_OWORD *)(v15 + 72 * v4) = *(_OWORD *)v9;
      *(_OWORD *)(v15 + 72 * v4 + 16) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v15 + 72 * v4 + 32) = *(_OWORD *)(v9 + 32);
      *(_QWORD *)(v15 + 72 * v4 + 48) = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v15 + 72 * v4 + 56) = *(_DWORD *)(v9 + 56);
      v16 = *(CMILRefCountBase **)(v15 + 72 * v4 + 64);
      if ( v16 )
        CMILRefCountBase::Release(v16);
      *(_QWORD *)(v15 + 72 * v4 + 64) = v14;
      v17 = *(void (__fastcall ***)(struct CHwBitmapColorSource *))v14;
      v18 = v14;
      goto LABEL_18;
    }
    v19 = *(CHwBitmapColorSource **)(v15 + 72 * v4 + 64);
    if ( !v19 )
      goto LABEL_21;
    if ( v12 == 2 )
    {
      *(_OWORD *)(v15 + 72 * v4) = *(_OWORD *)v9;
      *(_OWORD *)(v15 + 72 * v4 + 16) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v15 + 72 * v4 + 32) = *(_OWORD *)(v9 + 32);
      *(_QWORD *)(v15 + 72 * v4 + 48) = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v15 + 72 * v4 + 56) = *(_DWORD *)(v9 + 56);
    }
    else if ( CHwBitmapColorSource::IsValid(v19) )
    {
      v20 = *(_DWORD *)(a2 + 64);
      v21 = *(_DWORD *)(a2 + 52);
      *(_OWORD *)(a2 + 12) = *(_OWORD *)(v15 + 72 * v4);
      *(_OWORD *)(a2 + 28) = *(_OWORD *)(v15 + 72 * v4 + 16);
      *(_OWORD *)(a2 + 44) = *(_OWORD *)(v15 + 72 * v4 + 32);
      *(_QWORD *)(a2 + 60) = *(_QWORD *)(v15 + 72 * v4 + 48);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(v15 + 72 * v4 + 56);
      v22 = v33;
      *(_DWORD *)(a2 + 52) = v21;
      *(_DWORD *)(a2 + 64) = v20;
      v18 = *(struct CHwBitmapColorSource **)(v15 + 72 * v4 + 64);
      *v22 = v18;
      v17 = *(void (__fastcall ***)(struct CHwBitmapColorSource *))v18;
LABEL_18:
      (*v17)(v18);
      goto LABEL_21;
    }
    CMILRefCountBase::Release(v19);
    *(_QWORD *)(v15 + 72 * v4 + 64) = 0LL;
LABEL_21:
    if ( v12 == 2 )
    {
      while ( 1 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)this + 6) )
          break;
        v23 = 9 * v4;
        if ( (unsigned int)CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(*(_QWORD *)this + 72 * v4, v9) == 2 )
        {
          v25 = *(CMILRefCountBase **)(v24 + 64);
          if ( v25 )
            CMILRefCountBase::Release(v25);
          v26 = (unsigned int)(*((_DWORD *)this + 6) - 1);
          if ( (_DWORD)v4 != (_DWORD)v26 )
          {
            v27 = *(_QWORD *)this;
            LODWORD(v4) = v4 - 1;
            *(_OWORD *)(v27 + 8 * v23) = *(_OWORD *)(*(_QWORD *)this + 72 * v26);
            *(_OWORD *)(v27 + 8 * v23 + 16) = *(_OWORD *)(v27 + 72 * v26 + 16);
            *(_OWORD *)(v27 + 8 * v23 + 32) = *(_OWORD *)(v27 + 72 * v26 + 32);
            *(_OWORD *)(v27 + 8 * v23 + 48) = *(_OWORD *)(v27 + 72 * v26 + 48);
            *(_QWORD *)(v27 + 8 * v23 + 64) = *(_QWORD *)(v27 + 72 * v26 + 64);
          }
          *((_DWORD *)this + 6) = v26;
        }
      }
    }
    return;
  }
LABEL_31:
  if ( (int)DynArrayImpl<1>::AddMultiple((__int64)this, 0x48u, 1, &v32) >= 0 )
  {
    v28 = v32;
    v29 = a2 + 12;
    v30 = -a2;
    *v32 = *(_OWORD *)(v29 & -(__int64)(v30 != 0));
    v28[1] = *(_OWORD *)((v29 & -(__int64)(v30 != 0)) + 0x10);
    v28[2] = *(_OWORD *)((v29 & -(__int64)(v30 != 0)) + 0x20);
    *((_QWORD *)v28 + 6) = *(_QWORD *)((v29 & -(__int64)(v30 != 0)) + 0x30);
    v31 = *a3;
    *((_DWORD *)v28 + 14) = *(_DWORD *)((v29 & -(__int64)(v30 != 0)) + 0x38);
    *((_QWORD *)v28 + 8) = v31;
    if ( v31 )
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v31)(v31);
  }
}
