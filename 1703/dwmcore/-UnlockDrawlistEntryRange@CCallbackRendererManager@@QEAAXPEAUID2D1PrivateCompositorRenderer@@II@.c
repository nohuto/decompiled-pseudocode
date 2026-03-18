/*
 * XREFs of ?UnlockDrawlistEntryRange@CCallbackRendererManager@@QEAAXPEAUID2D1PrivateCompositorRenderer@@II@Z @ 0x1800ABF98
 * Callers:
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008F094 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB930 (-ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z.c)
 *     ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x1801BF18C (--_GCWARPCallbackRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCallbackRendererManager::UnlockDrawlistEntryRange(
        CCallbackRendererManager *this,
        struct ID2D1PrivateCompositorRenderer *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // eax
  bool v12; // cc
  unsigned int v13; // ecx
  unsigned int v14; // eax

  if ( a4 != a3 )
  {
    if ( a3 < a4 )
    {
      v6 = 8LL * a3;
      v7 = a4 - a3;
      do
      {
        --*(_DWORD *)(*(_QWORD *)(v6 + *(_QWORD *)this) + 40LL);
        (*(void (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorRenderer *))(**(_QWORD **)(v6 + *(_QWORD *)this)
                                                                                + 8LL))(
          *(_QWORD *)(v6 + *(_QWORD *)this),
          a2);
        v6 += 8LL;
        --v7;
      }
      while ( v7 );
    }
    v8 = *((_DWORD *)this + 6);
    if ( a4 == v8 )
    {
      v9 = *((_DWORD *)this + 14);
      if ( *((_DWORD *)this + 29) > v8 )
        v8 = *((_DWORD *)this + 29);
      v10 = *((_DWORD *)this + 22);
      *((_DWORD *)this + 29) = v8;
      v11 = v9 - *((_DWORD *)this + 30);
      v12 = *((_DWORD *)this + 31) <= v11;
      *((_DWORD *)this + 30) = v9;
      if ( !v12 )
        v11 = *((_DWORD *)this + 31);
      v13 = v10 - *((_DWORD *)this + 32);
      *((_DWORD *)this + 31) = v11;
      v14 = *((_DWORD *)this + 33);
      *((_DWORD *)this + 32) = v10;
      if ( v14 > v13 )
        v13 = v14;
      *((_DWORD *)this + 6) = 0;
      *((_DWORD *)this + 33) = v13;
    }
  }
}
