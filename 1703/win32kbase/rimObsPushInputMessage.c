/*
 * XREFs of rimObsPushInputMessage @ 0x1C0115E08
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C0115900 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimObsCopyMessage @ 0x1C01157C0 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  int v4; // eax
  int v5; // esi
  void *v6; // rax
  int v7; // edx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax

  v2 = a1 + 34;
  if ( a1[38] < a1[40] )
  {
    if ( *(_QWORD *)(a2 + 24) <= 0xFFFFFFBFuLL )
    {
      v6 = Win32AllocPoolZInit((unsigned int)(*(_DWORD *)(a2 + 24) + 64), 1902989138LL);
      v8 = v6;
      if ( v6 )
      {
        v5 = rimObsCopyMessage(a2, 0LL, (void **)v6 + 2);
        if ( v5 < 0 )
        {
          Win32FreePool((__int64)v8);
        }
        else
        {
          v9 = (_QWORD *)*((_QWORD *)v2 + 1);
          if ( (_DWORD *)*v9 != v2 )
            __fastfail(3u);
          *v8 = v2;
          v8[1] = v9;
          *v9 = v8;
          *((_QWORD *)v2 + 1) = v8;
          ++v2[4];
        }
      }
      else
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          18,
          10,
          (__int64)&WPP_c3e998bf1f303cec21152f5fc17d2fdb_Traceguids);
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    v4 = a1[39];
    if ( v4 != -1 )
      a1[39] = v4 + 1;
    return (unsigned int)-1073741756;
  }
  return (unsigned int)v5;
}
