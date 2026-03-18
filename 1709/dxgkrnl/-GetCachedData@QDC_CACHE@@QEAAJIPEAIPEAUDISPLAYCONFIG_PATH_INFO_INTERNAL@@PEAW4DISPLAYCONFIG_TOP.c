/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00D2DA8
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00D2A70 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edi
  struct DXGPROCESS *Current; // rax
  int v19; // ecx
  unsigned int v20; // ebx
  _QWORD *v22; // rax
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 267LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this[1]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v12 = (char *)(this + 2);
    v13 = *((unsigned int *)this + 148);
    *a6 = v13;
    v14 = 0;
    while ( !*v12 || *((_DWORD *)v12 + 1) != (_DWORD)v8 )
    {
      ++v14;
      v12 += 32;
      if ( v14 >= 0x12 )
      {
        v12 = 0LL;
        break;
      }
    }
    if ( v12 )
    {
      v15 = *((unsigned int *)v12 + 2);
      if ( (unsigned int)v15 > *a3 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v10, v11);
        v22[3] = v8;
        v22[4] = *((unsigned int *)v12 + 2);
        v22[5] = *a3;
        WdLogEvent5_WdWarning(v22);
        v20 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)v12 + 2), 192 * v15);
        *a3 = *((_DWORD *)v12 + 2);
        if ( a5 )
          *(_DWORD *)a5 = *((_DWORD *)v12 + 6);
        v17 = *((_DWORD *)this + 148);
        Current = DXGPROCESS::GetCurrent((__int64)a5, v16);
        if ( v17 != *((_DWORD *)Current + 134) )
        {
          *((_DWORD *)Current + 133) = 0;
          *((_DWORD *)Current + 134) = v17;
        }
        v19 = *((_DWORD *)Current + 133);
        *((_DWORD *)Current + 133) = v19 + 1;
        if ( (v19 & (v19 + 1)) == 0 && v19 != 1 )
          DxgkLogCodePointPacket(0x4Du, v19 + 1, *((_DWORD *)v12 + 1), *((_DWORD *)v12 + 7), 0LL);
        v20 = 0;
      }
    }
    else
    {
      v20 = -1073741801;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v10) + 24) = v8;
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
    return v20;
  }
}
