/*
 * XREFs of std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800279DC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x1800DD294 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z @ 0x1800E8E48 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEAU_FILETIME@@@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800E958C (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1800EA15C (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180115CE0 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1801A4510 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z @ 0x1801BD8D0 (-Notify@TrayNotifyCallback@SystemTray@@UEAAJKPEAUtagNOTIFYITEM@@@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027850 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 */

unsigned __int64 *__fastcall std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _WORD *v11; // rax
  _WORD *v12; // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 *result; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v8 = a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = std::_Allocate(v4 + 1, 2uLL);
  a1[3] = v4;
  a1[2] = a2;
  v12 = v11;
  memcpy_0(v11, a4, 2 * a2);
  v12[a2] = 0;
  if ( v8 >= 8 )
  {
    v13 = *a1;
    if ( v8 + 1 <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( 2 * (v8 + 1) < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v13);
        goto LABEL_14;
      }
      if ( (v13 & 0x1F) == 0 )
      {
        v14 = *(_QWORD *)(v13 - 8);
        if ( v14 < v13 )
        {
          v13 = v13 - v14 - 8;
          if ( v13 <= 0x1F )
          {
            v13 = v14;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v13);
    __debugbreak();
  }
LABEL_14:
  result = a1;
  *a1 = (unsigned __int64)v12;
  return result;
}
