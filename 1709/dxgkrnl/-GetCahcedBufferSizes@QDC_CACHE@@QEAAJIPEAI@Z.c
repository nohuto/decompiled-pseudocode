/*
 * XREFs of ?GetCahcedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00D2EF8
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00D2B10 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCahcedBufferSizes(struct DXGFASTMUTEX *const *this, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 233LL;
    return 3221225659LL;
  }
  else
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this[1]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    v7 = (char *)(this + 2);
    v8 = 0LL;
    while ( !*v7 || *((_DWORD *)v7 + 1) != (_DWORD)v4 )
    {
      v8 = (unsigned int)(v8 + 1);
      v7 += 32;
      if ( (unsigned int)v8 >= 0x12 )
      {
        v7 = 0LL;
        break;
      }
    }
    if ( v7 )
    {
      v9 = 0;
      *a3 = *((_DWORD *)v7 + 2);
    }
    else
    {
      v9 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v6) + 24) = v4;
    }
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    return v9;
  }
}
