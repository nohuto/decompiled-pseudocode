/*
 * XREFs of rimObsPushInputMessage @ 0x1C01148D4
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C01143CC (rimObsDeliverInputToObserver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     rimObsCopyMessage @ 0x1C0114290 (rimObsCopyMessage.c)
 */

__int64 __fastcall rimObsPushInputMessage(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  int v4; // eax
  int v5; // esi
  void *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v2 = a1 + 34;
  if ( a1[38] < a1[40] )
  {
    if ( *(_QWORD *)(a2 + 24) <= 0xFFFFFFBFuLL )
    {
      v6 = Win32AllocPoolZInit((unsigned int)(*(_DWORD *)(a2 + 24) + 64), 1902989138LL);
      v7 = v6;
      if ( v6 )
      {
        v5 = rimObsCopyMessage(a2, 0LL, (void **)v6 + 2);
        if ( v5 < 0 )
        {
          Win32FreePool((__int64)v7);
        }
        else
        {
          v8 = (_QWORD *)*((_QWORD *)v2 + 1);
          if ( (_DWORD *)*v8 != v2 )
            __fastfail(3u);
          *v7 = v2;
          v7[1] = v8;
          *v8 = v7;
          *((_QWORD *)v2 + 1) = v7;
          ++v2[4];
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0xAu,
          (__int64)&WPP_fd349965ce453fe84f61905a3071c021_Traceguids);
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
