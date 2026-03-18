/*
 * XREFs of ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1C00F11F0
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00F0CD0 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCahcedBufferSizes(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 239LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this[1], (__int64)a3, (__int64)a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    v11 = (char *)(this + 2);
    v12 = 0;
    while ( !*v11 || *((_DWORD *)v11 + 1) != (_DWORD)v6 )
    {
      ++v12;
      v11 += 48;
      if ( v12 >= 0x12 )
      {
        v11 = 0LL;
        break;
      }
    }
    if ( v11 )
    {
      v13 = 0;
      *a3 = *((_DWORD *)v11 + 2);
      *a4 = *((_DWORD *)v11 + 6);
    }
    else
    {
      v13 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v8, v9, v10) + 24) = v6;
    }
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v8, v9, v10);
    return v13;
  }
}
