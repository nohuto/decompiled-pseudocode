/*
 * XREFs of ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18000BFD0
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K@Z @ 0x18007B0C8 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

// Hidden C++ exception states: #try_helpers=1
void __fastcall std::wstring::_Copy(const void **Src, unsigned __int64 a2)
{
  SIZE_T v2; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  HANDLE ProcessHeap; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  size_t v11; // r8
  unsigned __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  v4 = (unsigned __int64)Src[3];
  v5 = a2 | 7;
  if ( (a2 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v5 = a2;
  }
  else
  {
    v6 = v4 >> 1;
    if ( v4 >> 1 > v5 / 3 )
    {
      v5 = v6 + v4;
      if ( v4 > 0x7FFFFFFFFFFFFFFELL - v6 )
        v5 = 0x7FFFFFFFFFFFFFFELL;
    }
  }
  v7 = v5 + 1;
  if ( v5 == -1LL )
  {
    v10 = 0LL;
  }
  else
  {
    if ( v7 > 0x7FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
    }
    else
    {
      v2 = 2 * v7;
      if ( 2 * v7 < 0x1000 )
      {
        ProcessHeap = GetProcessHeap();
        v10 = HeapAlloc(ProcessHeap, 0, v2);
        if ( v10 )
          goto LABEL_8;
        _o__invalid_parameter_noinfo_noreturn(v9);
        __debugbreak();
LABEL_13:
        JUMPOUT(0x18000C0C2LL);
      }
    }
    v12 = v2 + 39;
    if ( v2 + 39 < v2 )
      std::_Xbad_alloc();
    v13 = operator new(v12);
    if ( !v13 )
    {
      _o__invalid_parameter_noinfo_noreturn(v14);
      goto LABEL_13;
    }
    v10 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v10 - 1) = v13;
  }
LABEL_8:
  v11 = 2LL * (_QWORD)Src[2] + 2;
  if ( (unsigned __int64)Src[3] >= 8 )
  {
    memcpy_0(v10, *Src, v11);
    std::_Deallocate((void *)*Src, v4 + 1, 2uLL);
  }
  else
  {
    memcpy_0(v10, Src, v11);
  }
  *Src = v10;
  Src[3] = (const void *)v5;
}
