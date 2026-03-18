/*
 * XREFs of ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C01954C4
 * Callers:
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C0195444 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00CD0E4 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 */

void __fastcall DXGGLOBAL::EnableClockCalibration(DXGGLOBAL *this, char a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  _BYTE v13[16]; // [rsp+20h] [rbp-38h] BYREF
  char v14[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]

  v5 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v9 = *v5;
  while ( v9 != v5 && v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    if ( v10[286] )
    {
      _m_prefetchw(v10 + 3);
      v11 = v10[3];
      while ( v11 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          LOBYTE(v11) = 1;
          break;
        }
      }
      if ( (_BYTE)v11 )
      {
        v15 = v10;
        v16 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
        if ( *((_DWORD *)v10 + 44) == 1 )
          ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)v10[286], a2);
        if ( v16 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
      }
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v6, v7, v8);
}
