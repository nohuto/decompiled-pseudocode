/*
 * XREFs of ?_Init@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXPEBG_KH@Z @ 0x180034A60
 * Callers:
 *     ??0?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800335B0 (--0-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU-$c.c)
 *     ?GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAUHSTRING__@@PEAU_GUID@@PEAW4CDPActivityType@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180048194 (-GetNotificationParameters@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEBGPEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180097394 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180097550 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

_DWORD *__fastcall std::basic_stringbuf<unsigned short>::_Init(__int64 a1, const void *a2, unsigned __int64 a3)
{
  int v3; // r14d
  _DWORD *result; // rax
  size_t v7; // rsi
  void *v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rcx

  v3 = a3;
  result = (_DWORD *)(*(_DWORD *)(a1 + 112) & 6);
  if ( (*(_BYTE *)(a1 + 112) & 6) != 6 )
  {
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL || (v7 = 2 * a3, v8 = operator new(2 * a3), (v9 = (__int64)v8) == 0) )
      std::_Xbad_alloc();
    result = memcpy_0(v8, a2, v7);
    v10 = (*(_BYTE *)(a1 + 112) & 4) == 0;
    *(_QWORD *)(a1 + 104) = v7 + v9;
    if ( v10 )
    {
      **(_QWORD **)(a1 + 24) = v9;
      **(_QWORD **)(a1 + 56) = v9;
      result = *(_DWORD **)(a1 + 80);
      *result = v3;
    }
    if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    {
      v11 = v9;
      if ( (*(_BYTE *)(a1 + 112) & 0x10) != 0 )
        v11 = v7 + v9;
      **(_QWORD **)(a1 + 32) = v9;
      **(_QWORD **)(a1 + 64) = v11;
      **(_DWORD **)(a1 + 88) = (__int64)(v9 + v7 - v11) >> 1;
      result = *(_DWORD **)(a1 + 56);
      if ( !*(_QWORD *)result )
      {
        **(_QWORD **)(a1 + 24) = v9;
        **(_QWORD **)(a1 + 56) = 0LL;
        result = *(_DWORD **)(a1 + 80);
        *result = v9 >> 1;
      }
    }
    *(_DWORD *)(a1 + 112) |= 1u;
  }
  return result;
}
