/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00F1064
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00F0C20 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO *a4,
        unsigned int *a5,
        struct DISPLAYCONFIG_MODE_INFO *a6,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7,
        unsigned int *a8)
{
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  unsigned int v25; // ebx
  _QWORD *v27; // rax
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF

  v10 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 276LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, this[1], (__int64)a3, (__int64)a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    v15 = (char *)(this + 2);
    v16 = *((unsigned int *)this + 220);
    *a8 = v16;
    v17 = 0;
    while ( !*v15 || *((_DWORD *)v15 + 1) != (_DWORD)v10 )
    {
      ++v17;
      v15 += 48;
      if ( v17 >= 0x12 )
      {
        v15 = 0LL;
        break;
      }
    }
    if ( v15 )
    {
      v18 = *((unsigned int *)v15 + 2);
      if ( (unsigned int)v18 > *a3 || *((_DWORD *)v15 + 6) > *a5 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v12, v13, v14);
        v27[3] = v10;
        v27[4] = *((unsigned int *)v15 + 2);
        v27[5] = *a3;
        v27[6] = *((unsigned int *)v15 + 6);
        v27[7] = *a5;
        WdLogEvent5_WdWarning(v27);
        v25 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)v15 + 2), 72 * v18);
        memmove(a6, *((const void **)v15 + 4), (unsigned __int64)*((unsigned int *)v15 + 6) << 6);
        *a3 = *((_DWORD *)v15 + 2);
        *a5 = *((_DWORD *)v15 + 6);
        if ( a7 )
          *(_DWORD *)a7 = *((_DWORD *)v15 + 10);
        v19 = *((_DWORD *)this + 220);
        Current = DXGPROCESS::GetCurrent((__int64)a7);
        if ( v19 != *((_DWORD *)Current + 122) )
        {
          *((_DWORD *)Current + 121) = 0;
          *((_DWORD *)Current + 122) = v19;
        }
        v23 = *((_DWORD *)Current + 121);
        v24 = (unsigned int)(v23 + 1);
        *((_DWORD *)Current + 121) = v24;
        if ( (v23 & (unsigned int)v24) == 0 && v23 != 1 )
          DxgkLogCodePointPacket(0x4Du, v24, *((_DWORD *)v15 + 1), *((_DWORD *)v15 + 11), 0LL);
        v25 = 0;
      }
    }
    else
    {
      v25 = -1073741801;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v12, v13, v14) + 24) = v10;
    }
    if ( v28[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28, v24, v21, v22);
    return v25;
  }
}
